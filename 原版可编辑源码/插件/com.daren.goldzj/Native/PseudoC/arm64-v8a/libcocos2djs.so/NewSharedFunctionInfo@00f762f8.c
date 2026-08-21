
/* v8::internal::Factory::NewSharedFunctionInfo(v8::internal::MaybeHandle<v8::internal::String>,
   v8::internal::MaybeHandle<v8::internal::HeapObject>, int, v8::internal::FunctionKind) */

ulong * __thiscall
v8::internal::Factory::NewSharedFunctionInfo
          (Factory *this,long param_2,ulong *param_3,uint param_4,byte param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_48;
  
  puVar5 = (ulong *)NewSharedFunctionInfo(this);
  if (param_2 == 0) {
LAB_00f76394:
    if (param_3 != (ulong *)0x0) goto LAB_00f76398;
LAB_00f76410:
    if (param_4 < 0x5bc) {
      iVar10 = param_4 << 1;
    }
    else {
      iVar10 = 0x12e;
    }
    *(int *)(*puVar5 + 3) = iVar10;
  }
  else {
    puVar6 = (ulong *)String::Flatten(this,param_2,1);
    uVar12 = *puVar5;
    uVar11 = *puVar6;
    *(int *)(uVar12 + 7) = (int)uVar11;
    if ((uVar11 & 1) == 0) goto LAB_00f76394;
    uVar8 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar11);
      uVar8 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) == 0) || ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) != 0))
    goto LAB_00f76394;
    Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar11);
    if (param_3 == (ulong *)0x0) goto LAB_00f76410;
LAB_00f76398:
    uVar12 = *puVar5;
    uVar11 = *param_3;
    puVar1 = (undefined4 *)(uVar12 + 3);
    *puVar1 = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar8 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,puVar1,uVar11);
        uVar8 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,puVar1,uVar11);
      }
    }
  }
  uVar11 = *puVar5;
  uVar2 = *(uint *)(uVar11 + 3);
  if ((*(uint *)(uVar11 + 3) & 1) == 0) {
    uVar9 = 0;
    if (((int)uVar2 >> 1 != 0x42) && ((int)uVar2 >> 1 != 0x96)) {
LAB_00f76484:
      uVar9 = 0x2000000;
    }
  }
  else {
    if (((uVar2 & 1) != 0) &&
       (*(short *)((uVar11 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)uVar2) - 1)) == 0x4e))
    goto LAB_00f76484;
    uVar9 = 0;
  }
  *(uint *)(uVar11 + 0x1b) = uVar9 | *(uint *)(uVar11 + 0x1b) & 0xfdffffff;
  uVar11 = *puVar5;
  *(uint *)(uVar11 + 0x1b) =
       (uint)param_5 | (uint)((byte)(param_5 - 3) < 4) << 10 | *(uint *)(uVar11 + 0x1b) & 0xfffffbe0
  ;
  uVar3 = *(uint *)(uVar11 + 0x1b);
  uVar9 = *(uint *)(uVar11 + 0x1b);
  uVar4 = *(uint *)(uVar11 + 7);
  uVar2 = uVar9 & 0x1f;
  if (((uVar4 & 1) == 0) ||
     (local_48 = uVar11 & 0xffffffff00000000 | (ulong)uVar4,
     *(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x83)) {
    uVar4 = (uint)(uVar4 != 0);
  }
  else {
    uVar4 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
  }
  uVar7 = 0xb8000;
  if ((uVar2 - 3 & 0xff) < 4) goto LAB_00f765b8;
  if ((uVar2 - 0xd & 0xff) < 4) {
    iVar10 = 0xbc;
    if (4 < (uVar2 - 10 & 0xff)) {
      iVar10 = 0xb8;
    }
  }
  else {
    uVar9 = uVar9 & 0x1f;
    if (uVar9 < 0x13) {
      uVar2 = 1 << (ulong)uVar9;
      if ((uVar2 & 0x7c04) == 0) {
        if ((uVar2 & 0x70380) == 0) goto LAB_00f765fc;
        iVar10 = 0xb0;
      }
      else {
        iVar10 = 0xb4;
      }
    }
    else {
LAB_00f765fc:
      iVar10 = 0xa9;
      if ((uVar3 & 0x40) != 0) {
        iVar10 = 0xad;
      }
    }
  }
  uVar7 = (iVar10 + (*(uint *)(uVar11 + 0x1b) >> 0xc & 2 | ~uVar4 & 1)) * 0x8000 - 0x548000;
LAB_00f765b8:
  *(uint *)(uVar11 + 0x1b) = *(uint *)(uVar11 + 0x1b) & 0xfff07fff | uVar7;
  local_48 = *puVar5;
  SharedFunctionInfo::SharedFunctionInfoVerify((SharedFunctionInfo *)&local_48,(Isolate *)this);
  return puVar5;
}

