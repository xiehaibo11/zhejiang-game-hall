package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;
import android.util.Log;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.YmnSdkUserWrapper;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper;

@Deprecated
public class PlatformSdk {
    private static PlatformSdk instance;
    private static PlatformSdkListener listener;
    private static YmnCallback ymnCallback = new YmnCallback() {
        @Override
        public void onCallBack(int i, String str) {
            if (PlatformSdk.listener != null) {
                PlatformSdk.listener.onCallBack(i, str);
            }
        }
    };

    @Deprecated
    public static PlatformSdk getInstance() {
        if (instance == null) {
            instance = new PlatformSdk();
        }
        return instance;
    }

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static String getPropertie(String str) {
        return YmnProperties.getValue(str);
    }

    @Deprecated
    public static void runOnUiThread(Runnable runnable) {
        YmnSdkWrapper.runOnUiThread(runnable);
    }

    @Deprecated
    public static void setListener(PlatformSdkListener platformSdkListener) {
        listener = platformSdkListener;
        UserInterface.setListener(platformSdkListener);
        PaymentInterface.setListener(platformSdkListener);
    }

    @Deprecated
    public void dismissProgress() {
    }

    @Deprecated
    public String getPlatformId() {
        UserFeatureWrapper userDefault = YmnSdkUserWrapper.getUserDefault();
        if (userDefault != null) {
            return userDefault.a().getPluginId();
        }
        return null;
    }

    @Deprecated
    public String getPlatformName() {
        UserFeatureWrapper userDefault = YmnSdkUserWrapper.getUserDefault();
        if (userDefault != null) {
            return userDefault.a().getPluginName();
        }
        return null;
    }

    @Deprecated
    public String getPlatformVersion() {
        UserFeatureWrapper userDefault = YmnSdkUserWrapper.getUserDefault();
        if (userDefault != null) {
            return userDefault.a().getSdkVersion();
        }
        return null;
    }

    @Deprecated
    public String getSdkVersion() {
        return YmnSdk.getVersion();
    }

    @Deprecated
    protected void hookSelf(Activity activity) {
    }

    @Deprecated
    public void init(final Activity activity) {
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                YmnSdkWrapper.registCallback(PlatformSdk.ymnCallback);
                Log.i("ymnsdk", "PlatformSdk init: 当前线程：" + Thread.currentThread().getName());
                YmnSdkWrapper.initialize(activity);
                UserInterface.getInstance().init(activity);
                PaymentInterface.getInstance().init(activity);
            }
        });
    }

    @Deprecated
    public boolean isDebugMode() {
        return false;
    }

    @Deprecated
    protected void loadProperties() {
    }

    @Deprecated
    public void onActivityResult(int i, int i2, Intent intent) {
        YmnSdkWrapper.onActivityResult(i, i2, intent);
    }

    @Deprecated
    public void onNewIntent(Intent intent) {
        YmnSdkWrapper.onNewIntent(intent);
    }

    @Deprecated
    public void onPause() {
        YmnSdkWrapper.onPause();
    }

    @Deprecated
    public void onRestart() {
        YmnSdkWrapper.onRestart();
    }

    @Deprecated
    public void onResume() {
        YmnSdkWrapper.onResume();
    }

    @Deprecated
    public void onStart() {
        YmnSdkWrapper.onStart();
    }

    @Deprecated
    public void onStop() {
        YmnSdkWrapper.onStop();
    }

    @Deprecated
    public void release() {
        YmnSdkWrapper.onDestroy();
        UserInterface.getInstance().release();
        PaymentInterface.getInstance().release();
    }

    @Deprecated
    public void setDebugMode(boolean z) {
        YmnSdkWrapper.setDebugMode(z);
    }

    @Deprecated
    public void showProgress() {
    }
}
