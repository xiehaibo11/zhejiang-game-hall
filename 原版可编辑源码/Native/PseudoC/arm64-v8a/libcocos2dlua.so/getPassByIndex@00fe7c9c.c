
/* cocos2d::Technique::getPassByIndex(long) const */

undefined8 __thiscall cocos2d::Technique::getPassByIndex(Technique *this,long param_1)

{
  long lVar1;
  
  if ((param_1 < 0) ||
     (lVar1 = *(long *)(this + 0x78), *(long *)(this + 0x80) - lVar1 >> 3 <= param_1)) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCTechnique.cpp",
                        "getPassByIndex",0x74);
    lVar1 = *(long *)(this + 0x78);
  }
  return *(undefined8 *)(lVar1 + param_1 * 8);
}

