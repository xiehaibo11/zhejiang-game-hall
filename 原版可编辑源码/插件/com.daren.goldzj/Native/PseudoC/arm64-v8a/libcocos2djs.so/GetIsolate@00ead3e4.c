
/* v8::Message::GetIsolate() const */

long __thiscall v8::Message::GetIsolate(Message *this)

{
  return (ulong)*(uint *)(this + 4) << 0x20;
}

