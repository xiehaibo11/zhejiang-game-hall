
int FT_Glyph_To_Bitmap(undefined8 *param_1,undefined4 param_2,long *param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_200;
  long lStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)*param_1, puVar4 != (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)puVar4[1];
    if (puVar6 == (undefined8 *)0x0) {
      return 6;
    }
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 == (undefined8 *)0x0) {
      return 6;
    }
    if (puVar6 == &DAT_01c97fb0) {
      return 0;
    }
    if (puVar6[7] != 0) {
      uStack_80 = 0;
      local_88 = 0;
      local_78 = &local_1f0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      local_118 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_170 = 0;
      local_178 = 0;
      uStack_180 = 0;
      local_188 = 0;
      uStack_190 = 0;
      local_198 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_110 = (ulong)*(uint *)(puVar6 + 1);
      local_1a0 = puVar7;
      puVar2 = (undefined8 *)FUN_00e1388c(*puVar7,0x58,&local_200);
      if ((int)local_200 != 0) {
        return (int)local_200;
      }
      *puVar2 = puVar7;
      puVar2[1] = &DAT_01c97fb0;
      *(undefined4 *)(puVar2 + 2) = 0x62697473;
      if (((param_3 != (long *)0x0) && (puVar4[1] != 0)) &&
         (pcVar3 = *(code **)(puVar4[1] + 0x28), pcVar3 != (code *)0x0)) {
        (*pcVar3)(puVar4,0,param_3);
      }
      iVar1 = (*(code *)puVar6[7])(puVar4,&local_1a0);
      if (iVar1 == 0) {
        iVar1 = FUN_00e18cc4(*puVar4,&local_1a0,param_2);
      }
      if ((param_3 != (long *)0x0) && (param_4 == '\0')) {
        local_200 = -*param_3;
        lStack_1f8 = -param_3[1];
        if ((puVar4[1] != 0) && (pcVar3 = *(code **)(puVar4[1] + 0x28), pcVar3 != (code *)0x0)) {
          (*pcVar3)(puVar4,0,&local_200);
        }
      }
      if (iVar1 == 0) {
        if ((int)uStack_110 == 0x62697473) {
          uVar5 = *puVar2;
          puVar6 = puVar2 + 6;
          puVar2[5] = uStack_e0;
          if ((*(byte *)(local_78 + 1) & 1) == 0) {
            FT_Bitmap_Init(puVar6);
            iVar1 = FT_Bitmap_Copy(uVar5,&local_108,puVar6);
            if (iVar1 != 0) goto LAB_00e87278;
          }
          else {
            puVar2[10] = local_e8;
            puVar2[7] = uStack_100;
            *puVar6 = local_108;
            puVar2[9] = uStack_f0;
            puVar2[8] = local_f8;
            *(uint *)(local_78 + 1) = *(uint *)(local_78 + 1) & 0xfffffffe;
          }
          uVar5 = puVar4[3];
          puVar2[4] = puVar4[4];
          puVar2[3] = uVar5;
          if (param_4 != '\0') {
            uVar5 = *(undefined8 *)*puVar4;
            if (*(code **)(puVar4[1] + 0x18) != (code *)0x0) {
              (**(code **)(puVar4[1] + 0x18))(puVar4);
            }
            FUN_00e139fc(uVar5,puVar4);
          }
          *param_1 = puVar2;
          return 0;
        }
        iVar1 = 0x12;
      }
LAB_00e87278:
      if (iVar1 != 0) {
        uVar5 = *(undefined8 *)*puVar2;
        if (*(code **)(puVar2[1] + 0x18) != (code *)0x0) {
          (**(code **)(puVar2[1] + 0x18))(puVar2);
        }
        FUN_00e139fc(uVar5,puVar2);
      }
      return iVar1;
    }
  }
  return 6;
}

