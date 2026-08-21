
/* btQuantizedBvh::btQuantizedBvh(btQuantizedBvh&, bool) */

void __thiscall
btQuantizedBvh::btQuantizedBvh(btQuantizedBvh *this,btQuantizedBvh *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__btQuantizedBvh_01734088;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x38) = 0x11a;
  this[0x60] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  this[0x80] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  this[0xa0] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  this[0xc0] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  this[0xe8] = (btQuantizedBvh)0x1;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0xd4) = 0;
  return;
}

