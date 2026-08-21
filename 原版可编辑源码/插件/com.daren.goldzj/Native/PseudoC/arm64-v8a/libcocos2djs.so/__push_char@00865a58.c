
/* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_char(char) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__push_char
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(this + 0x18) & 1) == 0) {
    if ((*(uint *)(this + 0x18) >> 3 & 1) == 0) {
      puVar2 = operator_new(0x18);
      puVar3 = (undefined8 *)(*(long *)(this + 0x38) + 8);
      uVar4 = *puVar3;
      *(char *)(puVar2 + 2) = param_1;
      *puVar2 = &PTR____owns_one_state_01c66830;
      puVar2[1] = uVar4;
      goto LAB_00865b44;
    }
    puVar2 = operator_new(0x30);
    uVar4 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    *puVar2 = &PTR____match_char_collate_01c667e8;
    puVar2[1] = uVar4;
    locale::locale((locale *)(puVar2 + 2),(locale *)this);
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar4 = *(undefined8 *)(this + 8);
    *(char *)(puVar2 + 5) = param_1;
    puVar2[4] = uVar5;
    puVar2[3] = uVar4;
  }
  else {
    puVar2 = operator_new(0x30);
    uVar4 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    *puVar2 = &PTR____match_char_icase_01c667a0;
    puVar2[1] = uVar4;
    locale::locale((locale *)(puVar2 + 2),(locale *)this);
    uVar4 = *(undefined8 *)(this + 8);
    puVar2[4] = *(undefined8 *)(this + 0x10);
    puVar2[3] = uVar4;
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),param_1);
    *(undefined1 *)(puVar2 + 5) = uVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_00865b44:
  *puVar3 = puVar2;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  return;
}

