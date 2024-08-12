#pragma once

#include <d3d9.h>

namespace gui
{
	// constant window size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;

	// winapi window vars
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	// points for window movement
	inline POINTS position = { };

	// directX state vars
	inline PDIRECT3D9 d3d = nullptr;
	inline PDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	// handle windwo creation and destruction
	void CreateHWindow(
		const wchar_t* windowName,
		const wchar_t* className) noexcept;
	void DestroyHWindow() noexcept;

	// handle device creation and destruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// handle ImGui creation and destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}