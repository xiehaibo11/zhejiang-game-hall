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

    public final void setCfgs(Map<String, String> cfgs) {
        this.cfgs = cfgs;
    }

    public final Map<String, String> getCfgs() {
        return this.cfgs;
    }

    public final void setParams(Map<String, String> params) {
        this.params = params;
    }

    public final Map<String, String> getParams() {
        return this.params;
    }

    public Map<String, String> getLoginedData() {
        return this.loginedData;
    }

    public void registCallback(YmnCallback callback) {
        this.callback = callback;
    }

    public void addCallbackInterceptor(YmnCallbackInterceptor interceptor) {
        if (this.interceptors == null) {
            this.interceptors = new ArrayList();
        }
        this.interceptors.add(interceptor);
    }

    static class a {
        static final int[] a = new int[YPlugin.Policy.values().length];

        static {
            try {
                a[YPlugin.Policy.LAZY.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                a[YPlugin.Policy.REMOTE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                a[YPlugin.Policy.FORCE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                a[YPlugin.Policy.TRIGGER.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
        }
    }

    public void checkState(PluginLocalState local) {
        int i = a.a[getPolicy().ordinal()];
        if (i == 1) {
            this.state = local.getState(this);
            return;
        }
        if (i == 2) {
            this.state = -2;
            return;
        }
        if (i == 3) {
            this.state = 1;
        } else if (i == 4) {
            if (!this.triggered) {
                this.state = 0;
            } else {
                this.state = 1;
            }
        }
    }

    public int getState() {
        return this.state;
    }

    public boolean isCheckedState() {
        int i = this.state;
        return (i == -10 || i == -2) ? false : true;
    }

    public boolean isWorking() {
        return this.state == 1;
    }

    public boolean isInited() {
        return this.inited;
    }

    public void setInited(boolean inited) {
        this.inited = inited;
    }

    public boolean isIniting() {
        return this.initing;
    }

    public void setIniting(boolean initing) {
        this.initing = initing;
    }

    public boolean isInjected() {
        return this.injected;
    }

    public void setInjected(boolean injected) {
        this.injected = injected;
    }

    public void setTriggered(boolean triggered) {
        this.triggered = triggered;
    }

    public <T extends Context> T getContext() {
        return (T) this.context;
    }

    public void updateContext(Context context) {
        this.context = context;
        try {
            onContextChanged(context);
        } catch (Exception e) {
            Logger.i("updateContext" + e.getMessage());
        }
    }

    public void tryRunOnUiThreadOrJustRun(Runnable runnable) {
        Activity activity = this.activity;
        if (activity != null) {
            activity.runOnUiThread(runnable);
        } else {
            runnable.run();
        }
    }

    public String getPropertie(String key) {
        return YmnProperties.getPluginValue(this, key);
    }

    public String getMetaData(String key) {
        return YmnAppContext.getMetaDataValueString(key);
    }

    public void sendResult(int code, String msg) {
        List<YmnCallbackInterceptor> list = this.interceptors;
        if (list != null && !list.isEmpty()) {
            Iterator<YmnCallbackInterceptor> it = this.interceptors.iterator();
            YmnCallbackInterceptor first = it.next();
            YmnCallbackInterceptor current = first;
            while (it.hasNext()) {
                YmnCallbackInterceptor next = it.next();
                current.setNext(next);
                current = next;
            }
            YmnCallback ymnCallback = this.callback;
            if (ymnCallback != null) {
                current.setNext(ymnCallback);
            }
            first.onCallBack(code, msg);
            return;
        }
        YmnCallback ymnCallback2 = this.callback;
        if (ymnCallback2 != null) {
            ymnCallback2.onCallBack(code, msg);
        }
    }

    public void sendResult(int code, String msg, String methodName) {
        YmnDataFunUtils.getInstance().pluginFinish(methodName, getPluginId(), getPluginVersion() + "", getSdkVersion(), code, msg);
        sendResult(code, msg);
    }

    public void sendResult(int code, Object data, Object ext) {
        YmnCallback.a message = new YmnCallback.a(data, ext);
        sendResult(code, message.toString());
    }

    public void sendResult(int code, Object data, Object ext, String methodName) {
        try {
            YmnDataFunUtils.getInstance().pluginFinish(methodName, getPluginId(), getPluginVersion() + "", getSdkVersion(), code, data.toString());
        } catch (Exception e) {
        }
        sendResult(code, data, ext);
    }

    public void sendResultWithoutInterceptors(int code, String msg) {
        YmnCallback ymnCallback = this.callback;
        if (ymnCallback != null) {
            ymnCallback.onCallBack(code, msg);
        }
    }

    public String toString() {
        return String.format("%s {%s, inited = %b, initing = %b, class = %s}", getPluginName(), IPlugin.STATE_NAME.get(Integer.valueOf(this.state)), Boolean.valueOf(this.inited), Boolean.valueOf(this.initing), getClass().getName());
    }

    @Override
    public void setDebugMode(boolean mode) {
    }

    @Override
    public boolean isDebugMode() {
        return false;
    }

    @Override
    public void onInit(Context context) {
        this.context = context;
    }

    public boolean canDoInit() {
        if (this.initing) {
            Logger.w(getPluginName() + " on initing , ignore invoke " + this.context);
            return false;
        }
        if (this.inited) {
            Logger.w(getPluginName() + " already inited , ignore invoke " + this.context);
            return false;
        }
        return true;
    }

    public void onContextChanged(Context context) {
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
    }

    public void onCreate(Activity activity) {
        this.activity = activity;
    }

    @Override
    public void onStart() {
    }

    @Override
    public void onRestart() {
    }

    @Override
    public void onPause() {
    }

    @Override
    public void onResume() {
    }

    @Override
    public void onStop() {
    }

    @Override
    public void onDestroy() {
    }

    @Override
    public void onNewIntent(Intent intent) {
    }

    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
    }

    @Override
    public void onLogin(Map<String, String> data) {
        this.loginedData = data;
    }

    @Override
    public void onPay(Map<String, String> data) {
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus, Activity activity) {
    }

    public String inited() {
        if (isInited()) {
            sendResult(100, "初始化成功" + getPluginName());
            return "true";
        }
        sendResult(101, "初始化失败" + getPluginName());
        return "flase";
    }

    public boolean isScreenLandscape() {
        if (getContext() instanceof Activity) {
            return SystemUtil.isScreenLandscape((Activity) getContext());
        }
        return true;
    }

    public Activity getActivity() {
        if (this.activity == null) {
            this.activity = (Activity) getContext();
        }
        return this.activity;
    }

    public String getServerHost() {
        return e.c(getContext());
    }
}
