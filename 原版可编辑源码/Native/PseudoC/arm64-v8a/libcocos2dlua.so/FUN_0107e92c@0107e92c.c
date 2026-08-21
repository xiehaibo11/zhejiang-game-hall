
void FUN_0107e92c(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x40) = 0;
                    /* try { // try from 0107e934 to 0117eb6b has its CatchHandler @ 0107e934
                       catch() { ... } // from try @ 0107e934 with catch @ 0107e934
                       catch() { ... } // from try @ 0107ebd4 with catch @ 0107e934 */
  return;
}

