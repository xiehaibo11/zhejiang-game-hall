
void FUN_0154450c(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 0x38);
  lVar6 = *(long *)(param_1 + 8);
  uVar4 = v8::internal::GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(lVar6 + 0x58)) {
    *(char **)(param_1 + 0x18) = "Stack overflow";
    lVar6 = *(long *)(param_1 + 0x18);
  }
  else if ((*(byte *)((long)plVar5 + 0x19) & 3) == 0) {
    *(byte *)((long)plVar5 + 0x19) = *(byte *)((long)plVar5 + 0x19) | 1;
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    *(byte *)((long)plVar5 + 0x19) = *(byte *)((long)plVar5 + 0x19) & 0xfc | 2;
    lVar6 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
  }
  if (lVar6 == 0) {
    plVar5 = *(long **)(param_2 + 0x38);
    bVar2 = *(byte *)(param_2 + 0x19);
    bVar1 = *(byte *)((long)plVar5 + 0x19) & 4;
    *(byte *)(param_2 + 0x19) = bVar1 | bVar2;
    bVar1 = bVar1 | bVar2 & 7 | ((*(byte *)((long)plVar5 + 0x19) | bVar2) >> 3 & 1) << 3;
    *(byte *)(param_2 + 0x19) = bVar2 & 0xf0 | bVar1;
    *(byte *)(param_2 + 0x19) =
         bVar2 & 0xe0 | bVar1 | (*(byte *)((long)plVar5 + 0x19) | bVar2) & 0x10;
    if (*(int *)(param_2 + 0x50) != 4) {
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar3 = (**(code **)(*plVar5 + 0x20))();
        *(undefined2 *)(param_2 + 0x1a) = uVar3;
      }
      else {
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((long)plVar5 + 0x1a);
      }
    }
  }
  return;
}

