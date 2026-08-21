
/* v8::internal::CharacterSet::ranges(v8::internal::Zone*) */

long __thiscall v8::internal::CharacterSet::ranges(CharacterSet *this,Zone *param_1)

{
  long lVar1;
  ZoneList *pZVar2;
  ZoneList *pZVar3;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    pZVar2 = *(ZoneList **)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar1 - (long)pZVar2) < 0x10) {
      pZVar2 = (ZoneList *)Zone::NewExpand(param_1,0x10);
      pZVar3 = *(ZoneList **)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    else {
      pZVar3 = pZVar2 + 0x10;
      *(ZoneList **)(param_1 + 0x10) = pZVar3;
    }
    if ((ulong)(lVar1 - (long)pZVar3) < 0x10) {
      pZVar3 = (ZoneList *)Zone::NewExpand(param_1,0x10);
    }
    else {
      *(ZoneList **)(param_1 + 0x10) = pZVar3 + 0x10;
    }
    *(ZoneList **)pZVar2 = pZVar3;
    *(undefined8 *)(pZVar2 + 8) = 2;
    *(ZoneList **)this = pZVar2;
    CharacterRange::AddClassEscape((char)this[8],pZVar2,param_1);
    lVar1 = *(long *)this;
  }
  return lVar1;
}

