
/* v8::internal::LocalEmbedderHeapTracer::ProcessingScope::TracePossibleWrapper(v8::internal::JSObject)
    */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::ProcessingScope::TracePossibleWrapper
          (ProcessingScope *this,ulong param_2)

{
  ulong *puVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_50;
  ulong uStack_48;
  
  uVar9 = param_2 & 0xffffffff00000000;
  uVar10 = uVar9 | *(uint *)(param_2 - 1);
  bVar2 = *(byte *)(uVar10 + 3);
  if (bVar2 != 0) {
    if (*(short *)(uVar10 + 7) == 0x421) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = JSObject::GetHeaderSize(*(short *)(uVar10 + 7),*(char *)(uVar10 + 9) < '\0');
    }
    if (3 < (int)((((int)((uint)bVar2 * 4 - iVar5) >> 2) - (uint)*(byte *)(uVar10 + 3)) +
                 (uint)*(byte *)(uVar10 + 4))) {
      puVar7 = (uint *)(param_2 - 1);
      sVar3 = *(short *)((uVar9 | *puVar7) + 7);
      if (sVar3 == 0x421) {
        uVar10 = *(ulong *)(param_2 + 0xb);
      }
      else {
        iVar5 = JSObject::GetHeaderSize(sVar3,*(char *)((uVar9 | *puVar7) + 9) < '\0');
        uVar10 = *(ulong *)((long)iVar5 + (long)puVar7);
      }
      uVar4 = uStack_48;
      if ((uVar10 != 0) && ((uVar10 & 1) == 0)) {
        sVar3 = *(short *)((uVar9 | *puVar7) + 7);
        if (sVar3 == 0x421) {
          uVar9 = *(ulong *)(param_2 + 0x13);
        }
        else {
          iVar5 = JSObject::GetHeaderSize(sVar3,*(char *)((uVar9 | *puVar7) + 9) < '\0');
          uVar9 = *(ulong *)((long)(iVar5 + 8) + (long)puVar7);
          uVar4 = uStack_48;
        }
        uStack_48 = uVar9;
        if ((uStack_48 & 1) == 0) {
          puVar1 = *(ulong **)(this + 0x10);
          local_50 = uVar10;
          if (puVar1 < *(ulong **)(this + 0x18)) {
            puVar1[1] = uStack_48;
            *puVar1 = uVar10;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x10;
            uVar4 = uStack_48;
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::pair<void*,void*>,std::__ndk1::allocator<std::__ndk1::pair<void*,void*>>>
            ::__push_back_slow_path<std::__ndk1::pair<void*,void*>>
                      ((vector<std::__ndk1::pair<void*,void*>,std::__ndk1::allocator<std::__ndk1::pair<void*,void*>>>
                        *)(this + 8),(pair *)&local_50);
            uVar4 = uStack_48;
          }
        }
      }
      uStack_48 = uVar4;
      if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
        (**(code **)(**(long **)(*(long *)this + 8) + 0x10))(*(long **)(*(long *)this + 8),this + 8)
        ;
        pvVar8 = *(void **)(this + 8);
        *(void **)(this + 0x10) = pvVar8;
        if ((ulong)(*(long *)(this + 0x18) - (long)pvVar8 >> 4) < 1000) {
          pvVar6 = operator_new(16000);
          *(void **)(this + 8) = pvVar6;
          *(void **)(this + 0x10) = pvVar6;
          *(long *)(this + 0x18) = (long)pvVar6 + 16000;
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8);
          }
        }
      }
    }
  }
  return;
}

