
/* v8::internal::ElementsAccessor::TearDown() */

void v8::internal::ElementsAccessor::TearDown(void)

{
  if (elements_accessors_ != (long *)0x0) {
    if ((long *)*elements_accessors_ != (long *)0x0) {
      (**(code **)(*(long *)*elements_accessors_ + 8))();
    }
    if ((long *)elements_accessors_[1] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[1] + 8))();
    }
    if ((long *)elements_accessors_[2] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[2] + 8))();
    }
    if ((long *)elements_accessors_[3] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[3] + 8))();
    }
    if ((long *)elements_accessors_[4] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[4] + 8))();
    }
    if ((long *)elements_accessors_[5] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[5] + 8))();
    }
    if ((long *)elements_accessors_[6] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[6] + 8))();
    }
    if ((long *)elements_accessors_[7] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[7] + 8))();
    }
    if ((long *)elements_accessors_[8] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[8] + 8))();
    }
    if ((long *)elements_accessors_[9] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[9] + 8))();
    }
    if ((long *)elements_accessors_[10] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[10] + 8))();
    }
    if ((long *)elements_accessors_[0xb] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0xb] + 8))();
    }
    if ((long *)elements_accessors_[0xc] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0xc] + 8))();
    }
    if ((long *)elements_accessors_[0xd] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0xd] + 8))();
    }
    if ((long *)elements_accessors_[0xe] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0xe] + 8))();
    }
    if ((long *)elements_accessors_[0xf] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0xf] + 8))();
    }
    if ((long *)elements_accessors_[0x10] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x10] + 8))();
    }
    if ((long *)elements_accessors_[0x11] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x11] + 8))();
    }
    if ((long *)elements_accessors_[0x12] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x12] + 8))();
    }
    if ((long *)elements_accessors_[0x13] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x13] + 8))();
    }
    if ((long *)elements_accessors_[0x14] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x14] + 8))();
    }
    if ((long *)elements_accessors_[0x15] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x15] + 8))();
    }
    if ((long *)elements_accessors_[0x16] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x16] + 8))();
    }
    if ((long *)elements_accessors_[0x17] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x17] + 8))();
    }
    if ((long *)elements_accessors_[0x18] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x18] + 8))();
    }
    if ((long *)elements_accessors_[0x19] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x19] + 8))();
    }
    if ((long *)elements_accessors_[0x1a] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x1a] + 8))();
    }
    if ((long *)elements_accessors_[0x1b] != (long *)0x0) {
      (**(code **)(*(long *)elements_accessors_[0x1b] + 8))();
    }
    elements_accessors_ = (long *)0x0;
  }
  return;
}

