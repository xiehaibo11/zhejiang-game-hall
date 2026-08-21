
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011c63c(undefined8 *param_1,ulong *param_2,long param_3,ulong *param_4,undefined4 *param_5
                 )

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208 [64];
  long local_8;
  
  lVar19 = param_1[1];
  local_8 = ___stack_chk_guard;
  uVar18 = 1;
  uVar20 = *param_1;
  local_228 = 0;
  local_220 = 0;
  lVar8 = _Uaarch64_get_accessors(lVar19);
  uVar11 = *param_2;
  uVar10 = param_1[2];
  *param_5 = 0;
  log2Console(3,"Bugly-libunwind","len=%lu, pushing cfa=0x%lx\n",param_3,uVar10);
  local_208[0] = param_1[2];
  uVar23 = *param_2;
LAB_0011c71c:
  uVar17 = (uint)uVar18;
  if (uVar23 < param_3 + uVar11) {
LAB_0011c728:
    pcVar13 = *(code **)(lVar8 + 0x18);
    *param_2 = uVar23 + 1;
    uVar10 = (*pcVar13)(lVar19,uVar23 & 0xfffffffffffffff8,&local_210,0,uVar20);
    uVar21 = (uint)(local_210 >>
                   ((ulong)(uint)(((int)uVar23 - (int)(uVar23 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar10 < 0) goto LAB_0011c7a4;
    uVar22 = uVar21 & 0xff;
    bVar1 = (&DAT_00128380)[(int)uVar22];
    if ((bVar1 >> 6 != 0) &&
       ((uVar10 = FUN_0011bf48(lVar19,lVar8,param_2,bVar1 >> 3 & 7,&local_228,uVar20),
        (int)uVar10 < 0 ||
        ((bVar1 >> 6 != 1 &&
         (uVar10 = FUN_0011bf48(lVar19,lVar8,param_2,bVar1 & 7,&local_220,uVar20), (int)uVar10 < 0))
        )))) goto LAB_0011c7a4;
    uVar21 = uVar21 & 0xff;
    sVar7 = (short)local_228;
    switch(uVar22) {
    case 3:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      goto switchD_0011c7ec_caseD_3;
    default:
      log2Console(3,"Bugly-libunwind","Unexpected opcode 0x%x\n",uVar21);
      uVar10 = 0xfffffff8;
      goto LAB_0011c7a4;
    case 6:
      uVar17 = uVar17 - 1;
      log2Console(3,"Bugly-libunwind","OP_deref\n");
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar12 = local_208[uVar17];
      local_218 = uVar12 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12 & 0xfffffffffffffff8,&local_210,0,uVar20);
      uVar23 = local_210;
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar15 = local_218 & 0xfffffffffffffff8;
      iVar4 = (int)local_218;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
      uVar16 = local_218;
      uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar15) * 8) & 0x3f));
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar3 = (undefined1)
              (uVar23 >>
              ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (*(int *)(lVar19 + 0x40) == 0) {
        uVar5 = CONCAT11(uVar2,uVar3);
      }
      else {
        uVar5 = CONCAT11(uVar3,uVar2);
      }
      uVar12 = local_218 & 0xfffffffffffffff8;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
      uVar23 = local_210;
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar14 = local_218 & 0xfffffffffffffff8;
      iVar4 = (int)local_218;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar14,&local_210,0,uVar20);
      uVar15 = local_218;
      uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar16 - (int)uVar12) * 8) & 0x3f));
      if (*(int *)(lVar19 + 0x40) == 0) {
        uVar9 = CONCAT22(CONCAT11(uVar2,uVar3),uVar5);
      }
      else {
        uVar9 = CONCAT22(uVar5,CONCAT11(uVar3,uVar2));
      }
      uVar12 = local_218 & 0xfffffffffffffff8;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
      uVar23 = local_210;
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar14 = local_218 & 0xfffffffffffffff8;
      iVar4 = (int)local_218;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar14,&local_210,0,uVar20);
      uVar16 = local_218;
      uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar15 - (int)uVar12) * 8) & 0x3f));
      if (*(int *)(lVar19 + 0x40) == 0) {
        uVar5 = CONCAT11(uVar2,uVar3);
      }
      else {
        uVar5 = CONCAT11(uVar3,uVar2);
      }
      uVar12 = local_218 & 0xfffffffffffffff8;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
      uVar23 = local_210;
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar15 = local_218 & 0xfffffffffffffff8;
      iVar4 = (int)local_218;
      local_218 = local_218 + 1;
      uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
      uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar15) * 8) & 0x3f));
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
      uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar16 - (int)uVar12) * 8) & 0x3f));
      if (*(int *)(lVar19 + 0x40) == 0) {
        uVar23 = CONCAT44(CONCAT22(CONCAT11(uVar2,uVar3),uVar5),uVar9);
      }
      else {
        uVar23 = CONCAT44(uVar9,CONCAT22(uVar5,CONCAT11(uVar3,uVar2)));
      }
      local_208[uVar17] = uVar23;
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 9:
      if (((uint)local_228 >> 7 & 1) != 0) {
        local_228 = local_228 | 0xffffffffffffff00;
      }
      log2Console(3,"Bugly-libunwind","OP_const1s(%ld)\n");
      goto joined_r0x0011cc5c;
    case 0xb:
      if (((uint)local_228 >> 0xf & 1) != 0) {
        local_228 = local_228 | 0xffffffffffff0000;
      }
      log2Console(3,"Bugly-libunwind","OP_const2s(%ld)\n");
      if (uVar17 < 0x40) goto LAB_0011cc14;
      goto LAB_0011cc60;
    case 0xd:
      if ((int)(uint)local_228 < 0) {
        local_228 = local_228 | 0xffffffff00000000;
      }
      log2Console(3,"Bugly-libunwind","OP_const4s(%ld)\n");
