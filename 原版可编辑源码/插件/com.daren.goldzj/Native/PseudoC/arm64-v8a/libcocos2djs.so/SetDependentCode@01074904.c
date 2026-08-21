
/* v8::internal::DependentCode::SetDependentCode(v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::Handle<v8::internal::DependentCode>) */

void v8::internal::DependentCode::SetDependentCode(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar3 = uVar6 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(uVar6 - 1)) == 0xa2) {
    uVar3 = *param_2;
    *(int *)(uVar6 + 0x1b) = (int)uVar3;
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = uVar3 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar5 + 8);
    lVar1 = uVar6 + 0x1b;
    uVar2 = (uint)uVar4;
  }
  else if (*(short *)(uVar3 + *(uint *)(uVar6 - 1)) == 0xa5) {
    uVar3 = *param_2;
    *(int *)(uVar6 + 0xf) = (int)uVar3;
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = uVar3 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar5 + 8);
    lVar1 = uVar6 + 0xf;
    uVar2 = (uint)uVar4;
  }
  else {
    if (*(short *)(uVar3 + *(uint *)(uVar6 - 1)) != 0x55) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = *param_2;
    *(int *)(uVar6 + 0xb) = (int)uVar3;
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = uVar3 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar5 + 8);
    lVar1 = uVar6 + 0xb;
    uVar2 = (uint)uVar4;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar6,lVar1,uVar3);
    uVar4 = *(ulong *)(uVar5 | 8);
  }
  if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar3);
    return;
  }
  return;
}

