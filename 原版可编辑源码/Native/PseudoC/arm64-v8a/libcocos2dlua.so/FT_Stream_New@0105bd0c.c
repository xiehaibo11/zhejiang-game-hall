
int FT_Stream_New(long *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *__s;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar3 = *param_1;
  __s = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x50);
  if (__s == (undefined8 *)0x0) {
    return 0x40;
  }
  memset(__s,0,0x50);
  __s[7] = lVar3;
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0105bc6c with catch @ 0105bd74 */
      if (((uVar1 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar3 + 0x10))(lVar3,__s);
        __s = *(undefined8 **)(param_2 + 8);
        goto LAB_0105bdc0;
      }
                    /* try { // try from 0105bdec to 0115bea3 has its CatchHandler @ 0105bdac */
      iVar2 = 6;
    }
    else {
      iVar2 = FT_Stream_Open(__s,*(undefined8 *)(param_2 + 6));
      __s[4] = *(undefined8 *)(param_2 + 6);
                    /* try { // try from 0105bde4 to 0115bdeb has its CatchHandler @ 0105be88 */
      if (iVar2 == 0) goto LAB_0105bdc0;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,__s);
    __s = (undefined8 *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0105bdec with catch @ 0105bdac */
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    __s[2] = 0;
    __s[8] = 0;
    __s[5] = 0;
    __s[6] = 0;
    __s[1] = uVar5;
    *__s = uVar4;
LAB_0105bdc0:
    iVar2 = 0;
    __s[7] = lVar3;
  }
  *param_3 = __s;
  return iVar2;
}

