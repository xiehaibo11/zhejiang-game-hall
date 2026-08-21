
/* spine::Json::~Json() */

void __thiscall spine::Json::~Json(Json *this)

{
  long *plVar1;
  Json *this_00;
  long lVar2;
  Json *pJVar3;
  
  this_00 = *(Json **)(this + 8);
  do {
    if (this_00 == (Json *)0x0) break;
    pJVar3 = *(Json **)this_00;
    ~Json(this_00);
    operator_delete(this_00);
    this_00 = pJVar3;
  } while (pJVar3 != (Json *)0x0);
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Json.cpp",0x88);
  }
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00d58c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Json.cpp",0x8c);
    return;
  }
  return;
}

