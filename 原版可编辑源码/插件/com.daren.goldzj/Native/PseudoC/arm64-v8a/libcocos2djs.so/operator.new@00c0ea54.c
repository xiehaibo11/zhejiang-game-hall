
/* spine::SpineObject::operator new(unsigned long) */

void * __thiscall spine::SpineObject::operator_new(SpineObject *this,ulong param_1)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0ea88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(**(code **)(*plVar1 + 0x18))
                             (plVar1,this,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SpineObject.cpp"
                              ,0x28);
  return pvVar2;
}

