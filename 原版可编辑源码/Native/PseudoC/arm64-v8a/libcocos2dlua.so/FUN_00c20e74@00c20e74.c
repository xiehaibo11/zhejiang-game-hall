
void FUN_00c20e74(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  bVar2 = *(byte *)(param_2 + 1);
  if ((bVar2 >> 4 & 1) == 0) {
    if ((char)bVar2 < '\0') {
      uVar3 = *(ushort *)(param_2 + -1);
      uVar6 = (ulong)((uint)*(ushort *)((long)param_2 + -6) + *(int *)((long)param_2 + -4));
      *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar6;
      (**(code **)(param_1 + 0x10))
                (*(undefined8 *)(param_1 + 0x18),(long)param_2 - (ulong)uVar3,uVar6,0);
    }
    else {
      lVar4 = (ulong)*(ushort *)((long)param_2 + 10) * 0x18;
      lVar8 = **(long **)(param_1 + 0x168);
      uVar1 = *(uint *)(lVar8 + lVar4);
      while (uVar1 >> 0x1c == 8) {
        lVar4 = (ulong)(ushort)uVar1 * 0x18;
        uVar1 = *(uint *)(lVar8 + lVar4);
      }
      lVar7 = 0x18;
      if (uVar1 >> 0x1c < 6) {
        lVar7 = (ulong)*(uint *)(lVar8 + lVar4 + 4) + 0x10;
      }
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar7;
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,lVar7,0);
    }
  }
  else {
    *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0x30) & 3 | bVar2 & 0xf8 | 8;
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 == (long *)0x0) {
      *param_2 = (long)param_2;
      *(long **)(param_1 + 0x60) = param_2;
    }
    else {
      *param_2 = *plVar5;
      *plVar5 = (long)param_2;
      *(long **)(param_1 + 0x60) = param_2;
    }
  }
  return;
}

