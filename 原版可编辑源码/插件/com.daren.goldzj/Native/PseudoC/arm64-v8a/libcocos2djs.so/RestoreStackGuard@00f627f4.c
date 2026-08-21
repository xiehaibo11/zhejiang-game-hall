
/* v8::internal::StackGuard::RestoreStackGuard(char*) */

char * __thiscall v8::internal::StackGuard::RestoreStackGuard(StackGuard *this,char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 8) = uVar5;
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return param_1 + 0x30;
}

