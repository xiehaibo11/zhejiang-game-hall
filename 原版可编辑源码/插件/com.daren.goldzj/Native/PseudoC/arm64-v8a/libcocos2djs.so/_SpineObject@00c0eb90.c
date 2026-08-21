
/* spine::SpineObject::~SpineObject() */

void __thiscall spine::SpineObject::~SpineObject(SpineObject *this)

{
  long *plVar1;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0ebc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))
            (plVar1,this,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SpineObject.cpp",0x3e)
  ;
  return;
}

