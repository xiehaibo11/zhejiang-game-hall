
/* v8::internal::MarkCompactCollector::VerifyMarking() */

void __thiscall v8::internal::MarkCompactCollector::VerifyMarking(MarkCompactCollector *this)

{
  undefined **local_40;
  undefined **local_38;
  long lStack_30;
  long local_28;
  
  if ((((*(long *)(*(long *)(this + 0x60) + 8) == 0) && (*(long *)(*(long *)(this + 0x58) + 8) == 0)
       ) && (*(long *)(*(long *)(this + 0x318) + 8) == 0)) &&
     (((*(long *)(*(long *)(this + 0x310) + 8) == 0 && (*(long *)(this + 0x300) == 0)) &&
      (*(long *)(this + 0x5b8) == 0)))) {
    if (FLAG_verify_heap != '\0') {
      lStack_30 = *(long *)(this + 8);
      local_40 = &PTR_FUN_01ca82a8;
      local_38 = &PTR_FUN_01ca8380;
      local_28 = *(long *)(lStack_30 + 0x800) + 0x2701;
      FUN_00fae9c0(&local_40);
      if (FLAG_verify_heap != '\0') {
        PagedSpace::VerifyLiveBytes(*(PagedSpace **)(*(long *)(this + 8) + 0xf0));
        PagedSpace::VerifyLiveBytes(*(PagedSpace **)(*(long *)(this + 8) + 0x100));
        PagedSpace::VerifyLiveBytes(*(PagedSpace **)(*(long *)(this + 8) + 0xf8));
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_worklist()->IsEmpty()");
}

