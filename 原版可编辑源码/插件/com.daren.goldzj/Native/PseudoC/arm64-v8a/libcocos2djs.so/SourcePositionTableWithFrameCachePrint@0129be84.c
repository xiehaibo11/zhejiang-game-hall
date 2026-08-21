
/* v8::internal::TorqueGeneratedSourcePositionTableWithFrameCache<v8::internal::SourcePositionTableWithFrameCache,
   v8::internal::Struct>::SourcePositionTableWithFrameCachePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::
TorqueGeneratedSourcePositionTableWithFrameCache<v8::internal::SourcePositionTableWithFrameCache,v8::internal::Struct>
::SourcePositionTableWithFrameCachePrint
          (TorqueGeneratedSourcePositionTableWithFrameCache<v8::internal::SourcePositionTableWithFrameCache,v8::internal::Struct>
           *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  HeapObject::PrintHeader
            ((HeapObject *)this,param_1,"TorqueGeneratedSourcePositionTableWithFrameCache");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - source_position_table: ",0x1b);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - stack_frame_cache: ",0x17);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

