
/* dragonBones::DeformVertices::init(dragonBones::VerticesData const*, dragonBones::Armature*) */

void __thiscall
dragonBones::DeformVertices::init(DeformVertices *this,VerticesData *param_1,Armature *param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  
  *(VerticesData **)(this + 0x40) = param_1;
  if (param_1 == (VerticesData *)0x0) {
    this[0xd] = (DeformVertices)0x0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00da108c to 00ea10a7 has its CatchHandler @ 00da1248 */
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  }
  else {
                    /* try { // try from 00da106c to 00ea1073 has its CatchHandler @ 00da124c */
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar8 = (int)*(short *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) +
                             (ulong)*(uint *)(param_1 + 4) * 2);
    }
    else {
      iVar8 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
    }
    pvVar3 = *(void **)(this + 0x10);
    uVar9 = (ulong)(uint)(iVar8 << 1);
    pvVar7 = *(void **)(this + 0x18);
    this[0xd] = (DeformVertices)0x1;
    uVar10 = (long)pvVar7 - (long)pvVar3 >> 2;
    if (uVar10 < uVar9) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x10),uVar9 - uVar10);
      pvVar3 = *(void **)(this + 0x10);
      pvVar7 = *(void **)(this + 0x18);
    }
    else if (uVar10 != uVar9) {
      pvVar7 = (void *)((long)pvVar3 + uVar9 * 4);
      *(void **)(this + 0x18) = pvVar7;
    }
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
    if ((long)pvVar7 - (long)pvVar3 != 0) {
      uVar9 = (long)pvVar7 - (long)pvVar3 >> 2;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      memset(pvVar3,0,uVar9 << 2);
    }
    lVar4 = *(long *)(*(long *)(this + 0x40) + 0x10);
    if ((lVar4 != 0) && (lVar2 = *(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18), lVar2 != 0)) {
                    /* try { // try from 00da112c to 00ea1133 has its CatchHandler @ 00da11ac */
      uVar9 = 0;
      do {
                    /* try { // try from 00da1134 to 00ea115f has its CatchHandler @ 00da0a8c */
        lVar4 = Armature::getBone(param_2,(basic_string *)
                                          (*(long *)(*(long *)(lVar4 + 0x18) + uVar9 * 8) + 0x18));
        if (lVar4 != 0) {
          plVar1 = *(long **)(this + 0x30);
          if (plVar1 == *(long **)(this + 0x38)) {
            pvVar7 = *(void **)(this + 0x28);
            __n = (long)plVar1 - (long)pvVar7;
                    /* try { // try from 00da1170 to 00ea117b has its CatchHandler @ 00da11bc */
            uVar10 = ((long)__n >> 3) + 1;
                    /* try { // try from 00da117c to 00ea11a3 has its CatchHandler @ 00da0a8c */
            if (uVar10 >> 0x3d != 0) {
LAB_00da1230:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00da0c88 with catch @ 00da1230 */
              abort();
            }
            lVar5 = (long)*(long **)(this + 0x38) - (long)pvVar7;
            if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
              uVar6 = lVar5 >> 2;
              if (uVar10 <= uVar6) {
                uVar10 = uVar6;
              }
              if (uVar10 != 0) {
                    /* try { // try from 00da11a4 to 00ea11ab has its CatchHandler @ 00da11ac */
                if (uVar10 >> 0x3d != 0) goto LAB_00da1230;
                goto LAB_00da11b0;
              }
                    /* catch() { ... } // from try @ 00da1160 with catch @ 00da120c */
              pvVar3 = (void *)0x0;
            }
            else {
                    /* catch() { ... } // from try @ 00da112c with catch @ 00da11ac
                       catch() { ... } // from try @ 00da11a4 with catch @ 00da11ac
                       try { // try from 00da11ac to 00ea1287 has its CatchHandler @ 00da0a8c */
              uVar10 = 0x1fffffffffffffff;
LAB_00da11b0:
                    /* catch() { ... } // from try @ 00da0de0 with catch @ 00da11b0 */
                    /* catch() { ... } // from try @ 00da0e38 with catch @ 00da11b4 */
              pvVar3 = operator_new(uVar10 << 3);
                    /* catch() { ... } // from try @ 00da0d54 with catch @ 00da11b8 */
            }
                    /* catch() { ... } // from try @ 00da1170 with catch @ 00da11bc */
            plVar1 = (long *)((long)pvVar3 + ((long)__n >> 3) * 8);
            *plVar1 = lVar4;
            if (0 < (long)__n) {
              memcpy(pvVar3,pvVar7,__n);
            }
            *(void **)(this + 0x28) = pvVar3;
            *(long **)(this + 0x30) = plVar1 + 1;
            *(void **)(this + 0x38) = (void *)((long)pvVar3 + uVar10 * 8);
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
            }
          }
          else {
            *plVar1 = lVar4;
                    /* try { // try from 00da1160 to 00ea116f has its CatchHandler @ 00da120c */
            *(long **)(this + 0x30) = plVar1 + 1;
          }
        }
        uVar9 = uVar9 + 1;
        if ((ulong)(lVar2 >> 3) <= uVar9) {
          return;
        }
        lVar4 = *(long *)(*(long *)(this + 0x40) + 0x10);
      } while( true );
    }
  }
                    /* catch() { ... } // from try @ 00da0edc with catch @ 00da122c */
  return;
}

