package com.vivo.push;

public interface IPushClientFactory {
    com.vivo.push.d.z createReceiveTask(com.vivo.push.o r1);

    com.vivo.push.o createReceiverCommand(android.content.Intent r1);

    com.vivo.push.l createTask(com.vivo.push.o r1);
}
