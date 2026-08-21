
/* v8::internal::JavaScriptFrame::GetFunctions(std::__ndk1::vector<v8::internal::SharedFunctionInfo,
   std::__ndk1::allocator<v8::internal::SharedFunctionInfo> >*) const */

void __thiscall v8::internal::JavaScriptFrame::GetFunctions(JavaScriptFrame *this,vector *param_1)

{
  ulong uVar1;
  ulong local_8;
  
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  local_8 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
  if (*(ulong **)(param_1 + 8) < *(ulong **)(param_1 + 0x10)) {
    **(ulong **)(param_1 + 8) = local_8;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  else {
    std::__ndk1::
    vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
    ::__push_back_slow_path<v8::internal::SharedFunctionInfo>
              ((vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
                *)param_1,(SharedFunctionInfo *)&local_8);
  }
  return;
}

