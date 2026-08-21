
/* ClipperLib::RangeTest(ClipperLib::IntPoint const&, bool&) */

void ClipperLib::RangeTest(IntPoint *param_1,bool *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  if (*param_2 == false) {
                    /* try { // try from 01031cd0 to 01131cf3 has its CatchHandler @ 01033318 */
    if ((lVar2 + 0x3fffffffU < 0x7fffffff) && (*(long *)(param_1 + 8) + 0x3fffffffU < 0x7fffffff)) {
      return;
    }
                    /* try { // try from 01031cf4 to 01131d1f has its CatchHandler @ 01031838 */
    *param_2 = true;
  }
                    /* try { // try from 01031d20 to 01131d43 has its CatchHandler @ 01033314 */
  if (((lVar2 < 0x4000000000000000) && (-0x4000000000000000 < lVar2)) &&
     (*(long *)(param_1 + 8) + 0x3fffffffffffffffU < 0x7fffffffffffffff)) {
    return;
  }
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = "Coordinate outside allowed range";
                    /* try { // try from 01031d44 to 01131d6f has its CatchHandler @ 01031838 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&char_const*::typeinfo,0);
}

