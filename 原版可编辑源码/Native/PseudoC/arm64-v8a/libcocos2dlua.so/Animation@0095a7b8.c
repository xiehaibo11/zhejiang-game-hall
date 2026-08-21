
/* dragonBones::Animation::Animation() */

void __thiscall dragonBones::Animation::Animation(Animation *this)

{
  int iVar1;
  
                    /* try { // try from 0095a7bc to 00a5a8eb has its CatchHandler @ 0095a7bc
                       catch() { ... } // from try @ 0095a7bc with catch @ 0095a7bc
                       catch() { ... } // from try @ 0095a96c with catch @ 0095a7bc */
  iVar1 = BaseObject::_hashCode + 1;
  *(int *)(this + 8) = BaseObject::_hashCode;
  BaseObject::_hashCode = iVar1;
  this[0xc] = (Animation)0x0;
  *(undefined ***)this = &PTR__Animation_016d5f78;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Animation **)(this + 0x50) = this + 0x58;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  _onClear(this);
  return;
}

