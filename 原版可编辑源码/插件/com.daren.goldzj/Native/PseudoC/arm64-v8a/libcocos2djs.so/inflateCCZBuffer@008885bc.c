
/* cocos2d::ZipUtils::inflateCCZBuffer(unsigned char const*, long, unsigned char**) */

ulong cocos2d::ZipUtils::inflateCCZBuffer(uchar *param_1,long param_2,uchar **param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uchar *puVar5;
  ulong __size;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*param_1 == 'C') && (param_1[1] == 'C')) {
    if ((param_1[2] == 'Z') && (param_1[3] == '!')) {
      if (((ushort)(*(ushort *)(param_1 + 6) >> 8 | *(ushort *)(param_1 + 6) << 8) < 3) &&
         (*(ushort *)(param_1 + 4) >> 8 == 0 && (*(ushort *)(param_1 + 4) & 0xff) == 0)) {
LAB_00888690:
        uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
        __size = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        puVar5 = malloc(__size);
        *param_3 = puVar5;
        if (puVar5 != (uchar *)0x0) {
          local_50 = __size;
          iVar4 = uncompress(puVar5,&local_50,param_1 + 0x10,param_2 + -0x10);
          if (iVar4 == 0) goto LAB_008886d0;
          free(*param_3);
          *param_3 = (uchar *)0x0;
        }
      }
    }
    else if ((((param_1[2] == 'Z') && (param_1[3] == 'p')) &&
             (*(ushort *)(param_1 + 6) >> 8 == 0 && (*(ushort *)(param_1 + 6) & 0xff) == 0)) &&
            (*(ushort *)(param_1 + 4) >> 8 == 0 && (*(ushort *)(param_1 + 4) & 0xff) == 0)) {
      lVar1 = param_2 + -9;
      if (-1 < param_2 + -0xc) {
        lVar1 = param_2 + -0xc;
      }
      decodeEncodedPvr((uint *)(param_1 + 0xc),lVar1 >> 2);
      goto LAB_00888690;
    }
  }
  __size = 0xffffffff;
LAB_008886d0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __size;
}

