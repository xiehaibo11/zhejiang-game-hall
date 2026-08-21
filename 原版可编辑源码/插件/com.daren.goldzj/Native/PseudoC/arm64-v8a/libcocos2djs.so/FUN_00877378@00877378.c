
void FUN_00877378(locale *param_1,char *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  std::__ndk1::locale::locale(param_1);
  uVar1 = std::__ndk1::locale::use_facet(param_1,(id *)&std::__ndk1::ctype<char>::id);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = std::__ndk1::locale::use_facet(param_1,(id *)&std::__ndk1::collate<char>::id);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  sVar2 = strlen(param_2);
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse<char_const*>
            ((basic_regex<char,std::__ndk1::regex_traits<char>> *)param_1,param_2,param_2 + sVar2);
  return;
}

