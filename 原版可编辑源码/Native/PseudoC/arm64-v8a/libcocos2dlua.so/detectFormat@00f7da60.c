
/* cocos2d::Image::detectFormat(unsigned char const*, long) */

undefined4 __thiscall cocos2d::Image::detectFormat(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  size_t __n;
  undefined4 uVar2;
  
  if (param_2 < 9) {
    if (4 < param_2) goto LAB_00f7daa4;
  }
  else {
    if (*(long *)param_1 == 0xa1a0a0d474e5089) {
      return 1;
    }
LAB_00f7daa4:
    if (*(short *)param_1 == -0x2701) {
      return 0;
    }
    if ((((*(short *)param_1 == 0x4949) && (param_1[2] == '*')) && (param_1[3] == '\0')) ||
       (((*(short *)param_1 == 0x4d4d && (param_1[2] == '\0')) && (param_1[3] == '*')))) {
      return 2;
    }
    if (param_2 < 0xd) goto LAB_00f7db84;
    if ((*(int *)param_1 == 0x46464952) && (*(int *)(param_1 + 8) == 0x50424557)) {
      return 3;
    }
  }
  if (0x33 < (ulong)param_2) {
    __n = __strlen_chk(&DAT_01447dd3,5);
    iVar1 = memcmp(param_1 + 0x2c,&DAT_01447dd3,__n);
    if ((iVar1 == 0) || (*(int *)param_1 == 0x3525650)) {
      return 4;
    }
  }
LAB_00f7db84:
  iVar1 = etc1_pkm_is_valid(param_1);
  if (iVar1 == 0) {
    iVar1 = strncmp((char *)param_1,"DDS",3);
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    else {
      iVar1 = strncmp((char *)(param_1 + 1),"KTX",3);
      uVar2 = 7;
      if (iVar1 != 0) {
        uVar2 = 10;
      }
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

