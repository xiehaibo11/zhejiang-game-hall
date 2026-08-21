package com.bianfeng.ymnsdk;

import android.app.Application;
import android.content.Context;
import android.support.multidex.MultiDex;
import android.util.Log;
import com.sigmob.sdk.base.mta.PointCategory;
import java.lang.reflect.Method;
import net.grandcentrix.tray.AppPreferences;

/* JADX INFO: loaded from: classes.dex */
public class YmnApplication extends Application {
    @Override // android.content.ContextWrapper
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        MultiDex.install(base);
    }

    @Override // android.app.Application
    public void onCreate() {
        super.onCreate();
        Log.i("ymnsdk", "YmnApplication--->" + Thread.currentThread().getName());
        AppPreferences appPreferences = new AppPreferences(this);
        String inInit = appPreferences.getString("ymnInit", "false");
        if (inInit.equals("false")) {
            Log.e("YmnApplication", "onCreate");
            YmnSdk.innerInit(this);
            appPreferences.put("ymnInit", "true");
        }
        try {
            Method localMethod = Class.forName(getPackageName() + ".R").getDeclaredMethod(PointCategory.INIT, Context.class);
            localMethod.setAccessible(true);
            localMethod.invoke(null, this);
        } catch (Exception e) {
            System.out.println("PlatformApplication can't find init method on R class");
        }
    }
}
