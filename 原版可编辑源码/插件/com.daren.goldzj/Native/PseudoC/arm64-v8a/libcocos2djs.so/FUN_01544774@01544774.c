
void FUN_01544774(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x50);
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
    plVar4 = *(long **)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    bVar2 = *(byte *)(param_2 + 0x19);
    bVar1 = *(byte *)(lVar5 + 0x19) & 4;
    *(byte *)(param_2 + 0x19) = bVar1 | bVar2;
    bVar1 = bVar1 | bVar2 & 7 | ((*(byte *)(lVar5 + 0x19) | bVar2) >> 3 & 1) << 3;
    *(byte *)(param_2 + 0x19) = bVar2 & 0xf0 | bVar1;
    *(byte *)(param_2 + 0x19) = bVar2 & 0xe0 | bVar1 | (*(byte *)(lVar5 + 0x19) | bVar2) & 0x10;
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(lVar5 + 0x1a);
    lVar5 = *(long *)(param_1 + 8);
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *(ulong *)(lVar5 + 0x58)) {
      *(char **)(param_1 + 0x18) = "Stack overflow";
    }
    else {
      if ((*(byte *)((long)plVar4 + 0x19) & 3) == 0) {
        *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) | 1;
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
        *(byte *)((long)plVar4 + 0x19) = *(byte *)((long)plVar4 + 0x19) & 0xfc | 2;
        lVar5 = *(long *)(param_1 + 0x18);
      }
      else {
        lVar5 = *(long *)(param_1 + 0x18);
      }
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_2 + 0x48);
        bVar2 = *(byte *)(param_2 + 0x19);
        bVar1 = *(byte *)(lVar5 + 0x19) & 4;
        *(byte *)(param_2 + 0x19) = bVar1 | bVar2;
        bVar1 = bVar1 | bVar2 & 7 | ((*(byte *)(lVar5 + 0x19) | bVar2) >> 3 & 1) << 3;
        *(byte *)(param_2 + 0x19) = bVar2 & 0xf0 | bVar1;
        *(byte *)(param_2 + 0x19) = bVar2 & 0xe0 | bVar1 | (*(byte *)(lVar5 + 0x19) | bVar2) & 0x10;
      }
    }
  }
  return;
}

