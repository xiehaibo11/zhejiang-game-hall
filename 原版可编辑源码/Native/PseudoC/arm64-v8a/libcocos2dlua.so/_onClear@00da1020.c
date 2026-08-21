
/* dragonBones::DeformVertices::_onClear() */

void __thiscall dragonBones::DeformVertices::_onClear(DeformVertices *this)

{
  this[0xd] = (DeformVertices)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00da1034 to 00ea103b has its CatchHandler @ 00da1250 */
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  return;
}

