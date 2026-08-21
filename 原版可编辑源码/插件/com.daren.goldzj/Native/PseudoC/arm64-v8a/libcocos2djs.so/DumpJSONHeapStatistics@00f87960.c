
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Heap::DumpJSONHeapStatistics(std::__ndk1::basic_stringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall v8::internal::Heap::DumpJSONHeapStatistics(Heap *this,basic_stringstream *param_1)

{
  ulong uVar1;
  char *pcVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  double dVar5;
  byte local_168 [8];
  ulong local_160;
  char *local_158;
  byte local_150 [8];
  ulong local_148;
  char *local_140;
  byte local_138 [8];
  ulong local_130;
  char *local_128;
  byte local_120 [8];
  ulong local_118;
  char *local_110;
  byte local_108 [8];
  ulong local_100;
  char *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  char *local_e0;
  byte local_d8 [8];
  ulong local_d0;
  char *local_c8;
  byte local_c0 [8];
  ulong local_b8;
  char *local_b0;
  Heap *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  
  HeapStatistics::HeapStatistics((HeapStatistics *)&local_a0);
  v8::Isolate::GetHeapStatistics((Isolate *)(this + -0x8850),(HeapStatistics *)&local_a0);
  local_a8 = this;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)(param_1 + 0x10),"{",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"isolate",7);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      (Isolate *)(this + -0x8850));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"id",2)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(int *)(this + 0x1b4));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"time_ms",7);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  plVar4 = (long *)V8::GetCurrentPlatform();
  dVar5 = (double)(**(code **)(*plVar4 + 0x78))();
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      dVar5 * 1000.0 - *(double *)(this + 0x2e70));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"total_heap_size",0xf);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_a0);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"total_heap_size_executable",0x1a);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_98);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"total_physical_size",0x13);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_90);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"total_available_size",0x14);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_88);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"used_heap_size",0xe);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_80);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"heap_size_limit",0xf);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_78);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"malloced_memory",0xf);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_70);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"external_memory",0xf);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_68);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"peak_malloced_memory",0x14);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,local_60);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,",\"",2);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"spaces",6);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1)
  ;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"[",1);
  FUN_00f88054(local_c0,&local_a8,0);
  uVar1 = (ulong)(local_c0[0] >> 1);
  pcVar2 = (char *)((ulong)local_c0 | 1);
  if ((local_c0[0] & 1) != 0) {
    uVar1 = local_b8;
    pcVar2 = local_b0;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_d8,&local_a8,1);
  uVar1 = (ulong)(local_d8[0] >> 1);
  pcVar2 = (char *)((ulong)local_d8 | 1);
  if ((local_d8[0] & 1) != 0) {
    uVar1 = local_d0;
    pcVar2 = local_c8;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_f0,&local_a8,2);
  uVar1 = (ulong)(local_f0[0] >> 1);
  pcVar2 = (char *)((ulong)local_f0 | 1);
  if ((local_f0[0] & 1) != 0) {
    uVar1 = local_e8;
    pcVar2 = local_e0;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_108,&local_a8,3);
  uVar1 = (ulong)(local_108[0] >> 1);
  pcVar2 = (char *)((ulong)local_108 | 1);
  if ((local_108[0] & 1) != 0) {
    uVar1 = local_100;
    pcVar2 = local_f8;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_120,&local_a8,4);
  uVar1 = (ulong)(local_120[0] >> 1);
  pcVar2 = (char *)((ulong)local_120 | 1);
  if ((local_120[0] & 1) != 0) {
    uVar1 = local_118;
    pcVar2 = local_110;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_138,&local_a8,5);
  uVar1 = (ulong)(local_138[0] >> 1);
  pcVar2 = (char *)((ulong)local_138 | 1);
  if ((local_138[0] & 1) != 0) {
    uVar1 = local_130;
    pcVar2 = local_128;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_150,&local_a8,6);
  uVar1 = (ulong)(local_150[0] >> 1);
  pcVar2 = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    uVar1 = local_148;
    pcVar2 = local_140;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  FUN_00f88054(local_168,&local_a8,7);
  uVar1 = (ulong)(local_168[0] >> 1);
  pcVar2 = (char *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    uVar1 = local_160;
    pcVar2 = local_158;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar2,uVar1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"}",1);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_138[0] & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  return;
}

