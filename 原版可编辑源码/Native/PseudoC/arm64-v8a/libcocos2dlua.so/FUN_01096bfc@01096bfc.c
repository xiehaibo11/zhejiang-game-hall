
void FUN_01096bfc(long *param_1,byte *param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  int local_8c;
  byte local_88 [32];
  long local_68;
  
                    /* try { // try from 01096bfc to 01196cb3 has its CatchHandler @ 01096bfc
                       catch() { ... } // from try @ 01096bfc with catch @ 01096bfc
                       catch() { ... } // from try @ 01096d50 with catch @ 01096bfc
                       catch() { ... } // from try @ 01097090 with catch @ 01096bfc
                       catch() { ... } // from try @ 010970c0 with catch @ 01096bfc */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  param_1[2] = 0;
  if (param_1[1] != 0) {
    *(undefined **)*param_1 = &DAT_0145ff69;
    *(undefined **)(*param_1 + 8) = &DAT_0145ff69;
    *(undefined **)(*param_1 + 0x10) = &DAT_0145ff69;
    *(undefined **)(*param_1 + 0x18) = &DAT_0145ff69;
    *(undefined **)(*param_1 + 0x20) = &DAT_0145ff69;
  }
  if ((param_4 == 0) || (uVar9 = (uint)*param_3, *param_3 == 0)) {
    iVar6 = 0;
  }
  else if ((param_2 == (byte *)0x0) || (uVar11 = (uint)*param_2, *param_2 == 0)) {
    iVar6 = 6;
  }
  else {
    bVar5 = false;
    local_88[0x18] = 0;
    local_88[0x19] = 0;
    local_88[0x1a] = 0;
    local_88[0x1b] = 0;
    local_88[0x1c] = 0;
    local_88[0x1d] = 0;
    local_88[0x1e] = 0;
    local_88[0x1f] = 0;
    local_88[0x10] = 0;
    local_88[0x11] = 0;
    local_88[0x12] = 0;
    local_88[0x13] = 0;
    local_88[0x14] = 0;
    local_88[0x15] = 0;
    local_88[0x16] = 0;
    local_88[0x17] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    while( true ) {
      while (uVar11 == 0x2b) {
                    /* try { // try from 01096cd8 to 01196cdf has its CatchHandler @ 01097124 */
        if (param_2[1] != 0) goto LAB_01096ca0;
        bVar5 = true;
        param_2 = param_2 + 1;
        uVar11 = 0;
      }
      if (uVar11 == 0) break;
LAB_01096ca0:
                    /* try { // try from 01096cb4 to 01196cbb has its CatchHandler @ 01097128 */
      local_88[uVar11 >> 3] = (byte)(1 << (ulong)(uVar11 & 7)) | local_88[uVar11 >> 3];
      uVar11 = (uint)param_2[1];
      param_2 = param_2 + 1;
    }
                    /* try { // try from 01096cfc to 01196d03 has its CatchHandler @ 01097110 */
    if (param_4 < 1) {
      uVar11 = 0;
    }
    else {
      pbVar2 = param_3 + param_4;
      uVar11 = 0;
      if (bVar5) {
        do {
          pbVar12 = param_3;
          if (uVar9 == 0) break;
          do {
                    /* try { // try from 01096d3c to 01196d4f has its CatchHandler @ 01097198 */
            if ((1 << (ulong)(uVar9 & 7) & (uint)local_88[uVar9 >> 3]) != 0) break;
            pbVar12 = pbVar12 + 1;
            uVar9 = (uint)*pbVar12;
          } while (uVar9 != 0);
                    /* try { // try from 01096d50 to 01196d8f has its CatchHandler @ 01096bfc */
          uVar8 = param_1[2];
          if ((uVar8 == param_1[1]) && (local_8c = 0, uVar8 != 0xffffffffffffffff)) {
            if (uVar8 == 0xfffffff) goto LAB_01096f3c;
            uVar1 = uVar8 + (uVar8 >> 1) + 5;
            uVar3 = 0xfffffff;
            if (uVar1 >> 0x1c == 0 && uVar8 <= uVar1) {
              uVar3 = uVar1;
            }
                    /* try { // try from 01096d90 to 01196d97 has its CatchHandler @ 0109710c */
            lVar7 = ft_mem_realloc(param_1[3],8,uVar8,uVar3,*param_1,&local_8c);
            *param_1 = lVar7;
            iVar6 = local_8c;
            if (local_8c != 0) goto LAB_01096fc0;
            uVar8 = param_1[2];
            param_1[1] = uVar3;
          }
                    /* try { // try from 01096dbc to 01196dc3 has its CatchHandler @ 0109717c */
          if (pbVar12 <= param_3) {
            param_3 = &DAT_0145ff69;
          }
                    /* try { // try from 01096dc4 to 01196dcf has its CatchHandler @ 01097164 */
          param_1[2] = uVar8 + 1;
          *(byte **)(*param_1 + uVar8 * 8) = param_3;
          uVar9 = (uint)*pbVar12;
          param_3 = pbVar12;
          if (uVar9 == 0) {
            uVar11 = 0;
          }
          else {
            do {
              if ((1 << (ulong)(uVar9 & 7) & (uint)local_88[uVar9 >> 3]) == 0) break;
              *param_3 = 0;
              param_3 = param_3 + 1;
              uVar9 = (uint)*param_3;
            } while (uVar9 != 0);
                    /* try { // try from 01096e0c to 01196e13 has its CatchHandler @ 01097160 */
            uVar11 = (uint)(pbVar12 < param_3 && uVar9 == 0);
                    /* try { // try from 01096e14 to 01196e1f has its CatchHandler @ 0109715c */
          }
        } while (param_3 < pbVar2);
      }
      else {
        do {
          uVar8 = (ulong)uVar9;
          pbVar12 = param_3;
          if (uVar9 == 0) break;
          do {
            if ((1 << (ulong)((uint)uVar8 & 7) & (uint)local_88[uVar8 >> 3]) != 0) break;
            pbVar12 = pbVar12 + 1;
            uVar8 = (ulong)*pbVar12;
          } while (*pbVar12 != 0);
          uVar8 = param_1[2];
                    /* try { // try from 01096e5c to 01196e63 has its CatchHandler @ 01097158 */
                    /* try { // try from 01096e64 to 01196e6f has its CatchHandler @ 01097154 */
          if ((uVar8 == param_1[1]) && (local_8c = 0, uVar8 != 0xffffffffffffffff)) {
            if (uVar8 == 0xfffffff) goto LAB_01096f3c;
            uVar1 = uVar8 + (uVar8 >> 1) + 5;
            uVar3 = 0xfffffff;
            if (uVar1 >> 0x1c == 0 && uVar8 <= uVar1) {
              uVar3 = uVar1;
            }
            lVar7 = ft_mem_realloc(param_1[3],8,uVar8,uVar3,*param_1,&local_8c);
            *param_1 = lVar7;
                    /* try { // try from 01096eac to 01196eb3 has its CatchHandler @ 01097150 */
            iVar6 = local_8c;
            if (local_8c != 0) goto LAB_01096fc0;
                    /* try { // try from 01096eb4 to 01196ebf has its CatchHandler @ 0109714c */
            uVar8 = param_1[2];
            param_1[1] = uVar3;
          }
          if (pbVar12 <= param_3) {
            param_3 = &DAT_0145ff69;
          }
          param_1[2] = uVar8 + 1;
          *(byte **)(*param_1 + uVar8 * 8) = param_3;
          if (*pbVar12 == 0) {
            uVar11 = 0;
            uVar9 = 0;
            param_3 = pbVar12;
          }
          else {
            uVar9 = (uint)pbVar12[1];
            *pbVar12 = 0;
            uVar11 = (uint)(uVar9 == 0);
            param_3 = pbVar12 + 1;
          }
                    /* try { // try from 01096efc to 01196f03 has its CatchHandler @ 01097148 */
                    /* try { // try from 01096f04 to 01196f0f has its CatchHandler @ 01097144 */
        } while (param_3 < pbVar2);
      }
    }
    uVar8 = param_1[1];
    if ((uVar8 <= param_1[2] + (ulong)uVar11) &&
       (local_8c = 0, uVar8 < param_1[2] + (ulong)uVar11 + 1)) {
      if (uVar8 == 0xfffffff) {
LAB_01096f3c:
        local_8c = 0x40;
        iVar6 = 0x40;
        goto LAB_01096fc0;
      }
                    /* try { // try from 01096f4c to 01196f53 has its CatchHandler @ 01097140 */
      uVar1 = uVar8 + (uVar8 >> 1) + 5;
                    /* try { // try from 01096f54 to 01196f5f has its CatchHandler @ 0109713c */
      uVar3 = 0xfffffff;
      if (uVar1 >> 0x1c == 0 && uVar8 <= uVar1) {
        uVar3 = uVar1;
      }
      lVar7 = ft_mem_realloc(param_1[3],8,uVar8,uVar3,*param_1,&local_8c);
      *param_1 = lVar7;
      iVar6 = local_8c;
      if (local_8c != 0) goto LAB_01096fc0;
      param_1[1] = uVar3;
    }
    if (uVar11 == 0) {
      lVar7 = param_1[2];
    }
    else {
      lVar10 = param_1[2];
                    /* try { // try from 01096f9c to 01196fa3 has its CatchHandler @ 01097138 */
      lVar7 = lVar10 + 1;
                    /* try { // try from 01096fa4 to 01196faf has its CatchHandler @ 01097134 */
      param_1[2] = lVar7;
      *(undefined **)(*param_1 + lVar10 * 8) = &DAT_0145ff69;
    }
    *(undefined8 *)(*param_1 + lVar7 * 8) = 0;
    iVar6 = 0;
  }
LAB_01096fc0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 01096fec to 01196ff3 has its CatchHandler @ 01097130 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}

