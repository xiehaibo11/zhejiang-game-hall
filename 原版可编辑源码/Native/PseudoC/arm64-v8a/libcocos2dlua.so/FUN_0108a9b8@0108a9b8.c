
undefined8 FUN_0108a9b8(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long local_c50;
  long local_c48;
  long local_c40;
  long local_c38;
  long lStack_c30;
  long local_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined1 auStack_bf8 [32];
  long local_bd8;
  undefined8 local_bb8;
  undefined8 local_ba8;
  byte local_b73;
  long local_b70;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  long local_120;
  
                    /* try { // try from 0108a9c0 to 0118a9e7 has its CatchHandler @ 0108afe8 */
  lVar6 = *(long *)(param_1 + 8);
                    /* try { // try from 0108a9e8 to 0118aa13 has its CatchHandler @ 0108a4c4 */
  if (param_3 < *(uint *)(lVar6 + 0x20)) {
    lVar8 = *(long *)(lVar6 + 0x100);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    if ((param_4 & 0x400) != 0) {
      param_4 = param_4 | 3;
    }
    uVar4 = 0;
                    /* try { // try from 0108aa14 to 0118aa27 has its CatchHandler @ 0108afa0 */
    puVar3 = (undefined2 *)(param_1 + 200);
    *puVar3 = 0;
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    if (((long)(int)param_4 & 1U) == 0) {
                    /* try { // try from 0108aa2c to 0118aa53 has its CatchHandler @ 0108afe4 */
      uVar4 = (param_4 >> 1 ^ 0xffffffff) & 1;
    }
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
                    /* try { // try from 0108aa54 to 0118aacb has its CatchHandler @ 0108a4c4 */
    uVar1 = (*(code *)**(undefined8 **)(lVar8 + 0x18))
                      (auStack_bf8,lVar6,param_2,param_1,0,0,uVar4,param_4 >> 0x10 & 0xf,
                       FUN_0108b070);
    if ((int)uVar1 == 0) {
      local_b73 = (byte)((ulong)(long)(int)param_4 >> 10) & 1;
      uVar1 = FUN_0108b070(auStack_bf8,param_3);
      if ((int)uVar1 == 0) {
        uStack_c18 = uStack_140;
        local_c20 = local_148;
        uStack_c08 = uStack_130;
        local_c10 = local_138;
        (**(code **)(*(long *)(lVar8 + 0x18) + 8))(auStack_bf8);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 1 | 4;
        if ((param_4 >> 10 & 1) == 0) {
                    /* try { // try from 0108aacc to 0118aadf has its CatchHandler @ 0108af9c */
          lVar8 = FT_RoundFix(local_ba8);
          *(long *)(param_1 + 0x50) = lVar8 >> 0x10;
          lVar8 = FT_RoundFix(local_ba8);
                    /* try { // try from 0108aae4 to 0118ab0b has its CatchHandler @ 0108afe0 */
          *(long *)(param_1 + 0x70) = lVar8 >> 0x10;
          *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
          lVar8 = *(long *)(lVar6 + 0x188);
          lVar6 = *(long *)(lVar6 + 0x178);
          *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
          lVar6 = lVar8 - lVar6 >> 0x10;
          *(long *)(param_1 + 0x68) = lVar6;
          *(long *)(param_1 + 0x78) = lVar6;
                    /* try { // try from 0108ab0c to 0118ab83 has its CatchHandler @ 0108a4c4 */
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
          }
          FT_Outline_Transform(puVar3,&local_c20);
          FT_Outline_Translate(puVar3,local_128,local_120);
          local_c50 = *(long *)(param_1 + 0x50);
          local_c48 = 0;
          FT_Vector_Transform(&local_c50,&local_c20);
          *(long *)(param_1 + 0x50) = local_c50 + local_128;
          local_c48 = *(long *)(param_1 + 0x68);
          local_c50 = 0;
          FT_Vector_Transform(&local_c50,&local_c20);
          *(long *)(param_1 + 0x68) = local_c48 + local_120;
          if ((param_4 & 1) == 0) {
                    /* try { // try from 0108ab84 to 0118ab97 has its CatchHandler @ 0108af98 */
            uVar1 = *(undefined8 *)(param_1 + 0x138);
            uVar9 = *(undefined8 *)(param_1 + 0x140);
            puVar7 = *(undefined8 **)(local_bd8 + 8);
                    /* try { // try from 0108ab9c to 0118abc3 has its CatchHandler @ 0108afdc */
            if (((uVar4 == 0) || (local_b70 == 0)) && (0 < *(short *)(local_bd8 + 2))) {
              iVar5 = *(short *)(local_bd8 + 2) + 1;
              do {
                uVar2 = FT_MulFix(*puVar7,uVar1);
                *puVar7 = uVar2;
                    /* try { // try from 0108abc4 to 0118ac3b has its CatchHandler @ 0108a4c4 */
                uVar2 = FT_MulFix(puVar7[1],uVar9);
                iVar5 = iVar5 + -1;
                puVar7[1] = uVar2;
                puVar7 = puVar7 + 2;
              } while (1 < iVar5);
            }
            uVar1 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar1);
            *(undefined8 *)(param_1 + 0x50) = uVar1;
            uVar1 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar9);
            *(undefined8 *)(param_1 + 0x68) = uVar1;
          }
          FT_Outline_Get_CBox(puVar3,&local_c40);
          *(long *)(param_1 + 0x30) = lStack_c30 - local_c40;
          *(long *)(param_1 + 0x38) = local_c28 - local_c38;
          *(long *)(param_1 + 0x40) = local_c40;
          *(long *)(param_1 + 0x48) = local_c28;
          if ((param_4 >> 4 & 1) != 0) {
                    /* try { // try from 0108ac3c to 0118ac4f has its CatchHandler @ 0108af94 */
            ft_synthesize_vertical_metrics(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
          }
          uVar1 = 0;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x128);
          lVar6 = FT_RoundFix(local_bb8);
                    /* try { // try from 0108ac7c to 0118acf3 has its CatchHandler @ 0108a4c4 */
          *(long *)(param_1 + 0x40) = lVar6 >> 0x10;
          lVar6 = FT_RoundFix(local_ba8);
          *(long *)(param_1 + 0x50) = lVar6 >> 0x10;
          uVar1 = 0;
          *(undefined8 *)(lVar8 + 0x28) = uStack_c08;
          *(undefined8 *)(lVar8 + 0x20) = local_c10;
          *(long *)(lVar8 + 0x30) = local_128;
          *(long *)(lVar8 + 0x38) = local_120;
          *(undefined1 *)(lVar8 + 0xc) = 1;
          *(undefined8 *)(lVar8 + 0x18) = uStack_c18;
          *(undefined8 *)(lVar8 + 0x10) = local_c20;
        }
      }
    }
  }
  else {
    uVar1 = 6;
  }
                    /* try { // try from 0108ac54 to 0118ac7b has its CatchHandler @ 0108afd8 */
  return uVar1;
}

