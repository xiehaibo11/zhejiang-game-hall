
void * FUN_0010a664(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined5 uVar12;
  undefined2 uVar13;
  undefined3 uVar14;
  undefined3 uVar15;
  undefined5 uVar16;
  undefined6 uVar17;
  undefined1 uVar18;
  undefined3 uVar19;
  undefined2 uVar20;
  undefined3 uVar21;
  undefined5 uVar22;
  undefined3 uVar23;
  bool bVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  size_t sVar28;
  void *pvVar29;
  long lVar30;
  size_t __size;
  ulong __n;
  long lVar31;
  char *__s;
  int iVar32;
  uint uVar33;
  undefined8 local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined1 uStack_ff;
  undefined7 uStack_fe;
  undefined6 uStack_f0;
  undefined2 local_ea;
  undefined6 uStack_e8;
  undefined8 local_e0;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined5 uStack_cd;
  undefined2 uStack_c8;
  undefined3 uStack_c6;
  undefined3 local_c3;
  undefined5 uStack_c0;
  undefined8 uStack_bb;
  undefined8 local_b0;
  undefined6 uStack_a8;
  undefined1 uStack_a2;
  undefined4 uStack_a1;
  undefined3 uStack_9d;
  undefined2 uStack_9a;
  undefined3 uStack_98;
  undefined5 uStack_95;
  undefined3 uStack_90;
  undefined8 uStack_8d;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  
  lVar1 = tpidr_el0;
  lVar30 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_0010a748;
  while( true ) {
    lVar25 = FUN_0010e9dc();
    lVar26 = FUN_0010e9dc();
    uVar33 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar33 & 1) == 0)) break;
