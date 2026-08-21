
/* cocostudio::ArmatureAnimation::playWithIndexes(std::__ndk1::vector<int,
   std::__ndk1::allocator<int> > const&, int, bool) */

void __thiscall
cocostudio::ArmatureAnimation::playWithIndexes
          (ArmatureAnimation *this,vector *param_1,int param_2,bool param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong *puVar3;
  byte *pbVar4;
  int *piVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  void *__src;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  long lVar11;
  int *piVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pbVar1 = *(byte **)(this + 0x118);
  pbVar4 = *(byte **)(this + 0x120);
  if (pbVar4 != pbVar1) {
    bVar6 = pbVar4[-0x18];
    pbVar8 = pbVar4 + -0x18;
    while( true ) {
      if ((bVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
      if (pbVar1 == pbVar8) break;
      bVar6 = pbVar8[-0x18];
      pbVar4 = pbVar8;
      pbVar8 = pbVar8 + -0x18;
    }
  }
  *(byte **)(this + 0x120) = pbVar1;
  this[0x131] = (ArmatureAnimation)param_3;
  *(int *)(this + 0x138) = param_2;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x130] = (ArmatureAnimation)0x1;
  piVar12 = *(int **)param_1;
  piVar5 = *(int **)(param_1 + 8);
  if (piVar12 != piVar5) {
    lVar11 = *(long *)(this + 0x58);
    do {
      lVar2 = *(long *)(lVar11 + 0x68);
      uVar9 = (ulong)*piVar12;
      uVar10 = (*(long *)(lVar11 + 0x70) - lVar2 >> 3) * -0x5555555555555555;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(&local_80,(basic_string *)(lVar2 + uVar9 * 0x18));
      __src = local_70;
      uVar9 = uStack_78;
      puVar3 = *(ulong **)(this + 0x120);
      if (puVar3 == *(ulong **)(this + 0x128)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x118),(basic_string *)&local_80);
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        if (((byte)local_80 & 1) == 0) {
          puVar3[2] = (ulong)local_70;
          puVar3[1] = uStack_78;
          *puVar3 = CONCAT71(uStack_7f,local_80);
        }
        else {
          if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_78 < 0x17) {
            __dest = (void *)((long)puVar3 + 1);
            *(char *)puVar3 = (char)((int)uStack_78 << 1);
            if (uStack_78 != 0) goto LAB_00c3b688;
          }
          else {
            uVar10 = uStack_78 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar10);
            puVar3[1] = uVar9;
            puVar3[2] = (ulong)__dest;
            *puVar3 = uVar10 | 1;
LAB_00c3b688:
            memcpy(__dest,__src,uVar9);
          }
          *(undefined1 *)((long)__dest + uVar9) = 0;
        }
        *(ulong **)(this + 0x120) = puVar3 + 3;
      }
      if (((byte)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      piVar12 = piVar12 + 1;
    } while (piVar5 != piVar12);
  }
  updateMovementList(this);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

