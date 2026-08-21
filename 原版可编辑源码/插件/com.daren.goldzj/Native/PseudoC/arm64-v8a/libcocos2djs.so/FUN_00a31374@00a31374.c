
/* WARNING: Removing unreachable block (ram,0x00a31558) */
/* WARNING: Removing unreachable block (ram,0x00a314f8) */
/* WARNING: Removing unreachable block (ram,0x00a31494) */
/* WARNING: Removing unreachable block (ram,0x00a31420) */
/* WARNING: Removing unreachable block (ram,0x00a315f4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff70 : 0x00a31614 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00a31374(long param_1,uint param_2,double *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  undefined4 *local_90;
  
  if (param_1 == 0) {
    return 0x30;
  }
                    /* try { // try from 00a313c0 to 00b313d7 has its CatchHandler @ 00a31548 */
                    /* try { // try from 00a313e0 to 00b313eb has its CatchHandler @ 00a31544 */
                    /* try { // try from 00a313ec to 00b313f7 has its CatchHandler @ 00a31540 */
                    /* try { // try from 00a313f8 to 00b314cb has its CatchHandler @ 00a31558 */
  switch((param_2 & 0xf00000) - 0x100000 >> 0x14) {
  case 0:
                    /* try { // try from 00a31640 to 00b3164f has its CatchHandler @ 00a31750 */
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    switch(param_2) {
    case 0x100001:
      puVar1 = &DAT_0189703a;
      if (*(undefined1 **)(param_1 + 0x908) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_1 + 0x908);
      }
      *param_3 = (double)puVar1;
      return 0;
    default:
      return 0x30;
    case 0x100012:
      lVar8 = 0x8db0;
      break;
    case 0x100015:
      dVar6 = *(double *)(param_1 + 0x5d8);
      goto LAB_00a317bc;
    case 0x10001e:
      lVar8 = 0x8c98;
      break;
    case 0x10001f:
      lVar8 = 0x8db8;
      break;
    case 0x100020:
      lVar8 = 0x8dc0;
      goto LAB_00a31724;
    case 0x100024:
      dVar6 = *(double *)(param_1 + 0x7e8);
      goto LAB_00a317bc;
    case 0x100029:
      lVar8 = 0x8df8;
LAB_00a31724:
      *param_3 = (double)(param_1 + lVar8);
      return 0;
    case 0x100031:
                    /* catch() { ... } // from try @ 00a31668 with catch @ 00a31734 */
      lVar8 = 0x8e30;
    }
    *param_3 = *(double *)(param_1 + lVar8);
    return 0;
  case 1:
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
                    /* try { // try from 00a314cc to 00b315af has its CatchHandler @ 00a3136c */
    switch(param_2) {
    case 0x200002:
      dVar6 = (double)(long)*(int *)(param_1 + 0x8d68);
      break;
    default:
      return 0x30;
    case 0x20000b:
                    /* try { // try from 00a3182c to 00b3186f has its CatchHandler @ 00a317d0 */
      dVar6 = *(double *)(param_1 + 0x8d88);
      break;
    case 0x20000c:
      dVar6 = *(double *)(param_1 + 0x8d90);
      break;
    case 0x20000d:
      dVar6 = *(double *)(param_1 + 0x488);
      break;
    case 0x20000e:
      dVar6 = *(double *)(param_1 + 0x8d78);
      break;
    case 0x200014:
      dVar6 = *(double *)(param_1 + 0x278);
                    /* catch() { ... } // from try @ 00a31814 with catch @ 00a3185c */
      break;
    case 0x200016:
      dVar6 = (double)(long)*(int *)(param_1 + 0x8d6c);
      break;
    case 0x200017:
                    /* catch() { ... } // from try @ 00a318d8 with catch @ 00a31870 */
      dVar6 = *(double *)(param_1 + 0x8da0);
      break;
    case 0x200018:
      dVar6 = *(double *)(param_1 + 0x8d98);
      break;
    case 0x200019:
      dVar6 = (double)(long)*(int *)(param_1 + 0x8b64);
      break;
    case 0x20001a:
      dVar6 = *(double *)(param_1 + 0x8da8);
      break;
    case 0x20001d:
      iVar3 = FUN_00a110d4(param_1,0);
      dVar6 = (double)(long)iVar3;
      break;
    case 0x200023:
      dVar6 = (double)(ulong)*(byte *)(param_1 + 0x8d80);
      break;
    case 0x200025:
      dVar6 = *(double *)(param_1 + 0x8ce0);
      break;
    case 0x200026:
                    /* try { // try from 00a318c8 to 00b318d7 has its CatchHandler @ 00a319c8 */
      dVar6 = *(double *)(param_1 + 0x8ce8);
      break;
    case 0x200027:
                    /* try { // try from 00a318d8 to 00b319e3 has its CatchHandler @ 00a31870 */
      dVar6 = *(double *)(param_1 + 0x8cf0);
      break;
    case 0x200028:
      dVar6 = *(double *)(param_1 + 0x8df0);
      break;
    case 0x20002a:
      dVar6 = *(double *)(param_1 + 0x8e28);
      break;
    case 0x20002e:
      iVar3 = *(int *)(param_1 + 0x8d70);
      if (iVar3 == 10) {
        dVar6 = 4.94065645841247e-324;
      }
      else {
                    /* try { // try from 00a31814 to 00b3182b has its CatchHandler @ 00a3185c */
        if (iVar3 == 0x14) {
          dVar6 = 1.48219693752374e-323;
        }
        else if (iVar3 == 0xb) {
          dVar6 = 9.88131291682493e-324;
        }
        else {
          dVar6 = 0.0;
        }
      }
      break;
    case 0x20002f:
      dVar6 = *(double *)(param_1 + 0x540);
      break;
    case 0x200030:
      dVar6 = (double)(ulong)*(uint *)(param_1 + 0x8e38);
    }
    *param_3 = dVar6;
    return 0;
  case 2:
                    /* try { // try from 00a31668 to 00b3166f has its CatchHandler @ 00a31734 */
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    break;
  case 3:
                    /* try { // try from 00a31680 to 00b31687 has its CatchHandler @ 00a3174c */
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    switch(param_2) {
    case 0x40001b:
      dVar6 = (double)thunk_FUN_00a463c4(param_1);
      break;
    case 0x40001c:
                    /* try { // try from 00a316b8 to 00b317cf has its CatchHandler @ 00a315b0 */
      dVar6 = (double)FUN_00a1d67c(param_1);
      break;
    default:
      return 0x30;
    case 0x400022:
      dVar6 = (double)(param_1 + 0x8e40);
      break;
    case 0x40002b:
    case 0x40002d:
      lVar8 = *(long *)(param_1 + 0x10);
      *param_3 = (double)(param_1 + 0x8e50);
      iVar3 = FUN_00a17b50(0x30);
                    /* try { // try from 00a315b0 to 00b315ff has its CatchHandler @ 00a315b0
                       catch() { ... } // from try @ 00a315b0 with catch @ 00a315b0
                       catch() { ... } // from try @ 00a316b8 with catch @ 00a315b0 */
      *(int *)(param_1 + 0x8e50) = iVar3;
      *(undefined8 *)(param_1 + 0x8e58) = 0;
      if (lVar8 == 0) {
        return 0;
      }
      if (iVar3 != 0) {
        if (*(char *)(lVar8 + 0x298) == '\0') {
          if (*(char *)(lVar8 + 0x2c0) == '\0') {
            return 0;
          }
                    /* try { // try from 00a317d0 to 00b31813 has its CatchHandler @ 00a317d0
                       catch() { ... } // from try @ 00a317d0 with catch @ 00a317d0
                       catch() { ... } // from try @ 00a3182c with catch @ 00a317d0 */
          lVar7 = 1;
        }
        else {
          lVar7 = 0;
        }
        lVar8 = lVar8 + lVar7 * 0x28;
        puVar2 = (undefined8 *)(lVar8 + 0x2a8);
        if (param_2 != 0x40002b) {
          puVar2 = (undefined8 *)(lVar8 + 0x2b0);
        }
        *(undefined8 *)(param_1 + 0x8e58) = *puVar2;
        return 0;
      }
      return 0;
    }
    *param_3 = dVar6;
    return 0;
  case 4:
                    /* try { // try from 00a31600 to 00b31617 has its CatchHandler @ 00a31780 */
    if (param_2 != 0x50002c) {
      return 0x30;
    }
    if (local_90 != (undefined4 *)0x0) {
      uVar4 = FUN_00a110d4(param_1,0);
                    /* try { // try from 00a3162c to 00b3163f has its CatchHandler @ 00a3177c */
      *local_90 = uVar4;
      return 0;
    }
    return 0x30;
  default:
    return 0x30;
  }
  uVar5 = 0x30;
  switch(param_2) {
  case 0x300003:
    dVar6 = *(double *)(param_1 + 0x980);
    break;
  case 0x300004:
    dVar6 = *(double *)(param_1 + 0x998);
    break;
  case 0x300005:
                    /* catch() { ... } // from try @ 00a31680 with catch @ 00a3174c */
    dVar6 = *(double *)(param_1 + 0x9a0);
                    /* catch() { ... } // from try @ 00a31640 with catch @ 00a31750 */
    break;
  case 0x300006:
                    /* catch() { ... } // from try @ 00a31688 with catch @ 00a31754 */
    dVar6 = *(double *)(param_1 + 0x9b0);
    break;
  case 0x300007:
    lVar8 = *(long *)(param_1 + 0x960);
    goto LAB_00a31778;
  case 0x300008:
                    /* catch() { ... } // from try @ 00a31670 with catch @ 00a31764 */
    lVar8 = *(long *)(param_1 + 0x958);
    goto LAB_00a31778;
  case 0x300009:
    lVar8 = *(long *)(param_1 + 0x988);
    goto LAB_00a31778;
  case 0x30000a:
    lVar8 = *(long *)(param_1 + 0x990);
LAB_00a31778:
                    /* catch() { ... } // from try @ 00a3162c with catch @ 00a3177c */
                    /* catch() { ... } // from try @ 00a31600 with catch @ 00a31780 */
    *param_3 = (double)lVar8;
    return 0;
  default:
    goto switchD_00a31594_caseD_40001d;
  case 0x30000f:
    if ((*(byte *)(param_1 + 0x978) >> 6 & 1) == 0) {
LAB_00a317a0:
      dVar6 = -1.0;
      goto LAB_00a31914;
    }
    lVar8 = *(long *)(param_1 + 0x948);
    goto LAB_00a31910;
  case 0x300010:
    if ((*(byte *)(param_1 + 0x978) >> 5 & 1) == 0) goto LAB_00a317a0;
    lVar8 = *(long *)(param_1 + 0x950);
LAB_00a31910:
    dVar6 = (double)lVar8;
LAB_00a31914:
    *param_3 = dVar6;
    return 0;
  case 0x300011:
    dVar6 = *(double *)(param_1 + 0x9b8);
    break;
  case 0x300013:
    dVar6 = *(double *)(param_1 + 0x9c0);
    break;
  case 0x300021:
    dVar6 = *(double *)(param_1 + 0x9a8);
  }
LAB_00a317bc:
  uVar5 = 0;
  *param_3 = dVar6;
switchD_00a31594_caseD_40001d:
                    /* try { // try from 00a31688 to 00b316b7 has its CatchHandler @ 00a31754 */
  return uVar5;
}

