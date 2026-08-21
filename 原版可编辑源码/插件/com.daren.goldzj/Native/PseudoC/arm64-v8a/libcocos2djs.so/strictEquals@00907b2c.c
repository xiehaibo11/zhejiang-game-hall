
/* se::Object::strictEquals(se::Object*) const */

bool __thiscall se::Object::strictEquals(Object *this,Object *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  plVar3 = (long *)ObjectWrap::handle((ObjectWrap *)(param_1 + 0x18),DAT_01d371a8);
  bVar1 = plVar3 == (long *)0x0 && plVar2 == (long *)0x0;
  if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
    bVar1 = *plVar2 == *plVar3;
  }
  return bVar1;
}

