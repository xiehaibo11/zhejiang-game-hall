
/* v8::internal::AstValueFactory::GetTwoByteStringInternal(v8::internal::Vector<unsigned short
   const>) */

void v8::internal::AstValueFactory::GetTwoByteStringInternal
               (long param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = StringHasher::HashSequentialString<unsigned_short>
                    (param_2,(int)param_3,*(ulong *)(param_1 + 0x450));
  GetString(param_1,uVar1,0,param_2,
            -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1);
  return;
}

