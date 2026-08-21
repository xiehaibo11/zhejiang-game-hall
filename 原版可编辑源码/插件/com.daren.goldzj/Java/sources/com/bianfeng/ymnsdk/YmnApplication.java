package com.bianfeng.ymnsdk;

import android.app.Application;
import android.util.Log;
import net.grandcentrix.tray.AppPreferences;

public class YmnApplication extends Application {
    @Override
    public void onCreate() {
        super.onCreate();
        AppPreferences appPreferences = new AppPreferences(this);
        if (appPreferences.getString("ymnInit", "false").equals("false")) {
            Log.e("YmnApplication", "onCreate");
            YmnSdkWrapper.innerInit(this);
            appPreferences.put("ymnInit", "true");
        }
    }
}
