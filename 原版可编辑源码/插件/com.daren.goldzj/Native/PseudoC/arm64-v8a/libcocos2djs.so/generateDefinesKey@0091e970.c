
/* cocos2d::renderer::Pass::generateDefinesKey() */

void __thiscall cocos2d::renderer::Pass::generateDefinesKey(Pass *this)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  ulong *puVar5;
  Pass *pPVar6;
  Pass *pPVar7;
  long lVar8;
  uint uVar9;
  Pass *pPVar10;
  undefined1 auVar11 [12];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if (*(Pass **)(this + 0x60) == this + 0x68) {
    uVar9 = 0;
  }
  else {
    pPVar10 = *(Pass **)(this + 0x60);
    do {
      auVar11 = cocos2d::Value::asUnsignedInt((Value *)(pPVar10 + 0x38));
      std::__ndk1::to_string(auVar11._0_8_,auVar11._8_4_);
      uVar1 = *(ulong *)(pPVar10 + 0x28);
      pPVar6 = *(Pass **)(pPVar10 + 0x30);
      if (((byte)pPVar10[0x20] & 1) == 0) {
        pPVar6 = pPVar10 + 0x21;
        uVar1 = (ulong)((byte)pPVar10[0x20] >> 1);
      }
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert(local_98,0,(char *)pPVar6,uVar1);
      local_70 = (char *)puVar5[2];
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar1 = local_80 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar1 = uStack_78;
        pcVar3 = local_70;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,pcVar3,uVar1);
      if ((local_80 & 1) == 0) {
        if (((byte)local_98[0] & 1) == 0) goto LAB_0091ea38;
LAB_0091ea54:
        operator_delete(local_88);
        pPVar6 = *(Pass **)(pPVar10 + 8);
        if (*(Pass **)(pPVar10 + 8) != (Pass *)0x0) goto LAB_0091ea64;
LAB_0091ea74:
        pPVar6 = pPVar10 + 0x10;
        pPVar7 = *(Pass **)pPVar6;
        if (*(Pass **)pPVar7 != pPVar10) {
          do {
            lVar8 = *(long *)pPVar6;
            pPVar6 = (Pass *)(lVar8 + 0x10);
            pPVar7 = *(Pass **)pPVar6;
          } while (*(long *)pPVar7 != lVar8);
        }
      }
      else {
        operator_delete(local_70);
        if (((byte)local_98[0] & 1) != 0) goto LAB_0091ea54;
LAB_0091ea38:
        pPVar6 = *(Pass **)(pPVar10 + 8);
        if (*(Pass **)(pPVar10 + 8) == (Pass *)0x0) goto LAB_0091ea74;
LAB_0091ea64:
        do {
          pPVar7 = pPVar6;
          pPVar6 = *(Pass **)pPVar7;
        } while (*(Pass **)pPVar7 != (Pass *)0x0);
      }
      pPVar10 = pPVar7;
    } while (pPVar7 != this + 0x68);
    uVar9 = (uint)(byte)local_60._0_1_;
  }
  *(undefined8 *)(this + 0x78) = 0;
  uVar1 = (ulong)(uVar9 >> 1);
  pvVar4 = (void *)((ulong)&local_60 | 1);
  if ((uVar9 & 1) != 0) {
    uVar1 = local_58;
    pvVar4 = local_50;
  }
  local_80 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                       ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_98,pvVar4,uVar1);
  MathUtil::combineHash((ulong *)(this + 0x78),&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

