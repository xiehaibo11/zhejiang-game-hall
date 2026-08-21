
void setLogMode(int param_1)

{
  if (param_1 < 5) {
    log2Console(4,"CrashReport-Native","setLogMode %d current %d",param_1,currentMode);
  }
  currentMode = param_1;
  return;
}

