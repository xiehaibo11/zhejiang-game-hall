
void TIFFReadEXIFDirectory(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _TIFFGetExifFields();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117f3c with catch @ 01117f90
                        */
                    /* try { // try from 01117f94 to 01217f9b has its CatchHandler @ 01117fa4 */
                    /* try { // try from 01117f9c to 01217fa7 has its CatchHandler @ 01117eac */
  TIFFReadCustomDirectory(param_1,param_2,uVar1);
  return;
}

