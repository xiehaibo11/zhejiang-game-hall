
/* v8::Message::ErrorLevel() const */

int __thiscall v8::Message::ErrorLevel(Message *this)

{
  return *(int *)(*(long *)this + 0x2b) >> 1;
}

