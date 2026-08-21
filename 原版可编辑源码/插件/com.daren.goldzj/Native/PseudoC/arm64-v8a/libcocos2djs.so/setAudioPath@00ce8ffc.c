
/* spine::EventData::setAudioPath(spine::String const&) */

void __thiscall spine::EventData::setAudioPath(EventData *this,String *param_1)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  
  if (this + 0x40 != (EventData *)param_1) {
    lVar2 = *(long *)(this + 0x50);
    if (lVar2 != 0) {
      plVar1 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar1 + 0x28))
                (plVar1,lVar2,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 8);
      plVar1 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar1 + 0x18))
                                 (plVar1,lVar2 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x81);
      *(void **)(this + 0x50) = __dest;
      memcpy(__dest,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
      return;
    }
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
  }
  return;
}

