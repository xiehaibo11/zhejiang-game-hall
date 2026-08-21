
/* cocostudio::DataReaderHelper::addDataFromFileAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Ref*, void (cocos2d::Ref::*)(float)) */

void cocostudio::DataReaderHelper::addDataFromFileAsync
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,Ref *param_4,
               _func_void_float *param_5)

{
  size_t sVar1;
  Ref *pRVar2;
  basic_string *pbVar3;
  Ref RVar4;
  long lVar5;
  Ref *pRVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  ArmatureDataManager *this;
  long *plVar15;
  char *__s2;
  size_t sVar17;
  code *in_x5;
  ulong in_x6;
  size_t sVar18;
  long lVar19;
  Ref *pRVar20;
  ulong uVar21;
  long lVar22;
  Ref *__s1;
  deque<cocostudio::DataReaderHelper::_AsyncStruct*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_AsyncStruct*>>
  *this_00;
  ulong uVar23;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar24;
  ulong uVar25;
  int *__dest;
  float fVar26;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  basic_string *local_b8 [2];
  void *local_a8;
  code *local_a0;
  ulong uStack_98;
  int *local_90;
  code *local_80;
  ulong uStack_78;
  int *local_70;
  long local_68;
  int *piVar16;
  
  pbVar14 = DAT_01785730;
  lVar19 = _configFileList;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((long)DAT_01785730 - _configFileList != 0) {
    sVar17 = *(size_t *)(param_4 + 8);
    pRVar2 = *(Ref **)(param_4 + 0x10);
    uVar25 = ((long)DAT_01785730 - _configFileList >> 3) * -0x5555555555555555;
    uVar23 = 0;
    if (((byte)*param_4 & 1) == 0) {
      pRVar2 = param_4 + 1;
      sVar17 = (ulong)((byte)*param_4 >> 1);
    }
    do {
      pRVar20 = (Ref *)(lVar19 + uVar23 * 0x18);
      RVar4 = *pRVar20;
      sVar18 = (size_t)((byte)RVar4 >> 1);
      sVar1 = sVar18;
      if (((byte)RVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pRVar20 + 8);
      }
      if (sVar1 == sVar17) {
        __s1 = *(Ref **)(lVar19 + uVar23 * 0x18 + 0x10);
        if (((byte)RVar4 & 1) == 0) {
          __s1 = pRVar20 + 1;
        }
        pRVar6 = pRVar2;
        sVar1 = sVar17;
        if (((byte)RVar4 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00c4c468;
            pRVar20 = pRVar20 + 1;
            if (*pRVar20 != *pRVar6) break;
            sVar18 = sVar18 - 1;
            pRVar6 = pRVar6 + 1;
            sVar1 = sVar18;
          }
        }
        else if ((sVar17 == 0) || (iVar10 = memcmp(__s1,pRVar2,sVar17), iVar10 == 0)) {
LAB_00c4c468:
          if ((param_5 != (_func_void_float *)0x0) &&
             (uVar23 = in_x6 & 1, uVar23 != 0 || in_x5 != (code *)0x0)) {
            uVar25 = *(ulong *)(param_1 + 0x130);
            if ((uVar25 == 0) && (*(long *)(param_1 + 0x128) == 0)) {
              if (uVar23 != 0) {
                in_x5 = *(code **)(in_x5 + *(long *)(param_5 + ((long)in_x6 >> 1)));
              }
              fVar26 = 1.0;
            }
            else {
              if (uVar23 != 0) {
                in_x5 = *(code **)(in_x5 + *(long *)(param_5 + ((long)in_x6 >> 1)));
              }
              fVar26 = (float)(uVar25 - *(long *)(param_1 + 0x128)) / (float)uVar25;
            }
            (*in_x5)(fVar26);
          }
          goto LAB_00c4ca28;
        }
      }
      uVar23 = (ulong)((int)uVar23 + 1);
    } while (uVar23 <= uVar25 && uVar25 - uVar23 != 0);
  }
  if (DAT_01785738 == pbVar14) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&_configFileList,(basic_string *)param_4);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar14,(basic_string *)param_4);
    DAT_01785730 = pbVar14 + 0x18;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(basic_string *)param_4);
  pcVar7 = local_80;
  piVar16 = (int *)((ulong)&local_80 | 1);
  uVar23 = (ulong)local_80 >> 1 & 0x7f;
  if (((ulong)local_80 & 1) != 0) {
    piVar16 = local_70;
    uVar23 = uStack_78;
  }
  uVar25 = uVar23;
  if (uVar23 == 0) {
LAB_00c4c570:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,"",0);
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_00c4c614;
LAB_00c4c590:
    lVar19 = *(long *)(param_1 + 0x128);
  }
  else {
    do {
      uVar21 = uVar25;
      if (uVar21 == 0) goto LAB_00c4c570;
      uVar25 = uVar21 - 1;
    } while (*(char *)((long)piVar16 + (uVar21 - 1)) != '/');
    if (uVar21 - 1 == 0xffffffffffffffff) goto LAB_00c4c570;
    if (uVar21 <= uVar23) {
      uVar23 = uVar21;
    }
    uStack_98 = 0;
    local_90 = (int *)0x0;
    local_a0 = (code *)0x0;
    if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar23 < 0x17) {
      __dest = (int *)((ulong)&local_a0 | 1);
      local_a0 = (code *)(ulong)(byte)((int)uVar23 << 1);
      if (uVar23 != 0) goto LAB_00c4c5c0;
      *(undefined1 *)__dest = 0;
    }
    else {
      uVar25 = uVar23 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar25);
      local_a0 = (code *)(uVar25 | 1);
      uStack_98 = uVar23;
      local_90 = __dest;
