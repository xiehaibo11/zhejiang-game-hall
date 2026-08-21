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
        public void onCallBack(int code, String msg) {
            if (PlatformSdk.listener != null) {
                PlatformSdk.listener.onCallBack(code, msg);
            }
        }
    };

    @Deprecated
    public static void setListener(PlatformSdkListener listener2) {
        listener = listener2;
        UserInterface.setListener(listener2);
        PaymentInterface.setListener(listener2);
    }

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static PlatformSdk getInstance() {
        if (instance == null) {
            instance = new PlatformSdk();
        }
        return instance;
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
    protected void hookSelf(Activity activity) {
    }

    @Deprecated
    protected void loadProperties() {
    }

    @Deprecated
    public void onStart() {
        YmnSdkWrapper.onStart();
    }

    @Deprecated
    public void onRestart() {
        YmnSdkWrapper.onRestart();
    }

    @Deprecated
    public void onPause() {
        YmnSdkWrapper.onPause();
    }

    @Deprecated
    public void onResume() {
        YmnSdkWrapper.onResume();
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
    public void onNewIntent(Intent intent) {
        YmnSdkWrapper.onNewIntent(intent);
    }

    @Deprecated
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        YmnSdkWrapper.onActivityResult(requestCode, resultCode, data);
    }

    @Deprecated
    public String getSdkVersion() {
        return YmnSdk.getVersion();
    }

    @Deprecated
    public String getPlatformId() {
        UserFeatureWrapper wrapper = YmnSdkUserWrapper.getUserDefault();
        if (wrapper != null) {
            return wrapper.a().getPluginId();
        }
        return null;
    }

    @Deprecated
    public String getPlatformName() {
        UserFeatureWrapper wrapper = YmnSdkUserWrapper.getUserDefault();
        if (wrapper != null) {
            return wrapper.a().getPluginName();
        }
        return null;
    }

    @Deprecated
    public String getPlatformVersion() {
        UserFeatureWrapper wrapper = YmnSdkUserWrapper.getUserDefault();
        if (wrapper != null) {
            return wrapper.a().getSdkVersion();
        }
        return null;
    }

    @Deprecated
    public void showProgress() {
    }

    @Deprecated
    public void dismissProgress() {
    }

    @Deprecated
    public boolean isDebugMode() {
        return false;
    }

    @Deprecated
    public void setDebugMode(boolean debug) {
        YmnSdkWrapper.setDebugMode(debug);
    }

    @Deprecated
    public static String getPropertie(String key) {
        return YmnProperties.getValue(key);
    }

    @Deprecated
    public static void runOnUiThread(Runnable runnable) {
        YmnSdkWrapper.runOnUiThread(runnable);
    }
}
