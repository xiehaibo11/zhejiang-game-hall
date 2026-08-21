
/* spine::Polygon::~Polygon() */

void __thiscall spine::Polygon::~Polygon(Polygon *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x20);
  *(undefined ***)(this + 8) = &PTR__Vector_01c8d048;
  *(undefined ***)this = &PTR__Polygon_01c8f448;
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

