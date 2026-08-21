
/* v8::internal::CodeMap::DeleteCodeEntry(unsigned int) */

void __thiscall v8::internal::CodeMap::DeleteCodeEntry(CodeMap *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  RareData *this_00;
  Malloced *this_01;
  
  pvVar2 = (void *)(ulong)param_1;
  lVar4 = *(long *)(this + 8);
  uVar5 = (ulong)(*(long *)(this + 0x20) + (long)pvVar2) >> 9;
  uVar6 = *(long *)(this + 0x20) + (long)pvVar2 & 0x1ff;
  pvVar7 = *(void **)(*(long *)(lVar4 + uVar5 * 8) + uVar6 * 8);
  if (pvVar7 != (void *)0x0) {
    this_00 = *(RareData **)((long)pvVar7 + 0x38);
    *(undefined8 *)((long)pvVar7 + 0x38) = 0;
    pvVar3 = pvVar2;
    if (this_00 != (RareData *)0x0) {
      CodeEntry::RareData::~RareData(this_00);
      operator_delete(this_00);
      pvVar3 = extraout_x1;
    }
    this_01 = *(Malloced **)((long)pvVar7 + 0x28);
    *(undefined8 *)((long)pvVar7 + 0x28) = 0;
    if (this_01 != (Malloced *)0x0) {
      pvVar1 = *(void **)this_01;
      if (pvVar1 != (void *)0x0) {
        *(void **)(this_01 + 8) = pvVar1;
        operator_delete(pvVar1);
        pvVar3 = extraout_x1_00;
      }
      Malloced::operator_delete(this_01,pvVar3);
    }
    operator_delete(pvVar7);
    lVar4 = *(long *)(this + 8);
    uVar5 = (ulong)(*(long *)(this + 0x20) + (long)pvVar2) >> 9;
    uVar6 = *(long *)(this + 0x20) + (long)pvVar2 & 0x1ff;
  }
  *(undefined4 *)(*(long *)(lVar4 + uVar5 * 8) + uVar6 * 8) = *(undefined4 *)(this + 0x48);
  *(uint *)(this + 0x48) = param_1;
  return;
}

