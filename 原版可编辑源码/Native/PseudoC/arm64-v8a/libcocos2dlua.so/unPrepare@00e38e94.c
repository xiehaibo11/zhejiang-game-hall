
/* cocos2d::PUSlaveEmitter::unPrepare() */

void __thiscall cocos2d::PUSlaveEmitter::unPrepare(PUSlaveEmitter *this)

{
  PUSlaveEmitter *__s2;
  size_t __n;
  size_t sVar1;
  PUSlaveEmitter PVar2;
  PUSlaveEmitter PVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  PUSlaveEmitter *pPVar9;
  PUSlaveEmitter *__s1;
  size_t sVar10;
  PUParticleSystem3D *this_00;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  PUEmitter::unPrepare((PUEmitter *)this);
                    /* try { // try from 00e38ed0 to 00f38edb has its CatchHandler @ 00e39758 */
  lVar7 = __dynamic_cast(*(undefined8 *)(this + 0x28),&ParticleSystem3D::typeinfo,
                         &PUParticleSystem3D::typeinfo,0);
  if (*(long **)(lVar7 + 0x4c0) != (long *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(**(long **)(lVar7 + 0x4c0) + 0x240))();
    local_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    puVar11 = local_60;
    puVar5 = local_58;
                    /* try { // try from 00e38f14 to 00f38f1b has its CatchHandler @ 00e39744 */
    if ((&local_60 != (undefined8 **)puVar8) &&
       (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_60,
                   (Node **)*puVar8,(Node **)puVar8[1]), puVar5 = local_58, puVar11 = local_60,
       local_60 != local_58)) {
      do {
                    /* try { // try from 00e38f1c to 00f38fd3 has its CatchHandler @ 00e37bc0 */
        Ref::retain((Ref *)*puVar11);
        puVar8 = local_58;
        puVar11 = puVar11 + 1;
      } while (puVar5 != puVar11);
      puVar11 = local_60;
      puVar5 = local_58;
      if (local_60 != local_58) {
        puVar12 = local_60;
        do {
          this_00 = (PUParticleSystem3D *)*puVar12;
          pPVar9 = (PUSlaveEmitter *)(**(code **)(*(long *)this_00 + 0x2c8))(this_00);
          PVar2 = *pPVar9;
          PVar3 = this[0x210];
          sVar10 = (size_t)((byte)PVar2 >> 1);
          __n = sVar10;
          if (((byte)PVar2 & 1) != 0) {
            __n = *(size_t *)(pPVar9 + 8);
          }
          sVar1 = (ulong)((byte)PVar3 >> 1);
          if (((byte)PVar3 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x218);
          }
          if (__n == sVar1) {
            __s1 = *(PUSlaveEmitter **)(pPVar9 + 0x10);
            if (((byte)PVar2 & 1) == 0) {
              __s1 = pPVar9 + 1;
            }
            __s2 = this + 0x211;
            if (((byte)PVar3 & 1) != 0) {
              __s2 = *(PUSlaveEmitter **)(this + 0x220);
            }
            if (((byte)PVar2 & 1) == 0) {
              while( true ) {
                if (__n == 0) goto LAB_00e38fec;
                pPVar9 = pPVar9 + 1;
                if (*pPVar9 != *__s2) break;
                sVar10 = sVar10 - 1;
                __s2 = __s2 + 1;
                    /* try { // try from 00e38fd4 to 00f38fff has its CatchHandler @ 00e39660 */
                __n = sVar10;
              }
            }
            else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) {
LAB_00e38fec:
              PUParticleSystem3D::removeListener(this_00,(PUListener *)(this + 0x200));
              puVar11 = local_60;
              puVar5 = local_58;
              break;
            }
          }
          puVar12 = puVar12 + 1;
          puVar11 = local_60;
          puVar5 = local_58;
        } while (puVar12 != puVar8);
      }
    }
    for (; puVar8 = local_58, puVar11 != local_58; puVar11 = puVar11 + 1) {
      local_58 = puVar5;
      Ref::release((Ref *)*puVar11);
      puVar5 = local_58;
      local_58 = puVar8;
    }
    local_58 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  PUEmitter::unPrepare((PUEmitter *)this);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e39060 to 00f39067 has its CatchHandler @ 00e395e4 */
  __stack_chk_fail();
}

