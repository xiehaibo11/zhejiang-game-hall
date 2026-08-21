
/* v8::internal::SharedFunctionInfo::SetPosition(int, int) */

void __thiscall
v8::internal::SharedFunctionInfo::SetPosition(SharedFunctionInfo *this,int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  Heap *pHVar4;
  ulong local_50;
  undefined1 auStack_48 [8];
  
  uVar3 = *(ulong *)this;
  uVar2 = uVar3 & 0xffffffff00000000;
  if (((*(uint *)(uVar3 + 7) & 1) == 0) ||
     (local_50 = uVar2 | *(uint *)(uVar3 + 7),
     *(short *)((uVar2 | 7) + (ulong)*(uint *)(local_50 - 1)) != 0x83)) {
    if (((*(uint *)(uVar3 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar3 + 3)) - 1)) - 0x95))
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = *(uint *)(*(ulong *)this + 3);
    if (((uVar1 & 1) != 0) &&
       (uVar2 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x95)) {
      uVar2 = *(ulong *)this & 0xffffffff00000000;
      pHVar4 = (Heap *)(uVar2 | 0x8850);
      uVar2 = uVar2 | *(uint *)(*(ulong *)this + 3);
      Heap::NotifyObjectLayoutChange(pHVar4,uVar2,auStack_48,0);
      uVar3 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 0x2a8);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(uVar2 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange(pHVar4,uVar2,uVar3);
        *(int *)(uVar2 - 1) = (int)uVar3;
        if (((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
          Heap_MarkingBarrierSlow(uVar2,0,uVar3);
        }
      }
      Heap::CreateFillerObjectAt(pHVar4,uVar2 + 0xf,4,0,1);
    }
    *(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3)) + 7) =
         param_1;
    *(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3)) + 0xb) =
         param_2;
  }
  else {
    uVar2 = ScopeInfo::HasPositionInfo((ScopeInfo *)&local_50);
    if ((uVar2 & 1) != 0) {
      ScopeInfo::SetPositionInfo((ScopeInfo *)&local_50,param_1,param_2);
    }
  }
  return;
}

