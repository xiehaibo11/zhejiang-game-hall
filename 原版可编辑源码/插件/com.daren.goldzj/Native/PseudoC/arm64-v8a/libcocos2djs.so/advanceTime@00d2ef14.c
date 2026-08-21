
/* dragonBones::DragonBones::advanceTime(float) */

void __thiscall dragonBones::DragonBones::advanceTime(DragonBones *this,float param_1)

{
  size_t sVar1;
  BaseObject BVar2;
  undefined *__s2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  size_t __n;
  DragonBones *pDVar6;
  long lVar7;
  BaseObject *__s1;
  BaseObject *pBVar8;
  DragonBones *pDVar9;
  ulong uVar10;
  undefined4 in_register_00005004;
  
  if (*(long *)(this + 0x18) != 0) {
    pDVar9 = *(DragonBones **)(this + 8);
    while (this + 0x10 != pDVar9) {
      if (*(BaseObject **)(pDVar9 + 0x20) != (BaseObject *)0x0) {
        BaseObject::returnToPool(*(BaseObject **)(pDVar9 + 0x20));
      }
      pDVar6 = *(DragonBones **)(pDVar9 + 8);
      if (*(DragonBones **)(pDVar9 + 8) == (DragonBones *)0x0) {
        pDVar6 = pDVar9 + 0x10;
        bVar3 = *(DragonBones **)*(DragonBones **)pDVar6 != pDVar9;
        pDVar9 = *(DragonBones **)pDVar6;
        if (bVar3) {
          do {
            lVar7 = *(long *)pDVar6;
            pDVar6 = (DragonBones *)(lVar7 + 0x10);
            pDVar9 = *(DragonBones **)pDVar6;
          } while (*(long *)pDVar9 != lVar7);
        }
      }
      else {
        do {
          pDVar9 = pDVar6;
          pDVar6 = *(DragonBones **)pDVar9;
        } while (*(DragonBones **)pDVar9 != (DragonBones *)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::__map_value_compare<dragonBones::BaseObject*,std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::less<dragonBones::BaseObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>>>
    ::destroy((__tree<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::__map_value_compare<dragonBones::BaseObject*,std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::less<dragonBones::BaseObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>>>
               *)(this + 8),*(__tree_node **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(DragonBones **)(this + 8) = this + 0x10;
  }
  lVar7 = *(long *)(this + 0x20);
  if (lVar7 != *(long *)(this + 0x28)) {
    uVar10 = 0;
    do {
      pBVar8 = *(BaseObject **)(lVar7 + uVar10 * 8);
      if (*(long *)(*(long *)(pBVar8 + 0x48) + 0x20) != 0) {
        plVar5 = *(long **)(*(long *)(pBVar8 + 0x48) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,pBVar8 + 0x18,pBVar8);
        __s2 = EventObject::SOUND_EVENT;
        __n = strlen(EventObject::SOUND_EVENT);
        BVar2 = pBVar8[0x18];
        sVar1 = (ulong)((byte)BVar2 >> 1);
        if (((byte)BVar2 & 1) != 0) {
          sVar1 = *(size_t *)(pBVar8 + 0x20);
        }
        if (__n == sVar1) {
          if (__n != 0) {
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __s1 = *(BaseObject **)(pBVar8 + 0x28);
            if (((byte)BVar2 & 1) == 0) {
              __s1 = pBVar8 + 0x19;
            }
            iVar4 = memcmp(__s1,__s2,__n);
            if (iVar4 != 0) goto LAB_00d2f070;
          }
          (**(code **)(**(long **)(this + 0x40) + 0x18))
                    (*(long **)(this + 0x40),pBVar8 + 0x18,pBVar8);
        }
      }
LAB_00d2f070:
      bufferObject(this,pBVar8);
      lVar7 = *(long *)(this + 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(this + 0x28) - lVar7 >> 3));
    *(long *)(this + 0x28) = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00d2f0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x38) + 0x10))(CONCAT44(in_register_00005004,param_1));
  return;
}

