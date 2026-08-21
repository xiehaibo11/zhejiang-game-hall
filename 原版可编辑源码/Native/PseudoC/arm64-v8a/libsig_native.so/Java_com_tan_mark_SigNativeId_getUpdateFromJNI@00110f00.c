
/* WARNING: Removing unreachable block (ram,0x00111110) */

void Java_com_tan_mark_SigNativeId_getUpdateFromJNI(long *param_1)

{
  uint uVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_228 [128];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1a8;
  undefined7 uStack_1a7;
  byte local_18a;
  byte local_189;
  undefined8 local_188;
  undefined1 local_179;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_178;
  char acStack_170 [256];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar5 = stat((char *)&DAT_0013a028,(stat *)auStack_228);
  if (iVar5 == -1) {
    uVar7 = 0;
LAB_00111270:
    bVar4 = (~((x_10 + -1) * x_10) | 0xfffffffeU) == 0xffffffff;
    if ((y_11 < 10 == bVar4) && (9 < y_11 || !bVar4)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
    return;
  }
  FUN_001114cc(acStack_170);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_1a8,acStack_170);
  iVar5 = -0x46db8071;
  uVar6 = FUN_00115230(&local_1a8);
  uVar1 = (x_16 + -1) * x_16;
  local_18a = ((uVar1 ^ 0xfffffffe) & uVar1) == 0;
  local_189 = y_17 < 10;
  iVar9 = 0x57d5e36a;
  uVar7 = local_188;
  while( true ) {
    while (local_188 = uVar7, -0xf979ced < iVar9) {
      if (iVar9 == -0xf979cec) {
        (**(code **)(*param_1 + 0x538))(param_1,uVar6);
        iVar9 = -0x40617076;
        uVar7 = local_188;
      }
      else if ((iVar9 == 0x57d5e36a) &&
              (iVar9 = -0x40617076, ((local_18a & local_189 | local_18a ^ local_189) & 1) == 0)) {
        iVar9 = -0xf979cec;
      }
    }
    if (iVar9 == -0x64986c25) break;
    if ((iVar9 == -0x40617076) &&
       (uVar7 = (**(code **)(*param_1 + 0x538))(param_1,uVar6), uVar1 = (x_16 + -1) * x_16,
       bVar4 = ((uVar1 ^ 0xfffffffe) & uVar1) == 0, iVar9 = -0x64986c25,
       (y_17 >= 10 || !bVar4) && y_17 < 10 == bVar4)) {
      iVar9 = -0xf979cec;
    }
  }
LAB_00111144:
  do {
    if (iVar5 == 0x6bd4ec04) {
      iVar9 = -0x45d3764d;
      local_179 = (~((x_50 + -1) * x_50) | 0xfffffffeU) == 0xffffffff;
      bVar4 = y_51 < 10;
      local_188 = CONCAT71(local_188._1_7_,bVar4);
      iVar5 = -0xc18ec00;
      if ((!bVar4 || !(bool)local_179) && bVar4 == (bool)local_179) {
        iVar5 = 0x63b54add;
      }
LAB_00111214:
      pbVar3 = local_178;
      if (iVar9 == -0x45d3764d) {
        iVar9 = 0x51306084;
        if ((bool)local_179 == bVar4 && !(bool)(((~local_179 | !bVar4) ^ 1) & 1)) {
          iVar9 = 0x63b54add;
        }
      }
      else if (iVar9 == -0xc18ec00) goto LAB_00111114;
      while (0x51306083 < iVar9) {
        while( true ) {
          while (iVar9 == 0x51306084) {
            local_178 = &local_1a8;
            iVar9 = iVar5;
            if (iVar5 < 0x51306084) goto LAB_00111214;
          }
          if (iVar9 != 0x63b54add) break;
          iVar9 = 0x51306084;
        }
      }
      goto LAB_00111214;
    }
    if (iVar5 != -0x46db8071) goto LAB_0011113c;
    iVar5 = 0x6d97ccbc;
    if ((~(uint)(byte)local_1a8 | 0xfffffffe) != 0xffffffff) {
      iVar5 = 0x6bd4ec04;
    }
  } while (iVar5 != 0x6d97ccbc);
  goto LAB_00111270;
LAB_00111114:
  lVar8 = FUN_00111fd4(&local_1a8);
  FUN_0011195c(pbVar3,*(undefined8 *)(lVar8 + 0x10),
               CONCAT71(uStack_1a7,local_1a8) & 0xfffffffffffffffe);
  iVar5 = 0x6d97ccbc;
LAB_0011113c:
  if (iVar5 == 0x6d97ccbc) goto LAB_00111270;
  goto LAB_00111144;
}

