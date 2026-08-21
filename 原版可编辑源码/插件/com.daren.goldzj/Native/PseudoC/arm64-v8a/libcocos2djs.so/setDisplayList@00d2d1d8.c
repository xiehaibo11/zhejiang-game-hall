
/* dragonBones::Slot::setDisplayList(std::__ndk1::vector<std::__ndk1::pair<void*,
   dragonBones::DisplayType>, std::__ndk1::allocator<std::__ndk1::pair<void*,
   dragonBones::DisplayType> > > const&) */

void __thiscall dragonBones::Slot::setDisplayList(Slot *this,vector *param_1)

{
  void *__src;
  long *plVar1;
  long *__dest;
  long *__dest_00;
  ulong uVar2;
  long *__dest_01;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  size_t __n;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  __src = *(void **)(this + 0x140);
  uVar2 = *(long *)(this + 0x148) - (long)__src;
  if (uVar2 == 0) {
    __dest = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    if ((ulong)((long)uVar2 >> 4) >> 0x3c != 0) {
LAB_00d2d4cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar2);
    plVar7 = __dest;
    if (0 < (long)uVar2) {
      memcpy(__dest,__src,uVar2);
      plVar7 = (long *)((long)__dest + uVar2);
      uVar2 = (long)plVar7 - (long)__dest;
      if (uVar2 != 0) {
        if ((ulong)((long)uVar2 >> 4) >> 0x3c != 0) goto LAB_00d2d4cc;
        __dest_00 = operator_new(uVar2);
        plVar8 = __dest_00 + ((long)uVar2 >> 4) * 2;
        if (0 < (long)uVar2) {
          memcpy(__dest_00,__dest,uVar2);
        }
        goto LAB_00d2d294;
      }
    }
  }
  __dest_00 = (long *)0x0;
  plVar8 = (long *)0x0;
LAB_00d2d294:
  uVar2 = _setDisplayList(this,param_1);
  if ((uVar2 & 1) != 0) {
    update(this,-1);
  }
  plVar6 = __dest_00;
  __dest_01 = __dest_00;
  plVar9 = __dest;
  if (__dest != plVar7) {
    do {
      lVar3 = *plVar9;
      __dest_01 = plVar6;
      if (((lVar3 != 0) && (lVar3 != *(long *)(this + 0xe0))) && (lVar3 != *(long *)(this + 0xe8)))
      {
        plVar4 = *(long **)(this + 0x140);
        plVar1 = *(long **)(this + 0x148);
        if (plVar1 == plVar4) {
LAB_00d2d348:
          if (plVar4 != plVar1) goto LAB_00d2d42c;
        }
        else {
          do {
            if ((*plVar4 == lVar3) && ((int)plVar4[1] == (int)plVar9[1])) goto LAB_00d2d348;
            plVar4 = plVar4 + 2;
          } while (plVar1 != plVar4);
        }
        plVar4 = plVar6;
        if (plVar6 == __dest_00) {
LAB_00d2d388:
          if (plVar4 != __dest_00) goto LAB_00d2d42c;
        }
        else {
          do {
            if ((*plVar4 == lVar3) && ((int)plVar4[1] == (int)plVar9[1])) goto LAB_00d2d388;
            plVar4 = plVar4 + 2;
          } while (__dest_00 != plVar4);
        }
        if (__dest_00 == plVar8) {
          __n = (long)__dest_00 - (long)plVar6;
          uVar2 = ((long)__n >> 4) + 1;
          if (uVar2 >> 0x3c != 0) goto LAB_00d2d4cc;
          if ((ulong)((long)plVar8 - (long)plVar6 >> 4) < 0x7ffffffffffffff) {
            uVar5 = (long)plVar8 - (long)plVar6 >> 3;
            if (uVar2 <= uVar5) {
              uVar2 = uVar5;
            }
            if (uVar2 != 0) {
              if (uVar2 >> 0x3c == 0) goto LAB_00d2d3e4;
              goto LAB_00d2d4cc;
            }
            __dest_01 = (long *)0x0;
          }
          else {
            uVar2 = 0xfffffffffffffff;
LAB_00d2d3e4:
            __dest_01 = operator_new(uVar2 << 4);
          }
          lVar3 = *plVar9;
          plVar4 = __dest_01 + ((long)__n >> 4) * 2;
          plVar8 = __dest_01 + uVar2 * 2;
          __dest_00 = plVar4 + 2;
          plVar4[1] = plVar9[1];
          *plVar4 = lVar3;
          if (0 < (long)__n) {
            memcpy(__dest_01,plVar6,__n);
          }
          if (plVar6 != (long *)0x0) {
            operator_delete(plVar6);
          }
        }
        else {
          lVar3 = *plVar9;
          __dest_00[1] = plVar9[1];
          *__dest_00 = lVar3;
          __dest_00 = __dest_00 + 2;
        }
      }
LAB_00d2d42c:
      plVar9 = plVar9 + 2;
      plVar6 = __dest_01;
    } while (plVar9 != plVar7);
    for (; plVar6 != __dest_00; plVar6 = plVar6 + 2) {
      if ((int)plVar6[1] == 1) {
        BaseObject::returnToPool((BaseObject *)*plVar6);
      }
      else {
        (**(code **)(*(long *)this + 0x28))(this,(BaseObject *)*plVar6,1);
      }
    }
  }
  if (__dest_01 != (long *)0x0) {
    operator_delete(__dest_01);
  }
  if (__dest != (long *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

