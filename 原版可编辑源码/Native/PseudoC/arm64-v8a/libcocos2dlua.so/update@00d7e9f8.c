
/* dragonBones::Bone::update(int) */

void __thiscall dragonBones::Bone::update(Bone *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  Bone BVar4;
  undefined4 uVar5;
  
  this[0x94] = (Bone)0x0;
  if ((param_1 < 0) || (*(long **)(this + 0xb0) == (long *)0x0)) {
    if (this[0x92] != (Bone)0x0) {
      plVar2 = *(long **)(*(long *)(this + 0x68) + 0x48);
      for (plVar1 = *(long **)(*(long *)(this + 0x68) + 0x40); plVar1 != plVar2; plVar1 = plVar1 + 1
          ) {
        if ((Bone *)((long *)*plVar1)[4] == this) {
          (**(code **)(*(long *)*plVar1 + 0x28))();
                    /* try { // try from 00d7eaa4 to 00e7eaab has its CatchHandler @ 00d7f008 */
        }
                    /* try { // try from 00d7ea7c to 00e7ea8f has its CatchHandler @ 00d7f04c */
      }
    }
                    /* try { // try from 00d7eaac to 00e7eab7 has its CatchHandler @ 00d7f010 */
    if ((this[0x90] == (Bone)0x0) &&
       ((*(long *)(this + 0xc0) == 0 || (*(char *)(*(long *)(this + 0xc0) + 0x91) == '\0')))) {
      BVar4 = this[0x91];
      goto joined_r0x00d7ebec;
    }
    param_1 = -1;
    this[0x90] = (Bone)0x1;
    *(undefined4 *)(this + 0xbc) = 0xffffffff;
  }
  else {
    iVar3 = *(int *)(**(long **)(this + 0xb0) + (long)param_1 * 4);
    if (iVar3 < 0) {
      if (this[0x92] != (Bone)0x0) {
        plVar2 = *(long **)(*(long *)(this + 0x68) + 0x48);
                    /* try { // try from 00d7ead8 to 00e7eaf7 has its CatchHandler @ 00d7f04c */
        for (plVar1 = *(long **)(*(long *)(this + 0x68) + 0x40); plVar1 != plVar2;
            plVar1 = plVar1 + 1) {
          if ((Bone *)((long *)*plVar1)[4] == this) {
            (**(code **)(*(long *)*plVar1 + 0x28))();
          }
        }
      }
                    /* try { // try from 00d7ebc4 to 00e7ebdf has its CatchHandler @ 00d7f048 */
      if ((this[0x90] == (Bone)0x0) &&
         (((*(long *)(this + 0xc0) == 0 || (*(char *)(*(long *)(this + 0xc0) + 0x91) == '\0')) &&
          (-1 < *(int *)(this + 0xbc))))) {
        this[0x90] = (Bone)0x0;
        *(int *)(**(long **)(this + 0xb0) + (long)param_1 * 4) = *(int *)(this + 0xbc);
        BVar4 = this[0x91];
        goto joined_r0x00d7ebec;
      }
      this[0x90] = (Bone)0x1;
      *(undefined4 *)(this + 0xbc) = 0xffffffff;
    }
    else {
      if (*(int *)(this + 0xbc) == iVar3) {
        this[0x90] = (Bone)0x0;
                    /* try { // try from 00d7ea3c to 00e7ea43 has its CatchHandler @ 00d7f034 */
        BVar4 = this[0x91];
joined_r0x00d7ebec:
        if (BVar4 != (Bone)0x0) {
          this[0x91] = (Bone)0x0;
        }
        goto LAB_00d7eb58;
      }
                    /* try { // try from 00d7eb28 to 00e7eb2f has its CatchHandler @ 00d7f030 */
      this[0x90] = (Bone)0x1;
                    /* try { // try from 00d7eb30 to 00e7eb97 has its CatchHandler @ 00d7f050 */
      *(int *)(this + 0xbc) = iVar3;
    }
  }
  *(undefined2 *)(this + 0x90) = 0x100;
  if ((int)*(uint *)(this + 0xbc) < 0) {
    if (this[0xb8] != (Bone)0x0) {
      _updateGlobalTransformMatrix(this,(bool)((byte)~(byte)((uint)param_1 >> 0x18) >> 7));
    }
    if ((-1 < param_1) && (*(long *)(this + 0xb0) != 0)) {
      uVar5 = ArmatureData::setCacheFrame
                        (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
                         (Transform *)(this + 0x28));
      *(undefined4 *)(**(long **)(this + 0xb0) + (long)param_1 * 4) = uVar5;
      *(undefined4 *)(this + 0xbc) = uVar5;
    }
  }
  else {
    ArmatureData::getCacheFrame
              (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
               (Transform *)(this + 0x28),*(uint *)(this + 0xbc));
  }
LAB_00d7eb58:
  this[0xb8] = (Bone)0x1;
  return;
}

