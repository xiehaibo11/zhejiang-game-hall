
undefined8
FUN_00138e88(long *param_1,long param_2,long param_3,long param_4,byte param_5,long param_6,
            long param_7,long param_8,long param_9,long param_10,long param_11,int param_12,
            int param_13,long param_14,long param_15,undefined4 param_16)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  char *__s;
  long lVar4;
  
  param_1[9] = param_11;
  param_1[0xc] = param_14;
  param_1[0xd] = param_15;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[5] = param_6;
  param_1[6] = param_8;
  *(byte *)(param_1 + 4) = param_5 & 1;
  param_1[8] = param_10;
  param_1[7] = param_9;
  *(int *)((long)param_1 + 0x54) = param_12;
  *(int *)(param_1 + 0xb) = param_13;
  *(bool *)(param_1 + 10) = param_13 != 0 || param_12 != 0;
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x14) = param_16;
  param_1[0xe] = (long)param_1;
  param_1[0xf] = param_4;
  param_1[0x11] = (long)FUN_00138f98;
  *param_1 = (long)(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  lVar4 = *(long *)(param_7 + 8);
  param_1[0x13] = lVar4;
  uVar3 = FUN_0013d374(param_1 + 0x1a,(int)lVar4 + (int)param_6);
  if ((uVar3 & 1) == 0) {
    __s = 
    "UnZipper_openVirtualVCE(&self->_newZipVCE,(ZipFilePos_t)(newZipCESize+self->_extraEditSize),self->_fileCount) ERROR!"
    ;
  }
  else {
    if ((param_1[0x13] == 0) ||
       (iVar2 = (**(code **)(param_7 + 0x10))(param_7,0,param_1[0x2d],param_1[0x2d] + param_1[0x13])
       , iVar2 != 0)) {
      param_1[0x15] = param_6;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      *(undefined4 *)((long)param_1 + 0xa4) = 0xffffffff;
      return 1;
    }
    __s = 
    "extraEdit->read(extraEdit,0,self->_newZipVCE._cache_fvce, self->_newZipVCE._cache_fvce+self->_extraEditSize) ERROR!"
    ;
  }
  puts(__s);
  return 0;
}

