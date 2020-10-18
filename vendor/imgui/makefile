
################################################################################
#                                   MAKEFILE                                   #
################################################################################

all: imgui.o imgui_impl_opengl3.o imgui_impl_glfw.o imgui_widgets.o imgui_draw.o imgui_demo.o

imgui.o: imgui.cpp imgui.h
	$(CXX) -c imgui.cpp 

imgui_impl_opengl3.o: imgui_impl_opengl3.cpp imgui_impl_opengl3.h
	$(CXX) -c imgui_impl_opengl3.cpp 

imgui_impl_glfw.o: imgui_impl_glfw.cpp imgui_impl_glfw.h
	$(CXX) -c imgui_impl_glfw.cpp 

imgui_widgets.o: imgui_widgets.cpp
	$(CXX) -c imgui_widgets.cpp 

imgui_draw.o: imgui_draw.cpp
	$(CXX) -c imgui_draw.cpp 

imgui_demo.o: imgui_demo.cpp
	$(CXX) -c imgui_demo.cpp 

clean :
	rm -f *.o