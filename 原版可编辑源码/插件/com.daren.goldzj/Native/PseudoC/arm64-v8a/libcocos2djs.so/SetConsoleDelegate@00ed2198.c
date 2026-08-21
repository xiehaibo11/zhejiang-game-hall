
/* v8::debug::SetConsoleDelegate(v8::Isolate*, v8::debug::ConsoleDelegate*) */

void v8::debug::SetConsoleDelegate(Isolate *param_1,ConsoleDelegate *param_2)

{
  *(ConsoleDelegate **)(param_1 + 0xc708) = param_2;
  return;
}

