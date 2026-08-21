package com.bianfeng.ymnsdk.sysfunc.screenshot;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi;
import com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager;
import com.bianfeng.ymnsdk.util.Logger;

public class ScreenShotService extends Service {
    private ScreenShotApi.ScreenShotCallback callback;
    private ScreenShotLinstenManager manager;

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    public static void start(Context context) {
        context.startService(new Intent(context, (Class<?>) ScreenShotService.class));
    }

    public static void stop(Context context) {
        context.stopService(new Intent(context, (Class<?>) ScreenShotService.class));
    }

    @Override
    public void onCreate() {
        super.onCreate();
        Logger.i("开启了服务");
        ScreenShotApi.ScreenShotCallback callback = ScreenShotApi.getInstance().getCallback();
        this.callback = callback;
        if (callback != null) {
            callback.onStart();
            ScreenShotLinstenManager screenShotLinstenManager = ScreenShotLinstenManager.getInstance(this);
            this.manager = screenShotLinstenManager;
            screenShotLinstenManager.startListen();
            this.manager.setListener(new ScreenShotLinstenManager.OnScreenShotListener() {
                @Override
                public void onShotSuccess(String str) {
                    Logger.i("onShotSuccess--" + str);
                    if (ScreenShotService.this.callback != null) {
                        ScreenShotService.this.callback.onShot(str);
                    }
                }
            });
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        Logger.i("onDestroy: ");
        ScreenShotLinstenManager screenShotLinstenManager = this.manager;
        if (screenShotLinstenManager != null) {
            screenShotLinstenManager.stopListen();
        }
    }
}
