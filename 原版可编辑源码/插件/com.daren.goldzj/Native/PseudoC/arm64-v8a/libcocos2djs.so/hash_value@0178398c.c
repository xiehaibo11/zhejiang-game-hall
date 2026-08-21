
/* v8::internal::compiler::hash_value(v8::internal::compiler::S8x16ShuffleParameter const&) */

void v8::internal::compiler::hash_value(S8x16ShuffleParameter *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = base::hash_combine(0,(ulong)(byte)*param_1);
  uVar2 = base::hash_value(0);
  uVar1 = base::hash_combine(uVar1,uVar2);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[1]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[2]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[3]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[4]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[5]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[6]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[7]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[8]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[9]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[10]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[0xb]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[0xc]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[0xd]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[0xe]);
  uVar1 = base::hash_value(uVar1);
  uVar1 = base::hash_combine(uVar2,uVar1);
  uVar2 = base::hash_combine(0,(ulong)(byte)param_1[0xf]);
  uVar1 = base::hash_value(uVar1);
  base::hash_combine(uVar2,uVar1);
  return;
}

