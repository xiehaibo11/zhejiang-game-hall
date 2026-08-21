
/* v8::internal::trap_handler::CreateHandlerData(unsigned long, unsigned long, unsigned long,
   v8::internal::trap_handler::ProtectedInstructionData const*) */

ulong * v8::internal::trap_handler::CreateHandlerData
                  (ulong param_1,ulong param_2,ulong param_3,ProtectedInstructionData *param_4)

{
  ulong *puVar1;
  
  puVar1 = malloc(param_3 * 8 + 0x18);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    memcpy(puVar1 + 3,param_4,param_3 * 8);
  }
  return puVar1;
}

