
undefined8 Java_com_tan_mark_SigNativeId_getBootFromJNI(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FILE *__stream;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined1 local_90 [40];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __stream = fopen(&DAT_0013a000,&DAT_0013a020);
  if (__stream == (FILE *)0x0) {
    uVar7 = (x + -1) * x & 1;
    uVar8 = 0;
    iVar10 = y;
  }
  else {
    lVar9 = 0;
    do {
      iVar6 = fgetc(__stream);
      iVar10 = y;
      local_90[lVar9] = (char)iVar6;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x25);
    uVar7 = ~((x + 0x40cb16cf) * x) | 0xfffffffe;
    if ((y < 10 == (uVar7 == 0xffffffff)) && (9 < y || uVar7 != 0xffffffff)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar6 = ferror(__stream);
    if (iVar6 == 0) {
      uVar8 = (**(code **)(*param_1 + 0x580))(param_1,0x25);
      bVar4 = (~((x_8 + -1) * x_8) | 0xfffffffeU) == 0xffffffff;
      bVar1 = y_9 < 10;
      iVar10 = -0x6243606f;
      while( true ) {
        while (iVar10 < 0x1f9a48c4) {
          if (iVar10 == -0x6243606f) {
            iVar10 = 0x78964f70;
            if ((!bVar4 || !bVar1) && bVar4 == bVar1) {
              iVar10 = -0x4435fe17;
            }
          }
          else if (iVar10 == -0x4435fe17) {
            (**(code **)(*param_1 + 0x680))(param_1,uVar8,0,0x25,local_90);
            iVar10 = 0x78964f70;
          }
        }
        if (iVar10 == 0x1f9a48c4) break;
        if ((iVar10 == 0x78964f70) &&
           ((**(code **)(*param_1 + 0x680))(param_1,uVar8,0,0x25,local_90), uVar7 = (x_8 + -1) * x_8
           , bVar5 = ((uVar7 ^ 0xfffffffe) & uVar7) == 0, iVar10 = 0x1f9a48c4,
           (y_9 >= 10 || !bVar5) && y_9 < 10 == bVar5)) {
          iVar10 = -0x4435fe17;
        }
      }
      uVar2 = ~((x + -1) * x) | 0xfffffffe;
      uVar7 = ~uVar2;
      iVar10 = y;
      if ((y >= 10 || uVar2 != 0xffffffff) && (y < 10 == (uVar2 == 0xffffffff))) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    else {
      uVar8 = 0;
      uVar7 = ~uVar7;
    }
  }
  if ((iVar10 >= 10 || uVar7 != 0) && (iVar10 < 10 == (uVar7 == 0))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

