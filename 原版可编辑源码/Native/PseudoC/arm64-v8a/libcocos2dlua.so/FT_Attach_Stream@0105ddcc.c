
int FT_Attach_Stream(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 *__s;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    return 0x22;
  }
  if (*(long **)(lVar5 + 8) == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar4 = **(long **)(lVar5 + 8);
  __s = (undefined8 *)(**(code **)(lVar4 + 8))(lVar4,0x50);
                    /* catch() { ... } // from try @ 0105dd80 with catch @ 0105de14 */
  if (__s == (undefined8 *)0x0) {
    return 0x40;
  }
  memset(__s,0,0x50);
  __s[7] = lVar4;
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 0105de38 to 0115df5b has its CatchHandler @ 0105de38
                       catch() { ... } // from try @ 0105de38 with catch @ 0105de38
                       catch() { ... } // from try @ 0105df94 with catch @ 0105de38 */
    if ((uVar3 >> 2 & 1) == 0) {
      if (((uVar3 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar4 + 0x10))(lVar4,__s);
        __s = *(undefined8 **)(param_2 + 8);
        goto LAB_0105de9c;
      }
      iVar1 = 6;
    }
    else {
      iVar1 = FT_Stream_Open(__s,*(undefined8 *)(param_2 + 6));
      __s[4] = *(undefined8 *)(param_2 + 6);
      if (iVar1 == 0) goto LAB_0105de9c;
    }
    pcVar2 = *(code **)(lVar4 + 0x10);
    goto LAB_0105df34;
  }
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar6 = *(undefined8 *)(param_2 + 2);
  __s[2] = 0;
  __s[8] = 0;
  __s[5] = 0;
  __s[6] = 0;
  __s[1] = uVar7;
  *__s = uVar6;
LAB_0105de9c:
  __s[7] = lVar4;
  pcVar2 = *(code **)(*(long *)(lVar5 + 0x18) + 0xa0);
  if (pcVar2 == (code *)0x0) {
    iVar1 = 7;
    if (*(long *)(param_2 + 8) != 0) goto LAB_0105dec4;
LAB_0105df00:
    uVar3 = 0;
  }
  else {
    iVar1 = (*pcVar2)(param_1,__s);
    if (*(long *)(param_2 + 8) == 0) goto LAB_0105df00;
LAB_0105dec4:
    uVar3 = *param_2 >> 1 & 1;
  }
  if (__s == (undefined8 *)0x0) {
    return iVar1;
  }
  lVar4 = __s[7];
  if ((code *)__s[6] != (code *)0x0) {
    (*(code *)__s[6])(__s);
  }
  if (uVar3 != 0) {
    return iVar1;
  }
  pcVar2 = *(code **)(lVar4 + 0x10);
LAB_0105df34:
  (*pcVar2)(lVar4,__s);
  return iVar1;
}

