
/* v8::internal::compiler::Scheduler::InitializePlacement(v8::internal::compiler::Node*) */

int __thiscall v8::internal::compiler::Scheduler::InitializePlacement(Scheduler *this,Node *param_1)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(long *)(this + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 +
                  0xc);
  if (*piVar4 == 2) {
    return 2;
  }
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  if (0x16 < uVar1) {
    if (uVar1 - 0x32 < 2) {
      iVar3 = 2;
      goto LAB_012b4030;
    }
    if (uVar1 - 0x23 < 2) {
      lVar2 = NodeProperties::GetControlInput(param_1,0);
      iVar3 = 2;
      if (*(int *)(*(long *)(this + 0xb0) + ((ulong)*(uint *)(lVar2 + 0x14) & 0xffffff) * 0x10 + 0xc
                  ) != 2) {
        iVar3 = 3;
      }
      goto LAB_012b4030;
    }
  }
  iVar3 = 1;
LAB_012b4030:
  *piVar4 = iVar3;
  return iVar3;
}

