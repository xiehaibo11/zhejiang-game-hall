
/* v8::internal::SnapshotByteSink::Append(v8::internal::SnapshotByteSink const&) */

void __thiscall
v8::internal::SnapshotByteSink::Append(SnapshotByteSink *this,SnapshotByteSink *param_1)

{
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
  insert<std::__ndk1::__wrap_iter<unsigned_char_const*>>
            ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)this,
             *(undefined8 *)(this + 8),*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  return;
}

