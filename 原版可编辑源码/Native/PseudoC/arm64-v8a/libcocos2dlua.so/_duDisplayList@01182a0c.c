
/* duDisplayList::~duDisplayList() */

void __thiscall duDisplayList::~duDisplayList(duDisplayList *this)

{
  *(undefined ***)this = &PTR__duDisplayList_0172d458;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}

