
void FUN_0184fcd8(void *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long alStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(alStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_0184eb24(alStack_3c0,*(undefined8 *)((long)param_1 + 0x310),auStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x377) = 0;
  }
  lVar2 = param_2[200];
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if ((int)lVar2 == 1) {
    lVar2 = _Unwind_GetGR(alStack_3c0,(int)param_2[0xc6]);
    lVar2 = lVar2 + param_2[0xc5];
  }
  else {
    if ((int)lVar2 != 2) {
LAB_0184fe20:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_0184e8b8(param_2[199],&local_3c8);
    lVar2 = FUN_0184f724(lVar2,lVar2 + local_3c8,alStack_3c0,0);
  }
  *(long *)((long)param_1 + 0x310) = lVar2;
  puVar5 = (undefined1 *)((long)param_1 + 0x358);
  lVar4 = 0;
  plVar6 = param_2;
  do {
    switch((int)plVar6[1]) {
    case 1:
      lVar3 = lVar2 + *plVar6;
      break;
    case 2:
      if (acStack_68[(int)*plVar6] != '\0') {
        lVar3 = _Unwind_GetGR(alStack_3c0);
        goto LAB_0184fe10;
      }
      lVar3 = alStack_3c0[(int)*plVar6];
      break;
    case 3:
      lVar3 = FUN_0184e8b8(*plVar6,&local_3c8);
      lVar3 = FUN_0184f724(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
      break;
    case 4:
      lVar3 = lVar2 + *plVar6;
      goto LAB_0184fe10;
    case 5:
      lVar3 = FUN_0184e8b8(*plVar6,&local_3c8);
      lVar3 = FUN_0184f724(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
LAB_0184fe10:
      if ((byte)(&DAT_01d54110)[lVar4] < 9) {
        *puVar5 = 1;
        goto LAB_0184fe90;
      }
      goto LAB_0184fe20;
    default:
      goto switchD_0184fde8_default;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar5 = 0;
    }
LAB_0184fe90:
    *(long *)((long)param_1 + lVar4 * 8) = lVar3;
switchD_0184fde8_default:
    lVar4 = lVar4 + 1;
    plVar6 = plVar6 + 2;
    puVar5 = puVar5 + 1;
    if (lVar4 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}

