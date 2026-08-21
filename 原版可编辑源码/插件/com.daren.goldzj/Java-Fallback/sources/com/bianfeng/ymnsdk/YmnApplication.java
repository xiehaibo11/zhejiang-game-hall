package com.bianfeng.ymnsdk;

import android.app.Application;
import android.util.Log;
import net.grandcentrix.tray.AppPreferences;

public class YmnApplication extends Application {
    public YmnApplication() {
    }

    @Override
    public void onCreate() {
        super.onCreate();
        AppPreferences r0 = new AppPreferences(this);
        if (r0.getString("ymnInit", "false").equals("false") == false) goto L6;
        Log.e("YmnApplication", "onCreate");
        YmnSdkWrapper.innerInit(this);
        r0.put("ymnInit", "true");
        return;
    }
}
