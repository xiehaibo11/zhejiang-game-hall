
/* v8::internal::compiler::TopLevelLiveRange::ShortenTo(v8::internal::compiler::LifetimePosition,
   bool) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::ShortenTo
          (TopLevelLiveRange *this,uint param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    PrintF("Shorten live range %d to [%d\n",(ulong)*(uint *)(this + 0x5c),(ulong)param_2);
  }
  **(uint **)(this + 0x10) = param_2;
  return;
}

