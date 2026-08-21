
/* v8::internal::Sweeper::StartSweeping() */

void __thiscall v8::internal::Sweeper::StartSweeping(Sweeper *this)

{
  long lVar1;
  long local_28;
  
  if (((byte)this[0x108] & 1) == 0) {
    this[0xf9] = (Sweeper)0x1;
    this[0x140] = (Sweeper)0x1;
    this[0x142] = (Sweeper)(*(byte *)(*(long *)this + 0xad4) & 1);
    lVar1 = *(long *)(*(long *)this + 0x800) + 0x2701;
    local_28 = lVar1;
    FUN_01023e4c(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8),&local_28);
    local_28 = lVar1;
    FUN_01023e4c(*(undefined8 *)(this + 200),*(undefined8 *)(this + 0xd0),&local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!stop_sweeper_tasks_");
}

