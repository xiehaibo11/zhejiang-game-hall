
/* dragonBones::Armature::~Armature() */

void __thiscall dragonBones::Armature::~Armature(Armature *this)

{
  void *pvVar1;
  long *in_x1;
  long lVar2;
  
                    /* try { // try from 00d7d5fc to 00e7d603 has its CatchHandler @ 00d7d888 */
                    /* try { // try from 00d7d604 to 00e7d60b has its CatchHandler @ 00d7d880 */
  lVar2 = *in_x1;
                    /* try { // try from 00d7d60c to 00e7d613 has its CatchHandler @ 00d7d88c */
  *(long *)this = lVar2;
                    /* try { // try from 00d7d614 to 00e7d61b has its CatchHandler @ 00d7d87c */
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[1];
                    /* try { // try from 00d7d61c to 00e7d623 has its CatchHandler @ 00d7d878 */
                    /* try { // try from 00d7d624 to 00e7d62b has its CatchHandler @ 00d7d88c */
  (**(code **)(*(long *)this + 0x10))();
  pvVar1 = *(void **)(this + 0x90);
                    /* try { // try from 00d7d62c to 00e7d62f has its CatchHandler @ 00d7d884 */
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00d7d630 to 00e7d637 has its CatchHandler @ 00d7d874 */
    *(void **)(this + 0x98) = pvVar1;
    operator_delete(pvVar1);
  }
                    /* try { // try from 00d7d638 to 00e7d63f has its CatchHandler @ 00d7d870 */
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00d7d640 to 00e7d647 has its CatchHandler @ 00d7d86c */
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar1);
  }
                    /* try { // try from 00d7d648 to 00e7d64f has its CatchHandler @ 00d7d88c */
  pvVar1 = *(void **)(this + 0x60);
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00d7d650 to 00e7d657 has its CatchHandler @ 00d7d868 */
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
                    /* try { // try from 00d7d658 to 00e7d65b has its CatchHandler @ 00d7d884 */
  pvVar1 = *(void **)(this + 0x40);
                    /* try { // try from 00d7d65c to 00e7d663 has its CatchHandler @ 00d7d88c */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
                    /* try { // try from 00d7d664 to 00e7d66b has its CatchHandler @ 00d7d864 */
                    /* try { // try from 00d7d66c to 00e7d673 has its CatchHandler @ 00d7d860 */
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 00d7d674 to 00e7d677 has its CatchHandler @ 00d7d884 */
                    /* try { // try from 00d7d678 to 00e7d67f has its CatchHandler @ 00d7d88c */
  return;
}

