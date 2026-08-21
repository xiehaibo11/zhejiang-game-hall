package com.bianfeng.platform;

import android.app.Activity;
import android.content.Intent;
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
    private static YmnCallback ymnCallback;

    static {
        ymnCallback = new 1();
    }

    public PlatformSdk() {
    }

    static PlatformSdkListener access$000() {
        return listener;
    }

    static YmnCallback access$100() {
        return ymnCallback;
    }

    @Deprecated
    public static PlatformSdk getInstance() {
        if (instance != null) goto L6;
        instance = new PlatformSdk();
    L6:
        return instance;
    }

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static String getPropertie(String r0) {
        return YmnProperties.getValue(r0);
    }

    @Deprecated
    public static void runOnUiThread(Runnable r0) {
        YmnSdkWrapper.runOnUiThread(r0);
    }

    @Deprecated
    public static void setListener(PlatformSdkListener r0) {
        listener = r0;
        UserInterface.setListener(r0);
        PaymentInterface.setListener(r0);
    }

    @Deprecated
    public void dismissProgress() {
    }

    @Deprecated
    public String getPlatformId() {
        UserFeatureWrapper r0 = YmnSdkUserWrapper.getUserDefault();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.a().getPluginId();
    }

    @Deprecated
    public String getPlatformName() {
        UserFeatureWrapper r0 = YmnSdkUserWrapper.getUserDefault();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.a().getPluginName();
    }

    @Deprecated
    public String getPlatformVersion() {
        UserFeatureWrapper r0 = YmnSdkUserWrapper.getUserDefault();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.a().getSdkVersion();
    }

    @Deprecated
    public String getSdkVersion() {
        return YmnSdk.getVersion();
    }

    @Deprecated
    protected void hookSelf(Activity r1) {
    }

    @Deprecated
    public void init(final Activity r2) {
        r2.runOnUiThread(new 2(this, r2));
    }

    @Deprecated
    public boolean isDebugMode() {
        return false;
    }

    @Deprecated
    protected void loadProperties() {
    }

    @Deprecated
    public void onActivityResult(int r1, int r2, Intent r3) {
        YmnSdkWrapper.onActivityResult(r1, r2, r3);
    }

    @Deprecated
    public void onNewIntent(Intent r1) {
        YmnSdkWrapper.onNewIntent(r1);
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
    public void setDebugMode(boolean r1) {
        YmnSdkWrapper.setDebugMode(r1);
    }

    @Deprecated
    public void showProgress() {
    }
}
