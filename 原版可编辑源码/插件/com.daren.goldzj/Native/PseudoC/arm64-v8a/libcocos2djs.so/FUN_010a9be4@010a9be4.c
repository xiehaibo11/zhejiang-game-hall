
void FUN_010a9be4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_010a9bf0();
  v8::internal::Factory::NewUninitializedFixedArray
            ((Factory *)((ulong)*(uint *)(lVar1 + 4) << 0x20),param_3);
                    /* WARNING: Subroutine does not return */
  FUN_010a9c0c();
}

