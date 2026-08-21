
/* v8::internal::SnapshotByteSink::PutRaw(unsigned char const*, int, char const*) */

void v8::internal::SnapshotByteSink::PutRaw(uchar *param_1,int param_2,char *param_3)

{
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
  insert<unsigned_char_const*>
            ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)param_1,
             *(undefined8 *)(param_1 + 8),(ulong)(uint)param_2,
             (ulong)(uint)param_2 + (long)(int)param_3);
  return;
}