LAB_00c4c5c0:
      memcpy(__dest,piVar16,uVar23);
      *(undefined1 *)((long)__dest + uVar23) = 0;
    }
    if (((ulong)pcVar7 & 1) != 0) {
      *(undefined1 *)local_70 = 0;
      uStack_78 = 0;
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    uStack_78 = uStack_98;
    local_80 = local_a0;
    local_70 = local_90;
    if (*(long *)(param_1 + 0x140) != 0) goto LAB_00c4c590;
LAB_00c4c614:
    puVar12 = operator_new(0x30);
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    *(undefined8 **)(param_1 + 0x140) = puVar12;
    puVar12 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
    }
    *(undefined8 **)(param_1 + 0x148) = puVar12;
    pvVar13 = operator_new(8);
    uStack_98 = 0;
    local_a0 = loadData;
    local_b8[0] = param_1;
    FUN_00c4cb3c(pvVar13,&local_a0,local_b8);
    *(void **)(param_1 + 0x58) = pvVar13;
    param_1[0x138] = (basic_string)0x0;
    lVar19 = *(long *)(param_1 + 0x128);
  }
  if (lVar19 == 0) {
    lVar19 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::schedule
              (*(Scheduler **)(lVar19 + 0xa0),addDataAsyncCallBack,(Ref *)0x0,0.0,SUB81(param_1,0));
    lVar19 = *(long *)(param_1 + 0x128);
  }
  *(long *)(param_1 + 0x128) = lVar19 + 1;
  *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
  if (param_5 != (_func_void_float *)0x0) {
    cocos2d::Ref::retain((Ref *)param_5);
  }
  pbVar14 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (pbVar14 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    *(undefined8 *)(pbVar14 + 0x88) = 0;
    *(undefined8 *)(pbVar14 + 0x80) = 0;
    *(undefined8 *)(pbVar14 + 0x98) = 0;
    *(undefined8 *)(pbVar14 + 0x90) = 0;
    *(undefined8 *)(pbVar14 + 0x68) = 0;
    *(undefined8 *)(pbVar14 + 0x60) = 0;
    *(undefined8 *)(pbVar14 + 0x78) = 0;
    *(undefined8 *)(pbVar14 + 0x70) = 0;
    *(undefined8 *)(pbVar14 + 0x48) = 0;
    *(undefined8 *)(pbVar14 + 0x40) = 0;
    *(undefined8 *)(pbVar14 + 0x58) = 0;
    *(undefined8 *)(pbVar14 + 0x50) = 0;
    *(undefined8 *)(pbVar14 + 0x28) = 0;
    *(undefined8 *)(pbVar14 + 0x20) = 0;
    *(undefined8 *)(pbVar14 + 0x38) = 0;
    *(undefined8 *)(pbVar14 + 0x30) = 0;
    *(undefined8 *)(pbVar14 + 8) = 0;
    *(undefined8 *)pbVar14 = 0;
    *(undefined8 *)(pbVar14 + 0x18) = 0;
    *(undefined8 *)(pbVar14 + 0x10) = 0;
  }
  if (pbVar14 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar23 = *(ulong *)(param_4 + 8);
    pRVar2 = *(Ref **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pRVar2 = param_4 + 1;
      uVar23 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar14,(char *)pRVar2,uVar23);
  }
  if (pbVar14 + 0x38 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80) {
    uVar23 = (ulong)local_80 >> 1 & 0x7f;
    piVar16 = (int *)((ulong)&local_80 | 1);
    if (((ulong)local_80 & 1) != 0) {
      uVar23 = uStack_78;
      piVar16 = local_70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar14 + 0x38,(char *)piVar16,uVar23);
  }
  *(_func_void_float **)(pbVar14 + 0x50) = param_5;
  *(code **)(pbVar14 + 0x58) = in_x5;
  *(ulong *)(pbVar14 + 0x60) = in_x6;
  this = (ArmatureDataManager *)ArmatureDataManager::getInstance();
  bVar9 = ArmatureDataManager::isAutoLoadSpriteFile(this);
  pbVar14[0x68] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)(bVar9 & 1);
  if (pbVar14 + 0x70 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar23 = *(ulong *)(param_2 + 8);
    pbVar3 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar23 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar14 + 0x70,(char *)pbVar3,uVar23);
  }
  if (pbVar14 + 0x88 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar23 = *(ulong *)(param_3 + 8);
    pbVar3 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar3 = param_3 + 1;
      uVar23 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar14 + 0x88,(char *)pbVar3,uVar23);
  }
  plVar15 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar15 + 0x138))(&local_a0,plVar15,param_4);
  plVar15 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar15 + 0x50))(local_b8,plVar15,param_4);
  uVar23 = (ulong)local_a0 >> 1 & 0x7f;
  if (((ulong)local_a0 & 1) != 0) {
    uVar23 = uStack_98;
  }
  if (uVar23 == 4) {
    piVar16 = (int *)((ulong)&local_a0 | 1);
    if (((ulong)local_a0 & 1) != 0) {
      piVar16 = local_90;
    }
    bVar8 = *piVar16 == 0x6273632e;
  }
  else {
    bVar8 = false;
  }
  std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0x100));
  FUN_00c4c230(&local_d0,local_b8,bVar8);
  pbVar24 = pbVar14 + 0x18;
  if (((byte)*pbVar24 & 1) == 0) {
    *(undefined2 *)pbVar24 = 0;
  }
  else {
    **(undefined1 **)(pbVar14 + 0x28) = 0;
    *(undefined8 *)(pbVar14 + 0x20) = 0;
    if (((byte)pbVar14[0x18] & 1) != 0) {
      operator_delete(*(void **)(pbVar14 + 0x28));
      *(undefined8 *)(pbVar14 + 0x18) = 0;
    }
  }
  *(undefined8 *)(pbVar14 + 0x28) = local_c0;
  *(undefined8 *)(pbVar14 + 0x20) = uStack_c8;
  *(undefined8 *)pbVar24 = local_d0;
  std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0x100));
  uVar23 = (ulong)local_a0 >> 1 & 0x7f;
  if (((ulong)local_a0 & 1) != 0) {
    uVar23 = uStack_98;
  }
  if (uVar23 == 0xb) {
    piVar16 = (int *)((ulong)&local_a0 | 1);
    if (((ulong)local_a0 & 1) != 0) {
      piVar16 = local_90;
    }
    __s2 = ".exportjson";
    sVar17 = 0xb;
LAB_00c4c968:
    iVar11 = memcmp(piVar16,__s2,sVar17);
    iVar10 = 1;
    if (iVar11 != 0) {
      iVar10 = 2;
    }
    if (iVar11 != 0 && bVar8 == false) goto LAB_00c4c994;
  }
  else {
    if (uVar23 == 5) {
      piVar16 = (int *)((ulong)&local_a0 | 1);
      if (((ulong)local_a0 & 1) != 0) {
        piVar16 = local_90;
      }
      __s2 = ".json";
      sVar17 = 5;
      goto LAB_00c4c968;
    }
    if (uVar23 == 4) {
      piVar16 = (int *)((ulong)&local_a0 | 1);
      if (((ulong)local_a0 & 1) != 0) {
        piVar16 = local_90;
      }
      if (*piVar16 != 0x6c6d782e && bVar8 == false) goto LAB_00c4c994;
      iVar10 = (uint)(*piVar16 != 0x6c6d782e) << 1;
    }
    else {
      if (bVar8 == false) goto LAB_00c4c994;
      iVar10 = 2;
    }
  }
  *(int *)(pbVar14 + 0x30) = iVar10;
