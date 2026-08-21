
undefined4 FT_Face_Properties(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = 0;
  if (param_3 == 0 && param_2 != 0) {
    uVar1 = 6;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      lVar4 = puVar3[-1];
      if (lVar4 == 0x6461726b) {
        if ((char *)*puVar3 == (char *)0x0) {
          *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x70) = 0xff;
        }
        else if (*(char *)*puVar3 == '\x01') {
          *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x70) = 0;
        }
        else {
          *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x70) = 1;
        }
      }
      else {
        if (lVar4 != 0x73656564) {
          if (lVar4 != 0x6c636466) {
            return 6;
          }
          return 7;
        }
        if ((uint *)*puVar3 == (uint *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x74) = 0xffffffff;
        }
        else {
          uVar2 = *(uint *)*puVar3;
          *(uint *)(*(long *)(param_1 + 0xf0) + 0x74) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        }
      }
      puVar3 = puVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return 0;
  }
  return uVar1;
}

