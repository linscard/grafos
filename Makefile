# Makefile
# Rule to organize files before compilation
organize:
	@echo "Organizing project files..."
	@mkdir -p src include
	@find . -maxdepth 1 -type f -name '*.cpp' -exec mv {} src \;
	@find . -maxdepth 1 -type f -name '*.h' -exec mv {} include \;
	@echo "Files organized successfully."

unorganize:
	@echo "Unorganizing project files..."
	@mv src/*.cpp . || true
	@mv include/*.h . || true
	@rmdir src include 2>/dev/null || true
	@echo "Files unorganized successfully."


# Definindo as pastas
SRCDIR   := src
INCDIR   := include
BINDIR   := bin
OBJDIR   := obj

# Nome do executável
TARGET:= $(BINDIR)/tp2.out

s:
	@sleep 5
	@make t

# Regra padrão para construir o executável
all: organize s 
t: $(TARGET)


# Obtendo a lista de arquivos .cpp no diretório src
SOURCES  := $(wildcard $(SRCDIR)/*.cpp)

# Convertendo a lista de fontes para a lista de objetos no diretório obj
OBJECTS  := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Compilador
CC       := g++
CFLAGS   := -std=c++11 -Wall -I$(INCDIR)


# Regra para construir o executável
$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $^ -o $@

# Regra para construir os objetos
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean: 
	@ make unorganize
	rm -rf $(BINDIR) $(OBJDIR)

# Fazer a limpeza e reconstruir
rebuild: clean all

# Não tratar os alvos como arquivos
.PHONY: all clean rebuild organize sllep s t unorganize
