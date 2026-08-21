
void FUN_010eb1b0(long *param_1,char *param_2,uint param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  
  uVar10 = (undefined4)(param_4 + (ulong)param_3);
  if (param_3 < 0xe) {
    if ((5 < param_3) && (*param_2 == 'J')) goto LAB_010eb330;
LAB_010eb35c:
    lVar9 = *param_1;
    uVar8 = 0x4f;
  }
  else {
    if (*param_2 != 'J') goto LAB_010eb35c;
    if ((((param_2[1] == 'F') && (param_2[2] == 'I')) && (param_2[3] == 'F')) &&
       (param_2[4] == '\0')) {
      *(undefined4 *)(param_1 + 0x2f) = 1;
      bVar1 = param_2[5];
      *(byte *)((long)param_1 + 0x17c) = bVar1;
      bVar2 = param_2[6];
      *(byte *)((long)param_1 + 0x17d) = bVar2;
      bVar3 = param_2[7];
      *(byte *)((long)param_1 + 0x17e) = bVar3;
      uVar5 = CONCAT11(param_2[8],param_2[9]);
      *(ushort *)(param_1 + 0x30) = uVar5;
      uVar6 = CONCAT11(param_2[10],param_2[0xb]);
      *(ushort *)((long)param_1 + 0x182) = uVar6;
      if (1 < bVar1 - 1) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x7a;
        *(uint *)(lVar9 + 0x2c) = (uint)bVar1;
        *(uint *)(lVar9 + 0x30) = (uint)bVar2;
        (**(code **)(lVar9 + 8))(param_1,0xffffffff);
        bVar1 = *(byte *)((long)param_1 + 0x17c);
        bVar2 = *(byte *)((long)param_1 + 0x17d);
        uVar5 = *(ushort *)(param_1 + 0x30);
        uVar6 = *(ushort *)((long)param_1 + 0x182);
        bVar3 = *(byte *)((long)param_1 + 0x17e);
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x59;
      *(uint *)(lVar9 + 0x2c) = (uint)bVar1;
      *(uint *)(lVar9 + 0x30) = (uint)bVar2;
      *(uint *)(lVar9 + 0x34) = (uint)uVar5;
      *(uint *)(lVar9 + 0x38) = (uint)uVar6;
      *(uint *)(lVar9 + 0x3c) = (uint)bVar3;
      (**(code **)(lVar9 + 8))(param_1,1);
      bVar1 = param_2[0xc];
      bVar2 = param_2[0xd];
      if (bVar2 != 0 || bVar1 != 0) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x5c;
        *(uint *)(lVar9 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(lVar9 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(lVar9 + 8))(param_1,1);
        bVar1 = param_2[0xc];
        bVar2 = param_2[0xd];
      }
      lVar9 = param_4 + (ulong)param_3 + -0xe;
      if (lVar9 == (ulong)bVar1 * (ulong)bVar2 * 2 + (ulong)bVar1 * (ulong)bVar2) {
        return;
      }
      lVar7 = *param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
      *(undefined4 *)(lVar7 + 0x28) = 0x5a;
      *(int *)(lVar7 + 0x2c) = (int)lVar9;
      goto LAB_010eb370;
    }
LAB_010eb330:
    if (((param_2[1] != 'F') || (param_2[2] != 'X')) ||
       ((param_2[3] != 'X' || (param_2[4] != '\0')))) goto LAB_010eb35c;
    cVar4 = param_2[5];
    if (cVar4 == '\x13') {
      lVar9 = *param_1;
      uVar8 = 0x70;
    }
    else if (cVar4 == '\x11') {
      lVar9 = *param_1;
      uVar8 = 0x6f;
    }
    else {
      if (cVar4 != '\x10') {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x5b;
        UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
        *(uint *)(lVar9 + 0x2c) = (uint)(byte)param_2[5];
        *(undefined4 *)(lVar9 + 0x30) = uVar10;
        goto LAB_010eb370;
      }
      lVar9 = *param_1;
      uVar8 = 0x6e;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
  *(undefined4 *)(lVar9 + 0x28) = uVar8;
  *(undefined4 *)(lVar9 + 0x2c) = uVar10;
LAB_010eb370:
                    /* WARNING: Could not recover jumptable at 0x010eb380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,1);
  return;
}

