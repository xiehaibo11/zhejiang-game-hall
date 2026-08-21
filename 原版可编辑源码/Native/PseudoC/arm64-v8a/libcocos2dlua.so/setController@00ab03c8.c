
/* fairygui::GearBase::setController(fairygui::GController*) */

void __thiscall fairygui::GearBase::setController(GearBase *this,GController *param_1)

{
                    /* catch() { ... } // from try @ 00aaf6f0 with catch @ 00ab03cc
                       catch() { ... } // from try @ 00aafc68 with catch @ 00ab03cc
                       catch() { ... } // from try @ 00aafd04 with catch @ 00ab03cc
                       catch() { ... } // from try @ 00ab01c0 with catch @ 00ab03cc */
                    /* catch() { ... } // from try @ 00aaf8e8 with catch @ 00ab03d0
                       catch() { ... } // from try @ 00aafe4c with catch @ 00ab03d0
                       catch() { ... } // from try @ 00aaff0c with catch @ 00ab03d0
                       catch() { ... } // from try @ 00ab01d8 with catch @ 00ab03d0 */
                    /* catch() { ... } // from try @ 00aaf7dc with catch @ 00ab03d4
                       catch() { ... } // from try @ 00aafb58 with catch @ 00ab03d4
                       catch() { ... } // from try @ 00aafc3c with catch @ 00ab03d4
                       catch() { ... } // from try @ 00ab01f0 with catch @ 00ab03d4 */
  if ((*(GController **)(this + 0x10) != param_1) &&
     (*(GController **)(this + 0x10) = param_1, param_1 != (GController *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00ab03e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00aaf850 with catch @ 00ab03e4
                       catch() { ... } // from try @ 00aafd30 with catch @ 00ab03e4
                       catch() { ... } // from try @ 00aafe14 with catch @ 00ab03e4
                       catch() { ... } // from try @ 00ab0214 with catch @ 00ab03e4 */
    (**(code **)(*(long *)this + 0x30))();
    return;
  }
  return;
}

