
/* cocos2d::Sprite3D::loadFromFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::NodeDatas*, cocos2d::MeshDatas*,
   cocos2d::MaterialDatas*) */

uint __thiscall
cocos2d::Sprite3D::loadFromFile
          (Sprite3D *this,basic_string *param_1,NodeDatas *param_2,MeshDatas *param_3,
          MaterialDatas *param_4)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  Bundle3D *pBVar5;
  ulong uVar6;
  byte local_78 [8];
  ulong local_70;
  int *local_68;
  basic_string local_60 [16];
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00d3eb84 with catch @ 00d3ebcc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00d3eb64 with catch @ 00d3ebf0 */
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_60,plVar4,param_1);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x138))(local_78,plVar4,param_1);
  uVar6 = (ulong)(local_78[0] >> 1);
  if ((local_78[0] & 1) != 0) {
    uVar6 = local_70;
  }
  if (uVar6 == 4) {
    piVar1 = (int *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      piVar1 = local_68;
    }
    if (*piVar1 == 0x6a626f2e) {
      uVar3 = Bundle3D::loadObj(param_3,param_4,param_2,local_60,(char *)0x0);
                    /* catch() { ... } // from try @ 00d3ece8 with catch @ 00d3ed18 */
      goto joined_r0x00d3ed48;
    }
    if ((*piVar1 == 0x6233632e) || (*piVar1 == 0x7433632e)) {
      pBVar5 = (Bundle3D *)Bundle3D::createBundle();
      uVar6 = (**(code **)(*(long *)pBVar5 + 8))(pBVar5,local_60);
      if ((uVar6 & 1) != 0) {
                    /* try { // try from 00d3ecb8 to 00e3ece7 has its CatchHandler @ 00d3ecb8
                       catch() { ... } // from try @ 00d3ecb8 with catch @ 00d3ecb8
                       catch() { ... } // from try @ 00d3ecf4 with catch @ 00d3ecb8 */
        uVar6 = (**(code **)(*(long *)pBVar5 + 0x20))(pBVar5,param_3);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = (**(code **)(*(long *)pBVar5 + 0x30))(pBVar5,param_4), (uVar6 & 1) == 0)) {
          uVar3 = 0;
        }
        else {
                    /* try { // try from 00d3ece8 to 00e3ecf3 has its CatchHandler @ 00d3ed18 */
          uVar3 = (**(code **)(*(long *)pBVar5 + 0x28))(pBVar5,param_2);
                    /* try { // try from 00d3ecf4 to 00e3ed2b has its CatchHandler @ 00d3ecb8 */
        }
        Bundle3D::destroyBundle(pBVar5);
        goto joined_r0x00d3ed48;
      }
      Bundle3D::destroyBundle(pBVar5);
    }
  }
  uVar3 = 0;
                    /* try { // try from 00d3ed2c to 00e3ed5b has its CatchHandler @ 00d3ed2c
                       catch() { ... } // from try @ 00d3ed2c with catch @ 00d3ed2c
                       catch() { ... } // from try @ 00d3ed68 with catch @ 00d3ed2c */
joined_r0x00d3ed48:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00d3ed5c to 00e3ed67 has its CatchHandler @ 00d3ed8c */
    operator_delete(local_50);
  }
                    /* try { // try from 00d3ed68 to 00e3ed9f has its CatchHandler @ 00d3ed2c */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00d3ed5c with catch @ 00d3ed8c */
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

