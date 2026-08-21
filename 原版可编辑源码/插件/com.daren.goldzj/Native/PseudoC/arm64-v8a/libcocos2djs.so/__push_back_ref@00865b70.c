
/* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_back_ref(int) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__push_back_ref
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(this + 0x18) & 1) == 0) {
    if ((*(uint *)(this + 0x18) >> 3 & 1) == 0) {
      puVar1 = operator_new(0x18);
      puVar2 = (undefined8 *)(*(long *)(this + 0x38) + 8);
      uVar3 = *puVar2;
      *(int *)(puVar1 + 2) = param_1;
      *puVar1 = &PTR____owns_one_state_01c66908;
      puVar1[1] = uVar3;
      goto LAB_00865c2c;
    }
    puVar1 = operator_new(0x30);
    uVar3 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    puVar4 = &__back_ref_collate<char,std::__ndk1::regex_traits<char>>::vtable;
  }
  else {
    puVar1 = operator_new(0x30);
    uVar3 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    puVar4 = &__back_ref_icase<char,std::__ndk1::regex_traits<char>>::vtable;
  }
  *puVar1 = puVar4 + 0x10;
  puVar1[1] = uVar3;
  locale::locale((locale *)(puVar1 + 2),(locale *)this);
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined8 *)(this + 8);
  *(int *)(puVar1 + 5) = param_1;
  puVar1[4] = uVar5;
  puVar1[3] = uVar3;
  puVar2 = (undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_00865c2c:
  *puVar2 = puVar1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  return;
}

