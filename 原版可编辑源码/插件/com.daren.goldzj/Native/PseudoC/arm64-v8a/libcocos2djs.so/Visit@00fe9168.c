
/* v8::internal::EvacuateOldSpaceVisitor::Visit(v8::internal::HeapObject, int) */

uint __thiscall
v8::internal::EvacuateOldSpaceVisitor::Visit
          (EvacuateOldSpaceVisitor *this,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  if ((*(byte *)((param_2 & 0xfffffffffffc0000) + 10) >> 5 & 1) == 0) {
    uVar2 = *(undefined4 *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x58) + 0x48);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = EvacuateVisitorBase::TryEvacuateObject
                    ((EvacuateVisitorBase *)this,uVar2,param_2,param_3,&local_18);
  return uVar1 & 1;
}

