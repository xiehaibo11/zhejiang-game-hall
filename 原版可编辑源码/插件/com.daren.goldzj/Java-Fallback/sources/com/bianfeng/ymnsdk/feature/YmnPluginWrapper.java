package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.ymnsdk.entity.PluginLocalState;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.SystemUtil;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public abstract class YmnPluginWrapper extends YmnPlugin {
    private Activity activity;
    private YmnCallback callback;
    private Map<String, String> cfgs;
    private Context context;
    private volatile boolean inited;
    private volatile boolean initing;
    private volatile boolean injected;
    private List<YmnCallbackInterceptor> interceptors;
    private Map<String, String> loginedData;
    private Map<String, String> params;
    private int state;
    private volatile boolean triggered;

    static class a {
        static final int[] a = null;

        static {
            a = new int[YPlugin.Policy.values().length];
            a[YPlugin.Policy.LAZY.ordinal()] = 1;     // Catch: NoSuchFieldError -> L8
        L12:
            a[YPlugin.Policy.REMOTE.ordinal()] = 2;     // Catch: NoSuchFieldError -> L9
        L14:
            a[YPlugin.Policy.FORCE.ordinal()] = 3;     // Catch: NoSuchFieldError -> L10
        L18:
            a[YPlugin.Policy.TRIGGER.ordinal()] = 4;     // Catch: NoSuchFieldError -> L11
            return;
        }
    }

    public YmnPluginWrapper() {
        this.state = -10;
    }

    public void addCallbackInterceptor(YmnCallbackInterceptor r2) {
        if (this.interceptors != null) goto L5;
        this.interceptors = new ArrayList();
    L5:
        this.interceptors.add(r2);
    }

    public boolean canDoInit() {
        if (this.initing == false) goto L7;
        Logger.w(getPluginName() + " on initing , ignore invoke " + this.context);
        return false;
    L7:
        if (this.inited == false) goto L10;
        Logger.w(getPluginName() + " already inited , ignore invoke " + this.context);
        return false;
    L10:
        return true;
    }

    public void checkState(PluginLocalState r3) {
        int r0 = a.a[getPolicy().ordinal()];
        if (r0 != 1) goto L5;
        this.state = r3.getState(this);
        return;
    L5:
        if (r0 != 2) goto L7;
        this.state = -2;
        return;
    L7:
        if (r0 != 3) goto L9;
        this.state = 1;
        return;
    L9:
        if (r0 == 4) goto L12;
        return;
    L12:
        if (this.triggered == false) goto L14;
        this.state = 1;
        return;
    L14:
        this.state = 0;
    }

    public Activity getActivity() {
        if (this.activity != null) goto L6;
        this.activity = (Activity) getContext();
    L6:
        return this.activity;
    }

    public final Map<String, String> getCfgs() {
        return this.cfgs;
    }

    public <T extends Context> T getContext() {
        return (T) this.context;
    }

    public Map<String, String> getLoginedData() {
        return this.loginedData;
    }

    public String getMetaData(String r1) {
        return YmnAppContext.getMetaDataValueString(r1);
    }

    public final Map<String, String> getParams() {
        return this.params;
    }

    public String getPropertie(String r1) {
        return YmnProperties.getPluginValue(this, r1);
    }

    public String getServerHost() {
        return e.c(getContext());
    }

    public int getState() {
        return this.state;
    }

    public String inited() {
        if (isInited() == false) goto L6;
        sendResult(100, "初始化成功" + getPluginName());
        return "true";
    L6:
        sendResult(101, "初始化失败" + getPluginName());
        return "flase";
    }

    public boolean isCheckedState() {
        int r0 = this.state;
        if (r0 != (-10)) goto L5;
    L7:
        return false;
    L5:
        if (r0 == (-2)) goto L7;
        return true;
    }

    @Override
    public boolean isDebugMode() {
        return false;
    }

    public boolean isInited() {
        return this.inited;
    }

    public boolean isIniting() {
        return this.initing;
    }

    public boolean isInjected() {
        return this.injected;
    }

    public boolean isScreenLandscape() {
        if ((getContext() instanceof Activity) == true) goto L5;
        return true;
    L5:
        return SystemUtil.isScreenLandscape((Activity) getContext());
    }

    public boolean isWorking() {
        if (this.state == 1) goto L7;
        return false;
    L7:
        return true;
    }

    @Override
    public void onActivityResult(int r1, int r2, Intent r3) {
    }

    public void onContextChanged(Context r1) {
    }

    public void onCreate(Activity r1) {
        this.activity = r1;
    }

    @Override
    public void onDestroy() {
    }

    @Override
    public void onInit(Context r1) {
        this.context = r1;
    }

    @Override
    public void onLogin(Map<String, String> r1) {
        this.loginedData = r1;
    }

    @Override
    public void onNewIntent(Intent r1) {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onPay(Map<String, String> r1) {
    }

    public void onRequestPermissionsResult(int r1, String[] r2, int[] r3) {
    }

    @Override
    public void onRestart() {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void onWindowFocusChanged(boolean r1, Activity r2) {
    }

    public void registCallback(YmnCallback r1) {
        this.callback = r1;
    }

    public void sendResult(int r5, String r6) {
        List<YmnCallbackInterceptor> r0 = this.interceptors;
        if (r0 != null) goto L5;
    L14:
        YmnCallback r02 = this.callback;
        if (r02 == null) goto L20;
        r02.onCallBack(r5, r6);
        return;
    L20:
        return;
    L5:
        if (r0.isEmpty() == true) goto L14;
        Iterator<YmnCallbackInterceptor> r03 = this.interceptors.iterator();
        YmnCallbackInterceptor r1 = r03.next();
        YmnCallbackInterceptor r2 = r1;
    L8:
        if (r03.hasNext() == false) goto L10;
        YmnCallbackInterceptor r3 = r03.next();
        r2.setNext(r3);
        r2 = r3;
        goto L8
    L10:
        YmnCallback r04 = this.callback;
        if (r04 == null) goto L13;
        r2.setNext(r04);
    L13:
        r1.onCallBack(r5, r6);
    }

    public void sendResultWithoutInterceptors(int r2, String r3) {
        YmnCallback r0 = this.callback;
        if (r0 == null) goto L6;
        r0.onCallBack(r2, r3);
        return;
    }

    public final void setCfgs(Map<String, String> r1) {
        this.cfgs = r1;
    }

    @Override
    public void setDebugMode(boolean r1) {
    }

    public void setInited(boolean r1) {
        this.inited = r1;
    }

    public void setIniting(boolean r1) {
        this.initing = r1;
    }

    public void setInjected(boolean r1) {
        this.injected = r1;
    }

    public final void setParams(Map<String, String> r1) {
        this.params = r1;
    }

    public void setTriggered(boolean r1) {
        this.triggered = r1;
    }

    public String toString() {
        return String.format("%s {%s, inited = %b, initing = %b, class = %s}", new Object[]{getPluginName(), IPlugin.STATE_NAME.get(Integer.valueOf(this.state)), Boolean.valueOf(this.inited), Boolean.valueOf(this.initing), getClass().getName()});
    }

    public void tryRunOnUiThreadOrJustRun(Runnable r2) {
        Activity r0 = this.activity;
        if (r0 == null) goto L5;
        r0.runOnUiThread(r2);
        return;
    L5:
        r2.run();
    }

    public void updateContext(Context r3) {
        this.context = r3;
        onContextChanged(r3);     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        Logger.i("updateContext" + e.getMessage());
    }

    public void sendResult(int r8, String r9, String r10) {
        YmnDataFunUtils.getInstance().pluginFinish(r10, getPluginId(), getPluginVersion() + "", getSdkVersion(), r8, r9);
        sendResult(r8, r9);
    }

    public void sendResult(int r2, Object r3, Object r4) {
        sendResult(r2, new YmnCallback.a(r3, r4).toString());
    }

    public void sendResult(int r8, Object r9, Object r10, String r11) {
        YmnDataFunUtils.getInstance().pluginFinish(r11, getPluginId(), getPluginVersion() + "", getSdkVersion(), r8, r9.toString());     // Catch: Exception -> L5
    L3:
        sendResult(r8, r9, r10);
    }
}
