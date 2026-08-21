
/* ClipperLib::InsertPolyPtBetween(ClipperLib::OutPt*, ClipperLib::OutPt*, ClipperLib::IntPoint) */

void __thiscall
ClipperLib::InsertPolyPtBetween
          (ClipperLib *this,ClipperLib *param_1,undefined8 param_2,undefined8 param_4)

{
  ClipperLib *pCVar1;
  ClipperLib *pCVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 01031a08 to 01131a33 has its CatchHandler @ 01031838 */
  if (this == param_1) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = "JoinError";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&char_const*::typeinfo,0);
  }
  pvVar4 = operator_new(0x28);
  *(undefined8 *)((long)pvVar4 + 8) = param_2;
  *(undefined8 *)((long)pvVar4 + 0x10) = param_4;
                    /* try { // try from 01031a34 to 01131a57 has its CatchHandler @ 01033334 */
  bVar3 = *(ClipperLib **)(this + 0x18) != param_1;
  pCVar1 = param_1;
  pCVar2 = this + 0x18;
  if (bVar3) {
    pCVar1 = this;
    pCVar2 = param_1 + 0x18;
  }
  *(void **)pCVar2 = pvVar4;
  *(void **)(pCVar1 + 0x20) = pvVar4;
  if (bVar3) {
    this = param_1;
  }
                    /* try { // try from 01031a58 to 01131a9b has its CatchHandler @ 01031838 */
  *(ClipperLib **)((long)pvVar4 + 0x18) = pCVar1;
  *(ClipperLib **)((long)pvVar4 + 0x20) = this;
  return;
}

