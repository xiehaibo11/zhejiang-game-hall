
char * getSignalName(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "SIGHUP";
  case 2:
    return "SIGINT";
  case 3:
    return "SIGQUIT";
  case 4:
    return "SIGILL";
  case 5:
    return "SIGTRAP";
  case 6:
    return "SIGABRT";
  case 7:
    return "SIGBUS";
  case 8:
    return "SIGFPE";
  case 9:
    return "SIGKILL";
  case 10:
    return "SIGUSR1";
  case 0xb:
    return "SIGSEGV";
  case 0xc:
    return "SIGUSR2";
  case 0xd:
    return "SIGPIPE";
  case 0xe:
    return "SIGALRM";
  case 0xf:
    return "SIGTERM";
  case 0x10:
    return "SIGSTKFLT";
  case 0x11:
    return "SIGCHLD";
  case 0x12:
    return "SIGCONT";
  case 0x13:
    return "SIGSTOP";
  case 0x14:
    return "SIGTSTP";
  case 0x15:
    return "SIGTTIN";
  case 0x16:
    return "SIGTTOU";
  case 0x17:
    return "SIGURG";
  case 0x18:
    return "SIGXCPU";
  case 0x19:
    return "SIGXFSZ";
  case 0x1a:
    return "SIGVTALRM";
  case 0x1b:
    return "SIGPROF";
  case 0x1c:
    return "SIGWINCH";
  case 0x1d:
    return "SIGIO";
  default:
    return "?";
  }
}

