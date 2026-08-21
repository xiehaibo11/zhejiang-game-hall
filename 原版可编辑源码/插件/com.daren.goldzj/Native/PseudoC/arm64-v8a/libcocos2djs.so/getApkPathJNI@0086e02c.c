
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* getApkPathJNI() */

void getApkPathJNI(void)

{
  byte bVar1;
  ulong __n;
  void *__src;
  ulong *in_x8;
  void *__dest;
  ulong uVar2;
  
  bVar1 = (byte)DAT_01d35b18;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __src = DAT_01d35b28;
  __n = DAT_01d35b20;
  if ((bVar1 & 1) == 0) {
    uVar2 = CONCAT71(DAT_01d35b18._1_7_,(byte)DAT_01d35b18);
    in_x8[2] = (ulong)DAT_01d35b28;
    in_x8[1] = __n;
    *in_x8 = uVar2;
    return;
  }
  if (0xffffffffffffffef < DAT_01d35b20) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (DAT_01d35b20 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)DAT_01d35b20 << 1);
    if (__n == 0) goto LAB_0086e0d0;
  }
  else {
    uVar2 = DAT_01d35b20 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_0086e0d0:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}

