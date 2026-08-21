
/* v8::internal::FeedbackNexus::GetFirstMap() const */

undefined8 __thiscall v8::internal::FeedbackNexus::GetFirstMap(FeedbackNexus *this)

{
  undefined8 uVar1;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  
  local_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  local_38 = (undefined8 *)0x0;
  ExtractMaps(this,(vector *)&local_38);
  if (local_38 == local_30) {
    uVar1 = 0;
    if (local_38 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)*local_38;
  }
  local_30 = local_38;
  operator_delete(local_38);
  return uVar1;
}

