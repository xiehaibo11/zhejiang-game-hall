
/* btCompoundShape::recalculateLocalAabb() */

void __thiscall btCompoundShape::recalculateLocalAabb(btCompoundShape *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  *(undefined4 *)(this + 0x38) = 0x5d5e0b6b;
  *(undefined8 *)(this + 0x3c) = 0x5d5e0b6b5d5e0b6b;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xdd5e0b6b;
  *(undefined8 *)(this + 0x4c) = 0xdd5e0b6bdd5e0b6b;
  *(undefined4 *)(this + 0x54) = 0;
  if (0 < *(int *)(this + 0x1c)) {
    lVar2 = 0;
    lVar3 = 0x40;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x28) + lVar3);
      (**(code **)(*plVar1 + 0x10))
                (plVar1,(undefined8 *)(*(long *)(this + 0x28) + lVar3) + -8,&local_40,&local_50);
      if (local_40 < *(float *)(this + 0x38)) {
        *(float *)(this + 0x38) = local_40;
      }
      if (*(float *)(this + 0x48) < local_50) {
        *(float *)(this + 0x48) = local_50;
      }
      if (local_3c < *(float *)(this + 0x3c)) {
        *(float *)(this + 0x3c) = local_3c;
      }
      if (*(float *)(this + 0x4c) < local_4c) {
        *(float *)(this + 0x4c) = local_4c;
      }
      if (local_38 < *(float *)(this + 0x40)) {
        *(float *)(this + 0x40) = local_38;
      }
      if (*(float *)(this + 0x50) < local_48) {
        *(float *)(this + 0x50) = local_48;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar2 < *(int *)(this + 0x1c));
  }
  return;
}

