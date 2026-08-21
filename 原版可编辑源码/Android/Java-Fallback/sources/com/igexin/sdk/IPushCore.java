package com.igexin.sdk;

public interface IPushCore {
    void onActivityConfigurationChanged(android.app.Activity r1, android.content.res.Configuration r2);

    boolean onActivityCreateOptionsMenu(android.app.Activity r1, android.view.Menu r2);

    void onActivityDestroy(android.app.Activity r1);

    boolean onActivityKeyDown(android.app.Activity r1, int r2, android.view.KeyEvent r3);

    void onActivityNewIntent(android.app.Activity r1, android.content.Intent r2);

    void onActivityPause(android.app.Activity r1);

    void onActivityRestart(android.app.Activity r1);

    void onActivityResume(android.app.Activity r1);

    void onActivityStart(android.app.Activity r1, android.content.Intent r2);

    void onActivityStop(android.app.Activity r1);

    android.os.IBinder onServiceBind(android.content.Intent r1);

    void onServiceDestroy();

    int onServiceStartCommand(android.content.Intent r1, int r2, int r3);

    boolean start(android.content.Context r1);
}
