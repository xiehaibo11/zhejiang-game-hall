
/* v8::internal::MemoryChunk::ReleaseLocalTracker() */

void __thiscall v8::internal::MemoryChunk::ReleaseLocalTracker(MemoryChunk *this)

{
  LocalArrayBufferTracker *this_00;
  
  this_00 = *(LocalArrayBufferTracker **)(this + 0xf8);
  if (this_00 != (LocalArrayBufferTracker *)0x0) {
    LocalArrayBufferTracker::~LocalArrayBufferTracker(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}

