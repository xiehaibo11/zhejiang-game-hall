
/* cocos2d::ParticleBatchNode::addChildHelper(cocos2d::ParticleSystem*, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

ulong __thiscall
cocos2d::ParticleBatchNode::addChildHelper
          (ParticleBatchNode *this,ParticleSystem *param_1,int param_2,int param_3,
          basic_string *param_4,bool param_5)

{
  vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *pvVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  Ref *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar9 = *(undefined8 **)(this + 0x178);
                    /* try { // try from 00f2d494 to 0102d63f has its CatchHandler @ 00f2d494
                       catch() { ... } // from try @ 00f2d494 with catch @ 00f2d494
                       catch() { ... } // from try @ 00f2d648 with catch @ 00f2d494 */
  pvVar1 = (vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178);
  puVar5 = puVar9;
  if ((ulong)(*(long *)(this + 0x188) - (long)puVar9 >> 3) < 4) {
    lVar10 = *(long *)(this + 0x180) - (long)puVar9;
    puVar5 = operator_new(0x20);
    if (0 < lVar10) {
      __memcpy_chk(puVar5,puVar9,lVar10,0x20);
      puVar9 = *(undefined8 **)pvVar1;
    }
    *(undefined8 **)(this + 0x178) = puVar5;
    *(long *)(this + 0x180) = (long)puVar5 + lVar10;
    *(undefined8 **)(this + 0x188) = puVar5 + 4;
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9);
      puVar5 = *(undefined8 **)pvVar1;
    }
  }
  uVar7 = *(long *)(this + 0x180) - (long)puVar5 >> 3;
  uVar8 = uVar7;
  if (0 < *(long *)(this + 0x180) - (long)puVar5) {
    iVar4 = (**(code **)(*(long *)*puVar5 + 0x30))();
    if (param_2 < iVar4) {
      uVar8 = 0;
    }
    else {
      uVar3 = 1;
      do {
        uVar6 = uVar3;
        uVar8 = uVar7;
        if ((long)uVar7 <= (long)uVar6) break;
        iVar4 = (**(code **)(**(long **)(*(long *)pvVar1 + uVar6 * 8) + 0x30))();
        uVar3 = uVar6 + 1;
        uVar8 = uVar6;
      } while (iVar4 <= param_2);
    }
  }
  local_70 = (Ref *)param_1;
  std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::insert
            (pvVar1,*(long *)pvVar1 + ((long)(uVar8 << 0x20) >> 0x1d),&local_70);
  Ref::retain(local_70);
  if (param_5) {
    (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_3);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,param_4);
  }
  (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2);
  (**(code **)(*(long *)param_1 + 600))(param_1,this);
  if (this[0x1f8] != (ParticleBatchNode)0x0) {
    (**(code **)(*(long *)param_1 + 800))(param_1);
    (**(code **)(*(long *)param_1 + 0x328))(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f2d640 to 0102d647 has its CatchHandler @ 00f2d7b8 */
                    /* try { // try from 00f2d648 to 0102d7d3 has its CatchHandler @ 00f2d494 */
  return uVar8 & 0xffffffff;
}

