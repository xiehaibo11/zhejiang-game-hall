
/* cocos2d::PUEmitter::prepare() */

void __thiscall cocos2d::PUEmitter::prepare(PUEmitter *this)

{
  PUEmitter *__s2;
  size_t __n;
  size_t sVar1;
  undefined4 uVar2;
  PUEmitter PVar3;
  PUEmitter PVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  PUEmitter *pPVar11;
  PUEmitter *__s1;
  size_t sVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00e320cc to 00f320d3 has its CatchHandler @ 00e32184 */
  if (*(long *)(this + 0x1f0) == 0) {
    if (*(int *)(this + 0x1e8) == 1) {
      if (*(long **)(*(long *)(this + 0x28) + 0x4c0) != (long *)0x0) {
        puVar10 = (undefined8 *)(**(code **)(**(long **)(*(long *)(this + 0x28) + 0x4c0) + 0x240))()
        ;
        local_60 = (undefined8 *)0x0;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        puVar8 = local_60;
        puVar6 = local_58;
                    /* catch() { ... } // from try @ 00e320cc with catch @ 00e32184 */
                    /* catch() { ... } // from try @ 00e32108 with catch @ 00e3218c */
        if ((&local_60 != (undefined8 **)puVar10) &&
           (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
            assign<cocos2d::Node**>
                      ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_60,
                       (Node **)*puVar10,(Node **)puVar10[1]), puVar6 = local_58, puVar8 = local_60,
           local_60 != local_58)) {
          do {
            Ref::retain((Ref *)*puVar8);
            puVar10 = local_58;
            puVar8 = puVar8 + 1;
          } while (puVar6 != puVar8);
          puVar8 = local_60;
          puVar6 = local_58;
          if (local_60 != local_58) {
                    /* try { // try from 00e321b0 to 00f322e7 has its CatchHandler @ 00e321b0
                       catch() { ... } // from try @ 00e321b0 with catch @ 00e321b0
                       catch() { ... } // from try @ 00e32308 with catch @ 00e321b0 */
            puVar14 = local_60;
            do {
              plVar13 = (long *)*puVar14;
              pPVar11 = (PUEmitter *)(**(code **)(*plVar13 + 0x2c8))(plVar13);
              PVar3 = *pPVar11;
              PVar4 = this[0x108];
              sVar12 = (size_t)((byte)PVar3 >> 1);
              __n = sVar12;
              if (((byte)PVar3 & 1) != 0) {
                __n = *(size_t *)(pPVar11 + 8);
              }
              sVar1 = (ulong)((byte)PVar4 >> 1);
              if (((byte)PVar4 & 1) != 0) {
                sVar1 = *(size_t *)(this + 0x110);
              }
              if (__n == sVar1) {
                __s1 = *(PUEmitter **)(pPVar11 + 0x10);
                if (((byte)PVar3 & 1) == 0) {
                  __s1 = pPVar11 + 1;
                }
                __s2 = this + 0x109;
                if (((byte)PVar4 & 1) != 0) {
                  __s2 = *(PUEmitter **)(this + 0x118);
                }
                if (((byte)PVar3 & 1) == 0) {
                  while( true ) {
                    if (__n == 0) goto LAB_00e32260;
                    pPVar11 = pPVar11 + 1;
                    if (*pPVar11 != *__s2) break;
                    sVar12 = sVar12 - 1;
                    __s2 = __s2 + 1;
                    __n = sVar12;
                  }
                }
                else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) {
LAB_00e32260:
                  *(undefined1 *)(plVar13 + 0x92) = 1;
                  *(long **)(this + 0x1f0) = plVar13;
                  puVar8 = local_60;
                  puVar6 = local_58;
                  break;
                }
              }
              puVar14 = puVar14 + 1;
              puVar8 = local_60;
              puVar6 = local_58;
            } while (puVar14 != puVar10);
          }
        }
        for (; puVar10 = local_58, puVar8 != local_58; puVar8 = puVar8 + 1) {
          local_58 = puVar6;
          Ref::release((Ref *)*puVar8);
          puVar6 = local_58;
          local_58 = puVar10;
        }
        local_58 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          operator_delete(local_60);
        }
      }
    }
    else if ((*(int *)(this + 0x1e8) == 2) &&
            (lVar9 = PUParticleSystem3D::getEmitter
                               (*(PUParticleSystem3D **)(this + 0x28),(basic_string *)(this + 0x108)
                               ), lVar9 != 0)) {
      *(undefined1 *)(lVar9 + 0x1f8) = 1;
                    /* try { // try from 00e32144 to 00f321af has its CatchHandler @ 00e32088 */
      *(long *)(this + 0x1f0) = lVar9;
    }
  }
  puVar8 = (undefined8 *)getDerivedPosition();
  uVar2 = *(undefined4 *)(puVar8 + 1);
  *(undefined8 *)(this + 0x44) = *puVar8;
  *(undefined4 *)(this + 0x4c) = uVar2;
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 00e32108 to 00f32143 has its CatchHandler @ 00e3218c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

