
undefined8 tls1_set_sigalgs(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  long lVar9;
  
  if ((param_3 & 1) == 0) {
    ptr = CRYPTO_malloc((int)param_3,"ssl/t1_lib.c",0xebd);
    uVar5 = 0;
    if (ptr != (void *)0x0) {
      if (param_3 != 0) {
        uVar6 = 0;
        do {
          piVar1 = (int *)(param_2 + uVar6 * 4);
          iVar3 = *piVar1;
          iVar8 = -1;
          if (0x328 < iVar3) {
            if (iVar3 == 0x329) {
              lVar9 = 6;
            }
            else {
                    /* try { // try from 00ae0908 to 00be0923 has its CatchHandler @ 00ae0bb0 */
              if (iVar3 == 0x3d6) {
                lVar9 = 7;
              }
              else {
                if (iVar3 != 0x3d7) goto LAB_00ae0968;
                lVar9 = 8;
              }
            }
            goto LAB_00ae0960;
          }
          switch(iVar3) {
          case 0x2a0:
            lVar9 = 3;
            break;
          case 0x2a1:
            lVar9 = 4;
            break;
          case 0x2a2:
            lVar9 = 5;
            break;
          case 0x2a3:
            lVar9 = 2;
            break;
          default:
            if (iVar3 == 4) {
              lVar9 = 0;
              break;
            }
            if (iVar3 == 0x40) {
              lVar9 = 1;
              break;
            }
            goto LAB_00ae0968;
          }
LAB_00ae0960:
          iVar8 = (&DAT_018a5358)[lVar9 * 2];
LAB_00ae0968:
          iVar3 = piVar1[1];
          if (0x32a < iVar3) {
            if (iVar3 == 0x32b) {
              lVar9 = 3;
              goto joined_r0x00ae09ec;
            }
            if (iVar3 == 0x3d3) {
              lVar9 = 4;
              goto joined_r0x00ae09ec;
            }
                    /* try { // try from 00ae09b0 to 00be09bb has its CatchHandler @ 00ae0bac */
            if (iVar3 == 0x3d4) {
              lVar9 = 5;
              goto joined_r0x00ae09ec;
            }
LAB_00ae0a44:
            CRYPTO_free(ptr);
            goto LAB_00ae0a58;
          }
          if (iVar3 == 6) {
            lVar9 = 0;
          }
          else if (iVar3 == 0x74) {
            lVar9 = 1;
          }
          else {
            if (iVar3 != 0x198) goto LAB_00ae0a44;
            lVar9 = 2;
          }
joined_r0x00ae09ec:
          if (iVar8 == -1) goto LAB_00ae0a44;
          uVar4 = (&DAT_018a53a0)[lVar9 * 2];
          puVar2 = (undefined1 *)((long)ptr + uVar6);
          uVar6 = uVar6 + 2;
          *puVar2 = (char)iVar8;
          puVar2[1] = (char)uVar4;
        } while (uVar6 < param_3);
      }
      if (param_4 == 0) {
        CRYPTO_free(*(void **)(param_1 + 0x148));
        puVar7 = (ulong *)(param_1 + 0x150);
        *(void **)(param_1 + 0x148) = ptr;
      }
      else {
                    /* try { // try from 00ae0a30 to 00be0a37 has its CatchHandler @ 00ae0b9c */
        CRYPTO_free(*(void **)(param_1 + 0x158));
        *(void **)(param_1 + 0x158) = ptr;
        puVar7 = (ulong *)(param_1 + 0x160);
      }
      *puVar7 = param_3;
      uVar5 = 1;
    }
  }
  else {
LAB_00ae0a58:
    uVar5 = 0;
  }
                    /* try { // try from 00ae0a8c to 00be0b0b has its CatchHandler @ 00ae0bac */
  return uVar5;
}

