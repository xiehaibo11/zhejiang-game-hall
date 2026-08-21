
void FUN_015e7114(long param_1,byte *param_2)

{
  if ((*param_2 & 0xfd) != 0) {
    return;
  }
  v8::base::Semaphore::Signal(*(Semaphore **)(param_1 + 8));
  return;
}

