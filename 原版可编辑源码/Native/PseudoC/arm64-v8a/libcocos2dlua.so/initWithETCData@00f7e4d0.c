
/* cocos2d::Image::initWithETCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithETCData(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  Configuration *this_00;
  ulong uVar6;
  void *pvVar7;
  size_t sVar8;
  
  uVar5 = etc1_pkm_is_valid(param_1);
  if ((int)uVar5 != 0) {
    uVar3 = etc1_pkm_get_width(param_1);
    *(undefined4 *)(this + 0x38) = uVar3;
    iVar4 = etc1_pkm_get_height(param_1);
    uVar5 = 0;
    *(int *)(this + 0x3c) = iVar4;
    if ((iVar4 != 0) && (*(int *)(this + 0x38) != 0)) {
      this_00 = (Configuration *)Configuration::getInstance();
      uVar6 = Configuration::supportsETC(this_00);
      if ((uVar6 & 1) == 0) {
        iVar4 = *(int *)(this + 0x38);
        iVar1 = *(int *)(this + 0x3c);
        *(undefined4 *)(this + 0x48) = 3;
        iVar2 = iVar4 * 3;
        sVar8 = (size_t)(iVar2 * iVar1);
        *(size_t *)(this + 0x30) = sVar8;
        pvVar7 = malloc(sVar8);
        *(void **)(this + 0x28) = pvVar7;
        iVar4 = etc1_decode_image(param_1 + 0x10,pvVar7,iVar4,iVar1,3,iVar2);
        if (iVar4 != 0) {
          *(undefined8 *)(this + 0x30) = 0;
          if (*(void **)(this + 0x28) == (void *)0x0) {
            return 0;
          }
          free(*(void **)(this + 0x28));
          return 0;
        }
      }
      else {
        sVar8 = param_2 - 0x10;
        *(undefined4 *)(this + 0x48) = 0xe;
        *(size_t *)(this + 0x30) = sVar8;
        pvVar7 = malloc(sVar8);
        *(void **)(this + 0x28) = pvVar7;
        memcpy(pvVar7,param_1 + 0x10,sVar8);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

