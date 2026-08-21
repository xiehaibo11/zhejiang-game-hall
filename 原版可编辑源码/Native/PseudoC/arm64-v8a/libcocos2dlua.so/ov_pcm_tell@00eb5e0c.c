
undefined8 ov_pcm_tell(long param_1)

{
  if (*(int *)(param_1 + 0xb0) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0xa8);
}

