
/* dragonBones::ArmatureData::sortBones() */

void __thiscall dragonBones::ArmatureData::sortBones(ArmatureData *this)

{
  uint uVar1;
  ulong __n;
  long lVar2;
  bool bVar3;
  void *__dest;
  BoneData *pBVar4;
  long *plVar5;
  ArmatureData *pAVar6;
  ArmatureData *pAVar7;
  long lVar8;
  long *__src;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  BoneData *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __src = *(long **)(this + 0x60);
  __n = *(long *)(this + 0x68) - (long)__src;
  if (__n != 0) {
    uVar11 = (long)__n >> 3;
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(__n);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    uVar12 = 0;
    *(long **)(this + 0x68) = __src;
    plVar9 = __src;
    uVar10 = 0;
    do {
      local_70 = *(BoneData **)((long)__dest + (ulong)uVar10 * 8);
      uVar1 = 0;
      if (uVar10 + 1 < uVar11) {
        uVar1 = uVar10 + 1;
      }
      plVar5 = __src;
      if (__src != plVar9) {
        pBVar4 = (BoneData *)*__src;
        while (pBVar4 != local_70) {
          plVar5 = plVar5 + 1;
          if (plVar9 == plVar5) goto LAB_00d3536c;
          pBVar4 = (BoneData *)*plVar5;
        }
      }
      if (plVar5 == plVar9) {
LAB_00d3536c:
        pAVar6 = *(ArmatureData **)(this + 0xf0);
joined_r0x00d35374:
        if (pAVar6 != this + 0xf8) {
          do {
            if (*(BoneData **)(*(long *)(pAVar6 + 0x38) + 0x38) == local_70) {
              plVar5 = __src;
              if (__src != plVar9) {
                lVar8 = *__src;
                while (lVar8 != *(long *)(*(long *)(pAVar6 + 0x38) + 0x30)) {
                  plVar5 = plVar5 + 1;
                  if (plVar9 == plVar5) goto LAB_00d354a4;
                  lVar8 = *plVar5;
                }
              }
              if (plVar5 == plVar9) goto LAB_00d354a4;
            }
            pAVar7 = *(ArmatureData **)(pAVar6 + 8);
            if (*(ArmatureData **)(pAVar6 + 8) == (ArmatureData *)0x0) {
              pAVar7 = pAVar6 + 0x10;
              bVar3 = *(ArmatureData **)*(ArmatureData **)pAVar7 == pAVar6;
              pAVar6 = *(ArmatureData **)pAVar7;
              if (bVar3) goto joined_r0x00d35374;
              do {
                lVar8 = *(long *)pAVar7;
                pAVar7 = (ArmatureData *)(lVar8 + 0x10);
                pAVar6 = *(ArmatureData **)pAVar7;
              } while (*(long *)pAVar6 != lVar8);
            }
            else {
              do {
                pAVar6 = pAVar7;
                pAVar7 = *(ArmatureData **)pAVar6;
              } while (*(ArmatureData **)pAVar6 != (ArmatureData *)0x0);
            }
            if (pAVar6 == this + 0xf8) break;
          } while( true );
        }
        if (*(long *)(local_70 + 0x50) != 0) {
          if (__src != plVar9) {
            lVar8 = *__src;
            while (lVar8 != *(long *)(local_70 + 0x50)) {
              __src = __src + 1;
              if (plVar9 == __src) goto LAB_00d354a4;
              lVar8 = *__src;
            }
          }
          if (__src == plVar9) goto LAB_00d354a4;
        }
        if (*(long **)(this + 0x70) == plVar9) {
          std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>
          ::__push_back_slow_path<dragonBones::BoneData*const&>
                    ((vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>
                      *)(this + 0x60),&local_70);
        }
        else {
          *plVar9 = (long)local_70;
          *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
        }
        uVar12 = uVar12 + 1;
      }
LAB_00d354a4:
      if (uVar11 <= uVar12) goto code_r0x00d354ac;
      __src = *(long **)(this + 0x60);
      plVar9 = *(long **)(this + 0x68);
      uVar10 = uVar1;
    } while( true );
  }
LAB_00d354b4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00d354ac:
  operator_delete(__dest);
  goto LAB_00d354b4;
}

