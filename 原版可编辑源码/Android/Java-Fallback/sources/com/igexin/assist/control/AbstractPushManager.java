package com.igexin.assist.control;

public interface AbstractPushManager {
    java.lang.String getToken(android.content.Context r1);

    void register(android.content.Context r1);

    void setSilentTime(android.content.Context r1, int r2, int r3);

    void turnOffPush(android.content.Context r1);

    void turnOnPush(android.content.Context r1);

    void unregister(android.content.Context r1);
}