LAB_0010a748:
    FUN_0010e9dc();
    FUN_0010e9dc();
  }
  __s = (char *)0x0;
  if ((lVar25 == 0) || (lVar26 == 0)) {
    pvVar29 = (void *)0x0;
    lVar31 = lVar25;
    iVar32 = DAT_00113190;
  }
  else {
    lVar31 = 0;
    if (param_2 - 1U < 7) {
      bVar24 = -1 < DAT_00113190 && (int)uVar33 < 0;
      switch(param_2) {
      default:
        while( true ) {
          FUN_0010b0f0(lVar26,1,param_2 == 7);
          local_110 = CONCAT26(local_110._6_2_,0x246b00000000);
          local_110 = CONCAT44(local_110._4_4_,0x4d7a0004);
          FUN_0010c518(param_1,lVar26,2,2,&local_110);
          uStack_d0 = 0x8f97;
          uStack_ce = 0xee;
          uStack_d8 = 0x219d;
          uVar7 = uStack_d8;
          uStack_d6 = 0x6428;
          uVar8 = uStack_d6;
          uStack_d4 = 0x5a614f37;
          uVar9 = uStack_d4;
          local_e0 = 0x6891347159630011;
          FUN_0010c518(param_1,lVar26,3,0,&local_e0);
          uStack_a8 = 0x4f376428219d;
          uVar17 = uStack_a8;
          uStack_a2 = 0x61;
          uVar2 = uStack_a2;
          uStack_a1 = 0xef8f975a;
          local_b0 = 0x6891347159630011;
          FUN_0010c518(param_1,lVar26,4,0,&local_b0);
          pvVar29 = (void *)FUN_00101a04(param_2);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
          uVar33 = (DAT_00113194 + -1) * DAT_00113194;
          lVar31 = lVar25;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
          FUN_0010b0f0(lVar26,1,param_2 == 7);
          local_110 = CONCAT26(local_110._6_2_,0x246b00000000);
          local_110 = CONCAT44(local_110._4_4_,0x4d7a0004);
          FUN_0010c518(param_1,lVar26,2,2,&local_110);
          uStack_d0 = 0x8f97;
          uStack_ce = 0xee;
          local_e0 = 0x6891347159630011;
          uStack_d8 = uVar7;
          uStack_d6 = uVar8;
          uStack_d4 = uVar9;
          FUN_0010c518(param_1,lVar26,3,0,&local_e0);
          uStack_a1 = 0xef8f975a;
          local_b0 = 0x6891347159630011;
          uStack_a8 = uVar17;
          uStack_a2 = uVar2;
          FUN_0010c518(param_1,lVar26,4,0,&local_b0);
          pvVar29 = (void *)FUN_00101a04(param_2);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
        }
        break;
      case 2:
        if (bVar24) goto LAB_0010ae3c;
        while( true ) {
          FUN_0010cbf0(lVar26,1);
          uStack_d8 = 0x2d88;
          uStack_d6 = 0x706f;
          uStack_d4 = 0x4f684f1d;
          local_e0 = 0x68b86e6f576c001e;
          uStack_c8 = 0x77fa;
          uStack_c6 = 0x945bb7;
          local_c3 = 0xbe56fd;
          uStack_d0 = 0xa297;
          uStack_ce = 0xa8;
          uStack_cd = 0xacff7b2389;
          FUN_0010c518(param_1,lVar26,2,0,&local_e0);
          pvVar29 = (void *)FUN_00101a04(2);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
          uVar33 = (DAT_00113194 + -1) * DAT_00113194;
          lVar31 = lVar25;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
LAB_0010ae3c:
          FUN_0010cbf0(lVar26,1);
          uStack_d8 = 0x2d88;
          uStack_d6 = 0x706f;
          uStack_d4 = 0x4f684f1d;
          local_e0 = 0x68b86e6f576c001e;
          uStack_c8 = 0x77fa;
          uStack_c6 = 0x945bb7;
          local_c3 = 0xbe56fd;
          uStack_d0 = 0xa297;
          uStack_ce = 0xa8;
          uStack_cd = 0xacff7b2389;
          FUN_0010c518(param_1,lVar26,2,0,&local_e0);
          pvVar29 = (void *)FUN_00101a04(2);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
        }
        break;
      case 3:
        if (bVar24) goto LAB_0010b094;
        while( true ) {
          uStack_d8 = 0x2e9f;
          uStack_d6 = 0x6534;
          local_e0 = 0x7791716f517c000a;
          FUN_0010c518(param_1,lVar26,1,0,&local_e0);
          pvVar29 = (void *)FUN_00101a04(3);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
          uVar33 = (DAT_00113194 + -1) * DAT_00113194;
          lVar31 = lVar25;
          if ((DAT_00113190 < 10) || ((uVar33 & 1) == 0)) break;
LAB_0010b094:
          uStack_d8 = 0x2e9f;
          uStack_d6 = 0x6534;
          local_e0 = 0x7791716f517c000a;
          FUN_0010c518(param_1,lVar26,1,0,&local_e0);
          pvVar29 = (void *)FUN_00101a04(3);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
        }
        break;
      case 4:
        while( true ) {
          uStack_70 = 0x580175341d8d;
          uStack_78 = 0x1f7b5d64000c;
          local_72 = 0x70a3;
          FUN_0010c518(param_1,lVar26,1,0,&uStack_78);
          uStack_8d = 0x86e72975d50a9ba7;
          uStack_90 = 0x8ad098;
          uVar23 = uStack_90;
          uStack_98 = 0xbc7be4;
          uVar21 = uStack_98;
          uStack_95 = 0xb111d18556;
          uVar22 = uStack_95;
          uStack_9d = 0x7b3290;
          uVar19 = uStack_9d;
          uStack_9a = 0xaab7;
          uVar20 = uStack_9a;
          uStack_a8 = 0x4b0d6e6f2b8b;
          uVar17 = uStack_a8;
          uStack_a2 = 0x68;
          uVar18 = uStack_a2;
          uStack_a1 = 0xf0b59f53;
          local_b0 = 0x68a36e6f576c0029;
          FUN_0010c518(param_1,lVar26,2,1,&local_b0);
          uStack_bb = 0xc99e92dd2b75ce0a;
          uStack_c0 = 0x85bb8ad098;
          uVar16 = uStack_c0;
          uStack_c8 = 0x7be4;
          uVar13 = uStack_c8;
          uStack_c6 = 0x8556bc;
          uVar14 = uStack_c6;
          local_c3 = 0xb111d1;
          uVar15 = local_c3;
          uStack_d0 = 0xb59f;
          uVar10 = uStack_d0;
          uStack_ce = 0xf0;
          uVar11 = uStack_ce;
          uStack_cd = 0xaab77b3290;
          uVar12 = uStack_cd;
          uStack_d8 = 0x2b8b;
          uVar7 = uStack_d8;
          uStack_d6 = 0x6e6f;
          uVar8 = uStack_d6;
          uStack_d4 = 0x53684b0d;
          uVar9 = uStack_d4;
          local_e0 = 0x68a36e6f576c002b;
          FUN_0010c518(param_1,lVar26,3,1,&local_e0);
          uStack_e8 = 0x58015f293692;
          uStack_f0 = 0x285d5162000c;
          local_ea = 0x60ab;
          FUN_0010c518(param_1,lVar26,4,2,&uStack_f0);
          uStack_ff = 0xb9;
          uVar5 = uStack_ff;
          uStack_fe = 0xf3a2b0701f85bd;
          uVar6 = uStack_fe;
          local_100 = 0x84;
          uVar4 = local_100;
          uStack_108 = 0x8a;
          uVar2 = uStack_108;
          uStack_107 = 0x5964121b79326c;
          uVar3 = uStack_107;
          local_110 = 0x72a733705d7f0017;
          FUN_0010a3f4(lVar26,5,&local_110);
          uVar27 = FUN_00101a04(4);
          FUN_0010e468(lVar25,uVar27,lVar26);
          uVar33 = (DAT_00113194 + -1) * DAT_00113194;
          lVar31 = lVar25;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
          uStack_70 = 0x580175341d8d;
          uStack_78 = 0x1f7b5d64000c;
          local_72 = 0x70a3;
          FUN_0010c518(param_1,lVar26,1,0,&uStack_78);
          uStack_8d = 0x86e72975d50a9ba7;
          uStack_a1 = 0xf0b59f53;
          local_b0 = 0x68a36e6f576c0029;
          uStack_a8 = uVar17;
          uStack_a2 = uVar18;
          uStack_9d = uVar19;
          uStack_9a = uVar20;
          uStack_98 = uVar21;
          uStack_95 = uVar22;
          uStack_90 = uVar23;
          FUN_0010c518(param_1,lVar26,2,1,&local_b0);
          uStack_bb = 0xc99e92dd2b75ce0a;
          local_e0 = 0x68a36e6f576c002b;
          uStack_d8 = uVar7;
          uStack_d6 = uVar8;
          uStack_d4 = uVar9;
          uStack_d0 = uVar10;
          uStack_ce = uVar11;
          uStack_cd = uVar12;
          uStack_c8 = uVar13;
          uStack_c6 = uVar14;
          local_c3 = uVar15;
          uStack_c0 = uVar16;
          FUN_0010c518(param_1,lVar26,3,1,&local_e0);
          uStack_e8 = 0x58015f293692;
          uStack_f0 = 0x285d5162000c;
          local_ea = 0x60ab;
          FUN_0010c518(param_1,lVar26,4,2,&uStack_f0);
          local_110 = 0x72a733705d7f0017;
          uStack_108 = uVar2;
          uStack_107 = uVar3;
          local_100 = uVar4;
          uStack_ff = uVar5;
          uStack_fe = uVar6;
          FUN_0010a3f4(lVar26,5,&local_110);
          uVar27 = FUN_00101a04(4);
          FUN_0010e468(lVar25,uVar27,lVar26);
        }
        break;
      case 5:
        if (bVar24) goto LAB_0010af68;
        while( true ) {
          uStack_9d = 0x67258b;
          uStack_a8 = 0x551e65256c95;
          uStack_a2 = 99;
          uStack_a1 = 0xf0b49b59;
          local_b0 = 0x64ba396e5e660014;
          FUN_0010c518(param_1,lVar26,1,0,&local_b0);
          local_100 = 0x9f;
          uStack_ff = 0xb5;
          uStack_108 = 0x9b;
          uStack_107 = 0x5d6e630d632834;
          local_110 = 0x65912f7248600010;
          FUN_0010c518(param_1,lVar26,2,1,&local_110);
          uStack_ce = 0xad;
          uStack_cd = 0xe1a1722ece;
          uStack_c8 = 0x7aff;
          uStack_d0 = 0xa59e;
          uStack_d8 = 0x6c8a;
          uStack_d6 = 0x7932;
          uStack_d4 = 0x4c6f121b;
          local_e0 = 0x72a733705d7f0018;
          FUN_0010a3f4(lVar26,3,&local_e0);
          pvVar29 = (void *)FUN_00101a04(5);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
          uVar33 = (DAT_00113194 + -1) * DAT_00113194;
          lVar31 = lVar25;
          if ((DAT_00113190 < 10) || ((uVar33 & 1) == 0)) break;
LAB_0010af68:
          uStack_9d = 0x67258b;
          uStack_a8 = 0x551e65256c95;
          uStack_a2 = 99;
          uStack_a1 = 0xf0b49b59;
          local_b0 = 0x64ba396e5e660014;
          FUN_0010c518(param_1,lVar26,1,0,&local_b0);
          local_100 = 0x9f;
          uStack_ff = 0xb5;
          uStack_108 = 0x9b;
          uStack_107 = 0x5d6e630d632834;
          local_110 = 0x65912f7248600010;
          FUN_0010c518(param_1,lVar26,2,1,&local_110);
          uStack_ce = 0xad;
          uStack_cd = 0xe1a1722ece;
          uStack_c8 = 0x7aff;
          uStack_d0 = 0xa59e;
          uStack_d8 = 0x6c8a;
          uStack_d6 = 0x7932;
          uStack_d4 = 0x4c6f121b;
          local_e0 = 0x72a733705d7f0018;
          FUN_0010a3f4(lVar26,3,&local_e0);
          pvVar29 = (void *)FUN_00101a04(5);
          FUN_0010e468(lVar25,pvVar29,lVar26);
          free(pvVar29);
        }
        break;
      case 6:
        break;
      }
    }
    do {
    } while (-1 < DAT_00113190 && (int)uVar33 < 0);
    if (lVar31 == 0) {
      __s = (char *)0x0;
    }
    else {
      while( true ) {
        __s = (char *)FUN_0010e2f4(lVar31);
        uVar33 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
        FUN_0010e2f4(lVar31);
      }
    }
    iVar32 = DAT_00113190;
    bVar24 = -1 < DAT_00113190;
    do {
    } while (9 < DAT_00113190 && (uVar33 & 1) != 0);
    if (__s == (char *)0x0) {
      if (bVar24 && (int)uVar33 < 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      __s = (char *)0x0;
      pvVar29 = (void *)0x0;
    }
    else {
      do {
        sVar28 = strlen(__s);
        __size = (long)((sVar28 << 0x20) + 0x100000000) >> 0x20;
        pvVar29 = malloc(__size);
      } while (bVar24 && (int)uVar33 < 0);
      if (pvVar29 != (void *)0x0) {
        __n = (ulong)(int)sVar28;
        if (__size <= __n) {
          __size = __n;
        }
        memset((void *)((long)pvVar29 + __n),0,__size - __n);
        memcpy(pvVar29,__s,__n);
      }
    }
  }
  if ((-1 < iVar32) && ((int)uVar33 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (lVar31 != 0) {
    while( true ) {
      FUN_0010d514(lVar31);
      uVar33 = (DAT_00113194 + -1) * DAT_00113194;
      iVar32 = DAT_00113190;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
      FUN_0010d514(lVar31);
    }
  }
  if ((-1 < iVar32) && ((int)uVar33 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (__s != (char *)0x0) {
    while( true ) {
      free(__s);
      uVar33 = (DAT_00113194 + -1) * DAT_00113194;
      iVar32 = DAT_00113190;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar33)) break;
      free(__s);
    }
  }
  if ((9 < iVar32) && ((uVar33 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) == lVar30) {
    return pvVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

