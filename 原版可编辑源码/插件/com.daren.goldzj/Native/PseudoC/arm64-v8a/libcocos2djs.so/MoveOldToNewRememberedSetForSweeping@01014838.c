
/* v8::internal::Page::MoveOldToNewRememberedSetForSweeping() */

void __thiscall v8::internal::Page::MoveOldToNewRememberedSetForSweeping(Page *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x70) == 0) {
    uVar1 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x70) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(sweeping_slot_set_) == nullptr");
}

