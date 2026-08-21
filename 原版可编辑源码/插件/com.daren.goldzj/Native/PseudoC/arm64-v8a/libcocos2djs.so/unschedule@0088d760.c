
/* cocos2d::Scheduler::unschedule(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, void*) */

void __thiscall cocos2d::Scheduler::unschedule(Scheduler *this,basic_string *param_1,void *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  basic_string bVar4;
  Ref RVar5;
  _hashSelectorEntry *p_Var6;
  long lVar7;
  Ref *pRVar8;
  int iVar9;
  long lVar10;
  Ref *this_00;
  Ref *__s2;
  uint uVar11;
  long lVar12;
  long *plVar13;
  basic_string *__s1;
  long lVar14;
  long lVar15;
  long lVar16;
  _ccArray *local_78;
  
  lVar7 = tpidr_el0;
  lVar12 = *(long *)(lVar7 + 0x28);
  if (param_2 != (void *)0x0) {
    bVar4 = *param_1;
    __n = (ulong)((byte)bVar4 >> 1);
    if (((byte)bVar4 & 1) != 0) {
      __n = *(size_t *)(param_1 + 8);
    }
    if ((__n != 0) && (*(long *)this != 0)) {
      uVar11 = (uint)param_2;
      iVar9 = (int)(((ulong)param_2 & 0xffffffffff000000) >> 0x20);
      uVar11 = (((int)((ulong)param_2 & 0xffffffffff000000) + -0x60b6453e) - (iVar9 + -0x61c88647))
               + (uVar11 & 0xff0000) + (uVar11 & 0xff00) + (uVar11 & 0xff) ^ 0x7f76d;
      uVar2 = (iVar9 + -0x60b6453e) - uVar11 ^ uVar11 << 8;
      uVar3 = (-0x1124109 - uVar11) - uVar2 ^ uVar2 >> 0xd;
      uVar11 = (uVar11 - uVar2) - uVar3 ^ uVar3 >> 0xc;
      plVar13 = *(long **)(*(long *)this + 0x28);
      uVar2 = (uVar2 - uVar3) - uVar11 ^ uVar11 << 0x10;
      uVar3 = (uVar3 - uVar11) - uVar2 ^ uVar2 >> 5;
      uVar11 = (uVar11 - uVar2) - uVar3 ^ uVar3 >> 3;
      uVar2 = (uVar2 - uVar3) - uVar11 ^ uVar11 << 10;
      lVar14 = *(long *)(*plVar13 +
                        (ulong)(((uVar3 - uVar11) - uVar2 ^ uVar2 >> 0xf) & (int)plVar13[1] - 1U) *
                        0x10);
      while( true ) {
        if ((lVar14 == 0) ||
           (p_Var6 = (_hashSelectorEntry *)(lVar14 - plVar13[4]),
           p_Var6 == (_hashSelectorEntry *)0x0)) goto LAB_0088d8bc;
        if ((*(int *)(p_Var6 + 0x58) == 8) && ((void *)**(undefined8 **)(p_Var6 + 0x50) == param_2))
        break;
        lVar14 = *(long *)(p_Var6 + 0x48);
      }
      local_78 = *(_ccArray **)p_Var6;
      lVar14 = *(long *)local_78;
      if (0 < lVar14) {
        __s1 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar4 & 1) == 0) {
          __s1 = param_1 + 1;
        }
        lVar16 = *(long *)(local_78 + 0x10);
        lVar15 = 0;
        goto LAB_0088d934;
      }
    }
  }
  goto LAB_0088d8bc;
LAB_0088d934:
  do {
    lVar10 = *(long *)(lVar16 + lVar15 * 8);
    if ((lVar10 != 0) &&
       (this_00 = (Ref *)__dynamic_cast(lVar10,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0),
       this_00 != (Ref *)0x0)) {
      RVar5 = this_00[0x70];
      sVar1 = (ulong)((byte)RVar5 >> 1);
      if (((byte)RVar5 & 1) != 0) {
        sVar1 = *(size_t *)(this_00 + 0x78);
      }
      if (__n == sVar1) {
        __s2 = this_00 + 0x71;
        if (((byte)RVar5 & 1) != 0) {
          __s2 = *(Ref **)(this_00 + 0x80);
        }
        lVar10 = -(ulong)((byte)bVar4 >> 1);
        pRVar8 = (Ref *)param_1;
        if (((byte)bVar4 & 1) == 0) {
          while (pRVar8[1] == *__s2) {
            lVar10 = lVar10 + 1;
            __s2 = __s2 + 1;
            pRVar8 = pRVar8 + 1;
            if (lVar10 == 0) goto LAB_0088d9d0;
          }
        }
        else {
          iVar9 = memcmp(__s1,__s2,__n);
          if (iVar9 == 0) {
LAB_0088d9d0:
            if ((*(Ref **)(p_Var6 + 0x18) == this_00) && (p_Var6[0x20] == (_hashSelectorEntry)0x0))
            {
              Ref::retain(this_00);
              local_78 = *(_ccArray **)p_Var6;
              p_Var6[0x20] = (_hashSelectorEntry)0x1;
            }
            ccArrayRemoveObjectAtIndex(local_78,lVar15,true);
            if ((int)lVar15 <= *(int *)(p_Var6 + 0x10)) {
              *(int *)(p_Var6 + 0x10) = *(int *)(p_Var6 + 0x10) + -1;
            }
            if (**(long **)p_Var6 == 0) {
              if (*(_hashSelectorEntry **)(this + 8) == p_Var6) {
                this[0x10] = (Scheduler)0x1;
              }
              else {
                removeHashElement(this,p_Var6);
              }
            }
            break;
          }
        }
      }
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 < lVar14);
LAB_0088d8bc:
  if (*(long *)(lVar7 + 0x28) == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

