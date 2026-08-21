package com.bytedance.pangle.service;

import android.app.IntentService;
import android.content.ComponentName;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.plugin.Plugin;
import com.bytedance.pangle.transform.ZeusTransformUtils;
import com.bytedance.pangle.util.FieldUtils;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

public abstract class PluginIntentService extends IntentService implements a {
    private static final String TAG = "PluginService";

    public PluginIntentService(String str) {
        super(str);
    }

    @Override
    public void attach(Plugin plugin) {
        attachBaseContext(ZeusTransformUtils.wrapperContext2Application(Zeus.getAppApplication(), plugin.mPkgName));
        try {
            FieldUtils.writeField(this, "mActivityManager", createActivityManagerProxy());
            FieldUtils.writeField(this, "mClassName", getClass().getName());
            FieldUtils.writeField(this, "mApplication", Zeus.getAppApplication());
            FieldUtils.writeField(this, "mStartCompatibility", Boolean.valueOf(getApplicationInfo().targetSdkVersion < 5));
        } catch (Exception e) {
            ZeusLogger.errReport(ZeusLogger.TAG_SERVICE, "hook activityManager failed!", e);
        }
    }

    protected Object createActivityManagerProxy() {
        return Proxy.newProxyInstance(getClassLoader(), new Class[]{Class.forName("android.app.IActivityManager")}, new InvocationHandler() {
            /* JADX WARN: Removed duplicated region for block: B:18:0x0038  */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final Object invoke(Object obj, Method method, Object[] objArr) {
                byte b;
                String name = method.getName();
                int iHashCode = name.hashCode();
                if (iHashCode != 39551382) {
                    if (iHashCode != 690954390) {
                        b = (iHashCode == 1930712422 && name.equals("stopServiceToken")) ? (byte) 0 : (byte) -1;
                    } else if (name.equals("getForegroundServiceType")) {
                        b = 2;
                    }
                } else if (name.equals("setServiceForeground")) {
                    b = 1;
                }
                if (b != 0) {
                    return b != 2 ? null : 0;
                }
                com.bytedance.pangle.service.a.a aVarB = com.bytedance.pangle.service.a.a.b();
                PluginIntentService pluginIntentService = PluginIntentService.this;
                return Boolean.valueOf(aVarB.a(new ComponentName(pluginIntentService, pluginIntentService.getClass().getName())));
            }
        });
    }
}
