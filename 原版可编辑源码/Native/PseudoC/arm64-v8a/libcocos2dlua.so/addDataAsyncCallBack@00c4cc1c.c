
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::DataReaderHelper::addDataAsyncCallBack(float) */

void cocostudio::DataReaderHelper::addDataAsyncCallBack(float param_1)

{
  mutex *this;
  Ref *this_00;
  undefined8 *puVar1;
  basic_string bVar2;
  byte bVar3;
  long in_x0;
  ArmatureDataManager *pAVar4;
  ulong *puVar5;
  void *pvVar6;
  basic_string *in_x2;
  basic_string *pbVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar16;
  basic_string *pbVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long local_70;
  undefined8 *puVar15;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  this = (mutex *)(in_x0 + 0xb0);
  lVar12 = *(long *)(in_x0 + 0x148);
  std::__ndk1::mutex::lock(this);
  if (*(long *)(lVar12 + 0x28) == 0) {
    std::__ndk1::mutex::unlock(this);
    lVar9 = *(long *)(lVar9 + 0x28);
    goto LAB_00c4d078;
  }
  uVar10 = *(ulong *)(lVar12 + 0x20);
  puVar16 = *(undefined8 **)
             (*(long *)((long)*(undefined8 **)(lVar12 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
             (uVar10 & 0x1ff) * 8);
  *(ulong *)(lVar12 + 0x20) = uVar10 + 1;
  *(long *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + -1;
  if (0x3ff < uVar10 + 1) {
    operator_delete((void *)**(undefined8 **)(lVar12 + 8));
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 8;
    *(long *)(lVar12 + 0x20) = *(long *)(lVar12 + 0x20) + -0x200;
  }
  std::__ndk1::mutex::unlock(this);
  pbVar13 = (byte *)*puVar16;
  pbVar17 = (basic_string *)(pbVar13 + 0x70);
  uVar10 = (ulong)((byte)*pbVar17 >> 1);
  if (((byte)*pbVar17 & 1) != 0) {
    uVar10 = *(ulong *)(pbVar13 + 0x78);
  }
  if (uVar10 != 0) {
    bVar2 = *(basic_string *)(pbVar13 + 0x88);
    uVar10 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar10 = *(ulong *)(pbVar13 + 0x90);
    }
    if (uVar10 != 0) {
      std::__ndk1::mutex::lock((mutex *)(in_x0 + 0x100));
      pAVar4 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
      in_x2 = pbVar17;
      ArmatureDataManager::addSpriteFrameFromFile
                (pAVar4,(basic_string *)(pbVar13 + 0x88),pbVar17,(basic_string *)(puVar16 + 8));
      std::__ndk1::mutex::unlock((mutex *)(in_x0 + 0x100));
    }
  }
  if (puVar16[6] != 0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_88,(basic_string *)
                            (*(long *)(puVar16[2] + ((ulong)puVar16[5] / 0xaa) * 8) +
                            ((ulong)puVar16[5] % 0xaa) * 0x18));
      std::__ndk1::mutex::lock((mutex *)(in_x0 + 0x100));
      pAVar4 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
      std::__ndk1::operator+((__ndk1 *)(pbVar13 + 0x38),(basic_string *)local_88,in_x2);
      pbVar7 = (basic_string *)0x6;
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_b8,".plist",6);
      local_90 = (void *)puVar5[2];
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      std::__ndk1::operator+((__ndk1 *)(pbVar13 + 0x38),(basic_string *)local_88,pbVar7);
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_e8,".png",4);
      local_c0 = (void *)puVar5[2];
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      in_x2 = (basic_string *)&local_d0;
      ArmatureDataManager::addSpriteFrameFromFile
                (pAVar4,(basic_string *)&local_a0,in_x2,(basic_string *)(puVar16 + 8));
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if (((byte)local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::mutex::unlock((mutex *)(in_x0 + 0x100));
      uVar10 = puVar16[5];
      lVar12 = *(long *)(puVar16[2] + (uVar10 / 0xaa) * 8);
      if ((*(byte *)(lVar12 + (uVar10 % 0xaa) * 0x18) & 1) != 0) {
        operator_delete(*(void **)(lVar12 + (uVar10 % 0xaa) * 0x18 + 0x10));
        uVar10 = puVar16[5];
      }
      puVar16[5] = uVar10 + 1;
      puVar16[6] = puVar16[6] + -1;
      if (0x153 < uVar10 + 1) {
        operator_delete(*(void **)puVar16[2]);
        puVar16[2] = puVar16[2] + 8;
        puVar16[5] = puVar16[5] + -0xaa;
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
    } while (puVar16[6] != 0);
  }
  this_00 = *(Ref **)(pbVar13 + 0x50);
  pcVar8 = *(code **)(pbVar13 + 0x58);
  uVar10 = *(ulong *)(pbVar13 + 0x60);
  lVar12 = *(long *)(in_x0 + 0x128) + -1;
  *(long *)(in_x0 + 0x128) = lVar12;
  if ((this_00 != (Ref *)0x0) && (uVar11 = uVar10 & 1, uVar11 != 0 || pcVar8 != (code *)0x0)) {
    if (uVar11 != 0) {
      pcVar8 = *(code **)(pcVar8 + *(long *)(this_00 + ((long)uVar10 >> 1)));
    }
    (*pcVar8)((float)(*(ulong *)(in_x0 + 0x130) - lVar12) / (float)*(ulong *)(in_x0 + 0x130));
    cocos2d::Ref::release(this_00);
  }
  if ((pbVar13[0x88] & 1) == 0) {
    if (((byte)*pbVar17 & 1) != 0) goto LAB_00c4d0b4;
LAB_00c4cf94:
    if ((pbVar13[0x38] & 1) != 0) goto LAB_00c4d0c4;
LAB_00c4cf9c:
    if ((pbVar13[0x18] & 1) != 0) goto LAB_00c4d0d4;
LAB_00c4cfa4:
    bVar3 = *pbVar13;
  }
  else {
    operator_delete(*(void **)(pbVar13 + 0x98));
    if (((byte)*pbVar17 & 1) == 0) goto LAB_00c4cf94;
LAB_00c4d0b4:
    operator_delete(*(void **)(pbVar13 + 0x80));
    if ((pbVar13[0x38] & 1) == 0) goto LAB_00c4cf9c;
LAB_00c4d0c4:
    operator_delete(*(void **)(pbVar13 + 0x48));
    if ((pbVar13[0x18] & 1) == 0) goto LAB_00c4cfa4;
LAB_00c4d0d4:
    operator_delete(*(void **)(pbVar13 + 0x28));
    bVar3 = *pbVar13;
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(pbVar13 + 0x10));
  }
  operator_delete(pbVar13);
  if ((*(byte *)(puVar16 + 0xb) & 1) != 0) {
    operator_delete((void *)puVar16[0xd]);
  }
  if ((*(byte *)(puVar16 + 8) & 1) != 0) {
    operator_delete((void *)puVar16[10]);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::clear((__deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *)(puVar16 + 1));
  puVar1 = (undefined8 *)puVar16[3];
  puVar14 = (undefined8 *)puVar16[2];
  if ((undefined8 *)puVar16[2] != puVar1) {
    do {
      puVar15 = puVar14 + 1;
      operator_delete((void *)*puVar14);
      puVar14 = puVar15;
    } while (puVar1 != puVar15);
    lVar12 = puVar16[3] - puVar16[2];
    if (lVar12 != 0) {
      puVar16[3] = puVar16[3] + (lVar12 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar6 = *(void **)(puVar16 + 1);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  operator_delete(puVar16);
  if (*(long *)(in_x0 + 0x128) == 0) {
    *(undefined8 *)(in_x0 + 0x130) = 0;
    lVar12 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar12 + 0xa0),(Ref *)addDataAsyncCallBack);
  }
  lVar9 = *(long *)(lVar9 + 0x28);
LAB_00c4d078:
  if (lVar9 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

