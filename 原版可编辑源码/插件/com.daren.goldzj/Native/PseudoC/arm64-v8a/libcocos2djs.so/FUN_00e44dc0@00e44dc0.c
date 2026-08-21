
int FUN_00e44dc0(long param_1,long param_2,uint param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long local_c60;
  long local_c58;
  long lStack_c50;
  long local_c48;
  long local_c40;
  long lStack_c38;
  long local_c30;
  long local_c28;
  undefined1 auStack_c20 [32];
  long local_c00;
  undefined8 local_be0;
  undefined8 local_bd0;
  byte local_b9b;
  long local_b98;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long local_140;
  
  lVar10 = *(long *)(param_1 + 8);
  if (param_3 < *(uint *)(lVar10 + 0x20)) {
    lVar8 = *(long *)(lVar10 + 0x100);
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    if ((param_4 & 0x400) != 0) {
      param_4 = param_4 | 3;
    }
    uVar11 = (ulong)(int)param_4;
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_1 + 200);
    *puVar7 = 0;
    *(undefined8 *)(param_1 + 0x140) = uVar12;
    *(undefined8 *)(param_1 + 0x138) = uVar4;
    if ((uVar11 & 1) == 0) {
      uVar6 = (param_4 >> 1 ^ 0xffffffff) & 1;
    }
    *(char *)(param_1 + 0x130) = (char)uVar6;
    *(byte *)(param_1 + 0x131) = (byte)(uVar11 & 1) ^ 1;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    iVar3 = (*(code *)**(undefined8 **)(lVar8 + 0x18))
                      (auStack_c20,lVar10,param_2,param_1,0,0,uVar6,param_4 >> 0x10 & 0xf,
                       FUN_00e45558);
    if (iVar3 == 0) {
      local_b9b = (byte)(uVar11 >> 10) & 1;
      iVar3 = FUN_00e45558(auStack_c20,param_3);
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x130);
        cVar2 = *(char *)(param_1 + 0x131);
        lStack_c38 = lStack_160;
        local_c40 = local_168;
        local_c28 = lStack_150;
        local_c30 = local_158;
        (**(code **)(*(long *)(lVar8 + 0x18) + 8))(auStack_c20);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 1 | 4;
        if ((param_4 >> 10 & 1) == 0) {
          lVar8 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x50) = lVar8 >> 0x10;
          lVar8 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x70) = lVar8 >> 0x10;
          *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
          lVar10 = *(long *)(lVar10 + 0x188) - *(long *)(lVar10 + 0x178) >> 0x10;
          *(long *)(param_1 + 0x68) = lVar10;
          *(long *)(param_1 + 0x78) = lVar10;
          *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
          }
          if ((((local_c40 != 0x10000) || (local_c28 != 0x10000)) || (lStack_c38 != 0)) ||
             (local_c30 != 0)) {
            FT_Outline_Transform(puVar7,&local_c40);
            uVar4 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),local_c40);
            *(undefined8 *)(param_1 + 0x50) = uVar4;
            uVar4 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),local_c28);
            *(undefined8 *)(param_1 + 0x68) = uVar4;
          }
          if (local_140 != 0 || local_148 != 0) {
            FT_Outline_Translate(puVar7,local_148,local_140);
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + local_148;
            *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_140;
          }
          if ((cVar2 != '\0') || ((uVar11 & 1) == 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x138);
            uVar12 = *(undefined8 *)(param_1 + 0x140);
            puVar9 = *(undefined8 **)(local_c00 + 8);
            if (((cVar1 == '\0') || (local_b98 == 0)) &&
               (iVar3 = (int)*(short *)(local_c00 + 2), 0 < *(short *)(local_c00 + 2))) {
              do {
                uVar5 = FT_MulFix(*puVar9,uVar4);
                *puVar9 = uVar5;
                uVar5 = FT_MulFix(puVar9[1],uVar12);
                iVar3 = iVar3 + -1;
                puVar9[1] = uVar5;
                puVar9 = puVar9 + 2;
              } while (0 < iVar3);
            }
            uVar4 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar4);
            *(undefined8 *)(param_1 + 0x50) = uVar4;
            uVar4 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar12);
            *(undefined8 *)(param_1 + 0x68) = uVar4;
          }
          FT_Outline_Get_CBox(puVar7,&local_c60);
          *(long *)(param_1 + 0x30) = lStack_c50 - local_c60;
          *(long *)(param_1 + 0x38) = local_c48 - local_c58;
          *(long *)(param_1 + 0x40) = local_c60;
          *(long *)(param_1 + 0x48) = local_c48;
          if ((param_4 >> 4 & 1) != 0) {
            FUN_00e16d8c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
          }
          iVar3 = 0;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x128);
          lVar10 = FT_RoundFix(local_be0);
          *(long *)(param_1 + 0x40) = lVar10 >> 0x10;
          lVar10 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x50) = lVar10 >> 0x10;
          iVar3 = 0;
          *(long *)(lVar8 + 0x30) = local_148;
          *(long *)(lVar8 + 0x38) = local_140;
          *(long *)(lVar8 + 0x18) = lStack_c38;
          *(long *)(lVar8 + 0x10) = local_c40;
          *(long *)(lVar8 + 0x28) = local_c28;
          *(long *)(lVar8 + 0x20) = local_c30;
          *(undefined1 *)(lVar8 + 0xc) = 1;
        }
      }
      else {
        (**(code **)(*(long *)(lVar8 + 0x18) + 8))(auStack_c20);
      }
    }
  }
  else {
    iVar3 = 6;
  }
  return iVar3;
}

