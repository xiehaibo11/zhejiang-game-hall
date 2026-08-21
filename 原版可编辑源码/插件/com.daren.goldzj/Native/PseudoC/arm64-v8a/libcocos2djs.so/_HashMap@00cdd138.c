
/* spine::HashMap<int, bool>::~HashMap() */

void __thiscall spine::HashMap<int,bool>::~HashMap(HashMap<int,bool> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__HashMap_01c8e310;
  plVar1 = *(long **)(this + 8);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[2];
    (**(code **)(lVar2 + 8))();
  }
  *(long *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

