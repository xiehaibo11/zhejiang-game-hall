
/* cocos2d::Terrain::getNormal(int, int) const */

void __thiscall cocos2d::Terrain::getNormal(Terrain *this,int param_1,int param_2)

{
  Terrain *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float local_88;
  undefined4 local_84;
  float local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pTVar1 = this + 0x80528;
                    /* try { // try from 00d46134 to 00e46137 has its CatchHandler @ 00d46198 */
  fVar6 = *(float *)(this + 0x428);
  iVar4 = *(int *)(*(long *)(this + 0x80540) + 0x48);
  iVar3 = iVar4;
  if (iVar4 != 3) {
    iVar3 = 1;
  }
  iVar2 = 4;
  if (iVar4 != 1) {
    iVar2 = iVar3;
  }
  dVar14 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                              (long)((param_1 + *(int *)pTVar1 * param_2) * iVar2)))
  ;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d46134 with catch @ 00d46198
                        */
  fVar7 = (float)(**(code **)(*(long *)this + 0x68))();
  fVar12 = *(float *)(this + 0x428);
  iVar4 = *(int *)(*(long *)(this + 0x80540) + 0x48);
                    /* try { // try from 00d461c0 to 00e461c3 has its CatchHandler @ 00d46224 */
  iVar3 = iVar4;
  if (iVar4 != 3) {
    iVar3 = 1;
  }
  iVar2 = 4;
  if (iVar4 != 1) {
    iVar2 = iVar3;
  }
  dVar15 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                              (long)((param_1 + *(int *)pTVar1 * (param_2 + 1)) *
                                                    iVar2)));
  fVar8 = (float)(**(code **)(*(long *)this + 0x68))(this);
  iVar4 = *(int *)(*(long *)(this + 0x80540) + 0x48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d461c0 with catch @ 00d46224
                        */
  fVar13 = *(float *)(this + 0x428);
  iVar3 = iVar4;
  if (iVar4 != 3) {
    iVar3 = 1;
  }
  iVar2 = 4;
  if (iVar4 != 1) {
    iVar2 = iVar3;
  }
                    /* try { // try from 00d4624c to 00e4624f has its CatchHandler @ 00d462b0 */
  dVar16 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                              (long)((param_1 + 1 + *(int *)pTVar1 * param_2) *
                                                    iVar2)));
  fVar9 = (float)(**(code **)(*(long *)this + 0x68))(this);
  iVar4 = *(int *)(*(long *)(this + 0x80540) + 0x48);
  fVar10 = *(float *)(this + 0x428);
  iVar3 = iVar4;
  if (iVar4 != 3) {
    iVar3 = 1;
  }
  iVar2 = 4;
  if (iVar4 != 1) {
    iVar2 = iVar3;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4624c with catch @ 00d462b0
                        */
  dVar17 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                              (long)((param_1 + 1 + *(int *)pTVar1 * (param_2 + 1))
                                                    * iVar2)));
  fVar11 = (float)(**(code **)(*(long *)this + 0x68))(this);
  Vec3::Vec3((Vec3 *)&local_88);
  local_88 = fVar9 * (float)((dVar16 / 255.0) * (double)fVar13 - (double)fVar13 * 0.5) -
             fVar8 * (float)((dVar15 / 255.0) * (double)fVar12 - (double)fVar12 * 0.5);
  local_80 = fVar11 * (float)((dVar17 / 255.0) * (double)fVar10 - (double)fVar10 * 0.5) -
             fVar7 * (float)((dVar14 / 255.0) * (double)fVar6 - (double)fVar6 * 0.5);
                    /* try { // try from 00d462f0 to 00e4630f has its CatchHandler @ 00d463f8 */
  local_84 = 0x40000000;
  Vec3::normalize((Vec3 *)&local_88);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88,local_84,local_80);
}

