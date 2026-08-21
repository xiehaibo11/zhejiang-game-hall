
/* dragonBones::Slot::~Slot() */

void __thiscall dragonBones::Slot::~Slot(Slot *this)

{
  void *pvVar1;
  
                    /* try { // try from 00d81058 to 00e8105f has its CatchHandler @ 00d81258 */
                    /* try { // try from 00d81060 to 00e81073 has its CatchHandler @ 00d81290 */
  pvVar1 = *(void **)(this + 0x140);
                    /* try { // try from 00d81074 to 00e8107b has its CatchHandler @ 00d81254 */
  *(undefined ***)this = &PTR__Slot_016d6888;
                    /* try { // try from 00d8107c to 00e81083 has its CatchHandler @ 00d81250 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
                    /* try { // try from 00d81084 to 00e8108b has its CatchHandler @ 00d8124c */
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
                    /* try { // try from 00d8108c to 00e81093 has its CatchHandler @ 00d81248 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
                    /* try { // try from 00d81094 to 00e8109f has its CatchHandler @ 00d81288 */
    operator_delete(pvVar1);
  }
  if (((byte)this[0x78] & 1) == 0) {
                    /* try { // try from 00d810a0 to 00e810b3 has its CatchHandler @ 00d81290 */
    return;
  }
                    /* try { // try from 00d810b4 to 00e810bb has its CatchHandler @ 00d81244 */
  operator_delete(*(void **)(this + 0x88));
  return;
}

