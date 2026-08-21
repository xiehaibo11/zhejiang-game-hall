
/* v8::internal::SpaceWithLinearArea::ComputeLimit(unsigned long, unsigned long, unsigned long) */

ulong __thiscall
v8::internal::SpaceWithLinearArea::ComputeLimit
          (SpaceWithLinearArea *this,ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar6;
  
  if (*(char *)(*(long *)(this + 0x40) + 0x5e0) == '\0') {
    uVar4 = (**(code **)(*(long *)this + 0x80))();
    uVar9 = param_2;
    if (((uVar4 & 1) != 0) && (this[0x38] == (SpaceWithLinearArea)0x0)) {
      if (*(long **)(this + 8) != *(long **)(this + 0x10)) {
        lVar7 = 0;
        plVar5 = *(long **)(this + 8);
        do {
          plVar6 = plVar5 + 1;
          lVar8 = *(long *)(*plVar5 + 0x10);
          lVar1 = lVar7;
          if (lVar8 <= lVar7) {
            lVar1 = lVar8;
          }
          bVar2 = lVar7 != 0;
          lVar7 = lVar8;
          if (bVar2) {
            lVar7 = lVar1;
          }
          plVar5 = plVar6;
        } while (*(long **)(this + 0x10) != plVar6);
        iVar3 = (**(code **)(*(long *)this + 0x68))(this,(int)lVar7 + -1);
        uVar9 = param_3 + param_1 + (long)iVar3;
        if (param_2 <= uVar9) {
          uVar9 = param_2;
        }
      }
    }
  }
  else {
    uVar9 = param_3 + param_1;
  }
  return uVar9;
}