joined_r0x0011cc5c:
      if (0x3f < uVar17) goto LAB_0011cc60;
LAB_0011cc14:
      uVar23 = *param_2;
      local_208[uVar18] = local_228;
      uVar18 = (ulong)(uVar17 + 1);
      goto LAB_0011c71c;
    case 0x12:
      log2Console(3,"Bugly-libunwind","OP_dup\n");
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar18 = (ulong)(uVar17 + 1);
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x13:
      uVar18 = (ulong)(uVar17 - 1);
      log2Console(3,"Bugly-libunwind","OP_drop\n");
      if (uVar17 - 1 < 0x40) goto LAB_0011ccc4;
      goto LAB_0011d6f4;
    case 0x14:
      log2Console(3,"Bugly-libunwind","OP_over\n");
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011cd7c;
LAB_0011ccf8:
      local_208[uVar18] = local_208[uVar21];
      uVar18 = (ulong)(uVar17 + 1);
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x15:
      log2Console(3,"Bugly-libunwind","OP_pick(%d)\n",(uint)local_228);
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar21 = uVar17 - (int)local_228;
      if (uVar21 < 0x40) goto LAB_0011ccf8;
LAB_0011cd7c:
      log2Console(3,"Bugly-libunwind","Out-of-stack pick\n");
      uVar10 = 0xfffffff8;
      goto LAB_0011c7a4;
    case 0x16:
      log2Console(3,"Bugly-libunwind","OP_swap\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar23 = local_208[uVar17];
      local_208[uVar17] = local_218;
      local_208[uVar21] = uVar23;
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x17:
      log2Console(3,"Bugly-libunwind","OP_rot\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar22 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar22) goto LAB_0011d6f4;
      uVar17 = uVar17 - 3;
      uVar23 = local_208[uVar22];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar12 = local_208[uVar17];
      local_208[uVar17] = local_218;
      local_208[uVar22] = uVar12;
      local_208[uVar21] = uVar23;
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x19:
      log2Console(3,"Bugly-libunwind","OP_abs\n");
      uVar17 = uVar17 - 1;
      if (0x3f < uVar17) goto LAB_0011d6f4;
      local_218 = local_208[uVar17];
      if ((long)local_218 < 0) {
        local_218 = -local_218;
      }
      local_208[uVar17] = local_218;
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x1a:
      log2Console(3,"Bugly-libunwind","OP_and\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] & local_218;
      goto LAB_0011c71c;
    case 0x1b:
      log2Console(3,"Bugly-libunwind","OP_div\n");
      if (0x3f < uVar17 - 1) goto LAB_0011d6f4;
      uVar18 = local_208[uVar17 - 1];
      local_218 = uVar18;
      if (0x3f < uVar17 - 2) goto LAB_0011d6f4;
      uVar23 = 0;
      if ((uVar18 != 0) && (uVar23 = 0, local_218 = uVar23, uVar18 != 0)) {
        uVar23 = (long)local_208[uVar17 - 2] / (long)uVar18;
        local_218 = uVar23;
      }
      break;
    case 0x1c:
      log2Console(3,"Bugly-libunwind","OP_minus\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_218 = local_208[uVar17] - local_208[uVar21];
      local_208[uVar17] = local_218;
      goto LAB_0011c71c;
    case 0x1d:
      log2Console(3,"Bugly-libunwind","OP_mod\n");
      if (0x3f < uVar17 - 1) goto LAB_0011d6f4;
      local_218 = local_208[uVar17 - 1];
      if (0x3f < uVar17 - 2) goto LAB_0011d6f4;
      uVar23 = 0;
      if (local_218 != 0) {
        uVar23 = 0;
        if (local_218 != 0) {
          uVar23 = local_208[uVar17 - 2] / local_218;
        }
        uVar23 = local_208[uVar17 - 2] - uVar23 * local_218;
        local_218 = uVar23;
      }
      break;
    case 0x1e:
      log2Console(3,"Bugly-libunwind","OP_mul\n");
      if (0x3f < uVar17 - 1) goto LAB_0011d6f4;
      local_218 = local_208[uVar17 - 1];
      if (0x3f < uVar17 - 2) goto LAB_0011d6f4;
      uVar23 = 0;
      if (local_218 != 0) {
        uVar23 = local_218 * local_208[uVar17 - 2];
        local_218 = uVar23;
      }
      break;
    case 0x1f:
      log2Console(3,"Bugly-libunwind","OP_neg\n");
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar23 = *param_2;
      local_208[uVar18] = -local_208[uVar18];
      goto LAB_0011c71c;
    case 0x20:
      log2Console(3,"Bugly-libunwind","OP_not\n");
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar23 = *param_2;
      local_208[uVar18] = ~local_208[uVar18];
      goto LAB_0011c71c;
    case 0x21:
      log2Console(3,"Bugly-libunwind","OP_or\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] | local_218;
      goto LAB_0011c71c;
    case 0x22:
      log2Console(3,"Bugly-libunwind","OP_plus\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] + local_218;
      goto LAB_0011c71c;
    case 0x23:
      log2Console(3,"Bugly-libunwind","OP_plus_uconst(%lu)\n",local_228);
      uVar17 = uVar17 - 1;
      if (0x3f < uVar17) goto LAB_0011d6f4;
      local_218 = local_208[uVar17];
      uVar23 = *param_2;
      local_208[uVar17] = local_218 + local_228;
      goto LAB_0011c71c;
    case 0x24:
      log2Console(3,"Bugly-libunwind","OP_shl\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] << (local_218 & 0x3f);
      goto LAB_0011c71c;
    case 0x25:
      log2Console(3,"Bugly-libunwind","OP_shr\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] >> (local_218 & 0x3f);
      goto LAB_0011c71c;
    case 0x26:
      log2Console(3,"Bugly-libunwind","OP_shra\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (long)local_208[uVar17] >> (local_218 & 0x3f);
      goto LAB_0011c71c;
    case 0x27:
      log2Console(3,"Bugly-libunwind","OP_xor\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = local_208[uVar17] ^ local_218;
      goto LAB_0011c71c;
    case 0x28:
      uVar18 = (ulong)(uVar17 - 1);
      log2Console(3,"Bugly-libunwind","OP_skip(%d)\n",(long)sVar7);
      if (0x3f < uVar17 - 1) goto LAB_0011d6f4;
      local_218 = local_208[uVar18];
      if (local_218 == 0) {
LAB_0011ccc4:
        uVar23 = *param_2;
      }
      else {
        uVar23 = (long)(short)local_228 + *param_2;
        *param_2 = uVar23;
      }
      goto LAB_0011c71c;
    case 0x29:
      log2Console(3,"Bugly-libunwind","OP_eq\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)(local_218 == local_208[uVar17]);
      goto LAB_0011c71c;
    case 0x2a:
      log2Console(3,"Bugly-libunwind","OP_ge\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)((long)local_218 <= (long)local_208[uVar17]);
      goto LAB_0011c71c;
    case 0x2b:
      log2Console(3,"Bugly-libunwind","OP_gt\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)((long)local_218 < (long)local_208[uVar17]);
      goto LAB_0011c71c;
    case 0x2c:
      log2Console(3,"Bugly-libunwind","OP_le\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)((long)local_208[uVar17] <= (long)local_218);
      goto LAB_0011c71c;
    case 0x2d:
      log2Console(3,"Bugly-libunwind","OP_lt\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)((long)local_208[uVar17] < (long)local_218);
      goto LAB_0011c71c;
    case 0x2e:
      log2Console(3,"Bugly-libunwind","OP_ne\n");
      uVar21 = uVar17 - 1;
      if (0x3f < uVar21) goto LAB_0011d6f4;
      uVar17 = uVar17 - 2;
      local_218 = local_208[uVar21];
      if (0x3f < uVar17) goto LAB_0011d6f4;
      uVar18 = (ulong)uVar21;
      uVar23 = *param_2;
      local_208[uVar17] = (ulong)(local_218 != local_208[uVar17]);
      goto LAB_0011c71c;
    case 0x2f:
      log2Console(3,"Bugly-libunwind","OP_skip(%d)\n",(long)sVar7);
      uVar23 = (long)(short)local_228 + *param_2;
      *param_2 = uVar23;
      goto LAB_0011c71c;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
      log2Console(3,"Bugly-libunwind","OP_lit(%d)\n",uVar21 - 0x30);
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar23 = *param_2;
      local_208[uVar18] = (long)(int)(uVar21 - 0x30);
      uVar18 = (ulong)(uVar17 + 1);
      goto LAB_0011c71c;
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar23 = (ulong)(int)(uVar21 - 0x50);
      log2Console(3,"Bugly-libunwind","OP_reg(r%d)\n",uVar21 - 0x50);
      if (0xaf < uVar21) {
        uVar23 = 0;
      }
      *param_4 = uVar23;
      *param_5 = 1;
      uVar10 = 0;
      goto LAB_0011c7a4;
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
      log2Console(3,"Bugly-libunwind","OP_breg(r%d,0x%lx)\n",uVar21 - 0x70,local_228);
      uVar10 = _Uaarch64_get_reg(param_1,uVar21 - 0x70,&local_218);
      puVar24 = &local_228;
      if (-1 < (int)uVar10) goto LAB_0011d5dc;
      goto LAB_0011c7a4;
    case 0x90:
      log2Console(3,"Bugly-libunwind","OP_regx(r%d)\n",(uint)local_228);
      uVar10 = 0;
      uVar23 = local_228;
      if (0x5f < local_228) {
        uVar23 = 0;
      }
      *param_4 = uVar23;
      *param_5 = 1;
      goto LAB_0011c7a4;
    case 0x92:
      log2Console(3,"Bugly-libunwind","OP_bregx(r%d,0x%lx)\n",(uint)local_228,local_220);
      uVar9 = (undefined4)local_228;
      if (0x5f < local_228) {
        uVar9 = 0;
      }
      uVar10 = _Uaarch64_get_reg(param_1,uVar9,&local_218);
      puVar24 = &local_220;
      if ((int)uVar10 < 0) goto LAB_0011c7a4;
LAB_0011d5dc:
      if (0x3f < uVar17) goto LAB_0011cc60;
      uVar23 = *param_2;
      local_208[uVar18] = *puVar24 + local_218;
      uVar18 = (ulong)(uVar17 + 1);
      goto LAB_0011c71c;
    case 0x94:
      uVar17 = uVar17 - 1;
      log2Console(3,"Bugly-libunwind","OP_deref_size(%d)\n",(uint)local_228);
      if (0x3f < uVar17) goto LAB_0011d6f4;
      local_218 = local_208[uVar17];
      if (7 < local_228 - 1) {
switchD_0011d724_default:
        log2Console(3,"Bugly-libunwind","Unexpected DW_OP_deref_size size %d\n");
        uVar10 = 0xfffffff8;
        goto LAB_0011c7a4;
      }
      iVar4 = (int)local_218;
      switch(local_228 - 1 & 0xffffffff) {
      case 0:
        uVar23 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar23,&local_210,0,uVar20);
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar23 = local_210 >> ((ulong)(uint)((iVar4 - (int)uVar23) * 8) & 0x3f) & 0xff;
        break;
      case 1:
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar16 = local_218 & 0xfffffffffffffff8;
        iVar6 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar16,&local_210,0,uVar20);
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar6 - (int)uVar16) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)((iVar4 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar23 = (ulong)CONCAT11(uVar2,uVar3);
        }
        else {
          uVar23 = (ulong)CONCAT11(uVar3,uVar2);
        }
        break;
      case 2:
      case 3:
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar15 = local_218 & 0xfffffffffffffff8;
        iVar6 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
        uVar16 = local_218;
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar6 - (int)uVar15) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)((iVar4 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar2,uVar3);
        }
        else {
          uVar5 = CONCAT11(uVar3,uVar2);
        }
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar15 = local_218 & 0xfffffffffffffff8;
        iVar4 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar15) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar16 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar21 = CONCAT22(CONCAT11(uVar2,uVar3),uVar5);
        }
        else {
          uVar21 = CONCAT22(uVar5,CONCAT11(uVar3,uVar2));
        }
        uVar23 = (ulong)uVar21 & 0xffffff;
        if (local_228 != 3) {
          uVar23 = (ulong)uVar21;
        }
        break;
      case 4:
      case 5:
      case 6:
      case 7:
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar15 = local_218 & 0xfffffffffffffff8;
        iVar6 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
        uVar16 = local_218;
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar6 - (int)uVar15) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)((iVar4 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar2,uVar3);
        }
        else {
          uVar5 = CONCAT11(uVar3,uVar2);
        }
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar14 = local_218 & 0xfffffffffffffff8;
        iVar4 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar14,&local_210,0,uVar20);
        uVar15 = local_218;
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar16 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar9 = CONCAT22(CONCAT11(uVar2,uVar3),uVar5);
        }
        else {
          uVar9 = CONCAT22(uVar5,CONCAT11(uVar3,uVar2));
        }
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar14 = local_218 & 0xfffffffffffffff8;
        iVar4 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar14,&local_210,0,uVar20);
        uVar16 = local_218;
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar15 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar2,uVar3);
        }
        else {
          uVar5 = CONCAT11(uVar3,uVar2);
        }
        uVar12 = local_218 & 0xfffffffffffffff8;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar12,&local_210,0,uVar20);
        uVar23 = local_210;
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar15 = local_218 & 0xfffffffffffffff8;
        iVar4 = (int)local_218;
        local_218 = local_218 + 1;
        uVar10 = (**(code **)(lVar8 + 0x18))(lVar19,uVar15,&local_210,0,uVar20);
        uVar2 = (undefined1)(local_210 >> ((ulong)(uint)((iVar4 - (int)uVar15) * 8) & 0x3f));
        if ((int)uVar10 < 0) goto LAB_0011c7a4;
        uVar3 = (undefined1)(uVar23 >> ((ulong)(uint)(((int)uVar16 - (int)uVar12) * 8) & 0x3f));
        if (*(int *)(lVar19 + 0x40) == 0) {
          uVar23 = CONCAT44(CONCAT22(CONCAT11(uVar2,uVar3),uVar5),uVar9);
        }
        else {
          uVar23 = CONCAT44(uVar9,CONCAT22(uVar5,CONCAT11(uVar3,uVar2)));
        }
        if (local_228 != 8) {
          uVar23 = uVar23 & -1L << ((ulong)(uint)((int)local_228 << 3) & 0x3f);
        }
        break;
      default:
        goto switchD_0011d724_default;
      }
      local_208[uVar17] = uVar23;
      uVar23 = *param_2;
      goto LAB_0011c71c;
    case 0x96:
      goto switchD_0011c7ec_caseD_96;
    }
    local_208[uVar17 - 2] = uVar23;
    uVar18 = (ulong)(uVar17 - 1);
    uVar23 = *param_2;
    goto LAB_0011c71c;
  }
LAB_0011c864:
  if (uVar17 - 1 < 0x40) {
    *param_4 = local_208[uVar17 - 1];
    log2Console(3,"Bugly-libunwind","final value = 0x%lx\n");
    uVar10 = 0;
  }
  else {
LAB_0011d6f4:
    log2Console(3,"Bugly-libunwind","Stack underflow\n");
    uVar10 = 0xfffffff8;
  }
  goto LAB_0011c7a4;
switchD_0011c7ec_caseD_96:
  log2Console(3,"Bugly-libunwind","OP_nop\n");
  uVar23 = *param_2;
  if (param_3 + uVar11 <= uVar23) goto LAB_0011c864;
  goto LAB_0011c728;
switchD_0011c7ec_caseD_3:
  log2Console(3,"Bugly-libunwind","OP_const(0x%lx)\n",local_228);
  if (0x3f < uVar17) {
LAB_0011cc60:
    log2Console(3,"Bugly-libunwind","Stack overflow\n");
    uVar10 = 0xfffffff8;
LAB_0011c7a4:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar10);
    }
    return;
  }
  local_208[uVar18] = local_228;
  uVar18 = (ulong)(uVar17 + 1);
  uVar23 = *param_2;
  goto LAB_0011c71c;
}

