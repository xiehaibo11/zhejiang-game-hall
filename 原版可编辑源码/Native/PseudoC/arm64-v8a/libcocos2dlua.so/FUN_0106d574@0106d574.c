
undefined8 FUN_0106d574(long param_1,long param_2,uint param_3,uint param_4)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  short *psVar10;
  undefined8 uVar11;
  long lVar12;
  ushort local_210;
  ushort uStack_20e;
  short sStack_20c;
  short sStack_20a;
  ushort local_208;
  short local_206;
  short local_204;
  ushort local_202;
  long local_200;
  long local_1f8;
  byte local_1f0;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  int local_1a8;
  long local_1a0;
  long local_190;
  long local_f8;
  int local_d4;
  long local_c8;
  long local_b8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 == 0) {
    return 0x24;
  }
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    return 0x23;
  }
  if ((*(uint *)(lVar4 + 0x20) <= param_3) && (*(long *)(*(long *)(lVar4 + 0xf0) + 0x60) == 0)) {
    return 6;
  }
  if ((param_4 >> 1 & 1) != 0) {
    if ((*(byte *)(lVar4 + 0x11) & 0x20) != 0) {
      param_4 = param_4 & 0xfffffffd;
    }
    param_4 = param_4 >> 0xe & 2 | param_4;
  }
  if ((param_4 & 0x401) != 0) {
    param_4 = *(uint *)(lVar4 + 0x10) >> 0xc & 2 ^ 0xb | param_4;
  }
  if ((((param_4 >> 3 & 1) == 0) && (*(long *)(param_2 + 0xe0) != 0xffffffff)) &&
     (uVar5 = (**(code **)(*(long *)(lVar4 + 0x360) + 0x90))
                        (lVar4,*(long *)(param_2 + 0xe0),param_3,param_4,
                         *(undefined8 *)(lVar4 + 0xc0),param_1 + 0x98,&local_210), (int)uVar5 == 0))
  {
    *(undefined4 *)(param_1 + 200) = 0;
    bVar2 = (param_4 & 0x10) != 0;
    *(ulong *)(param_1 + 0x30) = (ulong)uStack_20e << 6;
    *(ulong *)(param_1 + 0x38) = (ulong)local_210 << 6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d364 with catch @ 0106d738
                        */
    *(long *)(param_1 + 0x40) = (long)sStack_20c << 6;
    *(long *)(param_1 + 0x48) = (long)sStack_20a << 6;
    *(ulong *)(param_1 + 0x50) = (ulong)local_208 << 6;
    *(long *)(param_1 + 0x58) = (long)local_206 << 6;
    if (bVar2) {
      sStack_20c = local_206;
    }
    *(long *)(param_1 + 0x60) = (long)local_204 << 6;
    if (bVar2) {
      sStack_20a = local_204;
    }
    *(undefined4 *)(param_1 + 0x90) = 0x62697473;
    *(ulong *)(param_1 + 0x68) = (ulong)local_202 << 6;
    *(int *)(param_1 + 0xc0) = (int)sStack_20c;
    *(int *)(param_1 + 0xc4) = (int)sStack_20a;
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) != 0) {
                    /* try { // try from 0106d7a4 to 0116d83b has its CatchHandler @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d7a4 with catch @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d844 with catch @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d92c with catch @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106da24 with catch @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106da8c with catch @ 0106d7a4
                       catch(type#1 @ 00000000) { ... } // from try @ 0106dba8 with catch @ 0106d7a4
                        */
      FUN_010743dc(&local_210,param_2,param_1,param_4,1);
      FUN_01074aa4(&local_210,param_3,0,1);
      *(long *)(param_1 + 0x70) = (long)local_1a8;
      *(long *)(param_1 + 0x78) = (long)local_d4;
      if ((local_1a8 != 0) && (*(long *)(param_1 + 0x50) == 0)) {
        uVar5 = FT_MulFix((long)local_1a8,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_1 + 0x50) = uVar5;
      }
      if (*(long *)(param_1 + 0x68) == 0) {
        if (*(long *)(param_1 + 0x78) != 0) {
          uVar5 = FT_MulFix(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x28));
          *(undefined8 *)(param_1 + 0x68) = uVar5;
          return 0;
        }
        return 0;
      }
      return 0;
    }
    return uVar5;
  }
                    /* try { // try from 0106d650 to 0116d657 has its CatchHandler @ 0106d688 */
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + 0xd8) == '\0')) {
    return 0x24;
  }
                    /* try { // try from 0106d658 to 0116d65f has its CatchHandler @ 0106d680 */
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
                    /* try { // try from 0106d660 to 0116d663 has its CatchHandler @ 0106d670 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d524 with catch @ 0106d664
                       try { // try from 0106d664 to 0116d7a3 has its CatchHandler @ 0106d260 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d444 with catch @ 0106d668
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d35c with catch @ 0106d66c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d4d8 with catch @ 0106d670
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d660 with catch @ 0106d670
                        */
  uVar5 = FUN_010743dc(&local_210,param_2,param_1,param_4,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d3e0 with catch @ 0106d680
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d658 with catch @ 0106d680
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d2f8 with catch @ 0106d688
                       catch(type#1 @ 00000000) { ... } // from try @ 0106d650 with catch @ 0106d688
                        */
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d52c with catch @ 0106d698
                        */
  *(undefined4 *)(param_1 + 0xe8) = 0;
  uVar5 = FUN_01074aa4(&local_210,param_3,0,0);
  if ((int)uVar5 != 0) goto LAB_0106dab0;
  lVar4 = local_200;
  if (*(int *)(param_1 + 0x90) == 0x636f6d70) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(local_1f8 + 0x50);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(local_1f8 + 0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106d450 with catch @ 0106d6cc
                        */
  }
  else {
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_1f8 + 0x38);
    uVar5 = *(undefined8 *)(local_1f8 + 0x28);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(local_1f8 + 0x30);
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    uVar5 = *(undefined8 *)(local_1f8 + 0x18);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(local_1f8 + 0x20);
    *(undefined8 *)(param_1 + 200) = uVar5;
                    /* try { // try from 0106d83c to 0116d843 has its CatchHandler @ 0106dbcc */
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfffffdff;
                    /* try { // try from 0106d844 to 0116d89f has its CatchHandler @ 0106d7a4 */
    if (local_1a0 != 0) {
      FT_Outline_Translate((undefined8 *)(param_1 + 200),-local_1a0,0);
      lVar4 = local_200;
    }
  }
  if ((param_4 >> 1 & 1) == 0) {
    if (*(char *)(local_f8 + 0x25d) == '\0') {
switchD_0106d888_caseD_2:
      uVar7 = 8;
    }
    else {
      uVar7 = 0x20;
      switch(*(undefined4 *)(local_f8 + 0x260)) {
      case 0:
        break;
      case 1:
        goto switchD_0106d888_caseD_1;
      default:
        goto switchD_0106d888_caseD_2;
      case 4:
        uVar7 = 0x30;
        break;
      case 5:
        uVar7 = 0x10;
      }
    }
                    /* try { // try from 0106d8a0 to 0116d8a7 has its CatchHandler @ 0106dbb0 */
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar7;
  }
switchD_0106d888_caseD_1:
  lVar8 = CONCAT26(sStack_20a,CONCAT24(sStack_20c,CONCAT22(uStack_20e,local_210)));
  lVar12 = CONCAT26(local_202,CONCAT24(local_204,CONCAT22(local_206,local_208)));
                    /* try { // try from 0106d8a8 to 0116d8ab has its CatchHandler @ 0106dc7c */
  if ((local_1f0 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar12 + 0x28);
  }
  else {
    uVar11 = 0x10000;
  }
  if (*(int *)(lVar4 + 0x90) != 0x636f6d70) {
    FT_Outline_Get_CBox(lVar4 + 200,&local_80);
    local_1d0 = local_80;
    lStack_1c8 = lStack_78;
    lStack_1c0 = local_70;
    lStack_1b8 = local_68;
  }
  local_68 = lStack_1b8;
  local_70 = lStack_1c0;
  lStack_78 = lStack_1c8;
  local_80 = local_1d0;
  *(long *)(lVar4 + 0x70) = (long)local_1a8;
  *(long *)(lVar4 + 0x40) = local_80;
  *(long *)(lVar4 + 0x48) = local_68;
  *(long *)(lVar4 + 0x50) = local_190 - local_1a0;
  if (((*(long *)(lVar8 + 0x2f8) == 0) && ((local_1f0 >> 1 & 1) == 0)) &&
     (*(uint *)(lVar8 + 0x498) != 0)) {
                    /* try { // try from 0106d924 to 0116d92b has its CatchHandler @ 0106dbc4 */
                    /* try { // try from 0106d92c to 0116d987 has its CatchHandler @ 0106d7a4 */
    uVar7 = 0;
    do {
      if ((ushort)*(byte *)(*(long *)(lVar8 + 0x4a8) + (ulong)uVar7) == *(ushort *)(lVar12 + 0x18))
      {
        if ((ulong)(param_3 + 2) < *(ulong *)(lVar8 + 0x4a0)) {
          *(ulong *)(lVar4 + 0x50) =
               (ulong)*(byte *)(*(long *)(lVar8 + 0x488) + 8 +
                                *(ulong *)(lVar8 + 0x4a0) * (ulong)uVar7 + (ulong)(param_3 + 2)) <<
               6;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(lVar8 + 0x498));
  }
  *(long *)(lVar4 + 0x30) = local_70 - local_80;
                    /* try { // try from 0106d988 to 0116d98f has its CatchHandler @ 0106dbac */
  *(long *)(lVar4 + 0x38) = local_68 - lStack_78;
                    /* try { // try from 0106d994 to 0116d99b has its CatchHandler @ 0106dc10 */
  if ((*(char *)(lVar8 + 0x1f0) == '\0') || (*(short *)(lVar8 + 0x21e) == 0)) {
    sVar3 = FT_DivFix(local_68 - lStack_78,uVar11);
    if (*(short *)(lVar8 + 600) == -1) {
      sVar1 = *(short *)(lVar8 + 0x198);
      psVar10 = (short *)(lVar8 + 0x19a);
    }
    else {
      sVar1 = *(short *)(lVar8 + 0x2b2);
      psVar10 = (short *)(lVar8 + 0x2b4);
    }
    uVar6 = (long)sVar1 - (long)*psVar10;
    lVar12 = uVar6 - (long)sVar3;
    if (lVar12 < 0) {
      lVar12 = lVar12 + 1;
    }
                    /* try { // try from 0106da1c to 0116da23 has its CatchHandler @ 0106dbb4 */
    lVar12 = lVar12 >> 1;
  }
  else {
    sVar3 = FT_DivFix(local_c8 - local_68,uVar11);
    lVar12 = (long)sVar3;
    if (local_c8 - local_b8 == 0 || local_c8 < local_b8) {
                    /* try { // try from 0106da24 to 0116da67 has its CatchHandler @ 0106d7a4 */
      uVar6 = 0;
    }
    else {
      uVar6 = FT_DivFix(local_c8 - local_b8,uVar11);
      uVar6 = uVar6 & 0xffff;
    }
  }
  plVar9 = *(long **)(*(long *)(lVar8 + 0xf0) + 0x60);
  if ((plVar9 != (long *)0x0) && (*(code **)(*plVar9 + 0x10) != (code *)0x0)) {
    local_a0 = 0;
    local_98 = lVar12;
    local_90 = uVar6;
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9[1],param_3,1,&local_a0);
    lVar12 = local_98;
    uVar6 = local_90;
    if ((int)uVar5 != 0) goto LAB_0106dab0;
  }
  *(ulong *)(lVar4 + 0x78) = uVar6;
                    /* try { // try from 0106da68 to 0116da6b has its CatchHandler @ 0106dba8 */
  if ((local_1f0 & 1) == 0) {
                    /* try { // try from 0106da70 to 0116da8b has its CatchHandler @ 0106dbdc */
    lVar12 = FT_MulFix(lVar12,uVar11);
    uVar6 = FT_MulFix(uVar6,uVar11);
                    /* try { // try from 0106da8c to 0116db93 has its CatchHandler @ 0106d7a4 */
  }
  lVar8 = *(long *)(lVar4 + 0x50);
  uVar5 = 0;
  *(ulong *)(lVar4 + 0x68) = uVar6;
  if (lVar8 < 0) {
    lVar8 = lVar8 + 1;
  }
  *(long *)(lVar4 + 0x58) = *(long *)(lVar4 + 0x40) - (lVar8 >> 1);
  *(long *)(lVar4 + 0x60) = lVar12;
LAB_0106dab0:
  if (((param_4 & 1) == 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
  }
  return uVar5;
}