LAB_00c4c994:
  std::__ndk1::mutex::lock((mutex *)(param_1 + 0x88));
  this_00 = *(deque<cocostudio::DataReaderHelper::_AsyncStruct*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_AsyncStruct*>>
              **)(param_1 + 0x140);
  lVar19 = *(long *)(this_00 + 8);
  lVar22 = *(long *)(this_00 + 0x28);
  uVar23 = 0;
  if (*(long *)(this_00 + 0x10) - lVar19 != 0) {
    uVar23 = (*(long *)(this_00 + 0x10) - lVar19) * 0x40 - 1;
  }
  uVar25 = lVar22 + *(long *)(this_00 + 0x20);
  if (uVar23 == uVar25) {
    std::__ndk1::
    deque<cocostudio::DataReaderHelper::_AsyncStruct*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_AsyncStruct*>>
    ::__add_back_capacity(this_00);
    lVar22 = *(long *)(this_00 + 0x28);
    lVar19 = *(long *)(this_00 + 8);
    uVar25 = *(long *)(this_00 + 0x20) + lVar22;
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (*(long *)(lVar19 + (uVar25 >> 6 & 0x3fffffffffffff8)) + (uVar25 & 0x1ff) * 8) = pbVar14;
  *(long *)(this_00 + 0x28) = lVar22 + 1;
  std::__ndk1::mutex::unlock((mutex *)(param_1 + 0x88));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(param_1 + 0x24));
  if (((ulong)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00c4ca28:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

