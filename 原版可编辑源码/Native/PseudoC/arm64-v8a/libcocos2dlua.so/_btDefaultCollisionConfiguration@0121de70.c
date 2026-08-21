
/* btDefaultCollisionConfiguration::~btDefaultCollisionConfiguration() */

void __thiscall
btDefaultCollisionConfiguration::~btDefaultCollisionConfiguration
          (btDefaultCollisionConfiguration *this)

{
  *(undefined ***)this = &PTR__btDefaultCollisionConfiguration_01731f70;
  if (this[0x28] != (btDefaultCollisionConfiguration)0x0) {
    btAlignedFreeInternal(*(void **)(*(long *)(this + 0x20) + 0x18));
    btAlignedFreeInternal(*(void **)(this + 0x20));
  }
  if (this[0x18] != (btDefaultCollisionConfiguration)0x0) {
    btAlignedFreeInternal(*(void **)(*(long *)(this + 0x10) + 0x18));
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  (**(code **)**(undefined8 **)(this + 0x40))();
  btAlignedFreeInternal(*(void **)(this + 0x40));
  (**(code **)**(undefined8 **)(this + 0x48))();
  btAlignedFreeInternal(*(void **)(this + 0x48));
  (**(code **)**(undefined8 **)(this + 0x50))();
  btAlignedFreeInternal(*(void **)(this + 0x50));
  (**(code **)**(undefined8 **)(this + 0x58))();
  btAlignedFreeInternal(*(void **)(this + 0x58));
  (**(code **)**(undefined8 **)(this + 0x60))();
  btAlignedFreeInternal(*(void **)(this + 0x60));
  (**(code **)**(undefined8 **)(this + 0x68))();
  btAlignedFreeInternal(*(void **)(this + 0x68));
  (**(code **)**(undefined8 **)(this + 0x70))();
  btAlignedFreeInternal(*(void **)(this + 0x70));
  (**(code **)**(undefined8 **)(this + 0x78))();
  btAlignedFreeInternal(*(void **)(this + 0x78));
  (**(code **)**(undefined8 **)(this + 0x98))();
  btAlignedFreeInternal(*(void **)(this + 0x98));
  (**(code **)**(undefined8 **)(this + 0xa0))();
  btAlignedFreeInternal(*(void **)(this + 0xa0));
  (**(code **)**(undefined8 **)(this + 0x90))();
  btAlignedFreeInternal(*(void **)(this + 0x90));
  (**(code **)**(undefined8 **)(this + 0xb0))();
  btAlignedFreeInternal(*(void **)(this + 0xb0));
  (**(code **)**(undefined8 **)(this + 0xa8))();
  btAlignedFreeInternal(*(void **)(this + 0xa8));
  btAlignedFreeInternal(*(void **)(this + 0x30));
  (**(code **)**(undefined8 **)(this + 0x38))();
  btAlignedFreeInternal(*(void **)(this + 0x38));
  return;
}

