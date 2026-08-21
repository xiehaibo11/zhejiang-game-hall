
/* v8::internal::JSArray::WouldChangeReadOnlyLength(v8::internal::Handle<v8::internal::JSArray>,
   unsigned int) */

undefined8 v8::internal::JSArray::WouldChangeReadOnlyLength(ulong *param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = *(uint *)(*param_1 + 0xb);
  if ((uVar2 & 1) == 0) {
    if (-1 < (int)uVar2) {
      uVar2 = uVar2 >> 1;
joined_r0x0110da98:
      if (uVar2 <= param_2) {
        uVar1 = HasReadOnlyLength();
        return uVar1;
      }
      return 0;
    }
  }
  else {
    uVar4 = *param_1 & 0xffffffff00000000;
    uVar3 = uVar4 | uVar2;
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x42) {
      dVar5 = *(double *)(uVar3 + 3);
      dVar6 = dVar5 + 4503599627370496.0;
      if (((ulong)dVar6 >> 0x20 == 0x43300000) && (dVar5 == (double)((ulong)dVar6 & 0xffffffff))) {
        uVar2 = SUB84(dVar6,0);
        goto joined_r0x0110da98;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayLength(&length)");
}

