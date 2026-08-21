
/* duDisplayList::duDisplayList(int) */

void __thiscall duDisplayList::duDisplayList(duDisplayList *this,int param_1)

{
  this[0x20] = (duDisplayList)0x1;
  if (param_1 < 9) {
    param_1 = 8;
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__duDisplayList_0172d458;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x24) = 0x3f80000000000001;
  resize(this,param_1);
  return;
}

