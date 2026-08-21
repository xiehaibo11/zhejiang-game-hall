
/* v8::internal::compiler::NodeOriginTable::PrintJson(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::compiler::NodeOriginTable::PrintJson(NodeOriginTable *this,basic_ostream *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  basic_ostream *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  lVar5 = *(long *)(this + 0x38);
  lVar2 = *(long *)(this + 0x40) - lVar5;
  if (lVar2 != 0) {
    lVar7 = 0;
    bVar3 = false;
    uVar6 = 0;
    while( true ) {
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      uStack_78 = puVar1[1];
      local_80 = *puVar1;
      local_68 = puVar1[3];
      uStack_70 = puVar1[2];
      if (-1 < local_68) {
        if (bVar3) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        }
        bVar3 = true;
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\"",1);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar6);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"\"",1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,": ",2);
        NodeOrigin::PrintJson((NodeOrigin *)&local_80,param_1);
      }
      if ((lVar2 >> 5) - 1U == uVar6) break;
      lVar5 = *(long *)(this + 0x38);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x20;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return;
}

