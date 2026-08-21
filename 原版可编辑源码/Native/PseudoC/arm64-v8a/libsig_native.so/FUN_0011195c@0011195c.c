
void FUN_0011195c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  bVar3 = (~((x_24 + -1) * x_24) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_25 < 10;
  uVar5 = 0x6f59f926;
joined_r0x00111a04:
  do {
    if (0x521d5862 < (int)uVar5) {
      do {
        if (uVar5 == 0x521d5863) {
          FUN_00111b00(param_2,param_3,1);
          uVar5 = 0x425712d1;
          goto joined_r0x00111a04;
        }
        if (uVar5 != 0x6f59f926) goto joined_r0x00111a04;
        uVar5 = 0x425712d1;
        if ((!bVar3 || !bVar1) && bVar3 == bVar1) {
          uVar5 = 0x521d5863;
        }
      } while (0x521d5862 < uVar5);
    }
    if (uVar5 == 0xec323e5a) {
      if (*(long *)(lVar2 + 0x28) == lVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((uVar5 == 0x425712d1) &&
       (FUN_00111b00(param_2,param_3,1), bVar4 = (~((x_24 + -1) * x_24) | 0xfffffffeU) != 0xffffffff
       , uVar5 = 0xec323e5a, 9 < y_25 == bVar4 && (9 < y_25 || bVar4))) {
      uVar5 = 0x521d5863;
    }
  } while( true );
}

