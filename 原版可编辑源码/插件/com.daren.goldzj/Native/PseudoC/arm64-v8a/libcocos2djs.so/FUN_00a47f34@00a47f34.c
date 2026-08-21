
long FUN_00a47f34(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char local_24;
  undefined2 local_23;
  
  local_23 = 0;
  uVar3 = OpenSSL_version_num();
  if (uVar3 < 0x906000) {
    local_24 = '\0';
    uVar3 = 0x1010003f;
  }
  else {
    local_24 = '\0';
    if ((uVar3 & 0xff0) != 0) {
      uVar1 = (uint)(uVar3 >> 4) & 0xff;
      if (uVar1 < 0x1b) {
        local_24 = (char)(uVar3 >> 4) + '`';
      }
      else {
        iVar2 = uVar1 - 1;
                    /* try { // try from 00a47f88 to 00b4806b has its CatchHandler @ 00a47dd4 */
        lVar4 = (long)iVar2 * 0x4ec4ec4f;
        local_23 = CONCAT11(local_23._1_1_,
                            (char)iVar2 +
                            ((char)(uint)((ulong)lVar4 >> 0x23) - (char)(lVar4 >> 0x3f)) * -0x1a +
                            'b');
        local_24 = 'z';
      }
    }
  }
  iVar2 = FUN_00a0e7c4(param_1,param_2,"%s/%lx.%lx.%lx%s","OpenSSL",uVar3 >> 0x1c & 0xf,
                       uVar3 >> 0x14 & 0xff,uVar3 >> 0xc & 0xff,&local_24);
                    /* catch() { ... } // from try @ 00a47e54 with catch @ 00a47ffc */
  return (long)iVar2;
}

