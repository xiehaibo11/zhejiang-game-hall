
void FUN_0010cbf0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uStack_e0;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_0010cd04;
  while( true ) {
    pvVar4 = (void *)FUN_00101a04(param_2);
    uStack_70 = 0xfb;
    uStack_88 = 0xa953cb9440fd6cf3;
    uStack_90 = 0xa7a17723cfadb591;
    uStack_78 = 0x469933ac839ac93b;
    uStack_80 = 0x5ed51d83adb0fad2;
    uStack_98 = 0x55764e0d736e2d88;
    uStack_a0 = 0x68b86f6f576c002f;
    __ptr = (void *)thunk_FUN_00109db4(&uStack_a0);
    lVar5 = FUN_0010145c(DAT_00113150,__ptr);
    free(__ptr);
    if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
LAB_0010cd04:
    FUN_00101a04(param_2);
    uStack_70 = 0xfb;
    uStack_88 = 0xa953cb9440fd6cf3;
    uStack_90 = 0xa7a17723cfadb591;
    uStack_78 = 0x469933ac839ac93b;
    uStack_80 = 0x5ed51d83adb0fad2;
    uStack_98 = 0x55764e0d736e2d88;
    uStack_a0 = 0x68b86f6f576c002f;
    pvVar4 = (void *)thunk_FUN_00109db4(&uStack_a0);
    FUN_0010145c(DAT_00113150,pvVar4);
    free(pvVar4);
  }
  if (lVar5 == 0) {
    while( true ) {
      uVar8 = FUN_0010e924(DAT_00113160);
      FUN_0010e468(param_1,pvVar4,uVar8);
      uVar11 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar11 & 1) == 0)) break;
      uVar8 = FUN_0010e924(DAT_00113160);
      FUN_0010e468(param_1,pvVar4,uVar8);
    }
  }
  else {
    lVar6 = FUN_001014f0(DAT_00113150,lVar5,"<init>",&DAT_001100d4);
    uVar11 = (DAT_00113194 + -1) * DAT_00113194;
    while ((-1 < DAT_00113190 && ((int)uVar11 < 0))) {
      FUN_001014f0(DAT_00113150,lVar5,"<init>",&DAT_001100d4);
      lVar6 = FUN_001014f0(DAT_00113150,lVar5,"<init>",&DAT_001100d4);
      uVar11 = (DAT_00113194 + -1) * DAT_00113194;
    }
    if (lVar6 == 0) {
      bVar2 = true;
      if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    else {
      while( true ) {
        lVar7 = (**(code **)(*DAT_00113150 + 0xe0))(DAT_00113150,lVar5,lVar6);
        uVar11 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar11 & 1) == 0)) break;
        (**(code **)(*DAT_00113150 + 0xe0))(DAT_00113150,lVar5,lVar6);
      }
      if (lVar7 == 0) {
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        uVar11 = uVar12 & 1;
        bVar3 = true;
LAB_0010d264:
        if ((9 < DAT_00113190) && (uVar11 != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (bVar3) {
          if ((-1 < DAT_00113190) && ((int)uVar12 < 0)) goto LAB_0010d2cc;
          while( true ) {
            uVar8 = FUN_0010e924(DAT_00113158);
            FUN_0010e468(param_1,pvVar4,uVar8);
            uVar12 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
LAB_0010d2cc:
            uVar8 = FUN_0010e924(DAT_00113158);
            FUN_0010e468(param_1,pvVar4,uVar8);
          }
        }
        uVar11 = uVar12 & 1;
        do {
        } while (9 < DAT_00113190 && (uVar12 & 1) != 0);
        bVar2 = false;
      }
      else {
        if ((-1 < DAT_00113190) && ((int)uVar11 < 0)) goto LAB_0010cf94;
        while( true ) {
          uStack_af = 0xd286b46b3189b085;
          uStack_b0 = 0x86;
          uStack_b8 = 0x87;
          uStack_b7 = 0x5947591a6f3531;
          uStack_c0 = 0x64852f7451790017;
          uStack_d0 = 0x25278eb7a286;
          uStack_d8 = 0x5b06612d6d9f;
          uStack_d2 = 0x6f2f;
          uStack_e0 = 0x77af2a4e11270014;
          uVar8 = thunk_FUN_00109db4(&uStack_c0);
          uVar9 = thunk_FUN_00109db4(&uStack_e0);
          lVar5 = FUN_001010fc(DAT_00113150,0,lVar7,uVar8,uVar9);
          uVar11 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010cf94:
          uStack_af = 0xd286b46b3189b085;
          uStack_b0 = 0x86;
          uStack_b8 = 0x87;
          uStack_b7 = 0x5947591a6f3531;
          uStack_c0 = 0x64852f7451790017;
          uStack_d0 = 0x25278eb7a286;
          uStack_d8 = 0x5b06612d6d9f;
          uStack_d2 = 0x6f2f;
          uStack_e0 = 0x77af2a4e11270014;
          uVar8 = thunk_FUN_00109db4(&uStack_c0);
          uVar9 = thunk_FUN_00109db4(&uStack_e0);
          FUN_001010fc(DAT_00113150,0,lVar7,uVar8,uVar9);
        }
        if (lVar5 == 0) {
          bVar3 = true;
          while( true ) {
            uVar8 = FUN_0010e924(DAT_00113158);
            FUN_0010e468(param_1,pvVar4,uVar8);
            free(pvVar4);
            bVar2 = true;
            uVar12 = (DAT_00113194 + -1) * DAT_00113194;
            if (DAT_00113190 < 10) break;
            if ((uVar12 & 1) == 0) goto LAB_0010d240;
            uVar8 = FUN_0010e924(DAT_00113158);
            FUN_0010e468(param_1,pvVar4,uVar8);
            free(pvVar4);
          }
          bVar3 = true;
        }
        else {
          if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_0010d0e0;
          while( true ) {
            pcVar10 = (char *)(**(code **)(*DAT_00113150 + 0x548))(DAT_00113150,lVar5,0);
            uVar11 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010d0e0:
            (**(code **)(*DAT_00113150 + 0x548))(DAT_00113150,lVar5,0);
          }
          if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
            if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_0010d160;
            while( true ) {
              (**(code **)(*DAT_00113150 + 0x88))();
              bVar3 = true;
              uVar11 = (DAT_00113194 + -1) * DAT_00113194;
              if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010d160:
              (**(code **)(*DAT_00113150 + 0x88))();
            }
          }
          else {
            if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_0010d1b4;
            while( true ) {
              uVar8 = FUN_0010e924(pcVar10);
              FUN_0010e468(param_1,pvVar4,uVar8);
              bVar3 = false;
              uVar11 = (DAT_00113194 + -1) * DAT_00113194;
              if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010d1b4:
              uVar8 = FUN_0010e924(pcVar10);
              FUN_0010e468(param_1,pvVar4,uVar8);
            }
          }
          if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_0010d224;
          while( true ) {
            (**(code **)(*DAT_00113150 + 0x550))(DAT_00113150,lVar5,pcVar10);
            bVar2 = false;
            uVar12 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
LAB_0010d224:
            (**(code **)(*DAT_00113150 + 0x550))(DAT_00113150,lVar5,pcVar10);
          }
        }
LAB_0010d240:
        uVar11 = uVar12 & 1;
        do {
        } while (9 < DAT_00113190 && (uVar12 & 1) != 0);
        if (!bVar2) goto LAB_0010d264;
      }
      if ((9 < DAT_00113190) && (uVar11 != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    uVar11 = (DAT_00113194 + -1) * DAT_00113194;
    if ((-1 < DAT_00113190) && ((int)uVar11 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (bVar2) goto LAB_0010d388;
  }
  if ((-1 < DAT_00113190) && ((int)uVar11 < 0)) goto LAB_0010d37c;
  while( true ) {
    free(pvVar4);
    uVar11 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010d37c:
    free(pvVar4);
  }
LAB_0010d388:
  if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

