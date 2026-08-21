
/* v8::internal::Map::PrintGeneralization(v8::internal::Isolate*, __sFILE*, char const*,
   v8::internal::InternalIndex, int, int, bool, v8::internal::Representation,
   v8::internal::Representation, v8::internal::PropertyConstness, v8::internal::PropertyConstness,
   v8::internal::MaybeHandle<v8::internal::FieldType>,
   v8::internal::MaybeHandle<v8::internal::Object>,
   v8::internal::MaybeHandle<v8::internal::FieldType>,
   v8::internal::MaybeHandle<v8::internal::Object>) */

void __thiscall
v8::internal::Map::PrintGeneralization
          (Map *this,Isolate *param_1,__sFILE *param_2,char *param_3,long param_5,int param_6,
          int param_7,uint param_8,ulong param_9,ulong param_10,undefined4 param_11,
          undefined4 param_12,undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
          undefined8 *param_16)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  void *pvVar5;
  undefined **local_148;
  undefined **ppuStack_140;
  locale alStack_138 [64];
  undefined **local_f8 [19];
  void *local_48;
  
  OFStream::OFStream((OFStream *)&local_148,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_148,"[generalizing]",0xe);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  pvVar5 = (void *)(uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)this + 0x17)) +
                                      (param_5 * 0xc00000000 + 0x1000000000 >> 0x20) + -1));
  if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((long)pvVar5 + -1)) < 0x40) {
    local_48 = pvVar5;
    String::PrintOn((String *)&local_48,param_2);
  }
  else {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_148,"{symbol ",8);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,pvVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"}",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_148,":",1);
  if ((param_8 & 1) == 0) {
    if (4 < (byte)param_9) goto LAB_010e9588;
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_148,
                        *(char **)((long)&PTR_DAT_01cb4d20 +
                                  (-(param_9 >> 7 & 1) & 0xfffffffffffff800 | (param_9 & 0xff) << 3)
                                  ),1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"{",1);
    if (param_13 == (undefined8 *)0x0) {
      if (param_14 == (undefined8 *)0x0) goto LAB_010e9594;
      local_48 = (void *)*param_14;
      internal::operator<<((basic_ostream *)&local_148,(Brief *)&local_48);
    }
    else {
      local_48 = (void *)*param_13;
      FieldType::PrintTo((FieldType *)&local_48,(basic_ostream *)&local_148);
    }
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_148,";",1);
    pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,param_11);
    pcVar3 = "}";
  }
  else {
    pcVar3 = "c";
    pbVar1 = (basic_ostream *)&local_148;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar3,1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_148,"->",2);
  if ((byte)param_10 < 5) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,*(char **)((long)&PTR_DAT_01cb4d20 +
                                         (-(param_10 >> 7 & 1) & 0xfffffffffffff800 |
                                         (param_10 & 0xff) << 3)),1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"{",1);
    if (param_15 == (undefined8 *)0x0) {
      if (param_16 == (undefined8 *)0x0) {
LAB_010e9594:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      local_48 = (void *)*param_16;
      internal::operator<<((basic_ostream *)&local_148,(Brief *)&local_48);
    }
    else {
      local_48 = (void *)*param_15;
      FieldType::PrintTo((FieldType *)&local_48,(basic_ostream *)&local_148);
    }
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_148,";",1);
    pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,param_12);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"} (",3);
    if (*param_3 == '\0') {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_148,"+",1);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                          param_7 - param_6);
      param_3 = " maps";
      sVar2 = 5;
    }
    else {
      sVar2 = strlen(param_3);
      pbVar1 = (basic_ostream *)&local_148;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,param_3,sVar2)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,") [",3);
    JavaScriptFrame::PrintTop(param_1,param_2,false,true);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,"]\n",2);
    local_148 = &PTR__OFStream_01ca1000;
    local_f8[0] = &PTR__OFStream_01ca1028;
    ppuStack_140 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_138);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
    return;
  }
LAB_010e9588:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

