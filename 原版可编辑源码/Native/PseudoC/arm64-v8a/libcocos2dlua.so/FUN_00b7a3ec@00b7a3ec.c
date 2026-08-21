
undefined8 FUN_00b7a3ec(BIO *param_1,int param_2,uint param_3,int *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  char acStack_62 [18];
  
  iVar3 = *param_4;
  __n = (size_t)iVar3;
  if (iVar3 < 0) {
LAB_00b7a490:
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      if (4 < iVar3) goto LAB_00b7a490;
      if (iVar3 < 1) {
        __n = 0;
      }
      else {
        memcpy(acStack_62 + 2,*(void **)(param_4 + 2),__n);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
          bVar4 = (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(param_4 + 4) & 7) & 0x1f));
          if ((param_3 & 0xff) == 0) {
            bVar4 = acStack_62[__n + 1] & (bVar4 ^ 0xff);
          }
          else {
            bVar4 = bVar4 | acStack_62[__n + 1];
          }
          acStack_62[__n + 1] = bVar4;
        }
      }
      memset(acStack_62 + __n + 2,param_3,(long)(4 - iVar3));
      BIO_printf(param_1,"%d.%d.%d.%d",(ulong)(byte)acStack_62[2],(ulong)(byte)acStack_62[3],
                 (ulong)(byte)acStack_62[4],(ulong)(byte)acStack_62[5]);
    }
    else if (param_2 == 2) {
      if (0x10 < iVar3) goto LAB_00b7a490;
      if (iVar3 < 1) {
        __n = 0;
      }
      else {
        memcpy(acStack_62 + 2,*(void **)(param_4 + 2),__n);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
                    /* catch() { ... } // from try @ 00b7a250 with catch @ 00b7a464
                       catch() { ... } // from try @ 00b7a2c8 with catch @ 00b7a464 */
          bVar4 = (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(param_4 + 4) & 7) & 0x1f));
          if ((param_3 & 0xff) == 0) {
            bVar4 = acStack_62[__n + 1] & (bVar4 ^ 0xff);
          }
          else {
            bVar4 = bVar4 | acStack_62[__n + 1];
          }
          acStack_62[__n + 1] = bVar4;
        }
      }
      memset(acStack_62 + __n + 2,param_3,(long)(0x10 - iVar3));
      lVar6 = 0;
      do {
        lVar5 = lVar6;
        if ((lVar5 + 0x10 < 2) || (acStack_62[lVar5 + 0x11] != '\0')) break;
        lVar6 = lVar5 + -2;
      } while (acStack_62[lVar5 + 0x10] == '\0');
      iVar3 = (int)lVar5;
      if (iVar3 + 0x10 < 1) {
        BIO_puts(param_1,":");
      }
      else {
        lVar6 = 0;
        do {
          puVar1 = &DAT_012f06b7;
          if (0xd < lVar6) {
            puVar1 = &DAT_013c996e;
          }
          BIO_printf(param_1,"%x%s",(ulong)CONCAT11(acStack_62[lVar6 + 2],acStack_62[lVar6 + 3]),
                     puVar1);
          lVar6 = lVar6 + 2;
        } while (lVar6 < lVar5 + 0x10);
        if ((0xf < iVar3 + 0x10) || (BIO_puts(param_1,":"), iVar3 != -0x10)) goto LAB_00b7a6b8;
      }
      BIO_puts(param_1,":");
    }
    else {
      if (0 < iVar3) {
        lVar6 = 0;
        do {
          puVar1 = &DAT_012f06b7;
          if (lVar6 < 1) {
            puVar1 = &DAT_013c996e;
          }
          BIO_printf(param_1,"%s%02x",puVar1,(ulong)*(byte *)(*(long *)(param_4 + 2) + lVar6));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *param_4);
      }
      BIO_printf(param_1,"[%d]",(ulong)(param_4[4] & 7));
    }
LAB_00b7a6b8:
    uVar2 = 1;
  }
  return uVar2;
}

