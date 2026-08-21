package com.bytedance.pangle.service;

public interface a {
    void attach(com.bytedance.pangle.plugin.Plugin r1);

    android.os.IBinder onBind(android.content.Intent r1);

    void onCreate();

    void onDestroy();

    int onStartCommand(android.content.Intent r1, int r2, int r3);

    boolean onUnbind(android.content.Intent r1);
}
