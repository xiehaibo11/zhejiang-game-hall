
void uv__io_stop(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 != 0xffffffff) && (uVar3 < *(uint *)(param_1 + 0x70))) {
    uVar2 = *(uint *)(param_2 + 0x28) & (param_3 ^ 0xffffffff);
    *(uint *)(param_2 + 0x28) = uVar2;
    if (uVar2 == 0) {
      uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      **(undefined8 **)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(*(long *)(param_2 + 0x18) + 8) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_2 + 0x18) = param_2 + 0x18;
      *(long *)(param_2 + 0x20) = param_2 + 0x18;
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar5) != 0) {
        iVar4 = *(int *)(param_1 + 0x74);
        *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar5) = 0;
        *(int *)(param_1 + 0x74) = iVar4 + -1;
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
    }
    else {
      lVar1 = param_2 + 0x18;
      if (lVar1 == *(long *)(param_2 + 0x18)) {
        *(long *)(param_2 + 0x18) = param_1 + 0x58;
        plVar6 = *(long **)(param_1 + 0x60);
        *(long **)(param_2 + 0x20) = plVar6;
        *plVar6 = lVar1;
        *(long *)(param_1 + 0x60) = lVar1;
        return;
      }
    }
  }
  return;
}

