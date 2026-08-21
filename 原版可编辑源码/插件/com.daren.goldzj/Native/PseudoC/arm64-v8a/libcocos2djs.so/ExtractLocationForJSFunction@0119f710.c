
/* v8::internal::V8HeapExplorer::ExtractLocationForJSFunction(v8::internal::HeapEntry*,
   v8::internal::JSFunction) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractLocationForJSFunction
          (V8HeapExplorer *this,uint *param_1,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_58;
  ulong local_50;
  uint local_44;
  uint local_28;
  uint uStack_24;
  
  local_58 = param_3 & 0xffffffff00000000;
  uVar6 = local_58 | *(uint *)((local_58 | *(uint *)(param_3 + 0xb)) + 0xf);
  if (*(short *)((local_58 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
    uVar6 = local_58 | *(uint *)(uVar6 + 0xb);
  }
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x65) {
    local_50 = local_58 | *(uint *)((local_58 | *(uint *)(param_3 + 0xb)) + 0xf);
    if (*(short *)((local_58 | 7) + (ulong)*(uint *)(local_50 - 1)) == 0x5b) {
      local_50 = local_58 | *(uint *)(local_50 + 0xb);
    }
    uVar1 = *(int *)(local_50 + 0x1f) >> 1;
    local_58 = local_58 | *(uint *)(param_3 + 0xb);
    iVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_58);
    uVar4 = Script::GetLineNumber((Script *)&local_50,iVar3);
    local_28 = Script::GetColumnNumber((Script *)&local_50,iVar3);
    lVar5 = *(long *)(this + 0x10);
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    local_44 = *param_1 >> 4;
    puVar2 = *(uint **)(lVar5 + 0x178);
    if (puVar2 < *(uint **)(lVar5 + 0x180)) {
      *puVar2 = local_44;
      puVar2[1] = uVar1;
      puVar2[2] = uVar4;
      puVar2[3] = local_28;
      *(long *)(lVar5 + 0x178) = *(long *)(lVar5 + 0x178) + 0x10;
    }
    else {
      uStack_24 = uVar4;
      std::__ndk1::
      vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>::
      __emplace_back_slow_path<int,int&,int&,int&>
                ((vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>
                  *)(lVar5 + 0x170),(int *)&local_44,(int *)&local_58,(int *)&uStack_24,
                 (int *)&local_28);
    }
  }
  return;
}

