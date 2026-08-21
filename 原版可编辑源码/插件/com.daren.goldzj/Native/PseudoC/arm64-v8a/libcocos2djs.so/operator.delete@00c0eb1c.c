
/* spine::SpineObject::operator delete(void*, void*) */

void spine::SpineObject::operator_delete(void *param_1,void *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))
            (plVar1,param_1,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SpineObject.cpp",0x3a)
  ;
  return;
}

