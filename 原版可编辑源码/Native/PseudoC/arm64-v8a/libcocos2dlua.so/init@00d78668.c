
/* dragonBones::TimelineState::init(dragonBones::Armature*, dragonBones::AnimationState*,
   dragonBones::TimelineData*) */

void __thiscall
dragonBones::TimelineState::init
          (TimelineState *this,Armature *param_1,AnimationState *param_2,TimelineData *param_3)

{
  TimelineState *pTVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  
  *(TimelineData **)(this + 0x58) = param_3;
  *(Armature **)(this + 0x60) = param_1;
  *(AnimationState **)(this + 0x68) = param_2;
  pTVar1 = (TimelineState *)0x0;
  if (*(TimelineState **)(param_2 + 0x88) != this) {
    pTVar1 = *(TimelineState **)(param_2 + 0x88);
  }
  *(TimelineState **)(this + 0x70) = pTVar1;
  lVar3 = *(long *)(param_2 + 0x80);
  *(long *)(this + 0x50) = lVar3;
  lVar3 = *(long *)(lVar3 + 0xf0);
  uVar2 = *(uint *)(lVar3 + 0x14);
  *(uint *)(this + 0x20) = uVar2;
                    /* try { // try from 00d786a0 to 00e786ab has its CatchHandler @ 00d79aac */
  *(float *)(this + 0x34) = 1.0 / (float)uVar2;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 0x6c);
                    /* try { // try from 00d786ac to 00e786bb has its CatchHandler @ 00d79a9c */
  lVar3 = *(long *)(lVar3 + 0x158);
  *(long *)(this + 0x48) = lVar3;
  if (param_3 != (TimelineData *)0x0) {
    uVar6 = *(undefined8 *)(lVar3 + 0xc0);
                    /* try { // try from 00d786bc to 00e786cb has its CatchHandler @ 00d79a8c */
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(lVar3 + 200);
    *(undefined8 *)(this + 0x80) = uVar6;
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(lVar3 + 0xd0);
    lVar4 = *(long *)(lVar3 + 0xd8);
                    /* try { // try from 00d786cc to 00e786db has its CatchHandler @ 00d79a7c */
    *(long *)(this + 0x90) = lVar4;
    *(long *)(this + 0x98) = lVar3 + 0x48;
    uVar2 = *(uint *)(param_3 + 0x14);
                    /* try { // try from 00d786dc to 00e786eb has its CatchHandler @ 00d79a6c */
    *(uint *)(this + 0x28) = (uint)*(ushort *)(lVar4 + (ulong)(uVar2 + 2) * 2);
                    /* try { // try from 00d786ec to 00e786fb has its CatchHandler @ 00d79a5c */
    *(uint *)(this + 0x24) = (uint)*(ushort *)(lVar4 + (ulong)(uVar2 + 4) * 2);
                    /* try { // try from 00d786fc to 00e7870b has its CatchHandler @ 00d79a4c */
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + (ulong)uVar2 * 2));
    *(float *)(this + 0x40) = 100.0 / fVar5;
                    /* try { // try from 00d7870c to 00e7871b has its CatchHandler @ 00d79a3c */
                    /* try { // try from 00d7871c to 00e7872b has its CatchHandler @ 00d79a2c */
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + (ulong)(uVar2 + 1) * 2));
    *(float *)(this + 0x44) = fVar5 * 0.01;
  }
  return;
}

