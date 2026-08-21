
/* dragonBones::DeformTimelineState::init(dragonBones::Armature*, dragonBones::AnimationState*,
   dragonBones::TimelineData*) */

void __thiscall
dragonBones::DeformTimelineState::init
          (DeformTimelineState *this,Armature *param_1,AnimationState *param_2,TimelineData *param_3
          )

{
  uint uVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float local_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  TimelineState::init((TimelineState *)this,param_1,param_2,param_3);
  if (*(long *)(this + 0x58) == 0) {
    lVar6 = *(long *)(*(long *)(this + 0xb8) + 0xd8);
    uVar4 = 0;
    if (lVar6 != 0) {
      uVar4 = (ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10)) >> 2;
    }
    iVar5 = 0;
    *(int *)(this + 0xcc) = (int)uVar4;
    *(int *)(this + 0xd0) = (int)uVar4;
    *(undefined4 *)(this + 0xd4) = 0;
  }
  else {
                    /* try { // try from 00d7a74c to 00e7a753 has its CatchHandler @ 00d7b93c */
    lVar6 = *(long *)(this + 0x80);
    uVar1 = *(int *)(*(long *)(this + 0x50) + 0x10) +
            (uint)*(ushort *)
                   (*(long *)(this + 0x90) +
                   (ulong)(*(int *)(*(long *)(this + 0x58) + 0x14) + 3) * 2);
    *(int *)(this + 0xc0) = (int)*(short *)(lVar6 + (ulong)uVar1 * 2);
    *(int *)(this + 0xcc) = (int)*(short *)(lVar6 + (ulong)(uVar1 + 1) * 2);
    sVar2 = *(short *)(lVar6 + (ulong)(uVar1 + 2) * 2);
    uVar4 = (ulong)sVar2;
                    /* try { // try from 00d7a78c to 00e7a7cb has its CatchHandler @ 00d7b9c8 */
    *(int *)(this + 0xd0) = (int)sVar2;
    *(int *)(this + 0xd4) = (int)*(short *)(lVar6 + (ulong)(uVar1 + 3) * 2);
    iVar5 = *(int *)(*(long *)(this + 0x50) + 0x14) +
            (int)*(short *)(lVar6 + (ulong)(uVar1 + 4) * 2);
  }
  lVar6 = *(long *)(this + 0xd8);
                    /* try { // try from 00d7a7d8 to 00e7a7df has its CatchHandler @ 00d7b8f4 */
  uVar4 = uVar4 & 0xffffffff;
                    /* try { // try from 00d7a7e0 to 00e7a7eb has its CatchHandler @ 00d7b908 */
  *(int *)(this + 200) = iVar5;
  uVar7 = *(long *)(this + 0xe0) - lVar6 >> 2;
  if (uVar7 < uVar4) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0xd8),uVar4 - uVar7);
    uVar4 = (ulong)*(uint *)(this + 0xd0);
                    /* try { // try from 00d7a800 to 00e7a80f has its CatchHandler @ 00d7b9c8 */
  }
  else if (uVar7 != uVar4) {
    *(ulong *)(this + 0xe0) = lVar6 + uVar4 * 4;
  }
  local_2c = 0.0;
  lVar6 = *(long *)(this + 0xf0);
  uVar7 = *(long *)(this + 0xf8) - lVar6 >> 2;
  if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
    if (uVar4 < uVar7) {
                    /* try { // try from 00d7a848 to 00e7a84f has its CatchHandler @ 00d7b938 */
      *(ulong *)(this + 0xf8) = lVar6 + uVar4 * 4;
    }
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0xf0),uVar4 - uVar7,&local_2c)
    ;
    uVar4 = (ulong)*(uint *)(this + 0xd0);
  }
  uVar7 = *(long *)(this + 0x110) - *(long *)(this + 0x108) >> 2;
  if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
    if (uVar4 < uVar7) {
      *(ulong *)(this + 0x110) = *(long *)(this + 0x108) + uVar4 * 4;
    }
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x108),uVar4 - uVar7);
  }
                    /* try { // try from 00d7a880 to 00e7a89f has its CatchHandler @ 00d7ba10 */
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

