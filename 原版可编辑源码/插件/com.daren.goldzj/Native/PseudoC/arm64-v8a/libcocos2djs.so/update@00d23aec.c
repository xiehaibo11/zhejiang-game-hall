
/* dragonBones::TimelineState::update(float) */

void __thiscall dragonBones::TimelineState::update(TimelineState *this,float param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  
  uVar2 = _setCurrentTime(this,param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(uint *)(this + 0x28) < 2) {
    if (-1 < *(int *)(this + 0x30)) goto LAB_00d23bc0;
    *(undefined4 *)(this + 0x30) = 0;
    if (*(long *)(this + 0x58) != 0) {
      *(uint *)(this + 0x2c) =
           *(int *)(*(long *)(this + 0x50) + 0x18) +
           (uint)*(ushort *)
                  (*(long *)(this + 0x90) + (ulong)(*(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2
                  );
    }
    pcVar3 = *(code **)(*(long *)this + 0x20);
  }
  else {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20));
    iVar1 = *(int *)(**(long **)(this + 0x98) +
                    (ulong)(uint)(*(int *)(*(long *)(this + 0x58) + 0x18) +
                                 (int)(*(float *)(this + 0x18) * fVar4)) * 4);
    if (*(int *)(this + 0x30) == iVar1) goto LAB_00d23bc0;
    *(int *)(this + 0x30) = iVar1;
    *(uint *)(this + 0x2c) =
         *(int *)(*(long *)(this + 0x50) + 0x18) +
         (uint)*(ushort *)
                (*(long *)(this + 0x90) +
                (ulong)(iVar1 + *(int *)(*(long *)(this + 0x58) + 0x14) + 5) * 2);
    pcVar3 = *(code **)(*(long *)this + 0x20);
  }
  (*pcVar3)(this);
LAB_00d23bc0:
  if (*(int *)(this + 0x1c) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d23bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this);
  return;
}

