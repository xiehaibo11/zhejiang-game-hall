
void spAnimationState_disposeStatics(void)

{
  if (DAT_017875f0 != 0) {
    spAnimation_dispose();
  }
  DAT_017875f0 = 0;
  return;
}

