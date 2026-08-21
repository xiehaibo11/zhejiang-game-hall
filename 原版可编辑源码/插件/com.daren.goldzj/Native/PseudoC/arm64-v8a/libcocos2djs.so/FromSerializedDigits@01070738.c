
/* v8::internal::BigInt::FromSerializedDigits(v8::internal::Isolate*, unsigned int,
   v8::internal::Vector<unsigned char const>) */

long * v8::internal::BigInt::FromSerializedDigits(Factory *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = param_2 >> 1 & 0x3fffffff;
  uVar1 = uVar2 + 7 >> 3;
  plVar3 = (long *)Factory::NewBigInt(param_1,uVar1,0);
  *(uint *)(*plVar3 + 3) = param_2 & 1 | uVar1 << 1;
  lVar4 = *plVar3;
  memcpy((void *)(lVar4 + 7),param_3,(ulong)uVar2);
  memset((void *)(lVar4 + 7 + (ulong)uVar2),0,(long)(int)((uVar2 + 7 & 0x7ffffff8) - uVar2));
  MutableBigInt::Canonicalize(*plVar3);
  return plVar3;
}

