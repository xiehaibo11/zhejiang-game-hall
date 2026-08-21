
void FUN_00115230(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_70;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar5 = (x_120 + -1) * x_120;
  bVar3 = ((uVar5 ^ 0xfffffffe) & uVar5) != 0;
  bVar1 = 9 < y_121;
  uVar5 = 0x20c7a754;
joined_r0x001152e0:
  do {
    if ((int)uVar5 < 0x20c7a754) {
      do {
        while (uVar5 != 0xb33a0bcf) {
          if (uVar5 != 0x3c8a4af) goto joined_r0x001152e0;
          FUN_001153dc(param_1);
          uVar5 = 0xb33a0bcf;
        }
        local_70 = FUN_001153dc(param_1);
        bVar4 = (~((x_120 + -1) * x_120) | 0xfffffffeU) != 0xffffffff;
        uVar5 = 0x4816d7a3;
        if (9 < y_121 == bVar4 && (9 < y_121 || bVar4)) {
          uVar5 = 0x3c8a4af;
        }
      } while (uVar5 < 0x20c7a754);
    }
    if (uVar5 == 0x4816d7a3) {
      if (*(long *)(lVar2 + 0x28) == lVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_70);
    }
    if ((uVar5 == 0x20c7a754) && (uVar5 = 0xb33a0bcf, bVar3 == bVar1 && (bVar3 || bVar1))) {
      uVar5 = 0x3c8a4af;
    }
  } while( true );
}

