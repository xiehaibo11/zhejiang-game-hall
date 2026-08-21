
/* cocos2d::renderer::Texture::glFilter(cocos2d::renderer::Texture::Filter,
   cocos2d::renderer::Texture::Filter) */

undefined4 cocos2d::renderer::Texture::glFilter(byte param_1,char param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    if ((byte)(param_2 + 1U) < 3) {
      if (param_2 == '\0') {
        puVar3 = (undefined4 *)(&DAT_01869094 + (ulong)param_1 * 0xc);
      }
      else {
        lVar1 = (ulong)param_1 * 0xc;
        puVar3 = (undefined4 *)(&UNK_01869098 + lVar1);
        if (param_2 != '\x01') {
          puVar3 = (undefined4 *)(&DAT_01869090 + lVar1);
        }
      }
      uVar2 = *puVar3;
    }
    else {
      __android_log_print(5,"renderer"," (112): Unknown mipFilter: %u\n",(int)(char)param_1);
      uVar2 = 0x2703;
    }
  }
  else {
    __android_log_print(5,"renderer"," (106): Unknown filter: %u\n",(int)(char)param_1);
    uVar2 = 0x2601;
    if (param_2 != -1) {
      uVar2 = 0x2703;
    }
  }
  return uVar2;
}

