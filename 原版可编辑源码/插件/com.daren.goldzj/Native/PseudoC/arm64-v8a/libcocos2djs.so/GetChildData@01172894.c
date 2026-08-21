
/* v8::internal::ZoneConsumedPreparseData::GetChildData(v8::internal::Zone*, int) */

undefined8 * __thiscall
v8::internal::ZoneConsumedPreparseData::GetChildData
          (ZoneConsumedPreparseData *this,Zone *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(this + 0x18) + 0x20);
  if (param_2 < (int)((ulong)(*(long *)(*(long *)(this + 0x18) + 0x28) - lVar2) >> 3)) {
    lVar2 = *(long *)(lVar2 + (long)param_2 * 8);
    if (lVar2 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x10) {
        puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x10);
      }
      else {
        *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
      }
      *puVar1 = &PTR_Serialize_01cb5490;
      puVar1[1] = lVar2;
    }
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","data_->children_length() > child_index");
}

