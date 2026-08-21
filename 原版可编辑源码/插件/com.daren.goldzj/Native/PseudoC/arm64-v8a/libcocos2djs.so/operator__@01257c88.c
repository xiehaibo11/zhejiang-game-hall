
/* v8::internal::wasm::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Signature<v8::internal::wasm::ValueType> const&)
    */

basic_ostream * v8::internal::wasm::operator<<(basic_ostream *param_1,Signature *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  char local_28 [4];
  char local_24 [4];
  
  lVar2 = *(long *)param_2;
  if (lVar2 == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"v",1);
    lVar2 = *(long *)param_2;
    if (lVar2 == 0) goto LAB_01257d60;
  }
  puVar3 = *(undefined1 **)(param_2 + 0x10);
  puVar1 = puVar3 + lVar2;
  do {
    local_24[0] = 'i';
    switch(*puVar3) {
    case 0:
      local_24[0] = 'v';
      break;
    case 1:
      break;
    case 2:
      local_24[0] = 'l';
      break;
    case 3:
      local_24[0] = 'f';
      break;
    case 4:
      local_24[0] = 'd';
      break;
    case 5:
      local_24[0] = 's';
      break;
    case 6:
      local_24[0] = 'r';
      break;
    case 7:
      local_24[0] = 'a';
      break;
    default:
      local_24[0] = '?';
      break;
    case 10:
      local_24[0] = '*';
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_24,1);
    puVar3 = puVar3 + 1;
  } while (puVar1 != puVar3);
LAB_01257d60:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"_",1);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"v",1);
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) {
      return param_1;
    }
  }
  puVar3 = (undefined1 *)(*(long *)(param_2 + 0x10) + *(long *)param_2);
  puVar1 = puVar3 + lVar2;
  do {
    local_28[0] = 'i';
    switch(*puVar3) {
    case 0:
      local_28[0] = 'v';
      break;
    case 1:
      break;
    case 2:
      local_28[0] = 'l';
      break;
    case 3:
      local_28[0] = 'f';
      break;
    case 4:
      local_28[0] = 'd';
      break;
    case 5:
      local_28[0] = 's';
      break;
    case 6:
      local_28[0] = 'r';
      break;
    case 7:
      local_28[0] = 'a';
      break;
    default:
      local_28[0] = '?';
      break;
    case 10:
      local_28[0] = '*';
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_28,1);
    puVar3 = puVar3 + 1;
  } while (puVar1 != puVar3);
  return param_1;
}

