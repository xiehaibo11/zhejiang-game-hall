
/* cocos2d::BaseLight::setIntensity(float) */

void __thiscall cocos2d::BaseLight::setIntensity(BaseLight *this,float param_1)

{
  if (param_1 < 0.0) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/2d/CCLight.cpp",
                        "setIntensity",0x20);
  }
  *(float *)(this + 0x2f8) = param_1;
  return;
}

