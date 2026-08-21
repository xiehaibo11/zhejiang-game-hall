
/* v8::internal::compiler::RegisterAllocator::SplitRangeAt(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition) */

LiveRange * __thiscall
v8::internal::compiler::RegisterAllocator::SplitRangeAt
          (RegisterAllocator *this,LiveRange *param_1,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  LiveRange *pLVar4;
  long lVar5;
  undefined8 uVar6;
  Zone *this_00;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Splitting live range %d:%d at %d\n",(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),
           (ulong)*(uint *)param_1,(ulong)param_3);
  }
  pLVar4 = param_1;
  if (**(int **)(param_1 + 0x10) < (int)param_3) {
    this_00 = (Zone *)**(undefined8 **)this;
    lVar3 = *(long *)(param_1 + 0x20);
    do {
      lVar5 = lVar3;
      lVar3 = *(long *)(lVar5 + 0x68);
    } while (*(long *)(lVar5 + 0x68) != 0);
    iVar1 = *(int *)(lVar5 + 0x60) + 1;
    *(int *)(lVar5 + 0x60) = iVar1;
    pLVar4 = *(LiveRange **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pLVar4) < 0x60) {
      pLVar4 = (LiveRange *)Zone::NewExpand(this_00,0x60);
    }
    else {
      *(LiveRange **)(this_00 + 0x10) = pLVar4 + 0x60;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 4);
    *(undefined8 *)(pLVar4 + 0x18) = 0;
    *(undefined8 *)(pLVar4 + 0x20) = uVar6;
    *(int *)(pLVar4 + 0x58) = -1;
    *(undefined8 *)(pLVar4 + 8) = 0;
    *(undefined8 *)(pLVar4 + 0x10) = 0;
    *(undefined8 *)(pLVar4 + 0x30) = 0;
    *(undefined8 *)(pLVar4 + 0x28) = 0;
    *(undefined8 *)(pLVar4 + 0x40) = 0;
    *(undefined8 *)(pLVar4 + 0x38) = 0;
    *(undefined8 *)(pLVar4 + 0x50) = 0;
    *(undefined8 *)(pLVar4 + 0x48) = 0;
    *(int *)pLVar4 = iVar1;
    *(uint *)(pLVar4 + 4) = uVar2 & 0x1fe000 | 0x8001000;
    *(undefined8 *)(pLVar4 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    LiveRange::DetachAt(param_1,param_3,pLVar4,this_00,0);
    *(undefined8 *)(pLVar4 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(pLVar4 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(LiveRange **)(param_1 + 0x28) = pLVar4;
  }
  return pLVar4;
}

