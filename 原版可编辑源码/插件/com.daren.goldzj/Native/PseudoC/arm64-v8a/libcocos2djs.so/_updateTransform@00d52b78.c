
/* dragonBones::CCSlot::_updateTransform() */

void __thiscall dragonBones::CCSlot::_updateTransform(CCSlot *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*(undefined8 *)(this + 0x18);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  *(float *)(this + 0x204) = *(float *)(this + 0x10);
  *(float *)(this + 0x208) = *(float *)(this + 0x14);
  *(ulong *)(this + 0x214) = CONCAT44(-fVar3,-fVar2);
  fVar1 = *(float *)(this + 0x20);
  if (*(long *)(this + 0x178) == 0) {
    fVar1 = fVar1 - (*(float *)(this + 0x9c) * *(float *)(this + 0x10) -
                    *(float *)(this + 0xa0) * fVar2);
    *(float *)(this + 0x238) =
         *(float *)(this + 0x24) -
         (*(float *)(this + 0x9c) * *(float *)(this + 0x14) - *(float *)(this + 0xa0) * fVar3);
  }
  else {
    *(undefined4 *)(this + 0x238) = *(undefined4 *)(this + 0x24);
  }
  *(float *)(this + 0x234) = fVar1;
  this[0x1c8] = (CCSlot)0x1;
  return;
}

