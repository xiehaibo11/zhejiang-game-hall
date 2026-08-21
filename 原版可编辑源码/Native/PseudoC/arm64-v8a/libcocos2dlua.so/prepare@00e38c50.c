
/* cocos2d::PUSlaveEmitter::prepare() */

void __thiscall cocos2d::PUSlaveEmitter::prepare(PUSlaveEmitter *this)

{
  PUSlaveEmitter *__s2;
  size_t __n;
  size_t sVar1;
  PUSlaveEmitter PVar2;
  PUSlaveEmitter PVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  PUSlaveEmitter *pPVar10;
  PUSlaveEmitter *__s1;
  size_t sVar11;
  PUParticleSystem3D *this_00;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  PUEmitter::prepare((PUEmitter *)this);
  lVar8 = __dynamic_cast(*(undefined8 *)(this + 0x28),&ParticleSystem3D::typeinfo,
                         &PUParticleSystem3D::typeinfo,0);
  if (*(long **)(lVar8 + 0x4c0) != (long *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(**(long **)(lVar8 + 0x4c0) + 0x240))();
    local_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    if ((&local_60 != (undefined8 **)puVar9) &&
       (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        assign<cocos2d::Node**>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_60,
                   (Node **)*puVar9,(Node **)puVar9[1]), puVar5 = local_58, puVar9 = local_60,
       local_60 != local_58)) {
      do {
        Ref::retain((Ref *)*puVar9);
        puVar6 = local_58;
        puVar9 = puVar9 + 1;
      } while (puVar5 != puVar9);
      if (local_60 != local_58) {
        puVar9 = local_60;
        do {
          this_00 = (PUParticleSystem3D *)*puVar9;
          pPVar10 = (PUSlaveEmitter *)(**(code **)(*(long *)this_00 + 0x2c8))(this_00);
          PVar2 = *pPVar10;
          PVar3 = this[0x210];
          sVar11 = (size_t)((byte)PVar2 >> 1);
          __n = sVar11;
          if (((byte)PVar2 & 1) != 0) {
            __n = *(size_t *)(pPVar10 + 8);
          }
          sVar1 = (ulong)((byte)PVar3 >> 1);
          if (((byte)PVar3 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x218);
          }
          if (__n == sVar1) {
            __s1 = *(PUSlaveEmitter **)(pPVar10 + 0x10);
            if (((byte)PVar2 & 1) == 0) {
              __s1 = pPVar10 + 1;
            }
            __s2 = this + 0x211;
            if (((byte)PVar3 & 1) != 0) {
              __s2 = *(PUSlaveEmitter **)(this + 0x220);
            }
            if (((byte)PVar2 & 1) == 0) {
              while( true ) {
                if (__n == 0) goto LAB_00e38da8;
                pPVar10 = pPVar10 + 1;
                if (*pPVar10 != *__s2) break;
                sVar11 = sVar11 - 1;
                __s2 = __s2 + 1;
                __n = sVar11;
              }
            }
            else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) {
LAB_00e38da8:
              PUParticleSystem3D::addListener(this_00,(PUListener *)(this + 0x200));
              break;
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar6);
      }
    }
    puVar5 = local_58;
    this[0x34] = (PUSlaveEmitter)0x0;
    for (puVar9 = local_60; puVar9 != puVar5; puVar9 = puVar9 + 1) {
      Ref::release((Ref *)*puVar9);
    }
                    /* try { // try from 00e38de0 to 00f38de7 has its CatchHandler @ 00e39778 */
    local_58 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

