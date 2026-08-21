
/* v8::internal::String::MakeExternal(v8::String::ExternalOneByteStringResource*) */

undefined8 __thiscall
v8::internal::String::MakeExternal(String *this,ExternalOneByteStringResource *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_60 [8];
  ulong local_58;
  
  iVar3 = HeapObject::SizeFromMap
                    ((HeapObject *)this,
                     *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1));
  if ((iVar3 < 0x14) ||
     (uVar7 = *(ulong *)this, (*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 5 & 1) != 0)) {
    return 0;
  }
  uVar11 = uVar7 & 0xffffffff00000000;
  uVar1 = *(ushort *)((uVar11 | 7) + (ulong)*(uint *)(uVar7 - 1));
  uVar2 = *(ushort *)((uVar11 | *(uint *)(uVar7 - 1)) + 7);
  if ((uVar2 & 1) != 0) {
    Heap::NotifyObjectLayoutChange((Heap *)(uVar11 + 0x8850),uVar7,auStack_60,0);
  }
  if (iVar3 < 0x1c) {
    if (uVar1 < 0x20) {
      puVar9 = (ulong *)(uVar11 + 0x348);
    }
    else {
      puVar9 = (ulong *)(uVar11 + 0x350);
    }
  }
  else if (uVar1 < 0x20) {
    puVar9 = (ulong *)(uVar11 + 0x338);
  }
  else {
    puVar9 = (ulong *)(uVar11 + 0x318);
  }
  uVar10 = *puVar9;
  iVar4 = HeapObject::SizeFromMap((HeapObject *)this,uVar10);
  Heap::CreateFillerObjectAt
            ((Heap *)(uVar11 + 0x8850),*(long *)this + (long)iVar4 + -1,iVar3 - iVar4,
             (uVar2 & 1) == 0,1);
  uVar7 = *(ulong *)this;
  if ((int)uVar10 == 0) {
    *(undefined4 *)(uVar7 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar7 & 0xffffffff00000000 | 0x8850),uVar7,uVar10);
    *(int *)(*(long *)this + -1) = (int)uVar10;
    if (((uVar10 & 1) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(*(undefined8 *)this,0,uVar10);
    }
  }
  uVar7 = *(ulong *)this;
  *(ExternalOneByteStringResource **)(uVar7 + 0xb) = param_1;
  if (param_1 != (ExternalOneByteStringResource *)0x0) {
    if ((*(byte *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) >> 4 & 1) == 0) {
      uVar5 = (**(code **)(**(long **)(uVar7 + 0xb) + 0x30))();
      *(undefined8 *)(uVar7 + 0x13) = uVar5;
    }
    lVar6 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    if (lVar6 != 0) {
      Heap::UpdateExternalString((Heap *)(uVar11 + 0x8850),uVar7,0,lVar6);
    }
  }
  local_58 = *(ulong *)this;
  if ((*(byte *)((local_58 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    plVar8 = (long *)(uVar11 + 0x9358);
    puVar9 = (ulong *)*plVar8;
    if (puVar9 != *(ulong **)(uVar11 + 0x9360)) goto LAB_01134ba4;
    lVar6 = 0x9350;
  }
  else {
    plVar8 = (long *)(uVar11 + 0x9340);
    puVar9 = (ulong *)*plVar8;
    if (puVar9 != *(ulong **)(uVar11 + 0x9348)) {
LAB_01134ba4:
      *puVar9 = local_58;
      *plVar8 = *plVar8 + 8;
      goto joined_r0x01134bb8;
    }
    lVar6 = 0x9338;
  }
  std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
  __push_back_slow_path<v8::internal::Object_const&>
            ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
             (uVar11 + lVar6),(Object *)&local_58);
joined_r0x01134bb8:
  if ((uVar1 < 0x20) && ((*(byte *)(uVar7 + 3) & 1) != 0)) {
    local_58 = uVar7;
    ComputeAndSetHash((String *)&local_58);
  }
  return 1;
}

