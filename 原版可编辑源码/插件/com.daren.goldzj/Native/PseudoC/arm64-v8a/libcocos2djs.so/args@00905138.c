
/* se::State::args() const */

undefined8 * __thiscall se::State::args(State *this)

{
  undefined8 *puVar1;
  
  puVar1 = &EmptyValueArray;
  if (*(undefined8 **)(this + 0x10) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x10);
  }
  return puVar1;
}

