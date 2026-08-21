
/* btDbvtBroadphase::btDbvtBroadphase(btOverlappingPairCache*) */

void __thiscall
btDbvtBroadphase::btDbvtBroadphase(btDbvtBroadphase *this,btOverlappingPairCache *param_1)

{
  *(undefined ***)this = &PTR__btDbvtBroadphase_017314c0;
  btDbvt::btDbvt((btDbvt *)(this + 8));
  btDbvt::btDbvt((btDbvt *)(this + 0x68));
  *(undefined2 *)(this + 0x11d) = 0x100;
  *(undefined4 *)(this + 0xe8) = 0;
  this[0x11c] = (btDbvtBroadphase)(param_1 == (btOverlappingPairCache *)0x0);
  *(undefined8 *)(this + 0xf4) = 0xa00000000;
  *(undefined8 *)(this + 0xec) = 0x100000000;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0xfc) = 1;
  *(undefined4 *)(this + 0x10c) = 0;
  if (param_1 == (btOverlappingPairCache *)0x0) {
    param_1 = (btOverlappingPairCache *)btAlignedAllocInternal(0x80,0x10);
    btHashedOverlappingPairCache::btHashedOverlappingPairCache
              ((btHashedOverlappingPairCache *)param_1);
  }
  *(undefined8 *)(this + 0xd8) = 0;
  *(btOverlappingPairCache **)(this + 0xe0) = param_1;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return;
}

