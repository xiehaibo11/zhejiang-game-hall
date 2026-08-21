
void uv_send_buffer_size(undefined8 param_1,undefined8 param_2)

{
  uv__socket_sockopt(param_1,7,param_2);
  return;
}

