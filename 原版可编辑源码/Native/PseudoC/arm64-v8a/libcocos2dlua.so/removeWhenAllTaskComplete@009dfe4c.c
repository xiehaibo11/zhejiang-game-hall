
/* universe::Example::removeWhenAllTaskComplete() */

void __thiscall universe::Example::removeWhenAllTaskComplete(Example *this)

{
  if (*(long *)(this + 0x10) != *(long *)(this + 0x18)) {
    this[0x28] = (Example)0x1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009dfe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))();
  return;
}

