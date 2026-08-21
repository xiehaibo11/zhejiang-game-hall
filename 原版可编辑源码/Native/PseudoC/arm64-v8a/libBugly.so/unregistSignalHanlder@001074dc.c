
void unregistSignalHanlder(void)

{
  if (DAT_0013e990 == '\0') {
    return;
  }
  DAT_0013e990 = 0;
  sigaction(8,(sigaction *)&DAT_0013e270,(sigaction *)0x0);
  sigaction(4,(sigaction *)&DAT_0013e1f0,(sigaction *)0x0);
  sigaction(0xb,(sigaction *)&DAT_0013e2d0,(sigaction *)0x0);
  sigaction(7,(sigaction *)&DAT_0013e250,(sigaction *)0x0);
  sigaction(6,(sigaction *)&DAT_0013e230,(sigaction *)0x0);
  sigaction(5,(sigaction *)&DAT_0013e210,(sigaction *)0x0);
  sigaction(3,(sigaction *)&DAT_0013e1d0,(sigaction *)0x0);
  sigaction(0x10,(sigaction *)&DAT_0013e370,(sigaction *)0x0);
  log2Console(3,"CrashReport-Native","Unregister signal handlers.");
  return;
}

