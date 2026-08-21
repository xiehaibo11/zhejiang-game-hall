
void FUN_00c102ec(long *param_1,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = param_1[2];
  uVar7 = *(ulong *)(lVar8 + 0x28);
  uVar9 = *(undefined8 *)(lVar8 + 0x20);
  *(ulong *)(lVar8 + 0x20) = uVar7;
  if ((uVar7 <= param_2) &&
     (uVar5 = *(ulong *)(uVar7 - 0x10) & 0x7fffffffffff, *(char *)(uVar5 + 10) == '\0')) {
    lVar6 = *(long *)(uVar5 + 0x20);
    *(ulong *)(*(long *)(lVar8 + 0x50) + 0xa8) = lVar6 + (ulong)*(uint *)(lVar6 + -0x5c) * 4 + 4;
  }
  uVar3 = *(ushort *)(uVar7 - 0x18);
  while( true ) {
    puVar1 = (uint *)(*param_1 + (ulong)uVar3 * 0x18);
    uVar4 = *(uint *)(*param_1 + (ulong)uVar3 * 0x18);
    if (uVar4 >> 0x1c != 8) break;
    uVar3 = (ushort)uVar4;
  }
  if (uVar4 >> 0x1c != 4) {
    puVar2 = (uint *)(param_1 + 6);
    if ((uVar4 & 0xf4000000) != 0x4000000) {
      puVar2 = (uint *)(param_1 + 0xe);
    }
    FUN_00c22594(param_1,puVar1,puVar2,param_2,0);
    if (((*puVar1 & 0xf4000000) == 0) && (uVar4 = puVar1[1], uVar4 < 4)) {
      if ((*puVar1 >> 0x17 & 1) == 0) {
        if (uVar4 == 1) {
          uVar4 = (uint)(char)(byte)*puVar2;
        }
        else {
          uVar4 = (uint)(short)(ushort)*puVar2;
        }
        uVar7 = *(ulong *)(lVar8 + 0x28);
        *puVar2 = uVar4;
        goto LAB_00c103f0;
      }
      if (uVar4 == 1) {
        *puVar2 = (uint)(byte)*puVar2;
      }
      else {
        *puVar2 = (uint)(ushort)*puVar2;
      }
    }
    uVar7 = *(ulong *)(lVar8 + 0x28);
  }
LAB_00c103f0:
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  *(ulong *)(lVar8 + 0x28) = uVar7 - 0x20;
  *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(*(long *)(lVar8 + 0x50) + 0xa0);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return;
}

