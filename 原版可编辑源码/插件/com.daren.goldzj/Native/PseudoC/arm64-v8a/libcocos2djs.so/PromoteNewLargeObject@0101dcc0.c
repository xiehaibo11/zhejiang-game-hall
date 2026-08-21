
/* v8::internal::OldLargeObjectSpace::PromoteNewLargeObject(v8::internal::LargePage*) */

void __thiscall
v8::internal::OldLargeObjectSpace::PromoteNewLargeObject
          (OldLargeObjectSpace *this,LargePage *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  
  local_38 = (long)*(uint **)(param_1 + 0x20) + 1;
  iVar1 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_38,
                     local_38 & 0xffffffff00000000 | (ulong)**(uint **)(param_1 + 0x20));
  plVar2 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar2 + 0x90))(plVar2,param_1,(long)iVar1);
  (**(code **)(*(long *)this + 0x88))(this,param_1,(long)iVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = uVar3 & 0xfffffffffffffff7;
  *(ulong *)(param_1 + 8) = uVar4;
  uVar4 = uVar4 | 0x40006;
  if (*(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58) < 2) {
    uVar4 = uVar3 & 0xfffffffffffbfff1 | 4;
  }
  *(ulong *)(param_1 + 8) = uVar4;
  *(OldLargeObjectSpace **)(param_1 + 0x58) = this;
  return;
}

