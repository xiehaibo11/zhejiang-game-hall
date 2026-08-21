
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::renderer::ForwardRenderer::updateLights(cocos2d::renderer::Scene*) */

void __thiscall
cocos2d::renderer::ForwardRenderer::updateLights(ForwardRenderer *this,Scene *param_1)

{
  long lVar1;
  Ref *pRVar2;
  Light *pLVar3;
  long *plVar4;
  View *pVVar5;
  Ref *pRVar6;
  vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>> *this_00;
  long *plVar7;
  vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>> *this_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  Ref *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  Light *local_98;
  Ref *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>> *)
            (this + 0xb0);
  puVar8 = *(undefined8 **)this_00;
  if (puVar8 != *(undefined8 **)(this + 0xb8)) {
    do {
      puVar9 = puVar8 + 1;
      Ref::release((Ref *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != *(undefined8 **)(this + 0xb8));
    puVar8 = *(undefined8 **)this_00;
  }
  this_01 = (vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>> *)
            (this + 200);
  puVar9 = *(undefined8 **)this_01;
  *(undefined8 **)(this + 0xb8) = puVar8;
                    /* try { // try from 009ca8f8 to 00aca903 has its CatchHandler @ 009caa50 */
  if (puVar9 != *(undefined8 **)(this + 0xd0)) {
    do {
      puVar8 = puVar9 + 1;
      Ref::release((Ref *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != *(undefined8 **)(this + 0xd0));
    puVar9 = *(undefined8 **)this_01;
  }
  *(undefined8 **)(this + 0xd0) = puVar9;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = 0;
  if (param_1 + 0x18 == (Scene *)&local_80) {
    plVar7 = (long *)0x0;
  }
  else {
    std::__ndk1::vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
    ::assign<cocos2d::renderer::Light**>
              ((vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
                *)&local_80,*(Light ***)(param_1 + 0x18),*(Light ***)(param_1 + 0x20));
    plVar10 = local_78;
    plVar7 = local_80;
    if (local_80 != local_78) {
      do {
        Ref::retain((Ref *)*plVar7);
        plVar4 = local_78;
        plVar7 = plVar7 + 1;
      } while (plVar10 != plVar7);
      plVar7 = local_78;
      if (local_80 != local_78) {
        plVar10 = local_80;
        do {
          Light::update((Light *)*plVar10,*(DeviceGraphics **)(this + 0x10));
          pRVar6 = (Ref *)*plVar10;
          if (*(int *)(pRVar6 + 0x58) == 0) {
            if (*(long **)(this + 0xb8) == *(long **)(this + 0xc0)) {
              local_98 = (Light *)pRVar6;
              std::__ndk1::
              vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>::
              __push_back_slow_path<cocos2d::renderer::Light*const&>(this_00,&local_98);
            }
            else {
              **(long **)(this + 0xb8) = (long)pRVar6;
              *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 8;
              local_98 = (Light *)pRVar6;
            }
            Ref::retain((Ref *)local_98);
          }
          else {
            plVar7 = *(long **)(this + 0xd0);
            if ((long)plVar7 - *(long *)(this + 200) < 0x10) {
                    /* try { // try from 009ca9b4 to 00aca9cf has its CatchHandler @ 009caab0 */
              if (*(long **)(this + 0xd8) == plVar7) {
                local_98 = (Light *)pRVar6;
                std::__ndk1::
                vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
                ::__push_back_slow_path<cocos2d::renderer::Light*const&>(this_01,&local_98);
              }
              else {
                *plVar7 = (long)pRVar6;
                    /* try { // try from 009ca9d0 to 00acab07 has its CatchHandler @ 009ca638 */
                *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
                local_98 = (Light *)pRVar6;
              }
              Ref::retain((Ref *)local_98);
            }
            pVVar5 = (View *)BaseRenderer::requestView((BaseRenderer *)this);
            local_98 = (Light *)0x0;
            local_90 = (Ref *)0x0;
            local_88 = 0;
            local_a0 = (void *)0x0;
            local_b0 = (Ref *)0x14;
            builtin_strncpy((char *)((ulong)&local_b0 | 1),"shadowcast",10);
                    /* catch() { ... } // from try @ 009ca8f8 with catch @ 009caa50 */
            uStack_a8 = 0;
                    /* catch() { ... } // from try @ 009ca880 with catch @ 009caa60 */
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)&local_98,(basic_string *)&local_b0);
            if (((ulong)local_b0 & 1) != 0) {
                    /* catch() { ... } // from try @ 009ca7d0 with catch @ 009caa70 */
              operator_delete(local_a0);
            }
            Light::extractView((Light *)*plVar10,pVVar5,(vector *)&local_98);
            local_b0 = (Ref *)*plVar10;
                    /* catch() { ... } // from try @ 009ca798 with catch @ 009caa88 */
                    /* catch() { ... } // from try @ 009ca6c4 with catch @ 009caa98 */
            std::__ndk1::
            vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>::
            insert(this_00,*(undefined8 *)this_00,&local_b0);
                    /* catch() { ... } // from try @ 009ca6b8 with catch @ 009caa9c */
                    /* catch() { ... } // from try @ 009ca698 with catch @ 009caaa0 */
            Ref::retain(local_b0);
            pLVar3 = local_98;
            pRVar6 = local_90;
            if (local_98 != (Light *)0x0) {
                    /* catch() { ... } // from try @ 009ca6d0 with catch @ 009caab0
                       catch() { ... } // from try @ 009ca9b4 with catch @ 009caab0 */
              while (pRVar2 = pRVar6, pRVar2 != (Ref *)pLVar3) {
                pRVar6 = pRVar2 + -0x18;
                if (((byte)*pRVar6 & 1) != 0) {
                  operator_delete(*(void **)(pRVar2 + -8));
                }
              }
              local_90 = (Ref *)pLVar3;
              operator_delete(local_98);
            }
          }
          plVar10 = plVar10 + 1;
          plVar7 = local_78;
        } while (plVar10 != plVar4);
      }
    }
  }
  if (0 < (long)local_78 - (long)local_80) {
    updateDefines(this);
    plVar7 = local_78;
  }
                    /* try { // try from 009cab4c to 00acab83 has its CatchHandler @ 009cabb4 */
  *(long *)(this + 0xf8) = (long)local_78 - (long)local_80 >> 3;
  plVar10 = local_80;
  if (plVar7 != local_80) {
    do {
      Ref::release((Ref *)*plVar10);
      plVar10 = plVar10 + 1;
      plVar7 = local_80;
    } while (plVar10 != local_78);
  }
  local_78 = local_80;
  if (plVar7 != (long *)0x0) {
    local_78 = plVar7;
                    /* try { // try from 009cab84 to 00acabc7 has its CatchHandler @ 009cab08 */
    operator_delete(plVar7);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009cab4c with catch @ 009cabb4 */
  return;
}

