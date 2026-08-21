
/* std::__ndk1::vector<std::__ndk1::pair<void*, dragonBones::DisplayType>,
   std::__ndk1::allocator<std::__ndk1::pair<void*, dragonBones::DisplayType> > >::__append(unsigned
   long, std::__ndk1::pair<void*, dragonBones::DisplayType> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
::__append(vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
           *this,ulong param_1,pair *param_2)

{
  void *__src;
  void *pvVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 4)) {
    puVar3 = puVar2;
    if (param_1 != 0) {
      puVar3 = puVar2 + param_1 * 2;
      lVar6 = param_1 << 4;
      do {
        uVar8 = *(undefined8 *)param_2;
        lVar6 = lVar6 + -0x10;
        puVar2[1] = *(undefined8 *)(param_2 + 8);
        *puVar2 = uVar8;
        puVar2 = puVar2 + 2;
      } while (lVar6 != 0);
    }
    *(undefined8 **)(this + 8) = puVar3;
    return;
  }
  lVar6 = (long)puVar2 - *(long *)this >> 4;
  uVar7 = lVar6 + param_1;
  if (uVar7 >> 0x3c != 0) {
LAB_00d85f00:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
                    /* try { // try from 00d85ee8 to 00e85eef has its CatchHandler @ 00d861cc */
    uVar5 = lVar4 >> 3;
                    /* try { // try from 00d85ef0 to 00e85f33 has its CatchHandler @ 00d86224 */
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      pvVar1 = (void *)0x0;
                    /* try { // try from 00d85fc8 to 00e85fcf has its CatchHandler @ 00d86224 */
      goto LAB_00d85f44;
    }
    if (uVar7 >> 0x3c != 0) goto LAB_00d85f00;
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  pvVar1 = operator_new(uVar7 << 4);
LAB_00d85f44:
  puVar3 = (undefined8 *)((long)pvVar1 + lVar6 * 0x10);
  lVar6 = param_1 * 0x10;
  puVar2 = puVar3;
  do {
    uVar8 = *(undefined8 *)param_2;
    lVar6 = lVar6 + -0x10;
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    *puVar2 = uVar8;
    puVar2 = puVar2 + 2;
                    /* try { // try from 00d85f68 to 00e85f7b has its CatchHandler @ 00d861f0 */
  } while (lVar6 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar3 - __n),__src,__n);
  }
  *(void **)this = (void *)((long)puVar3 - __n);
  *(undefined8 **)(this + 8) = puVar3 + param_1 * 2;
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar7 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
                    /* try { // try from 00d85fa8 to 00e85fc3 has its CatchHandler @ 00d861ec */
  operator_delete(__src);
  return;
}

