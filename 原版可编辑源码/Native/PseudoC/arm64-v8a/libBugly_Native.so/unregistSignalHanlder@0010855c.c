
void unregistSignalHanlder(void)

{
  if (DAT_0013f1d0 == '\x01') {
    DAT_0013f1d0 = 0;
    sigaction(8,(sigaction *)&DAT_0013f2d8,(sigaction *)0x0);
    sigaction(4,(sigaction *)&DAT_0013f258,(sigaction *)0x0);
    sigaction(0xb,(sigaction *)&DAT_0013f338,(sigaction *)0x0);
    sigaction(7,(sigaction *)&DAT_0013f2b8,(sigaction *)0x0);
    sigaction(6,(sigaction *)&DAT_0013f298,(sigaction *)0x0);
    sigaction(5,(sigaction *)&DAT_0013f278,(sigaction *)0x0);
    sigaction(3,(sigaction *)&DAT_0013f238,(sigaction *)0x0);
    sigaction(0x10,(sigaction *)&DAT_0013f3d8,(sigaction *)0x0);
    log2Console(3,"eup","Unregister signal handlers.");
    return;
  }
  return;
}

