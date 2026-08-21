
int FT_GlyphLoader_CheckSubGlyphs(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
  ulong uVar6;
  ulong uVar7;
  
                    /* try { // try from 0105b880 to 0115b99b has its CatchHandler @ 0105b734 */
  uVar2 = *(uint *)(param_1 + 2);
  uVar7 = (ulong)uVar2;
  uVar1 = (int)param_1[10] + param_2 + (int)param_1[0x13];
  if (uVar1 <= uVar2) {
    return 0;
  }
  lVar4 = *param_1;
  __s = (void *)param_1[0xb];
  uVar1 = uVar1 + 1 & 0xfffffffe;
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (__s == (void *)0x0) goto LAB_0105b99c;
    (**(code **)(lVar4 + 0x10))(lVar4,__s);
    iVar3 = 0;
    __s = (void *)0x0;
  }
  else {
    if (0x2aaaaaa < uVar1) {
      param_1[0xb] = (long)__s;
      return 10;
    }
    if (uVar2 == 0) {
      __s = (void *)(**(code **)(lVar4 + 8))(lVar4,uVar6 * 0x30);
      if (__s == (void *)0x0) {
        param_1[0xb] = 0;
        return 0x40;
      }
      memset(__s,0,uVar6 * 0x30);
LAB_0105b99c:
                    /* catch() { ... } // from try @ 0105b9dc with catch @ 0105b99c */
      iVar3 = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(lVar4 + 0x18))(lVar4,uVar7 * 0x30,uVar6 * 0x30,__s);
      iVar3 = (uint)(pvVar5 == (void *)0x0) << 6;
      if (pvVar5 != (void *)0x0) {
        __s = pvVar5;
      }
    }
    if ((uVar2 < uVar1) && (iVar3 == 0)) {
      memset((void *)((long)__s + uVar7 * 0x30),0,(uVar6 - uVar7) * 0x30);
      param_1[0xb] = (long)__s;
      goto LAB_0105b9b0;
    }
  }
  param_1[0xb] = (long)__s;
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_0105b9b0:
  *(uint *)(param_1 + 2) = uVar1;
  param_1[0x14] = (long)((long)__s + (ulong)*(uint *)(param_1 + 10) * 0x30);
                    /* try { // try from 0105b9d4 to 0115b9db has its CatchHandler @ 0105ba78 */
                    /* try { // try from 0105b9dc to 0115ba93 has its CatchHandler @ 0105b99c */
  return 0;
}

