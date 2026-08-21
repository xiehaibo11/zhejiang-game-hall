
/* v8::BackingStore::IsShared() const */

byte __thiscall v8::BackingStore::IsShared(BackingStore *this)

{
  return (byte)this[0x28] & 1;
}

