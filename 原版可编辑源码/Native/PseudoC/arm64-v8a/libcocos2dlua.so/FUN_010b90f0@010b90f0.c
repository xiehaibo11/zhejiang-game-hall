
void FUN_010b90f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
                    /* WARNING: Could not recover jumptable at 0x010b9118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 010b9118 to 011b915b has its CatchHandler @ 010b9118
                       catch() { ... } // from try @ 010b9118 with catch @ 010b9118
                       catch() { ... } // from try @ 010b9170 with catch @ 010b9118 */
  (**(code **)(*(long *)(lVar1 + 0x300) + 8))
            (*(undefined8 *)(lVar1 + 0xb8),param_1,*(undefined4 *)(lVar1 + 0x278),FUN_010ba0e0,0);
  return;
}

