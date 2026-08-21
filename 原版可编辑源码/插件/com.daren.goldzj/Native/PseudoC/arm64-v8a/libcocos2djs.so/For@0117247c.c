
/* v8::internal::ProducedPreparseData::For(v8::internal::ZonePreparseData*, v8::internal::Zone*) */

undefined8 * v8::internal::ProducedPreparseData::For(ZonePreparseData *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x10) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_2,0x10);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar1 + 2;
  }
  *puVar1 = &PTR_Serialize_01cb5490;
  puVar1[1] = param_1;
  return puVar1;
}

