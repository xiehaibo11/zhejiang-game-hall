
/* v8::internal::interpreter::HandlerTableBuilder::ToHandlerTable(v8::internal::Isolate*) */

undefined8 * __thiscall
v8::internal::interpreter::HandlerTableBuilder::ToHandlerTable
          (HandlerTableBuilder *this,Isolate *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  HandlerTable aHStack_60 [16];
  
  lVar2 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  iVar7 = (int)((ulong)(lVar3 - lVar2) >> 5);
  uVar5 = HandlerTable::LengthForRange(iVar7);
  puVar6 = (undefined8 *)Factory::NewByteArray((Factory *)param_1,uVar5,1);
  HandlerTable::HandlerTable(aHStack_60,*puVar6);
  if (0 < iVar7) {
    lVar8 = 0;
    iVar7 = 0;
    do {
      piVar1 = (int *)(*(long *)this + lVar8);
      iVar4 = piVar1[7];
      HandlerTable::SetRangeStart(aHStack_60,iVar7,*piVar1);
      HandlerTable::SetRangeEnd(aHStack_60,iVar7,piVar1[2]);
      HandlerTable::SetRangeHandler(aHStack_60,iVar7,piVar1[4],iVar4);
      HandlerTable::SetRangeData(aHStack_60,iVar7,piVar1[6]);
      lVar8 = lVar8 + 0x20;
      iVar7 = iVar7 + 1;
    } while (((ulong)(lVar3 - lVar2) >> 5 & 0xffffffff) * 0x20 - lVar8 != 0);
  }
  return puVar6;
}

