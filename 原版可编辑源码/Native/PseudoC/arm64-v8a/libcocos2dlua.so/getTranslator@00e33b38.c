
/* cocos2d::PUEmitterManager::getTranslator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUEmitterManager * __thiscall
cocos2d::PUEmitterManager::getTranslator(PUEmitterManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  PUEmitterManager *pPVar4;
  basic_string *pbVar5;
  
                    /* try { // try from 00e33b44 to 00f33b67 has its CatchHandler @ 00e33c94 */
  bVar2 = *param_1;
  pPVar4 = (PUEmitterManager *)0x0;
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
                    /* try { // try from 00e33ba0 to 00f33ba7 has its CatchHandler @ 00e33c70 */
    if (iVar3 == 0) {
      return this;
    }
    return (PUEmitterManager *)0x0;
  case 4:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00e33bb8 to 00f33c0b has its CatchHandler @ 00e33c90 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(int *)pbVar5 == 0x656e694c) {
      return this + 0x10;
    }
    return (PUEmitterManager *)0x0;
  case 5:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Point",5);
    if (iVar3 == 0) {
      return this + 0x20;
    }
    iVar3 = memcmp(pbVar5,"Slave",5);
                    /* try { // try from 00e33c0c to 00f33caf has its CatchHandler @ 00e33af0 */
    pPVar4 = this + 0x30;
    break;
  case 6:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"Circle",6);
    pPVar4 = this + 8;
    break;
  default:
    goto switchD_00e33b80_caseD_7;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 == 0x6e6f697469736f50) {
      return this + 0x28;
    }
    return (PUEmitterManager *)0x0;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00e33ba0 with catch @ 00e33c70 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"MeshSurface",0xb);
    pPVar4 = this + 0x18;
    break;
  case 0xd:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00e33bb8 with catch @ 00e33c90 */
                    /* catch() { ... } // from try @ 00e33b44 with catch @ 00e33c94 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"SphereSurface",0xd);
    pPVar4 = this + 0x38;
  }
  if (iVar3 != 0) {
    pPVar4 = (PUEmitterManager *)0x0;
  }
switchD_00e33b80_caseD_7:
  return pPVar4;
}

