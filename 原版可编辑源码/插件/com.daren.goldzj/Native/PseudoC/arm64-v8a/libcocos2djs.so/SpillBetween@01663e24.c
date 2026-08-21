
/* v8::internal::compiler::LinearScanAllocator::SpillBetween(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition, v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void v8::internal::compiler::LinearScanAllocator::SpillBetween(void)

{
  SpillBetweenUntil();
  return;
}

