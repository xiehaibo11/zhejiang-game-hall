
/* v8::internal::Isolate::GetTurboStatistics() */

undefined8 * v8::internal::Isolate::GetTurboStatistics(void)

{
  long in_x0;
  ulong in_x1;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(in_x0 + 0xb7c8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = Malloced::operator_new((Malloced *)0x98,in_x1);
    puVar2[0x12] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar1 = puVar2 + 0xc;
    puVar2[0xd] = 0;
    *puVar1 = 0;
    puVar2[8] = puVar2 + 9;
    puVar2[0xd] = 0;
    *puVar1 = 0;
    puVar2[0xb] = puVar1;
    base::Mutex::Mutex((Mutex *)(puVar2 + 0xe));
    *(undefined8 **)(in_x0 + 0xb7c8) = puVar2;
  }
  return puVar2;
}

