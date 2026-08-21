
/* std::__ndk1::vector<std::__ndk1::pair<void*, dragonBones::DisplayType>,
   std::__ndk1::allocator<std::__ndk1::pair<void*, dragonBones::DisplayType> > >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
::__append(vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
           *this,ulong param_1)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  ulong uVar9;
  
                    /* try { // try from 00d811dc to 00e811df has its CatchHandler @ 00d811e8 */
                    /* try { // try from 00d811e0 to 00e811e3 has its CatchHandler @ 00d81290 */
                    /* try { // try from 00d811e4 to 00e8135f has its CatchHandler @ 00d7f330 */
                    /* catch() { ... } // from try @ 00d811dc with catch @ 00d811e8 */
                    /* catch() { ... } // from try @ 00d81184 with catch @ 00d811ec */
  puVar3 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00d8117c with catch @ 00d811f0 */
                    /* catch() { ... } // from try @ 00d81174 with catch @ 00d811f4 */
                    /* catch() { ... } // from try @ 00d8116c with catch @ 00d811f8 */
                    /* catch() { ... } // from try @ 00d81160 with catch @ 00d811fc */
                    /* catch() { ... } // from try @ 00d8113c with catch @ 00d81200 */
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 4)) {
                    /* catch() { ... } // from try @ 00d8108c with catch @ 00d81248 */
    puVar5 = puVar3;
    if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00d81084 with catch @ 00d8124c */
                    /* catch() { ... } // from try @ 00d8107c with catch @ 00d81250 */
                    /* catch() { ... } // from try @ 00d81074 with catch @ 00d81254 */
                    /* catch() { ... } // from try @ 00d81058 with catch @ 00d81258 */
      uVar9 = (param_1 * 0x10 - 0x10 >> 4) + 1;
                    /* catch() { ... } // from try @ 00d81050 with catch @ 00d8125c */
                    /* catch() { ... } // from try @ 00d81048 with catch @ 00d81260 */
      puVar5 = puVar3 + param_1 * 2;
      puVar4 = puVar3;
                    /* catch() { ... } // from try @ 00d81040 with catch @ 00d81264 */
                    /* catch() { ... } // from try @ 00d81038 with catch @ 00d81268 */
      if (1 < uVar9) {
                    /* catch() { ... } // from try @ 00d81018 with catch @ 00d8126c */
        uVar7 = uVar9 & 0x1ffffffffffffffe;
                    /* catch() { ... } // from try @ 00d81004 with catch @ 00d81270 */
        puVar4 = puVar3 + uVar7 * 2;
                    /* catch() { ... } // from try @ 00d80ffc with catch @ 00d81274 */
        puVar3 = puVar3 + 2;
                    /* catch() { ... } // from try @ 00d80ff4 with catch @ 00d81278 */
        uVar2 = uVar7;
        do {
                    /* catch() { ... } // from try @ 00d80fe4 with catch @ 00d8127c */
          puVar3[-2] = 0;
                    /* catch() { ... } // from try @ 00d80fdc with catch @ 00d81280 */
          *puVar3 = 0;
                    /* catch() { ... } // from try @ 00d80fcc with catch @ 00d81284 */
          *(undefined4 *)(puVar3 + -1) = 0;
                    /* catch() { ... } // from try @ 00d81020 with catch @ 00d81288
                       catch() { ... } // from try @ 00d81094 with catch @ 00d81288
                       catch() { ... } // from try @ 00d8118c with catch @ 00d81288 */
          *(undefined4 *)(puVar3 + 1) = 0;
                    /* catch() { ... } // from try @ 00d80fc4 with catch @ 00d8128c */
          uVar2 = uVar2 - 2;
                    /* catch() { ... } // from try @ 00d80fd4 with catch @ 00d81290
                       catch() { ... } // from try @ 00d80fec with catch @ 00d81290
                       catch() { ... } // from try @ 00d8100c with catch @ 00d81290
                       catch() { ... } // from try @ 00d81024 with catch @ 00d81290
                       catch() { ... } // from try @ 00d81060 with catch @ 00d81290
                       catch() { ... } // from try @ 00d810a0 with catch @ 00d81290
                       catch() { ... } // from try @ 00d81144 with catch @ 00d81290
                       catch() { ... } // from try @ 00d81168 with catch @ 00d81290
                       catch() { ... } // from try @ 00d81198 with catch @ 00d81290
                       catch() { ... } // from try @ 00d811e0 with catch @ 00d81290 */
          puVar3 = puVar3 + 4;
                    /* catch() { ... } // from try @ 00d80c30 with catch @ 00d81294 */
        } while (uVar2 != 0);
                    /* catch() { ... } // from try @ 00d80c90 with catch @ 00d81298 */
                    /* catch() { ... } // from try @ 00d80c78 with catch @ 00d8129c */
        if (uVar9 == uVar7) goto LAB_00d812b8;
      }
      do {
                    /* catch() { ... } // from try @ 00d80c6c with catch @ 00d812a0 */
        *puVar4 = 0;
                    /* catch() { ... } // from try @ 00d80c44 with catch @ 00d812a4 */
        *(undefined4 *)(puVar4 + 1) = 0;
                    /* catch() { ... } // from try @ 00d801d4 with catch @ 00d812a8 */
        puVar4 = puVar4 + 2;
                    /* catch() { ... } // from try @ 00d801f4 with catch @ 00d812ac */
                    /* catch() { ... } // from try @ 00d801ec with catch @ 00d812b0 */
      } while (puVar5 != puVar4);
    }
