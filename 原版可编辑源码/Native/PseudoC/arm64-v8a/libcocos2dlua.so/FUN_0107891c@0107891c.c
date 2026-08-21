
int FUN_0107891c(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long local_c60;
  long local_c58;
  long local_c50;
  long local_c48;
  long lStack_c40;
  long local_c38;
  undefined8 local_c30;
  int local_c28;
  long local_c20;
  long lStack_c18;
  long local_c10;
  long lStack_c08;
  undefined1 auStack_bf8 [32];
  long local_bd8;
  undefined8 local_bb8;
  undefined8 local_ba8;
  undefined8 local_ba0;
  byte local_b73;
  long local_b70;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long local_120;
  undefined8 local_70;
  undefined4 local_68;
  
                    /* try { // try from 01078928 to 0117892f has its CatchHandler @ 010789a0 */
  lVar7 = *(long *)(param_1 + 8);
                    /* try { // try from 0107894c to 01178973 has its CatchHandler @ 01078988 */
  puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x308) + 0x18);
  if ((param_3 < *(uint *)(lVar7 + 0x20)) || (*(long *)(*(long *)(lVar7 + 0xf0) + 0x60) != 0)) {
                    /* try { // try from 01078974 to 011789b3 has its CatchHandler @ 010788f4 */
    if ((param_4 & 0x400) != 0) {
      param_4 = param_4 | 3;
    }
    if (param_2 == 0) {
      uVar6 = 0x10000;
      *(undefined8 *)(param_1 + 0x140) = 0x10000;
    }
    else {
                    /* catch() { ... } // from try @ 0107894c with catch @ 01078988 */
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
    }
                    /* catch() { ... } // from try @ 01078928 with catch @ 010789a0 */
    *(undefined8 *)(param_1 + 0x148) = uVar6;
    puVar8 = (undefined2 *)(param_1 + 200);
    *puVar8 = 0;
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
                    /* try { // try from 010789b4 to 01178a07 has its CatchHandler @ 010789b4
                       catch() { ... } // from try @ 010789b4 with catch @ 010789b4
                       catch() { ... } // from try @ 01078a34 with catch @ 010789b4 */
    uVar10 = (ulong)(int)param_4;
    iVar2 = (*(code *)*puVar11)(auStack_bf8,lVar7,param_2,param_1,*(undefined8 *)(lVar7 + 0x280),
                                *(undefined8 *)(lVar7 + 0x348),(uVar10 & 3) == 0,
                                param_4 >> 0x10 & 0xf,FUN_0107c454);
    if (iVar2 == 0) {
      local_b73 = (byte)(uVar10 >> 10) & 1;
      local_15c = *(undefined4 *)(lVar7 + 0x260);
                    /* try { // try from 01078a08 to 01178a33 has its CatchHandler @ 01078a44 */
      uStack_150 = *(undefined8 *)(lVar7 + 0x270);
      local_158 = *(undefined8 *)(lVar7 + 0x268);
      local_70 = *(undefined8 *)(lVar7 + 0x360);
      local_68 = *(undefined4 *)(lVar7 + 0x358);
      iVar2 = FUN_0107c4ac(auStack_bf8,param_3,&local_c30);
                    /* try { // try from 01078a34 to 01178a5f has its CatchHandler @ 010789b4 */
      if (iVar2 == 0) {
        lStack_c18 = lStack_140;
        local_c20 = local_148;
        lStack_c08 = lStack_130;
        local_c10 = local_138;
        (*(code *)puVar11[1])(auStack_bf8);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 1 | 4;
        if ((param_4 >> 10 & 1) == 0) {
          lVar3 = FT_RoundFix(local_ba8);
          *(long *)(param_1 + 0x50) = lVar3 >> 0x10;
          lVar3 = FT_RoundFix(local_ba8);
          *(long *)(param_1 + 0x70) = lVar3 >> 0x10;
          *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
          if ((param_4 >> 4 & 1) == 0) {
            lVar3 = FT_RoundFix(local_ba0);
                    /* try { // try from 01078b1c to 01178bb7 has its CatchHandler @ 01078b1c
                       catch(type#1 @ 00000000) { ... } // from try @ 01078b1c with catch @ 01078b1c
                       catch(type#1 @ 00000000) { ... } // from try @ 01078c30 with catch @ 01078b1c
                        */
            *(long *)(param_1 + 0x68) = lVar3 >> 0x10;
            lVar3 = FT_RoundFix(local_ba0);
            lVar3 = lVar3 >> 0x10;
          }
          else {
            lVar3 = *(long *)(lVar7 + 0x2e8) - *(long *)(lVar7 + 0x2d8) >> 0x10;
            *(long *)(param_1 + 0x68) = lVar3;
          }
          *(long *)(param_1 + 0x78) = lVar3;
          *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
          }
          if ((((local_c20 != 0x10000) || (lStack_c08 != 0x10000)) || (lStack_c18 != 0)) ||
             (local_c10 != 0)) {
            FT_Outline_Transform(puVar8,&local_c20);
          }
          if (local_120 != 0 || local_128 != 0) {
            FT_Outline_Translate(puVar8,local_128,local_120);
          }
          local_c60 = *(long *)(param_1 + 0x50);
          local_c58 = 0;
          FT_Vector_Transform(&local_c60,&local_c20);
                    /* try { // try from 01078bb8 to 01178bbf has its CatchHandler @ 01078ce8 */
          *(long *)(param_1 + 0x50) = local_c60 + local_128;
          local_c58 = *(long *)(param_1 + 0x68);
          local_c60 = 0;
          FT_Vector_Transform(&local_c60,&local_c20);
          *(long *)(param_1 + 0x68) = local_c58 + local_120;
          if ((uVar10 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x140);
            uVar1 = *(undefined8 *)(param_1 + 0x148);
            puVar11 = *(undefined8 **)(local_bd8 + 8);
            if ((((uVar10 & 3) != 0) || (local_b70 == 0)) && (0 < *(short *)(local_bd8 + 2))) {
              iVar2 = *(short *)(local_bd8 + 2) + 1;
              do {
                uVar4 = FT_MulFix(*puVar11,uVar6);
                    /* try { // try from 01078c10 to 01178c13 has its CatchHandler @ 01078cb0 */
                *puVar11 = uVar4;
                    /* try { // try from 01078c20 to 01178c2f has its CatchHandler @ 01078cb4 */
                uVar4 = FT_MulFix(puVar11[1],uVar1);
                iVar2 = iVar2 + -1;
                puVar11[1] = uVar4;
                    /* try { // try from 01078c30 to 01178d23 has its CatchHandler @ 01078b1c */
                puVar11 = puVar11 + 2;
              } while (1 < iVar2);
            }
            uVar6 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar6);
            *(undefined8 *)(param_1 + 0x50) = uVar6;
            uVar6 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar1);
            *(undefined8 *)(param_1 + 0x68) = uVar6;
          }
          FT_Outline_Get_CBox(puVar8,&local_c50);
          *(long *)(param_1 + 0x30) = lStack_c40 - local_c50;
          *(long *)(param_1 + 0x38) = local_c38 - local_c48;
          *(long *)(param_1 + 0x40) = local_c50;
          *(long *)(param_1 + 0x48) = local_c38;
          if ((param_4 >> 4 & 1) != 0) {
            ft_synthesize_vertical_metrics(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
          }
        }
        else {
          lVar9 = *(long *)(param_1 + 0x128);
          lVar3 = FT_RoundFix(local_bb8);
          *(long *)(param_1 + 0x40) = lVar3 >> 0x10;
          lVar3 = FT_RoundFix(local_ba8);
          *(long *)(param_1 + 0x50) = lVar3 >> 0x10;
          *(long *)(lVar9 + 0x28) = lStack_c08;
          *(long *)(lVar9 + 0x20) = local_c10;
          *(long *)(lVar9 + 0x30) = local_128;
          *(long *)(lVar9 + 0x38) = local_120;
          *(undefined1 *)(lVar9 + 0xc) = 1;
          *(long *)(lVar9 + 0x18) = lStack_c18;
          *(long *)(lVar9 + 0x10) = local_c20;
        }
        *(undefined8 *)(param_1 + 0x100) = local_c30;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078c10 with catch @ 01078cb0
                        */
        *(long *)(param_1 + 0x108) = (long)local_c28;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078c20 with catch @ 01078cb4
                        */
        plVar5 = *(long **)(*(long *)(lVar7 + 0xf0) + 0x60);
        if (plVar5 == (long *)0x0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(*plVar5 + 8))(plVar5[1],&local_c30);
          iVar2 = 0;
          *(undefined8 *)(param_1 + 0x100) = 0;
          *(undefined8 *)(param_1 + 0x108) = 0;
        }
      }
      else {
                    /* catch() { ... } // from try @ 01078a08 with catch @ 01078a44 */
        (*(code *)puVar11[1])(auStack_bf8);
      }
    }
  }
  else {
    iVar2 = 6;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078bb8 with catch @ 01078ce8
                        */
  return iVar2;
}

