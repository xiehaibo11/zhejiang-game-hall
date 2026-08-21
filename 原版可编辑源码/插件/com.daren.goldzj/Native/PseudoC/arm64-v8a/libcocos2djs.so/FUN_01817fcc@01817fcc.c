
void FUN_01817fcc(undefined8 *param_1,undefined8 *param_2,__shared_count *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  __shared_count *this;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_01cdb9e0;
  param_1[1] = 0xffffffffffffffff;
  lVar3 = (long)(param_2[3] - param_2[2]) >> 3;
  uVar4 = 0x1c;
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  if (0x1c < lVar3 + 1U) {
    uVar4 = lVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar4 != 0) {
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar4 < 0x1d) {
      puVar2 = param_1 + 6;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    else {
      puVar2 = operator_new(uVar4 << 3);
    }
    param_1[4] = puVar2 + uVar4;
    lVar3 = -uVar4;
    param_1[2] = puVar2;
    param_1[3] = puVar2;
    do {
      *puVar2 = 0;
      lVar3 = lVar3 + 1;
      puVar2 = (undefined8 *)(param_1[3] + 8);
      param_1[3] = puVar2;
    } while (lVar3 != 0);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  std::__ndk1::__shared_count::__add_shared(param_3);
  if (param_1 != param_2) {
    FUN_01828350(plVar6,param_2[2],param_2[3]);
  }
  lVar3 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != lVar3) {
    uVar4 = 0;
    uVar7 = 1;
    do {
      this = *(__shared_count **)(*plVar6 + uVar4 * 8);
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this);
        lVar3 = param_2[2];
        lVar5 = param_2[3];
      }
      bVar1 = uVar7 < (ulong)(lVar5 - lVar3 >> 3);
      uVar4 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
  }
  std::__ndk1::__shared_count::__add_shared(param_3);
  lVar3 = param_1[2];
  uVar4 = param_1[3] - lVar3 >> 3;
  if (uVar4 <= param_4) {
    uVar7 = param_4 + 1;
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
      if (uVar7 < uVar4) {
        param_1[3] = lVar3 + uVar7 * 8;
      }
    }
    else {
      FUN_018284d0(plVar6,uVar7 - uVar4);
      lVar3 = *plVar6;
    }
  }
  puVar2 = (undefined8 *)(lVar3 + param_4 * 8);
  if ((__shared_count *)*puVar2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar2);
    puVar2 = (undefined8 *)(*plVar6 + param_4 * 8);
  }
  *puVar2 = param_3;
  if (param_3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(param_3);
    return;
  }
  return;
}