LAB_00d812b8:
                    /* catch() { ... } // from try @ 00d806c0 with catch @ 00d812b8
                       catch() { ... } // from try @ 00d80750 with catch @ 00d812b8 */
    *(undefined8 **)(this + 8) = puVar5;
    return;
                    /* catch() { ... } // from try @ 00d80040 with catch @ 00d812bc
                       catch() { ... } // from try @ 00d800e4 with catch @ 00d812bc */
  }
                    /* catch() { ... } // from try @ 00d81134 with catch @ 00d81204 */
  pvVar8 = *(void **)this;
                    /* catch() { ... } // from try @ 00d8112c with catch @ 00d81208 */
  __n = (long)puVar3 - (long)pvVar8;
                    /* catch() { ... } // from try @ 00d81124 with catch @ 00d8120c */
                    /* catch() { ... } // from try @ 00d8111c with catch @ 00d81210 */
  uVar9 = ((long)__n >> 4) + param_1;
                    /* catch() { ... } // from try @ 00d81114 with catch @ 00d81214 */
                    /* catch() { ... } // from try @ 00d8110c with catch @ 00d81218 */
  if (uVar9 >> 0x3c != 0) {
LAB_00d81244:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d810b4 with catch @ 00d81244 */
    abort();
  }
                    /* catch() { ... } // from try @ 00d81104 with catch @ 00d8121c */
  lVar1 = *(long *)(this + 0x10) - (long)pvVar8;
                    /* catch() { ... } // from try @ 00d810fc with catch @ 00d81220 */
                    /* catch() { ... } // from try @ 00d810f4 with catch @ 00d81224 */
                    /* catch() { ... } // from try @ 00d810ec with catch @ 00d81228 */
  if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
                    /* catch() { ... } // from try @ 00d810e4 with catch @ 00d8122c */
    uVar2 = lVar1 >> 3;
                    /* catch() { ... } // from try @ 00d810dc with catch @ 00d81230 */
                    /* catch() { ... } // from try @ 00d810d4 with catch @ 00d81234 */
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
                    /* catch() { ... } // from try @ 00d810cc with catch @ 00d81238 */
    if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 00d810c4 with catch @ 00d8123c */
                    /* catch() { ... } // from try @ 00d810bc with catch @ 00d81240 */
      if (uVar9 >> 0x3c != 0) goto LAB_00d81244;
      goto LAB_00d812c4;
    }
    __dest = (void *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00d80118 with catch @ 00d812c0 */
    uVar9 = 0xfffffffffffffff;
LAB_00d812c4:
    __dest = operator_new(uVar9 << 4);
  }
                    /* catch() { ... } // from try @ 00d80210 with catch @ 00d812d0 */
                    /* catch() { ... } // from try @ 00d8051c with catch @ 00d812d4 */
  puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
  uVar2 = (param_1 * 0x10 - 0x10 >> 4) + 1;
  puVar3 = puVar5;
  if (1 < uVar2) {
                    /* catch() { ... } // from try @ 00d80238 with catch @ 00d812f4 */
    uVar6 = uVar2 & 0x1ffffffffffffffe;
    puVar3 = puVar5 + uVar6 * 2;
    puVar4 = puVar5 + 2;
    uVar7 = uVar6;
    do {
      puVar4[-2] = 0;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + -1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      uVar7 = uVar7 - 2;
      puVar4 = puVar4 + 4;
    } while (uVar7 != 0);
                    /* catch() { ... } // from try @ 00d80220 with catch @ 00d81324 */
    if (uVar2 == uVar6) goto LAB_00d8133c;
  }
  do {
                    /* catch() { ... } // from try @ 00d7fd58 with catch @ 00d81328
                       catch() { ... } // from try @ 00d80090 with catch @ 00d81328
                       catch() { ... } // from try @ 00d80154 with catch @ 00d81328
                       catch() { ... } // from try @ 00d8070c with catch @ 00d81328
                       catch() { ... } // from try @ 00d80774 with catch @ 00d81328
                       catch() { ... } // from try @ 00d80cd0 with catch @ 00d81328 */
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3 = puVar3 + 2;
  } while (puVar5 + param_1 * 2 != puVar3);
LAB_00d8133c:
                    /* catch() { ... } // from try @ 00d7f444 with catch @ 00d81344 */
  if (0 < (long)__n) {
    memcpy(__dest,pvVar8,__n);
  }
  pvVar8 = *(void **)this;
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar5 + param_1 * 2;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar9 * 0x10);
  if (pvVar8 == (void *)0x0) {
    return;
  }
                    /* try { // try from 00d81368 to 00e817e3 has its CatchHandler @ 00d81368
                       catch() { ... } // from try @ 00d81368 with catch @ 00d81368
                       catch() { ... } // from try @ 00d819b0 with catch @ 00d81368 */
  operator_delete(pvVar8);
  return;
}

