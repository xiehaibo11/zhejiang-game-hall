
/* spine::AttachmentTimeline::setFrame(int, float, spine::String const&) */

void __thiscall
spine::AttachmentTimeline::setFrame
          (AttachmentTimeline *this,int param_1,float param_2,String *param_3)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *(float *)(*(long *)(this + 0x28) + (long)param_1 * 4) = param_2;
  lVar4 = *(long *)(this + 0x48);
  if ((String *)(lVar4 + (long)param_1 * 0x18) != param_3) {
    lVar5 = (long)param_1;
    plVar3 = (long *)(lVar4 + lVar5 * 0x18 + 0x10);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      plVar1 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar1 + 0x28))
                (plVar1,lVar2,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (*(long *)(param_3 + 0x10) != 0) {
      *(undefined8 *)(lVar4 + lVar5 * 0x18 + 8) = *(undefined8 *)(param_3 + 8);
      lVar4 = *(long *)(param_3 + 8);
      plVar1 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar1 + 0x18))
                                 (plVar1,lVar4 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x81);
      *plVar3 = (long)__dest;
      memcpy(__dest,*(void **)(param_3 + 0x10),*(long *)(param_3 + 8) + 1);
      return;
    }
    lVar4 = lVar4 + lVar5 * 0x18;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  return;
}

