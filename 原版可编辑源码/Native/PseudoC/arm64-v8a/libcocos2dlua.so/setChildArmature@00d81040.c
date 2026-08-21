
/* dragonBones::Slot::setChildArmature(dragonBones::Armature*) */

void __thiscall dragonBones::Slot::setChildArmature(Slot *this,Armature *param_1)

{
                    /* try { // try from 00d81040 to 00e81047 has its CatchHandler @ 00d81264 */
                    /* try { // try from 00d81048 to 00e8104f has its CatchHandler @ 00d81260 */
  if (*(Armature **)(this + 0x178) != param_1) {
                    /* try { // try from 00d81050 to 00e81057 has its CatchHandler @ 00d8125c */
    setDisplay(this,param_1,1);
    return;
  }
  return;
}

