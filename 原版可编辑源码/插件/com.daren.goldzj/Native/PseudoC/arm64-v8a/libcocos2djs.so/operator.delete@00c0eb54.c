
/* spine::SpineObject::operator delete(void*) */

void __thiscall spine::SpineObject::operator_delete(SpineObject *this,void *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0eb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))
            (plVar1,this,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SpineObject.cpp",0x3e)
  ;
  return;
}

