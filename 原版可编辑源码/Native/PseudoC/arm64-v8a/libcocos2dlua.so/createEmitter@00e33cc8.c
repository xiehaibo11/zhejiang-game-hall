
/* cocos2d::PUEmitterManager::createEmitter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::PUEmitterManager::createEmitter(PUEmitterManager *this,basic_string *param_1)

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
    iVar3 = memcmp(pbVar5,"Box",3);
    if (iVar3 == 0) {
      uVar4 = CCPUBoxEmitter::create();
      return uVar4;
    }
    break;
  case 4:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(int *)pbVar5 == 0x656e694c) {
      uVar4 = PULineEmitter::create();
      return uVar4;
    }
    break;
  case 5:
                    /* catch() { ... } // from try @ 00e33db0 with catch @ 00e33d64 */
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Point",5);
    if (iVar3 == 0) {
      uVar4 = PUPointEmitter::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"Slave",5);
    if (iVar3 == 0) {
                    /* try { // try from 00e33da8 to 00f33daf has its CatchHandler @ 00e33e08 */
      uVar4 = PUSlaveEmitter::create();
      return uVar4;
    }
    break;
  case 6:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00e33db0 to 00f33e23 has its CatchHandler @ 00e33d64 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Circle",6);
    if (iVar3 == 0) {
      uVar4 = PUCircleEmitter::create();
      return uVar4;
    }
    break;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 == 0x6e6f697469736f50) {
                    /* catch() { ... } // from try @ 00e33da8 with catch @ 00e33e08 */
      uVar4 = PUPositionEmitter::create();
      return uVar4;
    }
    break;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"MeshSurface",0xb);
    if (iVar3 == 0) {
      uVar4 = PUMeshSurfaceEmitter::create();
      return uVar4;
    }
    break;
  case 0xd:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"SphereSurface",0xd);
    if (iVar3 == 0) {
      uVar4 = PUSphereSurfaceEmitter::create();
      return uVar4;
    }
  }
  return 0;
}

