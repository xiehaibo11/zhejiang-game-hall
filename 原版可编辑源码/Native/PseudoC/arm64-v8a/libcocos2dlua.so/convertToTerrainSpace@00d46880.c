
/* cocos2d::Terrain::convertToTerrainSpace(cocos2d::Vec2 const&) const */

float __thiscall cocos2d::Terrain::convertToTerrainSpace(Terrain *this,Vec2 *param_1)

{
  Terrain *pTVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  Vec4 aVStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Mat4 aMStack_c8 [64];
  long local_88;
  
                    /* try { // try from 00d46890 to 00e4689b has its CatchHandler @ 00d46910 */
                    /* try { // try from 00d4689c to 00e46917 has its CatchHandler @ 00d4682c */
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  pTVar1 = this + 0x80528;
  fVar3 = *(float *)(this + 0x42c);
  iVar4 = *(int *)pTVar1;
  iVar5 = *(int *)(this + 0x8052c);
  fVar6 = *(float *)param_1;
  (**(code **)(*(long *)this + 0x430))(aMStack_c8);
                    /* catch() { ... } // from try @ 00d46890 with catch @ 00d46910 */
  Vec4::Vec4((Vec4 *)&local_f0,-fVar3 * (float)iVar4 * 0.5,0.0,-fVar3 * (float)iVar5 * 0.5,1.0);
  Vec4::Vec4((Vec4 *)&local_e0);
  Mat4::transformVector(aMStack_c8,(Vec4 *)&local_f0,(Vec4 *)&local_e0);
  Vec4::~Vec4((Vec4 *)&local_f0);
  Mat4::~Mat4(aMStack_c8);
  fVar3 = (float)local_e0;
  fVar7 = *(float *)(this + 0x42c);
  iVar4 = *(int *)pTVar1;
  iVar5 = *(int *)(this + 0x8052c);
  (**(code **)(*(long *)this + 0x430))(aMStack_c8,this);
  Vec4::Vec4(aVStack_100,fVar7 * (float)iVar4,0.0,fVar7 * (float)iVar5,0.0);
  Vec4::Vec4((Vec4 *)&local_f0);
  Mat4::transformVector(aMStack_c8,aVStack_100,(Vec4 *)&local_f0);
  uStack_d8 = uStack_e8;
  local_e0 = local_f0;
  Vec4::~Vec4((Vec4 *)&local_f0);
  Vec4::~Vec4(aVStack_100);
  Mat4::~Mat4(aMStack_c8);
  fVar7 = (float)local_e0;
  iVar4 = *(int *)pTVar1;
  Vec4::~Vec4((Vec4 *)&local_e0);
                    /* try { // try from 00d469d8 to 00e46a3b has its CatchHandler @ 00d469d8
                       catch() { ... } // from try @ 00d469d8 with catch @ 00d469d8
                       catch() { ... } // from try @ 00d46a48 with catch @ 00d469d8 */
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return ((fVar6 - fVar3) / fVar7) * (float)iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

