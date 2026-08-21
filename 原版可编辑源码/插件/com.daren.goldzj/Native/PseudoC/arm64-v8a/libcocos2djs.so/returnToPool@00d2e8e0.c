
/* dragonBones::BaseObject::returnToPool() */

void __thiscall dragonBones::BaseObject::returnToPool(BaseObject *this)

{
  (**(code **)(*(long *)this + 0x10))();
  _returnObject(this);
  return;
}

