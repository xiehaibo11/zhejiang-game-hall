
/* cocos2d::Animate::reverse() const */

undefined8 __thiscall cocos2d::Animate::reverse(Animate *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  Animation *pAVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  Ref *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(this + 0x78);
  plVar7 = *(long **)(lVar9 + 0x40);
  plVar8 = *(long **)(lVar9 + 0x48);
  puStack_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  uVar2 = (long)plVar8 - (long)plVar7;
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x3d != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee4934 with catch @ 00ee48c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4964 with catch @ 00ee48c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4994 with catch @ 00ee48c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee49bc with catch @ 00ee48c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee49e8 with catch @ 00ee48c4
                        */
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    puStack_68 = operator_new(uVar2);
    local_60 = puStack_68 + ((long)uVar2 >> 3);
    plVar7 = *(long **)(lVar9 + 0x40);
    plVar8 = *(long **)(lVar9 + 0x48);
  }
  local_70 = puStack_68;
  if (plVar7 != plVar8) {
    do {
      plVar8 = plVar8 + -1;
      if ((long *)*plVar8 == (long *)0x0) break;
      local_50 = (Ref *)(**(code **)(*(long *)*plVar8 + 0x10))();
      if (puStack_68 == local_60) {
        std::__ndk1::
        vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
        __push_back_slow_path<cocos2d::AnimationFrame*const&>
                  ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                    *)&local_70,(AnimationFrame **)&local_50);
      }
      else {
        *puStack_68 = local_50;
        puStack_68 = puStack_68 + 1;
      }
      Ref::retain(local_50);
    } while (plVar7 != plVar8);
    lVar9 = *(long *)(this + 0x78);
  }
  pAVar5 = (Animation *)
           Animation::create((Vector *)&local_70,*(float *)(lVar9 + 0x34),*(uint *)(lVar9 + 0x5c));
  pAVar5[0x58] = *(Animation *)(*(long *)(this + 0x78) + 0x58);
  uVar6 = create(pAVar5);
  puVar4 = puStack_68;
  for (puVar1 = local_70; puVar1 != puVar4; puVar1 = puVar1 + 1) {
    Ref::release((Ref *)*puVar1);
  }
  puStack_68 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

