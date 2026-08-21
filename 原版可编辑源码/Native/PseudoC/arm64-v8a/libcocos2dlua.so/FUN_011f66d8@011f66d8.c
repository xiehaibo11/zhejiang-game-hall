
void FUN_011f66d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  __shared_count *this;
  ulong uVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_0172e3a0;
  param_1[1] = 0xffffffffffffffff;
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  param_1[2] = 0;
  uVar4 = lVar2 - lVar1 >> 3;
  if (uVar4 < 0x1d) {
    uVar4 = 0x1c;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x1d) {
    puVar3 = param_1 + 6;
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
    puVar3 = operator_new(uVar4 * 8);
  }
  param_1[2] = puVar3;
  param_1[4] = puVar3 + uVar4;
  memset(puVar3,0,uVar4 * 8);
  param_1[3] = puVar3 + uVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x24),(basic_string *)(param_2 + 0x24));
  if (param_1 != param_2) {
    FUN_01207e60(param_1 + 2,param_2[2],param_2[3]);
  }
  puVar3 = (undefined8 *)param_1[2];
  puVar5 = (undefined8 *)param_1[3];
  if (puVar5 != puVar3) {
    this = (__shared_count *)*puVar3;
    uVar4 = 1;
    while( true ) {
      if (this != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(this);
        puVar3 = (undefined8 *)param_1[2];
        puVar5 = (undefined8 *)param_1[3];
      }
      if ((ulong)((long)puVar5 - (long)puVar3 >> 3) <= uVar4) break;
      this = (__shared_count *)puVar3[uVar4];
      uVar4 = (ulong)((int)uVar4 + 1);
    }
  }
  return;
}

