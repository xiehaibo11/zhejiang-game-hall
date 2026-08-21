
/* v8::internal::PreparseDataBuilder::Serialize(v8::internal::Zone*) */

ZonePreparseData * __thiscall
v8::internal::PreparseDataBuilder::Serialize(PreparseDataBuilder *this,Zone *param_1)

{
  undefined8 uVar1;
  ZonePreparseData *this_00;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  this_00 = *(ZonePreparseData **)(param_1 + 0x10);
  iVar3 = *(int *)(this + 0x48);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)this_00) < 0x40) {
    this_00 = (ZonePreparseData *)Zone::NewExpand(param_1,0x40);
  }
  else {
    *(ZonePreparseData **)(param_1 + 0x10) = this_00 + 0x40;
  }
  ZonePreparseData::ZonePreparseData(this_00,param_1,this + 8,iVar3);
  if (*(long *)(this + 0x28) != 0) {
    puVar2 = *(undefined8 **)(this + 0x20);
    iVar3 = 0;
    lVar4 = *(long *)(this + 0x28) << 3;
    do {
      if (((byte)((PreparseDataBuilder *)*puVar2)[0x4c] & 3) == 2) {
        uVar1 = Serialize((PreparseDataBuilder *)*puVar2,param_1);
        *(undefined8 *)(*(long *)(this_00 + 0x20) + (long)iVar3 * 8) = uVar1;
        iVar3 = iVar3 + 1;
      }
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar4 != 0);
  }
  return this_00;
}

