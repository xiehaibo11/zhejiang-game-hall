
/* cocostudio::DataReaderHelper::loadData() */

void __thiscall cocostudio::DataReaderHelper::loadData(DataReaderHelper *this)

{
  mutex *this_00;
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  _DataInfo *p_Var6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
  *this_01;
  mutex *local_78;
  char local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 0x88);
  while( true ) {
    while( true ) {
      lVar15 = *(long *)(this + 0x140);
      std::__ndk1::mutex::lock(this_00);
      if (*(long *)(lVar15 + 0x28) == 0) break;
      uVar9 = *(ulong *)(lVar15 + 0x20);
      pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (*(long *)((long)*(undefined8 **)(lVar15 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                 (uVar9 & 0x1ff) * 8);
      *(ulong *)(lVar15 + 0x20) = uVar9 + 1;
      *(long *)(lVar15 + 0x28) = *(long *)(lVar15 + 0x28) + -1;
      if (0x3ff < uVar9 + 1) {
        operator_delete((void *)**(undefined8 **)(lVar15 + 8));
        *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 8;
        *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + -0x200;
      }
      std::__ndk1::mutex::unlock(this_00);
      p_Var6 = operator_new(0x78,(nothrow_t *)&std::nothrow);
      if (p_Var6 != (_DataInfo *)0x0) {
        *(undefined8 *)(p_Var6 + 0x70) = 0;
        *(undefined8 *)(p_Var6 + 0x58) = 0;
        *(undefined8 *)(p_Var6 + 0x50) = 0;
        *(undefined8 *)(p_Var6 + 0x68) = 0;
        *(undefined8 *)(p_Var6 + 0x60) = 0;
        *(undefined8 *)(p_Var6 + 0x38) = 0;
        *(undefined8 *)(p_Var6 + 0x30) = 0;
        *(undefined8 *)(p_Var6 + 0x48) = 0;
        *(undefined8 *)(p_Var6 + 0x40) = 0;
        *(undefined8 *)(p_Var6 + 0x18) = 0;
        *(undefined8 *)(p_Var6 + 0x10) = 0;
        *(undefined8 *)(p_Var6 + 0x28) = 0;
        *(undefined8 *)(p_Var6 + 0x20) = 0;
        *(undefined8 *)(p_Var6 + 8) = 0;
        *(undefined8 *)p_Var6 = 0;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)p_Var6 =
           pbVar16;
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (p_Var6 + 0x40) != pbVar16) {
        uVar9 = *(ulong *)(pbVar16 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar16 + 0x10);
        if (((byte)*pbVar16 & 1) == 0) {
          pbVar2 = pbVar16 + 1;
          uVar9 = (ulong)((byte)*pbVar16 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var6 + 0x40),(char *)pbVar2,uVar9);
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (p_Var6 + 0x58) != pbVar16 + 0x38) {
        uVar9 = *(ulong *)(pbVar16 + 0x40);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar16 + 0x48);
        if (((byte)pbVar16[0x38] & 1) == 0) {
          pbVar2 = pbVar16 + 0x39;
          uVar9 = (ulong)((byte)pbVar16[0x38] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var6 + 0x58),(char *)pbVar2,uVar9);
      }
      iVar4 = *(int *)(pbVar16 + 0x30);
      if (iVar4 == 2) {
        if (((byte)pbVar16[0x18] & 1) == 0) {
          pbVar16 = pbVar16 + 0x19;
        }
        else {
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar16 + 0x28);
        }
        addDataFromBinaryCache((char *)pbVar16,p_Var6);
      }
      else if (iVar4 == 1) {
        addDataFromJsonCache((basic_string *)(pbVar16 + 0x18),p_Var6);
      }
      else if (iVar4 == 0) {
        addDataFromCache((basic_string *)(pbVar16 + 0x18),p_Var6);
      }
      std::__ndk1::mutex::lock((mutex *)(this + 0xb0));
      this_01 = *(deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
                  **)(this + 0x148);
      lVar15 = *(long *)(this_01 + 8);
      lVar11 = *(long *)(this_01 + 0x28);
      uVar9 = 0;
      if (*(long *)(this_01 + 0x10) - lVar15 != 0) {
        uVar9 = (*(long *)(this_01 + 0x10) - lVar15) * 0x40 - 1;
      }
      uVar8 = lVar11 + *(long *)(this_01 + 0x20);
      if (uVar9 == uVar8) {
        std::__ndk1::
        deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
        ::__add_back_capacity(this_01);
        lVar11 = *(long *)(this_01 + 0x28);
        lVar15 = *(long *)(this_01 + 8);
        uVar8 = *(long *)(this_01 + 0x20) + lVar11;
      }
      *(_DataInfo **)(*(long *)(lVar15 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
           p_Var6;
      *(long *)(this_01 + 0x28) = lVar11 + 1;
      std::__ndk1::mutex::unlock((mutex *)(this + 0xb0));
    }
    std::__ndk1::mutex::unlock(this_00);
    if (this[0x138] != (DataReaderHelper)0x0) break;
    local_70 = '\x01';
    local_78 = (mutex *)(this + 0x60);
    std::__ndk1::mutex::lock((mutex *)(this + 0x60));
    std::__ndk1::condition_variable::wait
              ((condition_variable *)(this + 0x24),(unique_lock *)&local_78);
    if (local_70 != '\0') {
      std::__ndk1::mutex::unlock(local_78);
    }
  }
  puVar12 = *(undefined8 **)(this + 0x140);
  if (puVar12 == (undefined8 *)0x0) goto LAB_00c4a264;
  puVar14 = (undefined8 *)puVar12[1];
  puVar3 = (undefined8 *)puVar12[2];
  lVar15 = (long)puVar3 - (long)puVar14;
  if (lVar15 != 0) {
    uVar9 = puVar12[4];
    plVar10 = (long *)((long)puVar14 + (uVar9 >> 6 & 0x3fffffffffffff8));
    lVar11 = *plVar10 + (uVar9 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar14 + (puVar12[5] + uVar9 >> 6 & 0x3fffffffffffff8)) +
            (puVar12[5] + uVar9 & 0x1ff) * 8;
    while (lVar1 != lVar11) {
      while (lVar11 = lVar11 + 8, lVar11 - *plVar10 == 0x1000) {
        plVar10 = plVar10 + 1;
        lVar11 = *plVar10;
        if (lVar1 == lVar11) goto LAB_00c4a09c;
      }
    }
  }
LAB_00c4a09c:
  puVar12[5] = 0;
  while (uVar9 = lVar15 >> 3, 2 < uVar9) {
    operator_delete((void *)*puVar14);
    puVar3 = (undefined8 *)puVar12[2];
    puVar14 = (undefined8 *)(puVar12[1] + 8);
    puVar12[1] = puVar14;
    lVar15 = (long)puVar3 - (long)puVar14;
  }
  if (uVar9 == 1) {
    uVar7 = 0x100;
LAB_00c4a0ec:
    puVar12[4] = uVar7;
  }
  else if (uVar9 == 2) {
    uVar7 = 0x200;
    goto LAB_00c4a0ec;
  }
  if (puVar14 != puVar3) {
    do {
      puVar13 = puVar14 + 1;
      operator_delete((void *)*puVar14);
      puVar14 = puVar13;
    } while (puVar3 != puVar13);
    lVar15 = puVar12[2] - puVar12[1];
    if (lVar15 != 0) {
      puVar12[2] = puVar12[2] + (lVar15 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if ((void *)*puVar12 != (void *)0x0) {
    operator_delete((void *)*puVar12);
  }
  operator_delete(puVar12);
  puVar12 = *(undefined8 **)(this + 0x148);
  *(undefined8 *)(this + 0x140) = 0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)puVar12[1];
    puVar3 = (undefined8 *)puVar12[2];
    lVar15 = (long)puVar3 - (long)puVar14;
    if (lVar15 != 0) {
      uVar9 = puVar12[4];
      plVar10 = (long *)((long)puVar14 + (uVar9 >> 6 & 0x3fffffffffffff8));
      lVar11 = *plVar10 + (uVar9 & 0x1ff) * 8;
      lVar1 = *(long *)((long)puVar14 + (puVar12[5] + uVar9 >> 6 & 0x3fffffffffffff8)) +
              (puVar12[5] + uVar9 & 0x1ff) * 8;
      while (lVar1 != lVar11) {
        while (lVar11 = lVar11 + 8, lVar11 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          lVar11 = *plVar10;
          if (lVar1 == lVar11) goto LAB_00c4a1c0;
        }
      }
    }
LAB_00c4a1c0:
    puVar12[5] = 0;
    while (uVar9 = lVar15 >> 3, 2 < uVar9) {
      operator_delete((void *)*puVar14);
      puVar3 = (undefined8 *)puVar12[2];
      puVar14 = (undefined8 *)(puVar12[1] + 8);
      puVar12[1] = puVar14;
      lVar15 = (long)puVar3 - (long)puVar14;
    }
    if (uVar9 == 1) {
      uVar7 = 0x100;
LAB_00c4a210:
      puVar12[4] = uVar7;
    }
    else if (uVar9 == 2) {
      uVar7 = 0x200;
      goto LAB_00c4a210;
    }
    if (puVar14 != puVar3) {
      do {
        puVar13 = puVar14 + 1;
        operator_delete((void *)*puVar14);
        puVar14 = puVar13;
      } while (puVar3 != puVar13);
      lVar15 = puVar12[2] - puVar12[1];
      if (lVar15 != 0) {
        puVar12[2] = puVar12[2] + (lVar15 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
    }
    if ((void *)*puVar12 != (void *)0x0) {
      operator_delete((void *)*puVar12);
    }
    operator_delete(puVar12);
  }
  *(undefined8 *)(this + 0x148) = 0;
LAB_00c4a264:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

