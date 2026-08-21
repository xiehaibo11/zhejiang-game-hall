
/* WARNING: Removing unreachable block (ram,0x00a47f40) */
/* WARNING: Removing unreachable block (ram,0x00a47ee0) */
/* WARNING: Removing unreachable block (ram,0x00a47e7c) */
/* WARNING: Removing unreachable block (ram,0x00a47e08) */
/* WARNING: Removing unreachable block (ram,0x00a47fdc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff70 : 0x00a47ffc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00a47d5c(long param_1,uint param_2,double *param_3)

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
                    /* try { // try from 00a47db8 to 00b47de7 has its CatchHandler @ 00a47c78 */
                    /* try { // try from 00a47de8 to 00b47df3 has its CatchHandler @ 00a47e60 */
  switch((param_2 & 0xf00000) - 0x100000 >> 0x14) {
  case 0:
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    switch(param_2) {
    case 0x100001:
      puVar1 = &DAT_013c996e;
                    /* try { // try from 00a47e58 to 00b47e5f has its CatchHandler @ 00a47e90 */
      if (*(undefined1 **)(param_1 + 0x908) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_1 + 0x908);
      }
      *param_3 = (double)puVar1;
      return 0;
                    /* catch() { ... } // from try @ 00a47de8 with catch @ 00a47e60
                       try { // try from 00a47e60 to 00b47eab has its CatchHandler @ 00a47c78 */
    default:
      return 0x30;
    case 0x100012:
      lVar8 = 0x8db0;
      break;
    case 0x100015:
      dVar6 = *(double *)(param_1 + 0x5d8);
      goto LAB_00a481a4;
    case 0x10001e:
      lVar8 = 0x8c98;
      break;
    case 0x10001f:
      lVar8 = 0x8db8;
      break;
    case 0x100020:
      lVar8 = 0x8dc0;
      goto LAB_00a4810c;
    case 0x100024:
      dVar6 = *(double *)(param_1 + 0x7e8);
      goto LAB_00a481a4;
    case 0x100029:
      lVar8 = 0x8df8;
LAB_00a4810c:
      *param_3 = (double)(param_1 + lVar8);
      return 0;
    case 0x100031:
                    /* try { // try from 00a4811c to 00b48147 has its CatchHandler @ 00a48064 */
      lVar8 = 0x8e30;
    }
    *param_3 = *(double *)(param_1 + lVar8);
    return 0;
  case 1:
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
                    /* catch() { ... } // from try @ 00a47cd0 with catch @ 00a47e90
                       catch() { ... } // from try @ 00a47d54 with catch @ 00a47e90
                       catch() { ... } // from try @ 00a47e08 with catch @ 00a47e90
                       catch() { ... } // from try @ 00a47e58 with catch @ 00a47e90 */
                    /* try { // try from 00a47eac to 00b47efb has its CatchHandler @ 00a47eac
                       catch() { ... } // from try @ 00a47eac with catch @ 00a47eac
                       catch() { ... } // from try @ 00a47f38 with catch @ 00a47eac
                       catch() { ... } // from try @ 00a47f80 with catch @ 00a47eac */
    switch(param_2) {
    case 0x200002:
      dVar6 = (double)(long)*(int *)(param_1 + 0x8d68);
      break;
    default:
      return 0x30;
    case 0x20000b:
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
      break;
    case 0x200016:
                    /* catch() { ... } // from try @ 00a4818c with catch @ 00a48248 */
      dVar6 = (double)(long)*(int *)(param_1 + 0x8d6c);
      break;
    case 0x200017:
      dVar6 = *(double *)(param_1 + 0x8da0);
      break;
    case 0x200018:
      dVar6 = *(double *)(param_1 + 0x8d98);
      break;
    case 0x200019:
      dVar6 = (double)(long)*(int *)(param_1 + 0x8b64);
      break;
    case 0x20001a:
                    /* catch() { ... } // from try @ 00a480bc with catch @ 00a4827c
                       catch() { ... } // from try @ 00a48148 with catch @ 00a4827c
                       catch() { ... } // from try @ 00a481d0 with catch @ 00a4827c */
      dVar6 = *(double *)(param_1 + 0x8da8);
      break;
    case 0x20001d:
      iVar3 = FUN_00a26abc(param_1,0);
      dVar6 = (double)(long)iVar3;
      break;
    case 0x200023:
      dVar6 = (double)(ulong)*(byte *)(param_1 + 0x8d80);
      break;
    case 0x200025:
      dVar6 = *(double *)(param_1 + 0x8ce0);
      break;
    case 0x200026:
      dVar6 = *(double *)(param_1 + 0x8ce8);
      break;
    case 0x200027:
      dVar6 = *(double *)(param_1 + 0x8cf0);
      break;
    case 0x200028:
      dVar6 = *(double *)(param_1 + 0x8df0);
      break;
    case 0x20002a:
                    /* try { // try from 00a482d4 to 00b4832b has its CatchHandler @ 00a482d4
                       catch() { ... } // from try @ 00a482d4 with catch @ 00a482d4
                       catch() { ... } // from try @ 00a48344 with catch @ 00a482d4
                       catch() { ... } // from try @ 00a483f4 with catch @ 00a482d4
                       catch() { ... } // from try @ 00a4844c with catch @ 00a482d4
                       catch() { ... } // from try @ 00a48498 with catch @ 00a482d4 */
      dVar6 = *(double *)(param_1 + 0x8e28);
      break;
    case 0x20002e:
      iVar3 = *(int *)(param_1 + 0x8d70);
      if (iVar3 == 10) {
        dVar6 = 4.94065645841247e-324;
      }
      else if (iVar3 == 0x14) {
        dVar6 = 1.48219693752374e-323;
      }
      else if (iVar3 == 0xb) {
        dVar6 = 9.88131291682493e-324;
      }
      else {
        dVar6 = 0.0;
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
                    /* try { // try from 00a4832c to 00b48343 has its CatchHandler @ 00a484c8 */
  case 2:
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
    break;
  case 3:
                    /* try { // try from 00a48064 to 00b480bb has its CatchHandler @ 00a48064
                       catch() { ... } // from try @ 00a48064 with catch @ 00a48064
                       catch() { ... } // from try @ 00a4811c with catch @ 00a48064
                       catch() { ... } // from try @ 00a481a4 with catch @ 00a48064
                       catch() { ... } // from try @ 00a481dc with catch @ 00a48064 */
    if (param_3 == (double *)0x0) {
      return 0x30;
    }
                    /* try { // try from 00a47f6c to 00b47f7f has its CatchHandler @ 00a47fc4 */
    switch(param_2) {
    case 0x40001b:
      dVar6 = (double)thunk_FUN_00a5cdac(param_1);
      break;
    case 0x40001c:
      dVar6 = (double)FUN_00a33064(param_1);
      break;
    default:
      return 0x30;
    case 0x400022:
      dVar6 = (double)(param_1 + 0x8e40);
      break;
    case 0x40002b:
    case 0x40002d:
                    /* try { // try from 00a47f80 to 00b47fdf has its CatchHandler @ 00a47eac */
      lVar8 = *(long *)(param_1 + 0x10);
      *param_3 = (double)(param_1 + 0x8e50);
      iVar3 = FUN_00a2d538(0x30);
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
          lVar7 = 1;
        }
        else {
          lVar7 = 0;
                    /* catch() { ... } // from try @ 00a47f20 with catch @ 00a47fc0 */
        }
        lVar8 = lVar8 + lVar7 * 0x28;
                    /* try { // try from 00a481d0 to 00b481db has its CatchHandler @ 00a4827c */
        puVar2 = (undefined8 *)(lVar8 + 0x2a8);
        if (param_2 != 0x40002b) {
          puVar2 = (undefined8 *)(lVar8 + 0x2b0);
        }
                    /* try { // try from 00a481dc to 00b482d3 has its CatchHandler @ 00a48064 */
        *(undefined8 *)(param_1 + 0x8e58) = *puVar2;
        return 0;
      }
      return 0;
    }
                    /* try { // try from 00a480bc to 00b4811b has its CatchHandler @ 00a4827c */
    *param_3 = dVar6;
    return 0;
  case 4:
                    /* catch() { ... } // from try @ 00a47efc with catch @ 00a47fc4
                       catch() { ... } // from try @ 00a47f6c with catch @ 00a47fc4 */
    if (param_2 != 0x50002c) {
      return 0x30;
    }
    if (local_90 != (undefined4 *)0x0) {
      uVar4 = FUN_00a26abc(param_1,0);
      *local_90 = uVar4;
      return 0;
    }
    return 0x30;
  default:
    return 0x30;
  }
                    /* try { // try from 00a47efc to 00b47f13 has its CatchHandler @ 00a47fc4 */
  uVar5 = 0x30;
  switch(param_2) {
  case 0x300003:
                    /* try { // try from 00a47f20 to 00b47f37 has its CatchHandler @ 00a47fc0 */
    dVar6 = *(double *)(param_1 + 0x980);
    break;
  case 0x300004:
    dVar6 = *(double *)(param_1 + 0x998);
    break;
  case 0x300005:
    dVar6 = *(double *)(param_1 + 0x9a0);
    break;
  case 0x300006:
    dVar6 = *(double *)(param_1 + 0x9b0);
    break;
  case 0x300007:
    lVar8 = *(long *)(param_1 + 0x960);
                    /* try { // try from 00a48148 to 00b48183 has its CatchHandler @ 00a4827c */
    goto LAB_00a48160;
  case 0x300008:
    lVar8 = *(long *)(param_1 + 0x958);
    goto LAB_00a48160;
  case 0x300009:
    lVar8 = *(long *)(param_1 + 0x988);
    goto LAB_00a48160;
  case 0x30000a:
    lVar8 = *(long *)(param_1 + 0x990);
LAB_00a48160:
    *param_3 = (double)lVar8;
    return 0;
  default:
    goto switchD_00a47f7c_caseD_40001d;
  case 0x30000f:
    if ((*(byte *)(param_1 + 0x978) >> 6 & 1) == 0) {
LAB_00a48188:
      dVar6 = -1.0;
                    /* try { // try from 00a4818c to 00b481a3 has its CatchHandler @ 00a48248 */
      goto LAB_00a482fc;
    }
    lVar8 = *(long *)(param_1 + 0x948);
    goto LAB_00a482f8;
  case 0x300010:
    if ((*(byte *)(param_1 + 0x978) >> 5 & 1) == 0) goto LAB_00a48188;
    lVar8 = *(long *)(param_1 + 0x950);
LAB_00a482f8:
    dVar6 = (double)lVar8;
LAB_00a482fc:
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
LAB_00a481a4:
                    /* try { // try from 00a481a4 to 00b481cf has its CatchHandler @ 00a48064 */
  uVar5 = 0;
  *param_3 = dVar6;
switchD_00a47f7c_caseD_40001d:
  return uVar5;
}

