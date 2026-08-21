
/* spine::String::~String() */

void __thiscall spine::String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined ***)this = &PTR__String_01c67868;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

