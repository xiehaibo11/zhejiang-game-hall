
/* dtProximityGrid::clear() */

void __thiscall dtProximityGrid::clear(dtProximityGrid *this)

{
  memset(*(void **)(this + 0x18),0xff,(long)*(int *)(this + 0x20) << 1);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x2c) = 0xffff0001ffff0001;
  *(undefined8 *)(this + 0x24) = 0xffff0000ffff;
  return;
}

