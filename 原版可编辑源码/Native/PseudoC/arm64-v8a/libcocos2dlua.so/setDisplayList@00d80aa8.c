
/* dragonBones::Slot::setDisplayList(std::__ndk1::vector<std::__ndk1::pair<void*,
   dragonBones::DisplayType>, std::__ndk1::allocator<std::__ndk1::pair<void*,
   dragonBones::DisplayType> > > const&) */

void __thiscall dragonBones::Slot::setDisplayList(Slot *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  void *__src;
  long *plVar3;
  long *__dest;
  long *__dest_00;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  size_t __n;
  long *plVar10;
  long *plVar11;
  
  __src = *(void **)(this + 0x140);
  uVar4 = *(long *)(this + 0x148) - (long)__src;
  if (uVar4 == 0) {
    __dest = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    if ((ulong)((long)uVar4 >> 4) >> 0x3c != 0) {
LAB_00d80da0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar4);
    plVar8 = __dest;
    if (0 < (long)uVar4) {
      memcpy(__dest,__src,uVar4);
      plVar8 = (long *)((long)__dest + uVar4);
      uVar4 = (long)plVar8 - (long)__dest;
      if (uVar4 != 0) {
        if ((ulong)((long)uVar4 >> 4) >> 0x3c != 0) goto LAB_00d80da0;
        __dest_00 = operator_new(uVar4);
        plVar10 = __dest_00 + ((long)uVar4 >> 4) * 2;
        if (0 < (long)uVar4) {
          memcpy(__dest_00,__dest,uVar4);
        }
        goto LAB_00d80b68;
      }
    }
  }
  plVar10 = (long *)0x0;
  __dest_00 = (long *)0x0;
LAB_00d80b68:
  uVar4 = _setDisplayList(this,param_1);
  if ((uVar4 & 1) != 0) {
    update(this,-1);
  }
  plVar11 = __dest_00;
  plVar9 = __dest_00;
  if (__dest != plVar8) {
    lVar5 = *__dest;
    plVar1 = __dest;
    plVar2 = __dest_00;
    do {
      __dest_00 = plVar9;
      plVar11 = plVar2;
      if (((lVar5 != 0) && (lVar5 != *(long *)(this + 0xe0))) && (lVar5 != *(long *)(this + 0xe8)))
      {
        plVar6 = *(long **)(this + 0x140);
        plVar3 = *(long **)(this + 0x148);
        if (plVar3 == plVar6) {
LAB_00d80c10:
          if (plVar6 != plVar3) goto LAB_00d80bac;
        }
        else {
          do {
            if ((*plVar6 == lVar5) && ((int)plVar6[1] == (int)plVar1[1])) goto LAB_00d80c10;
            plVar6 = plVar6 + 2;
          } while (plVar3 != plVar6);
        }
        plVar6 = plVar9;
        if (plVar9 == plVar2) {
LAB_00d80c50:
          if (plVar6 != plVar2) goto LAB_00d80bac;
        }
        else {
          do {
                    /* try { // try from 00d80c44 to 00e80c57 has its CatchHandler @ 00d812a4 */
            if ((*plVar6 == lVar5) && ((int)plVar6[1] == (int)plVar1[1])) goto LAB_00d80c50;
            plVar6 = plVar6 + 2;
                    /* try { // try from 00d80c30 to 00e80c3b has its CatchHandler @ 00d81294 */
          } while (plVar2 != plVar6);
        }
        if (plVar2 == plVar10) {
          __n = (long)plVar2 - (long)plVar9;
          uVar4 = ((long)__n >> 4) + 1;
                    /* try { // try from 00d80c6c to 00e80c73 has its CatchHandler @ 00d812a0 */
          if (uVar4 >> 0x3c != 0) goto LAB_00d80da0;
                    /* try { // try from 00d80c78 to 00e80c8f has its CatchHandler @ 00d8129c */
          if ((ulong)((long)plVar10 - (long)plVar9 >> 4) < 0x7ffffffffffffff) {
            uVar7 = (long)plVar10 - (long)plVar9 >> 3;
            if (uVar4 <= uVar7) {
              uVar4 = uVar7;
            }
            if (uVar4 != 0) {
                    /* try { // try from 00d80c90 to 00e80c9f has its CatchHandler @ 00d81298 */
              if (uVar4 >> 0x3c == 0) goto LAB_00d80ca0;
              goto LAB_00d80da0;
            }
            __dest_00 = (long *)0x0;
          }
          else {
            uVar4 = 0xfffffffffffffff;
LAB_00d80ca0:
            __dest_00 = operator_new(uVar4 << 4);
          }
          lVar5 = *plVar1;
          plVar2 = __dest_00 + ((long)__n >> 4) * 2;
          plVar10 = __dest_00 + uVar4 * 2;
          plVar11 = plVar2 + 2;
          plVar2[1] = plVar1[1];
          *plVar2 = lVar5;
          if (0 < (long)__n) {
                    /* try { // try from 00d80cd0 to 00e80e67 has its CatchHandler @ 00d81328 */
            memcpy(__dest_00,plVar9,__n);
          }
          if (plVar9 != (long *)0x0) {
            operator_delete(plVar9);
          }
        }
        else {
          lVar5 = *plVar1;
          plVar11 = plVar2 + 2;
          plVar2[1] = plVar1[1];
          *plVar2 = lVar5;
        }
      }
LAB_00d80bac:
      plVar1 = plVar1 + 2;
      plVar9 = __dest_00;
      if (plVar1 == plVar8) break;
      lVar5 = *plVar1;
      plVar2 = plVar11;
    } while( true );
  }
  for (; __dest_00 != plVar11; __dest_00 = __dest_00 + 2) {
    if ((int)__dest_00[1] == 1) {
      BaseObject::returnToPool((BaseObject *)*__dest_00);
    }
    else {
      (**(code **)(*(long *)this + 0x28))(this,(BaseObject *)*__dest_00,1);
    }
  }
  if (plVar9 != (long *)0x0) {
    operator_delete(plVar9);
  }
  if (__dest != (long *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

