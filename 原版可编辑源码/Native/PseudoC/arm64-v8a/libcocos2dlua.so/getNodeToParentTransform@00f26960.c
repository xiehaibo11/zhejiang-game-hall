
/* cocos2d::Node::getNodeToParentTransform() const */

Node * __thiscall cocos2d::Node::getNodeToParentTransform(Node *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  Mat4 *pMVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  Mat4 aMStack_128 [64];
  float local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (this[0x10c] != (Node)0x0) {
    uVar5 = *(undefined8 *)(this + 0x50);
    fVar14 = *(float *)(this + 0x58);
    if (this[0x1fa] != (Node)0x0) {
      uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                       (float)uVar5 + (float)*(undefined8 *)(this + 0x70));
    }
    if (*(float *)(this + 0x68) == 0.0) {
      bVar2 = *(float *)(this + 0x6c) != 0.0;
    }
    else {
      bVar2 = true;
    }
    Mat4::Mat4((Mat4 *)&local_a8);
    Mat4::createTranslation((float)uVar5,(float)((ulong)uVar5 >> 0x20),fVar14,(Mat4 *)&local_a8);
    pMVar4 = (Mat4 *)(this + 0xcc);
    Mat4::createRotation((Quaternion *)(this + 0x34),pMVar4);
    fVar14 = *(float *)(this + 0x30);
    if (*(float *)(this + 0x2c) != fVar14) {
      sincosf(*(float *)(this + 0x2c) * -0.017453292,&fStack_16c,&local_170);
                    /* try { // try from 00f26a2c to 01026a5b has its CatchHandler @ 00f26f88 */
      sincosf(fVar14 * -0.017453292,&fStack_174,&local_178);
      fVar14 = *(float *)(this + 0xcc);
      fVar12 = *(float *)(this + 0xdc);
      fVar13 = *(float *)(this + 0xec);
                    /* try { // try from 00f26a5c to 01026fa3 has its CatchHandler @ 00f2610c */
      *(float *)(this + 0xcc) = local_178 * fVar14 - fStack_16c * *(float *)(this + 0xd0);
      *(float *)(this + 0xd0) = fStack_174 * fVar14 + local_170 * *(float *)(this + 0xd0);
      *(float *)(this + 0xdc) = local_178 * fVar12 - fStack_16c * *(float *)(this + 0xe0);
      *(float *)(this + 0xe0) = fStack_174 * fVar12 + local_170 * *(float *)(this + 0xe0);
      *(float *)(this + 0xec) = local_178 * fVar13 - fStack_16c * *(float *)(this + 0xf0);
      *(float *)(this + 0xf0) = fStack_174 * fVar13 + local_170 * *(float *)(this + 0xf0);
    }
    Mat4::Mat4((Mat4 *)&local_e8,(Mat4 *)&local_a8);
    Mat4::multiply((Mat4 *)&local_e8,pMVar4);
    *(ulong *)(this + 0xf4) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(this + 0xec) = local_c8;
    *(ulong *)(this + 0x104) = CONCAT44(uStack_ac,uStack_b0);
    *(ulong *)(this + 0xfc) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined8 *)(this + 0xd4) = uStack_e0;
    *(ulong *)pMVar4 = CONCAT44(fStack_e4,local_e8);
    *(undefined8 *)(this + 0xe4) = uStack_d0;
    *(ulong *)(this + 0xdc) = CONCAT44(uStack_d4,local_d8);
    Mat4::~Mat4((Mat4 *)&local_e8);
    fVar14 = *(float *)(this + 0x44);
    if (fVar14 != 1.0) {
      *(ulong *)(this + 0xcc) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20) * fVar14,
                    (float)*(undefined8 *)(this + 0xcc) * fVar14);
      *(float *)(this + 0xd4) = fVar14 * *(float *)(this + 0xd4);
    }
    fVar14 = *(float *)(this + 0x48);
    if (fVar14 != 1.0) {
      *(ulong *)(this + 0xdc) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0xdc) >> 0x20) * fVar14,
                    (float)*(undefined8 *)(this + 0xdc) * fVar14);
      *(float *)(this + 0xe4) = fVar14 * *(float *)(this + 0xe4);
    }
    fVar14 = *(float *)(this + 0x4c);
    if (fVar14 != 1.0) {
      *(ulong *)(this + 0xec) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0xec) >> 0x20) * fVar14,
                    (float)*(undefined8 *)(this + 0xec) * fVar14);
      *(float *)(this + 0xf4) = fVar14 * *(float *)(this + 0xf4);
    }
    if (bVar2) {
      local_e8 = 1.0;
      fStack_e4 = tanf(*(float *)(this + 0x6c) * 0.017453292);
      uStack_e0 = 0;
      local_d8 = tanf(*(float *)(this + 0x68) * 0.017453292);
      uStack_d4 = 0x3f800000;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0x3f800000;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_ac = 0x3f800000;
      Mat4::Mat4(aMStack_128,&local_e8);
      Mat4::Mat4((Mat4 *)&local_168,pMVar4);
      Mat4::multiply((Mat4 *)&local_168,aMStack_128);
      *(undefined8 *)(this + 0xf4) = uStack_140;
      *(undefined8 *)(this + 0xec) = local_148;
      *(undefined8 *)(this + 0x104) = uStack_130;
      *(undefined8 *)(this + 0xfc) = local_138;
      *(undefined8 *)(this + 0xd4) = uStack_160;
      *(undefined8 *)pMVar4 = local_168;
      *(undefined8 *)(this + 0xe4) = uStack_150;
      *(undefined8 *)(this + 0xdc) = local_158;
      Mat4::~Mat4((Mat4 *)&local_168);
      Mat4::~Mat4(aMStack_128);
    }
    fVar14 = *(float *)(this + 0x70);
    fVar12 = *(float *)(this + 0x74);
    if ((fVar14 != 0.0) || (fVar12 != 0.0)) {
      *(ulong *)(this + 0xfc) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0xfc) >> 0x20) +
                    (-((float)((ulong)*(undefined8 *)(this + 0xdc) >> 0x20) * fVar12) -
                    (float)((ulong)*(undefined8 *)(this + 0xcc) >> 0x20) * fVar14),
                    (float)*(undefined8 *)(this + 0xfc) +
                    (-((float)*(undefined8 *)(this + 0xdc) * fVar12) -
                    (float)*(undefined8 *)(this + 0xcc) * fVar14));
      *(float *)(this + 0x104) =
           *(float *)(this + 0x104) +
           (-(fVar12 * *(float *)(this + 0xe4)) - fVar14 * *(float *)(this + 0xd4));
    }
    Mat4::~Mat4((Mat4 *)&local_a8);
  }
  lVar3 = *(long *)(this + 0x158);
  if (lVar3 != 0) {
    if (this[0x10c] != (Node)0x0) {
      uVar5 = *(undefined8 *)(this + 0xec);
      uVar7 = *(undefined8 *)(this + 0x104);
      uVar6 = *(undefined8 *)(this + 0xfc);
      uVar9 = *(undefined8 *)(this + 0xd4);
      uVar8 = *(undefined8 *)(this + 0xcc);
      uVar11 = *(undefined8 *)(this + 0xe4);
      uVar10 = *(undefined8 *)(this + 0xdc);
      *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(this + 0xf4);
      *(undefined8 *)(lVar3 + 0x60) = uVar5;
      *(undefined8 *)(lVar3 + 0x78) = uVar7;
      *(undefined8 *)(lVar3 + 0x70) = uVar6;
      *(undefined8 *)(lVar3 + 0x48) = uVar9;
      *(undefined8 *)(lVar3 + 0x40) = uVar8;
      *(undefined8 *)(lVar3 + 0x58) = uVar11;
      *(undefined8 *)(lVar3 + 0x50) = uVar10;
    }
    if (this[0x161] != (Node)0x0) {
      pMVar4 = *(Mat4 **)(this + 0x158);
      Mat4::Mat4((Mat4 *)&local_a8,pMVar4 + 0x40);
      Mat4::multiply((Mat4 *)&local_a8,pMVar4);
      *(undefined8 *)(this + 0x104) = uStack_70;
      *(undefined8 *)(this + 0xfc) = local_78;
      *(undefined8 *)(this + 0xf4) = uStack_80;
      *(undefined8 *)(this + 0xec) = local_88;
      *(undefined8 *)(this + 0xe4) = uStack_90;
      *(undefined8 *)(this + 0xdc) = local_98;
      *(undefined8 *)(this + 0xd4) = uStack_a0;
      *(undefined8 *)(this + 0xcc) = local_a8;
      Mat4::~Mat4((Mat4 *)&local_a8);
    }
  }
  this[0x160] = (Node)0x0;
  this[0x10c] = (Node)0x0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return this + 0xcc;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

