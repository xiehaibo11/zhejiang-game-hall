
void FUN_01544ae4(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 0x38);
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = v8::internal::GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(lVar3 + 0x58)) {
    *(char **)(param_1 + 0x18) = "Stack overflow";
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else if ((*(byte *)((long)plVar2 + 0x19) & 3) == 0) {
    *(byte *)((long)plVar2 + 0x19) = *(byte *)((long)plVar2 + 0x19) | 1;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    *(byte *)((long)plVar2 + 0x19) = *(byte *)((long)plVar2 + 0x19) & 0xfc | 2;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if ((lVar3 == 0) && (*(char *)(param_2 + 0x4c) == '\0')) {
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(*(long *)(param_2 + 0x38) + 0x1a);
  }
  return;
}

