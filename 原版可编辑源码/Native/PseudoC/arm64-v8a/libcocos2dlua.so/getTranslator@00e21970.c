
/* cocos2d::PUAffectorManager::getTranslator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUAffectorManager * __thiscall
cocos2d::PUAffectorManager::getTranslator(PUAffectorManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  PUAffectorManager *pPVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  pPVar4 = (PUAffectorManager *)0x0;
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
    pPVar4 = this + 0x58;
    break;
  case 4:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(int *)pbVar5 == 0x656e694c) {
      return this + 0x60;
    }
    return (PUAffectorManager *)0x0;
  case 5:
                    /* try { // try from 00e21a08 to 00f21a0f has its CatchHandler @ 00e222d8 */
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Align",5);
    if (iVar3 == 0) {
      return this;
    }
    iVar3 = memcmp(pbVar5,"Scale",5);
    pPVar4 = this + 0x90;
                    /* try { // try from 00e21a44 to 00f21a4b has its CatchHandler @ 00e2229c */
    break;
  case 6:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Colour",6);
    if (iVar3 == 0) {
      return this + 0x28;
    }
    iVar3 = memcmp(pbVar5,"Vortex",6);
    pPVar4 = this + 200;
    break;
  case 7:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Dummy02",7);
    if (iVar3 == 0) {
      return this + 8;
    }
    iVar3 = memcmp(pbVar5,"Dummy01",7);
    if (iVar3 == 0) {
      return this + 0x10;
    }
    iVar3 = memcmp(pbVar5,"Gravity",7);
    pPVar4 = this + 0x48;
    break;
  default:
    goto switchD_00e219b8_caseD_8;
  case 9:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"SineForce",9);
    pPVar4 = this + 0xa0;
    break;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"ForceField",10);
    if (iVar3 == 0) {
      return this + 0x38;
    }
                    /* try { // try from 00e21b30 to 00f21b3b has its CatchHandler @ 00e222f0 */
    iVar3 = memcmp(pbVar5,"Randomiser",10);
    pPVar4 = this + 0x88;
    break;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"BoxCollider",0xb);
    if (iVar3 == 0) {
      return this + 0x18;
    }
                    /* try { // try from 00e21b68 to 00f21b73 has its CatchHandler @ 00e222bc */
    iVar3 = memcmp(pbVar5,"LinearForce",0xb);
    pPVar4 = this + 0x68;
    break;
  case 0xc:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
                    /* try { // try from 00e21b94 to 00f21b9b has its CatchHandler @ 00e22294 */
    iVar3 = memcmp(pbVar5,"PathFollower",0xc);
    pPVar4 = this + 0x78;
    break;
  case 0xd:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"PlaneCollider",0xd);
    if (iVar3 == 0) {
      return this + 0x80;
    }
    iVar3 = memcmp(pbVar5,"ScaleVelocity",0xd);
    pPVar4 = this + 0x98;
    break;
  case 0xe:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"FlockCentering",0xe);
    if (iVar3 == 0) {
      return this + 0x30;
    }
    iVar3 = memcmp(pbVar5,"SphereCollider",0xe);
    if (iVar3 == 0) {
      return this + 0xa8;
    }
    iVar3 = memcmp(pbVar5,"TextureRotator",0xe);
    pPVar4 = this + 0xb8;
    break;
  case 0xf:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"GeometryRotator",0xf);
    if (iVar3 == 0) {
      return this + 0x40;
    }
    iVar3 = memcmp(pbVar5,"TextureAnimator",0xf);
    pPVar4 = this + 0xb0;
    break;
  case 0x10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"ParticleFollower",0x10);
    if (iVar3 == 0) {
      return this + 0x70;
    }
    iVar3 = memcmp(pbVar5,"VelocityMatching",0x10);
    pPVar4 = this + 0xc0;
    break;
  case 0x12:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"CollisionAvoidance",0x12);
    pPVar4 = this + 0x20;
    break;
  case 0x15:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"InterParticleCollider",0x15);
    pPVar4 = this + 0x50;
  }
  if (iVar3 != 0) {
    pPVar4 = (PUAffectorManager *)0x0;
  }
switchD_00e219b8_caseD_8:
  return pPVar4;
}

