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
    private int state = -10;
    private volatile boolean triggered;

    static class a {
        static final int[] a = new int[YPlugin.Policy.values().length];

        static {
            try {
                a[YPlugin.Policy.LAZY.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[YPlugin.Policy.REMOTE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[YPlugin.Policy.FORCE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[YPlugin.Policy.TRIGGER.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    public void addCallbackInterceptor(YmnCallbackInterceptor ymnCallbackInterceptor) {
        if (this.interceptors == null) {
            this.interceptors = new ArrayList();
        }
        this.interceptors.add(ymnCallbackInterceptor);
    }

    public boolean canDoInit() {
        if (this.initing) {
            Logger.w(getPluginName() + " on initing , ignore invoke " + this.context);
            return false;
        }
        if (!this.inited) {
            return true;
        }
        Logger.w(getPluginName() + " already inited , ignore invoke " + this.context);
        return false;
    }

    public void checkState(PluginLocalState pluginLocalState) {
        int i = a.a[getPolicy().ordinal()];
        if (i == 1) {
            this.state = pluginLocalState.getState(this);
            return;
        }
        if (i == 2) {
            this.state = -2;
            return;
        }
        if (i == 3) {
            this.state = 1;
        } else {
            if (i != 4) {
                return;
            }
            if (this.triggered) {
                this.state = 1;
            } else {
                this.state = 0;
            }
        }
    }

    public Activity getActivity() {
        if (this.activity == null) {
            this.activity = (Activity) getContext();
        }
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

    public String getMetaData(String str) {
        return YmnAppContext.getMetaDataValueString(str);
    }

    public final Map<String, String> getParams() {
        return this.params;
    }

    public String getPropertie(String str) {
        return YmnProperties.getPluginValue(this, str);
    }

    public String getServerHost() {
        return e.c(getContext());
    }

    public int getState() {
        return this.state;
    }

    public String inited() {
        if (isInited()) {
            sendResult(100, "初始化成功" + getPluginName());
            return "true";
        }
        sendResult(101, "初始化失败" + getPluginName());
        return "flase";
    }

    public boolean isCheckedState() {
        int i = this.state;
        return (i == -10 || i == -2) ? false : true;
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
        if (getContext() instanceof Activity) {
            return SystemUtil.isScreenLandscape((Activity) getContext());
        }
        return true;
    }

    public boolean isWorking() {
        return this.state == 1;
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
    }

    public void onContextChanged(Context context) {
    }

    public void onCreate(Activity activity) {
        this.activity = activity;
    }

    @Override
    public void onDestroy() {
    }

    @Override
    public void onInit(Context context) {
        this.context = context;
    }

    @Override
    public void onLogin(Map<String, String> map) {
        this.loginedData = map;
    }

    @Override
    public void onNewIntent(Intent intent) {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onPay(Map<String, String> map) {
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
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
    public void onWindowFocusChanged(boolean z, Activity activity) {
    }

    public void registCallback(YmnCallback ymnCallback) {
        this.callback = ymnCallback;
    }

    public void sendResult(int i, String str) {
        List<YmnCallbackInterceptor> list = this.interceptors;
        if (list == null || list.isEmpty()) {
            YmnCallback ymnCallback = this.callback;
            if (ymnCallback != null) {
                ymnCallback.onCallBack(i, str);
                return;
            }
            return;
        }
        Iterator<YmnCallbackInterceptor> it = this.interceptors.iterator();
        YmnCallbackInterceptor next = it.next();
        YmnCallbackInterceptor ymnCallbackInterceptor = next;
        while (it.hasNext()) {
            YmnCallbackInterceptor next2 = it.next();
            ymnCallbackInterceptor.setNext(next2);
            ymnCallbackInterceptor = next2;
        }
        YmnCallback ymnCallback2 = this.callback;
        if (ymnCallback2 != null) {
            ymnCallbackInterceptor.setNext(ymnCallback2);
        }
        next.onCallBack(i, str);
    }

    public void sendResultWithoutInterceptors(int i, String str) {
        YmnCallback ymnCallback = this.callback;
        if (ymnCallback != null) {
            ymnCallback.onCallBack(i, str);
        }
    }

    public final void setCfgs(Map<String, String> map) {
        this.cfgs = map;
    }

    @Override
    public void setDebugMode(boolean z) {
    }

    public void setInited(boolean z) {
        this.inited = z;
    }

    public void setIniting(boolean z) {
        this.initing = z;
    }

    public void setInjected(boolean z) {
        this.injected = z;
    }

    public final void setParams(Map<String, String> map) {
        this.params = map;
    }

    public void setTriggered(boolean z) {
        this.triggered = z;
    }

    public String toString() {
        return String.format("%s {%s, inited = %b, initing = %b, class = %s}", getPluginName(), IPlugin.STATE_NAME.get(Integer.valueOf(this.state)), Boolean.valueOf(this.inited), Boolean.valueOf(this.initing), getClass().getName());
    }

    public void tryRunOnUiThreadOrJustRun(Runnable runnable) {
        Activity activity = this.activity;
        if (activity != null) {
            activity.runOnUiThread(runnable);
        } else {
            runnable.run();
        }
    }

    public void updateContext(Context context) {
        this.context = context;
        try {
            onContextChanged(context);
        } catch (Exception e) {
            Logger.i("updateContext" + e.getMessage());
        }
    }

    public void sendResult(int i, String str, String str2) {
        YmnDataFunUtils.getInstance().pluginFinish(str2, getPluginId(), getPluginVersion() + "", getSdkVersion(), i, str);
        sendResult(i, str);
    }

    public void sendResult(int i, Object obj, Object obj2) {
        sendResult(i, new YmnCallback.a(obj, obj2).toString());
    }

    public void sendResult(int i, Object obj, Object obj2, String str) {
        try {
            YmnDataFunUtils.getInstance().pluginFinish(str, getPluginId(), getPluginVersion() + "", getSdkVersion(), i, obj.toString());
        } catch (Exception unused) {
        }
        sendResult(i, obj, obj2);
    }
}
