
/* v8::internal::compiler::MapData::GetStrongValue(v8::internal::InternalIndex) const */

long __thiscall v8::internal::compiler::MapData::GetStrongValue(MapData *this,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(*(long *)(this + 0x70) + 0x20);
  plVar3 = (long *)*plVar1;
  plVar2 = plVar1;
  if (plVar3 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar1) && ((int)plVar2[4] <= param_2)) {
      return plVar2[6];
    }
  }
  return 0;
}

