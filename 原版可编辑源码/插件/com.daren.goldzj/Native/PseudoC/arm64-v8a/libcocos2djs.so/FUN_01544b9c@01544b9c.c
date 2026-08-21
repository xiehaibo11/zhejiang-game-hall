
void FUN_01544b9c(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x38);
  lVar5 = *(long *)(param_1 + 8);
  uVar3 = v8::internal::GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(lVar5 + 0x58)) {
    *(char **)(param_1 + 0x18) = "Stack overflow";
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else if ((*(byte *)((long)plVar4 + 0x19) & 3) == 0) {
    *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) | 1;
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
    *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) & 0xfc | 2;
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 == 0) {
    uVar2 = *(ushort *)(*(long *)(param_2 + 0x38) + 0x1a);
    uVar1 = 0xff00;
    if (*(int *)(param_2 + 0x40) != 1) {
      uVar1 = uVar2 & 0xff00;
    }
    *(ushort *)(param_2 + 0x1a) = uVar1 | uVar2 & 0xff;
  }
  return;
}

