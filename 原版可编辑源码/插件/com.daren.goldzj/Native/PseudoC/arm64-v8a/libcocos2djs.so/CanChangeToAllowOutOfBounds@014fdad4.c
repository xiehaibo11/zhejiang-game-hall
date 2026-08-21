
/* v8::internal::KeyedLoadIC::CanChangeToAllowOutOfBounds(v8::internal::Handle<v8::internal::Map>)
    */

bool v8::internal::KeyedLoadIC::CanChangeToAllowOutOfBounds(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong *extraout_x1;
  
  iVar2 = FeedbackNexus::FindHandlerForMap((FeedbackNexus *)(param_1 + 0x50));
  if (extraout_x1 != (ulong *)0x0) {
    uVar1 = *extraout_x1 | 2;
    if (iVar2 != 0) {
      uVar1 = *extraout_x1;
    }
    iVar2 = LoadHandler::GetKeyedAccessLoadMode(uVar1);
    return iVar2 == 0;
  }
  return false;
}

