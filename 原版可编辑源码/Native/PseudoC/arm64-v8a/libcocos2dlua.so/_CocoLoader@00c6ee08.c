
/* cocostudio::CocoLoader::~CocoLoader() */

void __thiscall cocostudio::CocoLoader::~CocoLoader(CocoLoader *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

