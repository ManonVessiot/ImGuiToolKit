################################################################################
#                                   MAKEFILE                                   #
################################################################################

INC = -I /usr/include/

IMGUI_TOOLKIT = ImGuiManager.o 

all: $(IMGUI_TOOLKIT)

ImGuiManager.o: ImGuiManager.cpp ImGuiManager.h
	$(CXX) -c ImGuiManager.cpp $(INC)

clean :
	rm -f *.o