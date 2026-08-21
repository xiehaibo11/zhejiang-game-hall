
/* v8::internal::Map::SetBackPointer(v8::internal::HeapObject, v8::internal::WriteBarrierMode) */

void __thiscall v8::internal::Map::SetBackPointer(Map *this,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar3 = *(ulong *)this;
  if (*(ushort *)(uVar3 + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","instance_type() >= FIRST_JS_RECEIVER_TYPE");
  }
  uVar4 = param_2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","value.IsMap()");
  }
  uVar1 = *(uint *)(uVar3 + 0x13);
  uVar6 = uVar3 & 0xffffffff00000000;
  if (((uVar1 & 1) == 0) ||
     (uVar5 = uVar6 | uVar1, *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa2)) {
    uVar5 = *(ulong *)(uVar6 + 0xa0);
  }
  if ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","GetBackPointer().IsUndefined()");
  }
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0xa2) {
    uVar2 = *(uint *)(param_2 + 0x13);
    while ((uVar6 = param_2 & 0xffffffff00000000 | (ulong)uVar2, (uVar2 & 1) != 0 &&
           (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0xa2))) {
      uVar2 = *(uint *)(uVar6 + 0x13);
    }
    if (uVar1 != uVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "value.IsMap() implies Map::cast(value).GetConstructor() == constructor_or_backpointer()"
              );
    }
  }
  *(int *)(uVar3 + 0x13) = (int)param_2;
  if (param_3 != 0) {
    if (param_3 == 4) {
      if ((param_2 & 1) == 0) {
        return;
      }
      pbVar7 = (byte *)(param_2 & 0xfffffffffffc0000 | 8);
      if ((*(byte *)((param_2 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + 0x13,param_2);
      }
    }
    else {
      if ((param_2 & 1) == 0) {
        return;
      }
      pbVar7 = (byte *)(param_2 & 0xfffffffffffc0000 | 8);
    }
    if (((*pbVar7 & 0x18) != 0) &&
       (uVar3 = *(ulong *)this, (*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0x13,param_2);
      return;
    }
  }
  return;
}

