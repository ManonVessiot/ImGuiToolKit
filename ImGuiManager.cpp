#include "ImGuiManager.h"

#include "vendor/imgui/imgui.h"
#include "vendor/imgui/imgui_impl_glfw.h"
#include "vendor/imgui/imgui_impl_opengl3.h"

#include <string>

namespace ImGuiToolKit
{
    ImGuiManager* ImGuiManager::m_Instance = nullptr;

    void ImGuiManager::Init_imgui(GLFWwindow * window) const{
        ImGui::CreateContext();
        ImGui::StyleColorsDark();
        ImGui_ImplGlfw_InitForOpenGL(window, true);
        ImGui_ImplOpenGL3_Init("#version 130");
    }

    void ImGuiManager::InitFrame_imgui() const{        
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    }

    void ImGuiManager::Render_imgui() const{
        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    }

    void ImGuiManager::Destroy_imgui() const{
        ImGui_ImplOpenGL3_Shutdown();
        ImGui_ImplGlfw_Shutdown();
        // ImGui::DestroyContext(); // create a file
    }

    bool ImGuiManager::StartWindow(const char* windowsName) const{
        return ImGui::Begin(windowsName);
    }
    void ImGuiManager::EndWindow() const{
        ImGui::End();
    }
    bool ImGuiManager::CreateButton(const char* buttonName) const{
        return ImGui::Button(buttonName);
    }
    
} // namespace ImGuiToolKit