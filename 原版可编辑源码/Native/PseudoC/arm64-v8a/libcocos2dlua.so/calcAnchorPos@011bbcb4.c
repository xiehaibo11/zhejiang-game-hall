
/* btGeneric6DofConstraint::calcAnchorPos() */

void __thiscall btGeneric6DofConstraint::calcAnchorPos(btGeneric6DofConstraint *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if (*(float *)(*(long *)(this + 0x30) + 0x174) != 0.0) {
    fVar1 = *(float *)(*(long *)(this + 0x28) + 0x174) /
            (*(float *)(*(long *)(this + 0x28) + 0x174) + *(float *)(*(long *)(this + 0x30) + 0x174)
            );
  }
  fVar2 = 1.0 - fVar1;
  *(float *)(this + 0x51c) = fVar1 * *(float *)(this + 0x470) + fVar2 * *(float *)(this + 0x4b0);
  *(float *)(this + 0x520) = fVar1 * *(float *)(this + 0x474) + fVar2 * *(float *)(this + 0x4b4);
  *(float *)(this + 0x524) = fVar1 * *(float *)(this + 0x478) + fVar2 * *(float *)(this + 0x4b8);
  *(undefined4 *)(this + 0x528) = 0;
  return;
}

