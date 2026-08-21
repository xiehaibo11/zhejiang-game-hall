
/* v8::internal::compiler::MapRef::HasOnlyStablePrototypesWithFastElements(v8::internal::ZoneVector<v8::internal::compiler::MapRef>*)
    */

void __thiscall
v8::internal::compiler::MapRef::HasOnlyStablePrototypesWithFastElements
          (MapRef *this,ZoneVector *param_1)

{
  long extraout_x1;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(this + 8);
  local_60 = *(undefined8 *)this;
  if (param_1 == (ZoneVector *)0x0) {
    SerializePrototype((MapRef *)&local_60);
  }
  prototype((MapRef *)&local_60);
                    /* WARNING: Could not recover jumptable at 0x01721920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_01721924 + (ulong)(byte)(&DAT_01a5d660)[*(uint *)(extraout_x1 + 0x70)] * 4))();
  return;
}

