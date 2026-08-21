
/* v8::internal::compiler::MapData::SerializeForElementStore(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::MapData::SerializeForElementStore(MapData *this,JSHeapBroker *param_1)

{
  short sVar1;
  undefined8 *puVar2;
  long extraout_x1;
  ulong uVar3;
  MapData *local_68;
  JSHeapBroker *pJStack_60;
  TraceScope aTStack_58 [24];
  MapData *local_40;
  JSHeapBroker *pJStack_38;
  
  if (this[0xb9] != (MapData)0x0) {
    return;
  }
  this[0xb9] = (MapData)0x1;
  TraceScope::TraceScope(aTStack_58,param_1,this,"MapData::SerializeForElementStore");
  local_68 = this;
  pJStack_60 = param_1;
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_68);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) goto LAB_0172184c;
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_0172184c;
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    pJStack_38 = pJStack_60;
    local_40 = local_68;
    MapRef::SerializePrototype((MapRef *)&local_40);
    MapRef::prototype((MapRef *)&local_40);
                    /* WARNING: Could not recover jumptable at 0x0172164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_01721650 + (ulong)(byte)(&DAT_01a5d658)[*(uint *)(extraout_x1 + 0x70)] * 4))();
    return;
  }
LAB_0172184c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

