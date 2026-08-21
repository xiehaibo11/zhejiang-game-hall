
/* cocos2d::PUAffectorManager::createAffector(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::PUAffectorManager::createAffector(PUAffectorManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  undefined8 uVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  switch(uVar1) {
  case 3:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,&DAT_01422ba8,3);
    if (iVar3 == 0) {
      uVar4 = PUJetAffector::create();
      return uVar4;
    }
    break;
  case 4:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(int *)pbVar5 == 0x656e694c) {
      uVar4 = PULineAffector::create();
      return uVar4;
    }
    break;
  case 5:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Align",5);
    if (iVar3 == 0) {
      uVar4 = PUAlignAffector::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"Scale",5);
    if (iVar3 == 0) {
      uVar4 = PUScaleAffector::create();
      return uVar4;
    }
    break;
  case 6:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Colour",6);
    if (iVar3 == 0) {
      uVar4 = PUColorAffector::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"Vortex",6);
    if (iVar3 == 0) {
                    /* try { // try from 00e21e94 to 00f21e9b has its CatchHandler @ 00e222d4 */
      uVar4 = PUVortexAffector::create();
      return uVar4;
    }
    break;
  case 7:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Dummy02",7);
                    /* try { // try from 00e21ed4 to 00f21eeb has its CatchHandler @ 00e222f8 */
    if (((iVar3 != 0) && (iVar3 = memcmp(pbVar5,"Dummy01",7), iVar3 != 0)) &&
       (iVar3 = memcmp(pbVar5,"Gravity",7), iVar3 == 0)) {
      uVar4 = PUGravityAffector::create();
      return uVar4;
    }
    break;
  case 9:
                    /* try { // try from 00e21efc to 00f21f03 has its CatchHandler @ 00e222d4 */
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"SineForce",9);
    if (iVar3 == 0) {
      uVar4 = PUSineForceAffector::create();
      return uVar4;
    }
    break;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"ForceField",10);
    if (iVar3 == 0) {
      uVar4 = PUForceFieldAffector::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"Randomiser",10);
    if (iVar3 == 0) {
      uVar4 = PURandomiser::create();
      return uVar4;
    }
    break;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00e21f74 to 00f21f7b has its CatchHandler @ 00e222d0 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"BoxCollider",0xb);
    if (iVar3 == 0) {
      uVar4 = PUBoxCollider::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"LinearForce",0xb);
    if (iVar3 == 0) {
                    /* try { // try from 00e21fb4 to 00f21fcb has its CatchHandler @ 00e222f4 */
      uVar4 = PULinearForceAffector::create();
      return uVar4;
    }
    break;
  case 0xc:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"PathFollower",0xc);
    if (iVar3 == 0) {
                    /* try { // try from 00e21fdc to 00f21fe3 has its CatchHandler @ 00e222d0 */
      uVar4 = PUPathFollower::create();
      return uVar4;
    }
    break;
  case 0xd:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"PlaneCollider",0xd);
    if (iVar3 == 0) {
      uVar4 = PUPlaneCollider::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"ScaleVelocity",0xd);
    if (iVar3 == 0) {
      uVar4 = PUScaleVelocityAffector::create();
      return uVar4;
    }
    break;
  case 0xe:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"FlockCentering",0xe);
    if (iVar3 == 0) {
      uVar4 = PUFlockCenteringAffector::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"SphereCollider",0xe);
    if (iVar3 == 0) {
      uVar4 = PUSphereCollider::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"TextureRotator",0xe);
    if (iVar3 == 0) {
      uVar4 = PUTextureRotator::create();
      return uVar4;
    }
    break;
  case 0xf:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"GeometryRotator",0xf);
    if (iVar3 == 0) {
      uVar4 = PUGeometryRotator::create();
      return uVar4;
    }
                    /* try { // try from 00e220c0 to 00f220c7 has its CatchHandler @ 00e22290 */
    iVar3 = memcmp(pbVar5,"TextureAnimator",0xf);
    if (iVar3 == 0) {
      uVar4 = PUTextureAnimator::create();
      return uVar4;
    }
    break;
  case 0x10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"ParticleFollower",0x10);
    if (iVar3 == 0) {
                    /* try { // try from 00e221cc to 00f221d3 has its CatchHandler @ 00e2228c */
      uVar4 = PUParticleFollower::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"VelocityMatching",0x10);
    if (iVar3 == 0) {
      uVar4 = PUVelocityMatchingAffector::create();
      return uVar4;
    }
    break;
  case 0x12:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"CollisionAvoidance",0x12);
    if (iVar3 == 0) {
      uVar4 = PUCollisionAvoidanceAffector::create();
      return uVar4;
    }
    break;
  case 0x15:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"InterParticleCollider",0x15);
    if (iVar3 == 0) {
                    /* try { // try from 00e221d8 to 00f221f3 has its CatchHandler @ 00e22298 */
      uVar4 = PUParticle3DInterParticleCollider::create();
      return uVar4;
    }
  }
  return 0;
}

