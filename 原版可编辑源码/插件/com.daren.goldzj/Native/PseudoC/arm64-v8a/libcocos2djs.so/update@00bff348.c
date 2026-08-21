
/* cocos2d::middleware::MiddlewareManager::update(float) */

void __thiscall
cocos2d::middleware::MiddlewareManager::update(MiddlewareManager *this,float param_1)

{
  MiddlewareManager *pMVar1;
  size_t __n;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 in_register_00005004;
  
  lVar8 = *(long *)(this + 8);
  this[1] = (MiddlewareManager)0x1;
  lVar4 = *(long *)(this + 0x10) - lVar8;
  if (lVar4 != 0) {
    uVar9 = 0;
    do {
      plVar3 = *(long **)(this + 0x28);
      plVar7 = *(long **)(this + 0x20);
      plVar2 = *(long **)(lVar8 + uVar9 * 8);
      if (plVar3 == plVar7) {
LAB_00bff3e0:
        (**(code **)(*plVar2 + 0x10))(CONCAT44(in_register_00005004,param_1));
      }
      else {
        if (plVar7 != plVar3) {
          plVar5 = (long *)*plVar7;
          while (plVar5 != plVar2) {
            plVar7 = plVar7 + 1;
            if (plVar3 == plVar7) goto LAB_00bff3e0;
            plVar5 = (long *)*plVar7;
          }
        }
        if (plVar7 == plVar3) goto LAB_00bff3e0;
      }
      uVar9 = uVar9 + 1;
      if ((ulong)(lVar4 >> 3) <= uVar9) break;
      lVar8 = *(long *)(this + 8);
    } while( true );
  }
  lVar8 = *(long *)(this + 0x20);
  pMVar1 = this + 0x28;
  lVar4 = *(long *)pMVar1;
  this[1] = (MiddlewareManager)0x0;
  if (lVar4 != lVar8) {
    plVar7 = *(long **)(this + 0x10);
    uVar9 = 0;
    lVar6 = lVar4;
    do {
      lVar4 = lVar8;
      plVar2 = *(long **)(this + 8);
      if (plVar2 != plVar7) {
        lVar8 = *plVar2;
        while (lVar8 != *(long *)(lVar4 + uVar9 * 8)) {
          plVar2 = plVar2 + 1;
          if (plVar7 == plVar2) goto LAB_00bff490;
          lVar8 = *plVar2;
        }
        if (plVar2 != plVar7) {
          __n = (long)plVar7 - (long)(plVar2 + 1);
          if (__n != 0) {
            memmove(plVar2,plVar2 + 1,__n);
            lVar6 = *(long *)pMVar1;
            lVar4 = *(long *)(this + 0x20);
          }
          plVar7 = plVar2 + ((long)__n >> 3);
          *(long **)(this + 0x10) = plVar7;
        }
      }
LAB_00bff490:
      uVar9 = uVar9 + 1;
      lVar8 = lVar4;
    } while (uVar9 < (ulong)(lVar6 - lVar4 >> 3));
  }
  *(long *)pMVar1 = lVar4;
  return;
}

