
/* universe::Example::removeWhenAllTaskComplete() */

void __thiscall universe::Example::removeWhenAllTaskComplete(Example *this)

{
  if (*(long *)(this + 0x10) != *(long *)(this + 0x18)) {
    this[0x28] = (Example)0x1;
                    /* try { // try from 009fd374 to 00afd37f has its CatchHandler @ 009fd3f0 */
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009fd380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 009fd380 to 00afd387 has its CatchHandler @ 009fd3ec */
  (**(code **)(*(long *)this + 8))();
  return;
}

