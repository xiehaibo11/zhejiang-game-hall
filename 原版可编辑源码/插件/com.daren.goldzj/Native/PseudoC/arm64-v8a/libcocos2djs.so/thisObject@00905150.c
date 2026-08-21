
/* se::State::thisObject() */

void __thiscall se::State::thisObject(State *this)

{
  undefined8 uVar1;
  
  if ((*(long *)(this + 8) == 0) && (*(void **)this != (void *)0x0)) {
    uVar1 = Object::getObjectWithPtr(*(void **)this);
    *(undefined8 *)(this + 8) = uVar1;
  }
  return;
}

