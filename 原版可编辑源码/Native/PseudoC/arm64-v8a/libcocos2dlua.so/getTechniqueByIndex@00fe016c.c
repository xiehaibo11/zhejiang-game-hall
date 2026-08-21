
/* cocos2d::Material::getTechniqueByIndex(long) */

undefined8 __thiscall cocos2d::Material::getTechniqueByIndex(Material *this,long param_1)

{
  long lVar1;
  
  if ((param_1 < 0) ||
     (lVar1 = *(long *)(this + 0x78), *(long *)(this + 0x80) - lVar1 >> 3 <= param_1)) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCMaterial.cpp",
                        "getTechniqueByIndex",0x206);
    lVar1 = *(long *)(this + 0x78);
  }
                    /* catch() { ... } // from try @ 00fe0158 with catch @ 00fe01d0 */
  return *(undefined8 *)(lVar1 + param_1 * 8);
}

