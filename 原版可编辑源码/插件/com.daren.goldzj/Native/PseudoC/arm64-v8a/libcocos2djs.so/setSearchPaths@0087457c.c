
/* cocos2d::FileUtils::setSearchPaths(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void cocos2d::FileUtils::setSearchPaths(vector *param_1)

{
  vector *pvVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  vector vVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined1 *__src;
  uint uVar9;
  int iVar10;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x1;
  basic_string *in_x2;
  long lVar11;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this;
  long lVar12;
  basic_string *pbVar13;
  ulong *puVar14;
  ulong uVar15;
  void *pvVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong *puVar19;
  byte *__dest;
  ulong local_b8;
  basic_string *pbStack_b0;
  void *local_a8;
  ulong local_a0;
  basic_string *pbStack_98;
  undefined1 *local_90;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(param_1 + 0x60) != in_x1) {
    in_x2 = *(basic_string **)(in_x1 + 8);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(param_1 + 0x60),*(basic_string **)in_x1,in_x2);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    puVar7 = *(void **)(param_1 + 0xa0);
    while (puVar7 != (void *)0x0) {
      pvVar16 = (void *)*puVar7;
      if ((*(byte *)(puVar7 + 5) & 1) != 0) {
        operator_delete((void *)puVar7[7]);
      }
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        operator_delete((void *)puVar7[4]);
      }
      operator_delete(puVar7);
      puVar7 = pvVar16;
    }
    lVar11 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar11 != 0) {
      lVar12 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  this = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          *)(param_1 + 0x48);
  puVar19 = *(ulong **)this;
  puVar14 = *(ulong **)(param_1 + 0x50);
  while (puVar8 = puVar14, puVar8 != puVar19) {
    puVar14 = puVar8 + -3;
    if ((*puVar14 & 1) != 0) {
      operator_delete((void *)puVar8[-1]);
    }
  }
  pbVar17 = *(basic_string **)(param_1 + 0x60);
  pbVar2 = *(basic_string **)(param_1 + 0x68);
  *(ulong **)(param_1 + 0x50) = puVar19;
  if (pbVar17 != pbVar2) {
    bVar6 = false;
    do {
      local_80 = 0;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      pbStack_98 = (basic_string *)0x0;
      local_90 = (undefined1 *)0x0;
      local_a0 = 0;
      uVar9 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pbVar17);
      if ((uVar9 & 1) == 0 && (vector *)&local_80 != param_1 + 0x78) {
        in_x2 = (basic_string *)(ulong)((byte)param_1[0x78] >> 1);
        pvVar1 = param_1 + 0x79;
        if (((byte)param_1[0x78] & 1) != 0) {
          in_x2 = *(basic_string **)(param_1 + 0x80);
          pvVar1 = *(vector **)(param_1 + 0x88);
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
      local_90 = local_a8;
      pbStack_98 = pbStack_b0;
      local_a0 = local_b8;
      bVar3 = *pbVar17;
      if (((byte)bVar3 & 1) == 0) {
        if ((byte)bVar3 >> 1 != 0) {
LAB_008747b8:
          if (((byte)bVar3 & 1) == 0) {
            uVar15 = (ulong)((byte)bVar3 >> 1);
            pbVar13 = pbVar17 + 1;
          }
          else {
            uVar15 = *(ulong *)(pbVar17 + 8);
            pbVar13 = *(basic_string **)(pbVar17 + 0x10);
          }
          if (pbVar13[uVar15 - 1] != (basic_string)0x2f) {
            in_x2 = (basic_string *)0x1;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a0,"/",1);
          }
        }
      }
      else if (*(long *)(pbVar17 + 8) != 0) goto LAB_008747b8;
      if (bVar6) {
LAB_00874800:
        bVar6 = true;
      }
      else {
        bVar3 = *pbVar17;
        vVar4 = param_1[0x78];
        in_x2 = (basic_string *)(ulong)((byte)bVar3 >> 1);
        if (((byte)bVar3 & 1) != 0) {
          in_x2 = *(basic_string **)(pbVar17 + 8);
        }
        pbVar13 = (basic_string *)(ulong)((byte)vVar4 >> 1);
        if (((byte)vVar4 & 1) != 0) {
          pbVar13 = *(basic_string **)(param_1 + 0x80);
        }
        if (in_x2 == pbVar13) {
          pbVar13 = *(basic_string **)(pbVar17 + 0x10);
          if (((byte)bVar3 & 1) == 0) {
            pbVar13 = pbVar17 + 1;
          }
          pvVar1 = param_1 + 0x79;
          if (((byte)vVar4 & 1) != 0) {
            pvVar1 = *(vector **)(param_1 + 0x88);
          }
          if (((byte)bVar3 & 1) == 0) {
            if (in_x2 != (basic_string *)0x0) {
              pbVar13 = (basic_string *)0x0;
              do {
                if (*(vector *)(pbVar17 + (long)pbVar13 + 1) != pvVar1[(long)pbVar13])
                goto LAB_0087488c;
                pbVar13 = pbVar13 + 1;
              } while ((basic_string *)(ulong)((byte)bVar3 >> 1) != pbVar13);
            }
          }
          else if ((in_x2 != (basic_string *)0x0) &&
                  (iVar10 = memcmp(pbVar13,pvVar1,(size_t)in_x2), iVar10 != 0)) goto LAB_0087488c;
          goto LAB_00874800;
        }
LAB_0087488c:
        bVar6 = false;
      }
      __src = local_90;
      puVar14 = *(ulong **)(param_1 + 0x50);
      if (puVar14 == *(ulong **)(param_1 + 0x58)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (this,(basic_string *)&local_a0);
      }
      else {
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        if ((local_a0 & 1) == 0) {
          puVar14[2] = (ulong)local_90;
          puVar14[1] = (ulong)pbStack_98;
          *puVar14 = local_a0;
        }
        else {
          if ((basic_string *)0xffffffffffffffef < pbStack_98) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pbStack_98 < (basic_string *)0x17) {
            pvVar16 = (void *)((long)puVar14 + 1);
            *(char *)puVar14 = (char)((int)pbStack_98 << 1);
            if (pbStack_98 != (basic_string *)0x0) goto LAB_008746d4;
          }
          else {
            pvVar16 = operator_new((ulong)(pbStack_98 + 0x10) & 0xfffffffffffffff0);
            puVar14[1] = (ulong)pbStack_98;
            puVar14[2] = (ulong)pvVar16;
            *puVar14 = (ulong)(pbStack_98 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_008746d4:
            in_x2 = pbStack_98;
            memcpy(pvVar16,__src,(size_t)pbStack_98);
          }
          *(basic_string *)((long)pvVar16 + (long)pbStack_98) = (basic_string)0x0;
        }
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 0x18;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      pbVar17 = pbVar17 + 0x18;
    } while (pbVar17 != pbVar2);
    if (bVar6) goto LAB_008749b0;
    puVar19 = *(ulong **)(param_1 + 0x50);
  }
  pbVar17 = (basic_string *)(param_1 + 0x78);
  if (puVar19 == *(ulong **)(param_1 + 0x58)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this,pbVar17);
    goto LAB_008749b0;
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = 0;
  if (((byte)*pbVar17 & 1) == 0) {
    uVar18 = *(ulong *)(param_1 + 0x80);
    uVar15 = *(ulong *)pbVar17;
    puVar19[2] = *(ulong *)(param_1 + 0x88);
    puVar19[1] = uVar18;
    *puVar19 = uVar15;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x80);
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = *(void **)(param_1 + 0x88);
    if (uVar15 < 0x17) {
      __dest = (byte *)((long)puVar19 + 1);
      *(byte *)puVar19 = (byte)((int)uVar15 << 1);
      if (uVar15 != 0) goto LAB_00874990;
    }
    else {
      uVar18 = uVar15 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar18);
      puVar19[1] = uVar15;
      puVar19[2] = (ulong)__dest;
      *puVar19 = uVar18 | 1;
LAB_00874990:
      memcpy(__dest,pvVar16,uVar15);
    }
    __dest[uVar15] = 0;
  }
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 0x18;
LAB_008749b0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

