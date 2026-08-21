
/* v8::internal::compiler::KeyedAccessMode::FromNexus(v8::internal::FeedbackNexus const&) */

ulong v8::internal::compiler::KeyedAccessMode::FromNexus(FeedbackNexus *param_1)

{
  long lVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 3:
  case 0xd:
    lVar1 = FeedbackNexus::GetKeyedAccessStoreMode(param_1);
    uVar2 = 1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 8:
    lVar1 = FeedbackNexus::GetKeyedAccessLoadMode(param_1);
    uVar2 = 0;
    break;
  case 9:
    lVar1 = FeedbackNexus::GetKeyedAccessLoadMode(param_1);
    uVar2 = 3;
    break;
  case 0xe:
  case 0x11:
    lVar1 = FeedbackNexus::GetKeyedAccessStoreMode(param_1);
    uVar2 = 2;
  }
  return uVar2 | lVar1 << 0x20;
}

