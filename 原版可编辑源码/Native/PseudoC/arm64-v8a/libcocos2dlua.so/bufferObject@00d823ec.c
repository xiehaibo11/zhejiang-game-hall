
/* dragonBones::DragonBones::bufferObject(dragonBones::BaseObject*) */

void __thiscall dragonBones::DragonBones::bufferObject(DragonBones *this,BaseObject *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 != *(undefined8 **)(this + 0x18)) {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x10) = puVar1 + 1;
    return;
  }
  __src = *(void **)(this + 8);
  __n = (long)puVar1 - (long)__src;
  uVar4 = ((long)__n >> 3) + 1;
                    /* try { // try from 00d8244c to 00e82467 has its CatchHandler @ 00d82988 */
  if (uVar4 >> 0x3d != 0) {
LAB_00d82478:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (long)*(undefined8 **)(this + 0x18) - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
                    /* try { // try from 00d8246c to 00e8247b has its CatchHandler @ 00d82990 */
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d8248c;
    }
    if (uVar4 >> 0x3d != 0) goto LAB_00d82478;
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar4 << 3);
LAB_00d8248c:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 8) = __dest;
  *(undefined8 **)(this + 0x10) = puVar1 + 1;
  *(void **)(this + 0x18) = (void *)((long)__dest + uVar4 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

