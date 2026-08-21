
/* v8::internal::EhFrameDisassembler::DisassembleToStream(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::EhFrameDisassembler::DisassembleToStream
          (EhFrameDisassembler *this,basic_ostream *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  basic_ostream *pbVar5;
  int *piVar6;
  uchar *puVar7;
  long lVar8;
  char local_38 [4];
  char local_34 [4];
  
  piVar6 = *(int **)this;
  iVar2 = *piVar6;
  lVar8 = (long)(iVar2 + 4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,piVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5,"  .eh_frame: CIE\n",0x11);
  DumpDwarfDirectives(param_1,(uchar *)((long)piVar6 + 0x13),(uchar *)((long)piVar6 + lVar8));
  pvVar1 = (void *)(*(long *)this + lVar8);
  iVar3 = *(int *)((long)pvVar1 + 8);
  uVar4 = *(uint *)((long)pvVar1 + 0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,pvVar1);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"  .eh_frame: FDE\n",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      (int *)((long)pvVar1 + 8));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"  | procedure_offset=",0x15);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar3);
  local_38[0] = '\n';
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,local_38,1);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      (uint *)((long)pvVar1 + 0xc));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"  | procedure_size=",0x13);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar4);
  local_34[0] = '\n';
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,local_34,1);
  lVar8 = *(long *)(this + 8);
  puVar7 = (uchar *)(lVar8 + -0x18);
  DumpDwarfDirectives(param_1,(uchar *)(*(long *)this + (long)(iVar2 + 0x15)),puVar7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,puVar7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5,"  .eh_frame: terminator\n",0x18);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      (void *)(lVar8 + -0x14));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar5,"  .eh_frame_hdr\n",0x10);
  return;
}

