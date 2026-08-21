
int FUN_00e36f4c(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long local_c80;
  long local_c78;
  long lStack_c70;
  long local_c68;
  undefined8 local_c60;
  int local_c58;
  long local_c50;
  long lStack_c48;
  long local_c40;
  long local_c38;
  char local_c24 [4];
  undefined1 auStack_c20 [32];
  long local_c00;
  undefined8 local_be0;
  undefined8 local_bd0;
  undefined8 local_bc8;
  byte local_b9b;
  long local_b98;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long local_140;
  undefined8 local_88;
  undefined4 local_80;
  
  lVar9 = *(long *)(param_1 + 8);
  local_c24[0] = '\0';
  puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x310) + 0x18);
  if ((param_3 < *(uint *)(lVar9 + 0x20)) || (*(long *)(*(long *)(lVar9 + 0xf0) + 0x68) != 0)) {
    if ((param_4 & 0x400) != 0) {
      param_4 = param_4 | 3;
    }
    if (param_2 == 0) {
      uVar8 = 0x10000;
      *(undefined8 *)(param_1 + 0x138) = 0x10000;
    }
    else {
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x20);
      uVar8 = *(undefined8 *)(param_2 + 0x28);
    }
    uVar12 = (ulong)(int)param_4;
    *(undefined8 *)(param_1 + 0x140) = uVar8;
    bVar3 = (uVar12 & 3) == 0;
    puVar10 = (undefined4 *)(param_1 + 200);
    *puVar10 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    *(bool *)(param_1 + 0x131) = (uVar12 & 1) == 0;
    *(bool *)(param_1 + 0x130) = bVar3;
    iVar4 = (*(code *)*puVar13)(auStack_c20,lVar9,param_2,param_1,*(undefined8 *)(lVar9 + 0x288),
                                *(undefined8 *)(lVar9 + 0x350),bVar3,param_4 >> 0x10 & 0xf,
                                FUN_00e394cc);
    if (iVar4 == 0) {
      local_b9b = (byte)(uVar12 >> 10) & 1;
      local_184 = *(undefined4 *)(lVar9 + 0x260);
      uStack_178 = *(undefined8 *)(lVar9 + 0x270);
      local_180 = *(undefined8 *)(lVar9 + 0x268);
      local_170 = *(undefined8 *)(lVar9 + 0x278);
      local_88 = *(undefined8 *)(lVar9 + 0x368);
      local_80 = *(undefined4 *)(lVar9 + 0x360);
      iVar4 = FUN_00e3952c(auStack_c20,param_3,&local_c60,local_c24);
      if (iVar4 == 0) {
        cVar2 = *(char *)(param_1 + 0x130);
        lStack_c48 = lStack_160;
        local_c50 = local_168;
        local_c38 = lStack_150;
        local_c40 = local_158;
        (*(code *)puVar13[1])(auStack_c20);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 1 | 4;
        if ((param_4 >> 10 & 1) == 0) {
          lVar5 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x50) = lVar5 >> 0x10;
          lVar5 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x70) = lVar5 >> 0x10;
          *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
          if ((param_4 >> 4 & 1) == 0) {
            lVar5 = FT_RoundFix(local_bc8);
            *(long *)(param_1 + 0x68) = lVar5 >> 0x10;
            lVar5 = FT_RoundFix(local_bc8);
            *(long *)(param_1 + 0x78) = lVar5 >> 0x10;
            *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
          }
          else {
            lVar5 = *(long *)(lVar9 + 0x2f0) - *(long *)(lVar9 + 0x2e0) >> 0x10;
            *(long *)(param_1 + 0x68) = lVar5;
            *(long *)(param_1 + 0x78) = lVar5;
            *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
          }
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
          }
          if ((((local_c50 != 0x10000) || (local_c38 != 0x10000)) || (lStack_c48 != 0)) ||
             (local_c40 != 0)) {
            FT_Outline_Transform(puVar10,&local_c50);
            uVar8 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),local_c50);
            *(undefined8 *)(param_1 + 0x50) = uVar8;
            uVar8 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),local_c38);
            *(undefined8 *)(param_1 + 0x68) = uVar8;
          }
          if (local_140 != 0 || local_148 != 0) {
            FT_Outline_Translate(puVar10,local_148,local_140);
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + local_148;
            *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_140;
          }
          if (((uVar12 & 1) == 0) || (local_c24[0] != '\0')) {
            uVar8 = *(undefined8 *)(param_1 + 0x138);
            uVar1 = *(undefined8 *)(param_1 + 0x140);
            puVar13 = *(undefined8 **)(local_c00 + 8);
            if (((cVar2 == '\0') || (local_b98 == 0)) &&
               (iVar4 = (int)*(short *)(local_c00 + 2), 0 < *(short *)(local_c00 + 2))) {
              do {
                uVar6 = FT_MulFix(*puVar13,uVar8);
                *puVar13 = uVar6;
                uVar6 = FT_MulFix(puVar13[1],uVar1);
                iVar4 = iVar4 + -1;
                puVar13[1] = uVar6;
                puVar13 = puVar13 + 2;
              } while (0 < iVar4);
            }
            uVar8 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar8);
            *(undefined8 *)(param_1 + 0x50) = uVar8;
            uVar8 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar1);
            *(undefined8 *)(param_1 + 0x68) = uVar8;
          }
          FT_Outline_Get_CBox(puVar10,&local_c80);
          *(long *)(param_1 + 0x30) = lStack_c70 - local_c80;
          *(long *)(param_1 + 0x38) = local_c68 - local_c78;
          *(long *)(param_1 + 0x40) = local_c80;
          *(long *)(param_1 + 0x48) = local_c68;
          if ((param_4 >> 4 & 1) != 0) {
            FUN_00e16d8c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
          }
        }
        else {
          lVar11 = *(long *)(param_1 + 0x128);
          lVar5 = FT_RoundFix(local_be0);
          *(long *)(param_1 + 0x40) = lVar5 >> 0x10;
          lVar5 = FT_RoundFix(local_bd0);
          *(long *)(param_1 + 0x50) = lVar5 >> 0x10;
          *(long *)(lVar11 + 0x30) = local_148;
          *(long *)(lVar11 + 0x38) = local_140;
          *(undefined1 *)(lVar11 + 0xc) = 1;
          *(long *)(lVar11 + 0x18) = lStack_c48;
          *(long *)(lVar11 + 0x10) = local_c50;
          *(long *)(lVar11 + 0x28) = local_c38;
          *(long *)(lVar11 + 0x20) = local_c40;
        }
        *(undefined8 *)(param_1 + 0x100) = local_c60;
        *(long *)(param_1 + 0x108) = (long)local_c58;
        plVar7 = *(long **)(*(long *)(lVar9 + 0xf0) + 0x68);
        if (plVar7 == (long *)0x0) {
          iVar4 = 0;
        }
        else {
          (**(code **)(*plVar7 + 8))(plVar7[1],&local_c60);
          iVar4 = 0;
          *(undefined8 *)(param_1 + 0x100) = 0;
          *(undefined8 *)(param_1 + 0x108) = 0;
        }
      }
      else {
        (*(code *)puVar13[1])(auStack_c20);
      }
    }
  }
  else {
    iVar4 = 6;
  }
  return iVar4;
}

