
/* cocos2d::Image::initWithImageData(unsigned char const*, long) */

uint __thiscall cocos2d::Image::initWithImageData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  sImageTGA *__ptr;
  uchar *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    local_50 = (uchar *)0x0;
    uVar6 = ZipUtils::isCCZBuffer(param_1,param_2);
    if ((uVar6 & 1) == 0) {
      uVar6 = ZipUtils::isGZipBuffer(param_1,param_2);
      puVar2 = param_1;
      if ((uVar6 & 1) != 0) {
        param_2 = ZipUtils::inflateMemory(param_1,param_2,&local_50);
        puVar2 = local_50;
      }
    }
    else {
      iVar3 = ZipUtils::inflateCCZBuffer(param_1,param_2,&local_50);
      param_2 = (long)iVar3;
      puVar2 = local_50;
    }
    local_50 = puVar2;
    uVar4 = detectFormat(this,local_50,param_2);
    puVar2 = local_50;
    *(undefined4 *)(this + 0x44) = uVar4;
    switch(uVar4) {
    case 0:
      uVar5 = initWithJpgData(this,local_50,param_2);
      break;
    case 1:
      uVar5 = initWithPngData(this,local_50,param_2);
      break;
    case 2:
      uVar5 = initWithTiffData(this,local_50,param_2);
      break;
    case 3:
      uVar5 = initWithWebpData(this,local_50,param_2);
      break;
    case 4:
      uVar6 = initWithPVRv2Data(this,local_50,param_2);
      if ((uVar6 & 1) == 0) {
        uVar5 = initWithPVRv3Data(this,puVar2,param_2);
      }
      else {
        uVar5 = 1;
      }
      break;
    case 5:
      uVar5 = initWithETCData(this,local_50,param_2);
      break;
    case 6:
      initWithS3TCData(this,local_50,param_2);
      uVar5 = 1;
      break;
    case 7:
      initWithATITCData(this,local_50,param_2);
      uVar5 = 1;
      break;
    default:
      __ptr = (sImageTGA *)tgaLoadBuffer(local_50,param_2);
      if ((__ptr == (sImageTGA *)0x0) || (*(int *)__ptr != 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = initWithTGAData(this,__ptr);
      }
      free(__ptr);
    }
    if (local_50 != param_1) {
      free(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}

