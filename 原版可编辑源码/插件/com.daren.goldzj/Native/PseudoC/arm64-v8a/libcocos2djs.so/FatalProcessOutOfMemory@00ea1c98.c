
/* v8::internal::V8::FatalProcessOutOfMemory(v8::internal::Isolate*, char const*, bool) */

void v8::internal::V8::FatalProcessOutOfMemory(Isolate *param_1,char *param_2,bool param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_4990 [12];
  undefined1 auStack_4984 [4];
  undefined1 auStack_4980 [8656];
  undefined1 auStack_27b0 [8656];
  undefined1 auStack_5e0 [8];
  undefined1 auStack_5d8 [8];
  undefined1 auStack_5d0 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [8];
  undefined1 auStack_5b8 [8];
  undefined1 auStack_5b0 [8];
  undefined1 auStack_5a8 [8];
  undefined1 auStack_5a0 [8];
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [8];
  undefined1 auStack_588 [8];
  undefined1 auStack_580 [8];
  undefined1 auStack_578 [8];
  undefined1 auStack_570 [8];
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [8];
  undefined1 auStack_558 [8];
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined1 auStack_540 [8];
  undefined1 *local_538;
  undefined1 *local_530;
  undefined1 *local_528;
  undefined1 *local_520;
  undefined1 *local_518;
  undefined1 *local_510;
  undefined1 *local_508;
  undefined1 *local_500;
  undefined1 *local_4f8;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  undefined1 *local_4e0;
  undefined1 *local_4d8;
  undefined1 *local_4d0;
  undefined1 *local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined1 auStack_458 [516];
  undefined1 auStack_254 [516];
  undefined1 auStack_38 [8];
  
  if ((param_1 == (Isolate *)0x0) &&
     (param_1 = (Isolate *)base::Thread::GetThreadLocal(Isolate::isolate_key_),
     param_1 == (Isolate *)0x0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Fatal process out of memory: %s",param_2);
  }
  memset(auStack_254,0,0x201);
  memset(auStack_458,0,0x201);
  local_538 = auStack_38;
  local_530 = auStack_540;
  local_528 = auStack_548;
  local_4d8 = auStack_598;
  local_520 = auStack_550;
  local_518 = auStack_558;
  local_510 = auStack_560;
  local_4e8 = auStack_588;
  local_4d0 = auStack_5a0;
  local_4c8 = auStack_5a8;
  local_4a8 = auStack_5c8;
  local_4e0 = auStack_590;
  local_508 = auStack_568;
  local_500 = auStack_570;
  local_4f8 = auStack_578;
  local_4f0 = auStack_580;
  local_4c0 = auStack_5b0;
  local_4b8 = auStack_5b8;
  local_4b0 = auStack_5c0;
  local_4a0 = auStack_5d0;
  local_498 = auStack_5d8;
  local_490 = auStack_5e0;
  memset(auStack_27b0,0,0x21d0);
  local_488 = auStack_27b0;
  memset(auStack_4980,0,0x21d0);
  local_478 = auStack_4984;
  local_480 = auStack_4980;
  local_470 = auStack_254;
  local_468 = auStack_458;
  local_460 = auStack_4990;
  uVar1 = Heap::HasBeenSetUp((Heap *)(param_1 + 0x8850));
  if ((uVar1 & 1) != 0) {
    Heap::RecordStats((Heap *)(param_1 + 0x8850),(HeapStats *)&local_538,false);
    puVar2 = (undefined1 *)__strchr_chk(auStack_254,10,0x201);
    if ((puVar2 == (undefined1 *)0x0) || (puVar2[1] == '\0')) {
      puVar2 = auStack_254;
    }
    PrintF("\n<--- Last few GCs --->\n%s\n",puVar2);
    PrintF("\n<--- JS stacktrace --->\n%s\n",auStack_458);
  }
  Utils::ReportOOMFailure(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("API fatal error handler returned after process out of memory");
}

