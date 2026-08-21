
void uv_close(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    uv__async_close(param_1);
    break;
  case 2:
    uv__check_close(param_1);
    break;
  case 3:
    uv__fs_event_close(param_1);
    break;
  case 4:
    uv__fs_poll_close(param_1);
    break;
  case 6:
    uv__idle_close(param_1);
    break;
  case 7:
    uv__pipe_close(param_1);
    break;
  case 8:
    uv__poll_close(param_1);
    break;
  case 9:
    uv__prepare_close(param_1);
    break;
  case 10:
    uv__process_close(param_1);
    break;
  case 0xc:
    uv__tcp_close(param_1);
    break;
  case 0xd:
    uv__timer_close(param_1);
    break;
  case 0xe:
    uv__stream_close(param_1);
    break;
  case 0xf:
    uv__udp_close(param_1);
    break;
  case 0x10:
    uv__signal_close(param_1);
    return;
  }
  uv__make_close_pending(param_1);
  return;
}

