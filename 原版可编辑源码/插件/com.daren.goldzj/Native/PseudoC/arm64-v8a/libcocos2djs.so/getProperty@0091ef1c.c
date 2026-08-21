
/* cocos2d::renderer::Pass::getProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall cocos2d::renderer::Pass::getProperty(Pass *this,basic_string *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_30 [8];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar4 = (ulong)((byte)*param_1 >> 1);
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_30,pbVar1,uVar4);
  do {
    uVar6 = *(ulong *)(this + 0x40);
    if (uVar6 != 0) {
      uVar7 = uVar6 - 1;
      if ((uVar7 & uVar6) == 0) {
        uVar8 = uVar7 & uVar4;
      }
      else {
        uVar8 = uVar4;
        if (uVar6 <= uVar4) {
          uVar8 = 0;
          if (uVar6 != 0) {
            uVar8 = uVar4 / uVar6;
          }
          uVar8 = uVar4 - uVar8 * uVar6;
        }
      }
      plVar9 = *(long **)(*(long *)(this + 0x38) + uVar8 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_0091efe8;
              uVar10 = plVar9[1];
              if (uVar10 != uVar4) break;
              if (plVar9[2] == uVar4) {
                lVar5 = (long)(plVar9 + 3);
                goto LAB_0091effc;
              }
            }
            if ((uVar7 & uVar6) == 0) break;
            if (uVar6 <= uVar10) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar2 * uVar6;
            }
            if (uVar10 != uVar8) goto LAB_0091efe8;
          }
        } while ((uVar10 & uVar7) == uVar8);
      }
    }
LAB_0091efe8:
    this = *(Pass **)(this + 0x30);
    if (this == (Pass *)0x0) {
      lVar5 = 0;
LAB_0091effc:
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar5);
    }
  } while( true );
}

