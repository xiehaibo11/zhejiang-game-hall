
/* v8::internal::NewSpace::EnsureAllocation(int, v8::internal::AllocationAlignment) */

undefined8 __thiscall
v8::internal::NewSpace::EnsureAllocation(NewSpace *this,int param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = *(long *)(this + 0x68);
  uVar6 = *(ulong *)(*(long *)(this + 0x160) + 0x28);
  iVar3 = Heap::GetFillToAlign(lVar5,param_3);
  lVar4 = (long)(iVar3 + param_1);
  if (uVar6 < (ulong)(lVar5 + lVar4)) {
    uVar6 = AddFreshPage(this);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    lVar5 = *(long *)(this + 0x68);
    uVar6 = *(ulong *)(*(long *)(this + 0x160) + 0x28);
    iVar3 = Heap::GetFillToAlign(lVar5,param_3);
  }
  if (*(ulong *)(this + 0x70) < uVar6) {
    if ((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
       (uVar6 = *(ulong *)(this + 0x78), uVar6 != 0)) {
      uVar1 = lVar5 + lVar4;
      if (uVar1 < uVar6) {
        *(ulong *)(this + 0x78) = uVar1;
        uVar6 = uVar1;
      }
      if ((this[0x38] == (NewSpace)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10))) {
        *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 1;
        Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),lVar5 + iVar3,param_1,1,1);
        puVar2 = *(undefined8 **)(this + 0x10);
        if (*(undefined8 **)(this + 8) != puVar2) {
          puVar7 = *(undefined8 **)(this + 8);
          do {
            puVar8 = puVar7 + 1;
            AllocationObserver::AllocationStep
                      ((int)*puVar7,(ulong)(uint)((int)uVar1 - (int)uVar6),lVar5 + iVar3);
            puVar7 = puVar8;
          } while (puVar2 != puVar8);
        }
        *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
      }
      *(ulong *)(this + 0x78) = uVar1;
    }
    (**(code **)(*(long *)this + 0x88))(this,lVar4);
  }
  return 1;
}

