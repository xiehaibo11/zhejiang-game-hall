
/* cocos2d::Terrain::getHeight(float, float, cocos2d::Vec3*) const */

float __thiscall
cocos2d::Terrain::getHeight(Terrain *this,float param_1,float param_2,Vec3 *param_3)

{
  Terrain *pTVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  float fVar26;
  Vec4 aVStack_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  Mat4 aMStack_f0 [64];
  long local_b0;
  
                    /* catch() { ... } // from try @ 00d45764 with catch @ 00d456ec */
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  pTVar1 = this + 0x80528;
  fVar15 = *(float *)(this + 0x42c);
  iVar16 = *(int *)pTVar1;
  iVar17 = *(int *)(this + 0x8052c);
                    /* try { // try from 00d45730 to 00e45737 has its CatchHandler @ 00d45840 */
  (**(code **)(*(long *)this + 0x430))(aMStack_f0);
                    /* try { // try from 00d4575c to 00e45763 has its CatchHandler @ 00d4581c */
                    /* try { // try from 00d45764 to 00e4585b has its CatchHandler @ 00d456ec */
  Vec4::Vec4((Vec4 *)&local_110,-fVar15 * (float)iVar16 * 0.5,0.0,-fVar15 * (float)iVar17 * 0.5,1.0)
  ;
  Vec4::Vec4((Vec4 *)&local_100);
  Mat4::transformVector(aMStack_f0,(Vec4 *)&local_110,(Vec4 *)&local_100);
  Vec4::~Vec4((Vec4 *)&local_110);
  Mat4::~Mat4(aMStack_f0);
  fVar15 = (float)uStack_f8;
  fVar24 = *(float *)(this + 0x42c);
  iVar16 = *(int *)pTVar1;
  iVar17 = *(int *)(this + 0x8052c);
  (**(code **)(*(long *)this + 0x430))(aMStack_f0,this);
  Vec4::Vec4(aVStack_120,fVar24 * (float)iVar16,0.0,fVar24 * (float)iVar17,0.0);
  Vec4::Vec4((Vec4 *)&local_110);
  Mat4::transformVector(aMStack_f0,aVStack_120,(Vec4 *)&local_110);
  fVar24 = param_1 - (float)local_100;
  uStack_f8 = uStack_108;
  local_100 = local_110;
  Vec4::~Vec4((Vec4 *)&local_110);
  Vec4::~Vec4(aVStack_120);
  Mat4::~Mat4(aMStack_f0);
                    /* catch() { ... } // from try @ 00d4575c with catch @ 00d4581c */
  iVar16 = *(int *)pTVar1;
  fVar24 = (fVar24 / (float)local_100) * (float)iVar16;
  if (fVar24 < (float)(iVar16 + -1)) {
                    /* catch() { ... } // from try @ 00d45730 with catch @ 00d45840 */
    fVar15 = ((param_2 - fVar15) / (float)uStack_f8) * (float)*(int *)(this + 0x8052c);
    if (((0.0 <= fVar15) && (0.0 <= fVar24)) && (fVar15 < (float)(*(int *)(this + 0x8052c) + -1))) {
      iVar10 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar23 = (float)(int)fVar24;
      fVar19 = (float)(int)fVar15;
      iVar9 = (int)fVar23;
      iVar17 = iVar10;
                    /* catch() { ... } // from try @ 00d4598c with catch @ 00d458a0 */
      if (iVar10 != 3) {
        iVar17 = 1;
      }
      iVar8 = (int)fVar19;
      iVar7 = 4;
      if (iVar10 != 1) {
        iVar7 = iVar17;
      }
      fVar26 = *(float *)(this + 0x428);
      bVar3 = *(byte *)(*(long *)(this + 0x440) + (long)(iVar7 * (iVar9 + iVar16 * iVar8)));
      fVar11 = (float)(**(code **)(*(long *)this + 0x68))(this);
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar22 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar10 = 4;
      if (iVar17 != 1) {
        iVar10 = iVar16;
      }
      iVar7 = (int)(fVar19 + 1.0);
      bVar4 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar9 + *(int *)pTVar1 * iVar7) * iVar10))
      ;
      fVar12 = (float)(**(code **)(*(long *)this + 0x68))(this);
                    /* try { // try from 00d45924 to 00e4592f has its CatchHandler @ 00d45a0c */
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      iVar10 = (int)(fVar23 + 1.0);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar2 = 4;
      if (iVar17 != 1) {
        iVar2 = iVar16;
      }
      fVar21 = *(float *)(this + 0x428);
      bVar5 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar10 + *(int *)pTVar1 * iVar8) * iVar2))
      ;
      fVar13 = (float)(**(code **)(*(long *)this + 0x68))(this);
                    /* try { // try from 00d45984 to 00e4598b has its CatchHandler @ 00d45a10 */
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
                    /* try { // try from 00d4598c to 00e45a2b has its CatchHandler @ 00d458a0 */
      fVar20 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar2 = 4;
      if (iVar17 != 1) {
        iVar2 = iVar16;
      }
      bVar25 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar10 + *(int *)pTVar1 * iVar7) * iVar2)
                        );
      fVar14 = (float)(**(code **)(*(long *)this + 0x68))(this);
      if (param_3 != (Vec3 *)0x0) {
        dVar18 = (double)NEON_ucvtf((ulong)bVar25);
                    /* catch() { ... } // from try @ 00d45924 with catch @ 00d45a0c */
                    /* catch() { ... } // from try @ 00d45984 with catch @ 00d45a10 */
        *(undefined4 *)(param_3 + 4) = 0x40000000;
        *(float *)param_3 =
             fVar13 * (((float)bVar5 / 255.0) * fVar21 - fVar21 * 0.5) -
             fVar12 * (((float)bVar4 / 255.0) * fVar22 + fVar22 * -0.5);
        *(float *)(param_3 + 8) =
             fVar14 * (float)((dVar18 / 255.0) * (double)fVar20 - (double)fVar20 * 0.5) -
             fVar11 * (((float)bVar3 / 255.0) * fVar26 + fVar26 * -0.5);
        Vec3::normalize(param_3);
      }
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar11 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar2 = 4;
      if (iVar17 != 1) {
        iVar2 = iVar16;
      }
      bVar3 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar9 + *(int *)pTVar1 * iVar8) * iVar2));
      fVar22 = (float)(**(code **)(*(long *)this + 0x68))(this);
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar26 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar2 = 4;
      if (iVar17 != 1) {
        iVar2 = iVar16;
      }
      bVar4 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar9 + *(int *)pTVar1 * iVar7) * iVar2));
      fVar12 = (float)(**(code **)(*(long *)this + 0x68))(this);
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar13 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar9 = 4;
      if (iVar17 != 1) {
        iVar9 = iVar16;
      }
      bVar5 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar10 + *(int *)pTVar1 * iVar8) * iVar9))
      ;
      fVar20 = (float)(**(code **)(*(long *)this + 0x68))(this);
      iVar17 = *(int *)(*(long *)(this + 0x80540) + 0x48);
      fVar21 = *(float *)(this + 0x428);
      iVar16 = iVar17;
      if (iVar17 != 3) {
        iVar16 = 1;
      }
      iVar9 = 4;
      if (iVar17 != 1) {
        iVar9 = iVar16;
      }
      bVar25 = *(byte *)(*(long *)(this + 0x440) + (long)((iVar10 + *(int *)pTVar1 * iVar7) * iVar9)
                        );
      fVar14 = (float)(**(code **)(*(long *)this + 0x68))(this);
      fVar24 = fVar24 - fVar23;
      fVar15 = fVar15 - fVar19;
      fVar15 = fVar22 * (1.0 - fVar24) * (1.0 - fVar15) *
                        (((float)bVar3 / 255.0) * fVar11 - fVar11 * 0.5) +
               fVar12 * (1.0 - fVar24) * fVar15 * (((float)bVar4 / 255.0) * fVar26 - fVar26 * 0.5) +
               fVar20 * fVar24 * (1.0 - fVar15) * (((float)bVar5 / 255.0) * fVar13 - fVar13 * 0.5) +
               fVar14 * fVar24 * fVar15 * (((float)bVar25 / 255.0) * fVar21 - fVar21 * 0.5);
      goto LAB_00d45ca8;
    }
  }
  fVar15 = 0.0;
  if (param_3 != (Vec3 *)0x0) {
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined8 *)param_3 = 0;
  }
LAB_00d45ca8:
  Vec4::~Vec4((Vec4 *)&local_100);
  if (*(long *)(lVar6 + 0x28) == local_b0) {
                    /* catch() { ... } // from try @ 00d45d00 with catch @ 00d45ccc */
    return fVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

