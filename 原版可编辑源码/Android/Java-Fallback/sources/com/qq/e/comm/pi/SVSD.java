package com.qq.e.comm.pi;

public interface SVSD {
    android.os.IBinder onBind(android.content.Intent r1);

    void onConfigurationChanged(android.content.res.Configuration r1);

    void onCreate();

    void onDestroy();

    void onLowMemory();

    void onRebind(android.content.Intent r1);

    int onStartCommand(android.content.Intent r1, int r2, int r3);

    void onTaskRemoved(android.content.Intent r1);

    void onTrimMemory(int r1);

    boolean onUnbind(android.content.Intent r1);
}
