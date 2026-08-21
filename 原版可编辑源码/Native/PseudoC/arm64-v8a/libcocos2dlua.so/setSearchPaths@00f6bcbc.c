
/* cocos2d::FileUtils::setSearchPaths(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void cocos2d::FileUtils::setSearchPaths(vector *param_1)

{
  vector *pvVar1;
  ulong *puVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string bVar5;
  vector vVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  undefined8 *puVar9;
  undefined1 *__src;
  uint uVar10;
  int iVar11;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x1;
  basic_string *in_x2;
  long lVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  ulong uVar14;
  long lVar15;
  basic_string *pbVar16;
  basic_string *pbVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  bool bVar18;
  void *pvVar19;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong local_b8;
  basic_string *pbStack_b0;
  void *local_a8;
  ulong local_a0;
  basic_string *pbStack_98;
  undefined1 *local_90;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(param_1 + 8));
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(param_1 + 0x88) != in_x1) {
    in_x2 = *(basic_string **)(in_x1 + 8);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(param_1 + 0x88),*(basic_string **)in_x1,in_x2);
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    puVar9 = *(void **)(param_1 + 200);
    while (puVar9 != (void *)0x0) {
      pvVar19 = (void *)*puVar9;
      if ((*(byte *)(puVar9 + 5) & 1) != 0) {
        operator_delete((void *)puVar9[7]);
      }
      if ((*(byte *)(puVar9 + 2) & 1) != 0) {
        operator_delete((void *)puVar9[4]);
      }
      operator_delete(puVar9);
      puVar9 = pvVar19;
    }
    lVar12 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = 0;
    if (lVar12 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    puVar9 = *(void **)(param_1 + 0xf0);
    while (puVar9 != (void *)0x0) {
      pvVar19 = (void *)*puVar9;
      if ((*(byte *)(puVar9 + 5) & 1) != 0) {
        operator_delete((void *)puVar9[7]);
      }
      if ((*(byte *)(puVar9 + 2) & 1) != 0) {
        operator_delete((void *)puVar9[4]);
      }
      operator_delete(puVar9);
      puVar9 = pvVar19;
    }
    lVar12 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (lVar12 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(param_1 + 0x70);
  this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this_00
  ;
  pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (param_1 + 0x78);
  if (pbVar13 != this) {
    bVar4 = pbVar13[-0x18];
    pbVar8 = pbVar13 + -0x18;
    while( true ) {
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar13 + -8));
      }
      if (this == pbVar8) break;
      bVar4 = pbVar8[-0x18];
      pbVar13 = pbVar8;
      pbVar8 = pbVar8 + -0x18;
    }
  }
  pbVar17 = *(basic_string **)(param_1 + 0x88);
  pbVar3 = *(basic_string **)(param_1 + 0x90);
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (param_1 + 0x78) = this;
  if (pbVar17 != pbVar3) {
    bVar18 = false;
    do {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      pbStack_98 = (basic_string *)0x0;
      local_90 = (undefined1 *)0x0;
      local_a0 = 0;
      uVar10 = (**(code **)(*(long *)param_1 + 0x140))(param_1,pbVar17);
      if ((uVar10 & 1) == 0 && (vector *)&local_80 != param_1 + 0xa0) {
        in_x2 = (basic_string *)(ulong)((byte)param_1[0xa0] >> 1);
        pvVar1 = param_1 + 0xa1;
        if (((byte)param_1[0xa0] & 1) != 0) {
          in_x2 = *(basic_string **)(param_1 + 0xa8);
          pvVar1 = *(vector **)(param_1 + 0xb0);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,(char *)pvVar1,(ulong)in_x2);
      }
      std::__ndk1::operator+((__ndk1 *)&local_80,pbVar17,in_x2);
      if ((local_a0 & 1) != 0) {
        *local_90 = 0;
        pbStack_98 = (basic_string *)0x0;
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      pbStack_98 = pbStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
      bVar5 = *pbVar17;
      if (((byte)bVar5 & 1) == 0) {
        if ((byte)bVar5 >> 1 != 0) {
LAB_00f6bf20:
          if (((byte)bVar5 & 1) == 0) {
            uVar14 = (ulong)((byte)bVar5 >> 1);
            pbVar16 = pbVar17 + 1;
          }
          else {
            uVar14 = *(ulong *)(pbVar17 + 8);
            pbVar16 = *(basic_string **)(pbVar17 + 0x10);
          }
          if (pbVar16[uVar14 - 1] != (basic_string)0x2f) {
            in_x2 = (basic_string *)0x1;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a0,"/",1);
          }
        }
      }
      else if (*(long *)(pbVar17 + 8) != 0) goto LAB_00f6bf20;
      if (bVar18) {
LAB_00f6bf68:
        bVar18 = true;
      }
      else {
        bVar5 = *pbVar17;
        vVar6 = param_1[0xa0];
        in_x2 = (basic_string *)(ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          in_x2 = *(basic_string **)(pbVar17 + 8);
        }
        pbVar16 = (basic_string *)(ulong)((byte)vVar6 >> 1);
        if (((byte)vVar6 & 1) != 0) {
          pbVar16 = *(basic_string **)(param_1 + 0xa8);
        }
        if (in_x2 == pbVar16) {
          pbVar16 = *(basic_string **)(pbVar17 + 0x10);
          if (((byte)bVar5 & 1) == 0) {
            pbVar16 = pbVar17 + 1;
          }
          pvVar1 = param_1 + 0xa1;
          if (((byte)vVar6 & 1) != 0) {
            pvVar1 = *(vector **)(param_1 + 0xb0);
          }
          if (((byte)bVar5 & 1) == 0) {
            if (in_x2 != (basic_string *)0x0) {
              pbVar16 = (basic_string *)0x0;
              do {
                if (*(vector *)(pbVar17 + (long)pbVar16 + 1) != pvVar1[(long)pbVar16])
                goto LAB_00f6bff4;
                pbVar16 = pbVar16 + 1;
              } while ((basic_string *)(ulong)((byte)bVar5 >> 1) != pbVar16);
            }
          }
          else if ((in_x2 != (basic_string *)0x0) &&
                  (iVar11 = memcmp(pbVar16,pvVar1,(size_t)in_x2), iVar11 != 0)) goto LAB_00f6bff4;
          goto LAB_00f6bf68;
        }
LAB_00f6bff4:
        bVar18 = false;
      }
      __src = local_90;
      puVar2 = *(ulong **)(param_1 + 0x78);
      if (puVar2 == *(ulong **)(param_1 + 0x80)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (this_00,(basic_string *)&local_a0);
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        if ((local_a0 & 1) == 0) {
          puVar2[2] = (ulong)local_90;
          puVar2[1] = (ulong)pbStack_98;
          *puVar2 = local_a0;
        }
        else {
          if ((basic_string *)0xffffffffffffffef < pbStack_98) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pbStack_98 < (basic_string *)0x17) {
            pvVar19 = (void *)((long)puVar2 + 1);
            *(char *)puVar2 = (char)((int)pbStack_98 << 1);
            if (pbStack_98 != (basic_string *)0x0) goto LAB_00f6c0d4;
          }
          else {
            pvVar19 = operator_new((ulong)(pbStack_98 + 0x10) & 0xfffffffffffffff0);
            puVar2[1] = (ulong)pbStack_98;
            puVar2[2] = (ulong)pvVar19;
            *puVar2 = (ulong)(pbStack_98 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_00f6c0d4:
            in_x2 = pbStack_98;
            memcpy(pvVar19,__src,(size_t)pbStack_98);
          }
          *(basic_string *)((long)pvVar19 + (long)pbStack_98) = (basic_string)0x0;
        }
        *(ulong **)(param_1 + 0x78) = puVar2 + 3;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      pbVar17 = pbVar17 + 0x18;
    } while (pbVar17 != pbVar3);
    if (bVar18) goto LAB_00f6c130;
    this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (param_1 + 0x78);
  }
  if (this == *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (param_1 + 0x80)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_00,(basic_string *)(param_1 + 0xa0));
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this,(basic_string *)(param_1 + 0xa0));
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x78) = this + 0x18;
  }
LAB_00f6c130:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(param_1 + 8));
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

