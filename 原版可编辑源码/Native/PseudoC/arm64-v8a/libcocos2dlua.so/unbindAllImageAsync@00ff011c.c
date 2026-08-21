
/* cocos2d::TextureCache::unbindAllImageAsync() */

void __thiscall cocos2d::TextureCache::unbindAllImageAsync(TextureCache *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if ((*(long *)(this + 0x58) != 0) &&
     (lVar4 = *(long *)(this + 0x38), *(long *)(this + 0x40) != lVar4)) {
    uVar6 = *(ulong *)(this + 0x50);
    uVar1 = uVar6 + *(long *)(this + 0x58);
    plVar7 = (long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8));
    plVar8 = (long *)(*plVar7 + (uVar6 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)(lVar4 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
LAB_00ff0174:
    if (plVar2 != plVar8) {
      do {
        lVar4 = *plVar8;
        plVar3 = *(long **)(lVar4 + 0x40);
        *(undefined8 *)(lVar4 + 0x40) = 0;
        if ((long *)(lVar4 + 0x20) == plVar3) {
          pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00ff01ac:
          (*pcVar5)();
        }
        else if (plVar3 != (long *)0x0) {
          pcVar5 = *(code **)(*plVar3 + 0x28);
          goto LAB_00ff01ac;
        }
        plVar8 = plVar8 + 1;
        if ((long)plVar8 - *plVar7 != 0x1000) goto LAB_00ff0174;
        plVar7 = plVar7 + 1;
        plVar8 = (long *)*plVar7;
        if (plVar2 == plVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

