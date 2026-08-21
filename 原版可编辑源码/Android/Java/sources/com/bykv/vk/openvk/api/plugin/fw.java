package com.bykv.vk.openvk.api.plugin;

import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.bykv.vk.openvk.AdConfig;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.TTInitializer;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.api.plugin.c;
import com.qihoo360.i.IPluginManager;
import com.tkay.expressad.foundation.d.r;
import dalvik.system.BaseDexClassLoader;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONException;
import org.json.JSONObject;

public class fw implements TTInitializer {
    private static final Map<String, Bundle> q = new ConcurrentHashMap();
    public static ScheduledExecutorService rg = Executors.newSingleThreadScheduledExecutor(new df());
    private volatile TTInitializer df;

    public static void rg(String str, Bundle bundle) {
        if (TextUtils.isEmpty(str) || bundle == null) {
            return;
        }
        q.put(str, bundle);
    }

    @Override
    public void init(Context context, AdConfig adConfig, TTVfSdk.InitCallback initCallback) {
        if (Build.VERSION.SDK_INT < 21) {
            initCallback.fail(4201, "Only support >= 5.0");
            return;
        }
        c.rg(context).rg();
        if (this.df != null) {
            this.df.init(context, adConfig, new rg(initCallback));
        } else {
            rg(context, adConfig, new rg(initCallback), pp.rg(r.ag));
        }
    }

    private static class rg implements TTVfSdk.InitCallback {
        private TTVfSdk.InitCallback rg;

        public rg(TTVfSdk.InitCallback initCallback) {
            this.rg = initCallback;
        }

        @Override
        public void success() {
            TTVfSdk.InitCallback initCallback = this.rg;
            if (initCallback != null) {
                initCallback.success();
            }
            pt.rg();
        }

        @Override
        public void fail(int i, String str) {
            TTVfSdk.InitCallback initCallback = this.rg;
            if (initCallback != null) {
                initCallback.fail(i, str);
                pt.df(i, str, 0L);
            }
        }
    }

    @Override
    public boolean isInitSuccess() {
        if (this.df != null) {
            return this.df.isInitSuccess();
        }
        return false;
    }

    @Override
    public TTVfManager getAdManager() {
        return com.bykv.vk.openvk.api.plugin.rg.rg;
    }

    private void rg(final Context context, final AdConfig adConfig, final TTVfSdk.InitCallback initCallback, final pp ppVar) {
        rg.execute(new Runnable() {
            @Override
            public void run() {
                ppVar.df("wait_asyn_cost");
                TTInitializer tTInitializerRg = fw.this.rg(adConfig, ppVar);
                if (tTInitializerRg != null) {
                    com.bykv.vk.openvk.api.plugin.rg.rg.rg(tTInitializerRg.getAdManager());
                    tTInitializerRg.init(context, adConfig, initCallback);
                    tTInitializerRg.getAdManager().register(com.bykv.vk.openvk.rg.df.rg());
                    return;
                }
                initCallback.fail(4201, "No initializer");
            }
        });
    }

    private TTInitializer rg(AdConfig adConfig, pp ppVar) {
        if (this.df == null) {
            synchronized (this) {
                if (this.df == null) {
                    pt.rg(adConfig);
                    com.bykv.vk.openvk.api.rg.df("TTPluginManager", "Create initializer");
                    this.df = df(adConfig, ppVar);
                    ppVar.rg();
                    JSONObject jSONObject = new JSONObject();
                    ppVar.rg(jSONObject, 20L);
                    try {
                        jSONObject.put("zeus", c.rg(TTAppContextHolder.getContext()).df());
                    } catch (JSONException unused) {
                    }
                    adConfig.setExtra(IPluginManager.KEY_PLUGIN, jSONObject);
                }
            }
        }
        return this.df;
    }

    private static TTInitializer df(AdConfig adConfig, pp ppVar) {
        c cVarRg;
        BaseDexClassLoader baseDexClassLoaderRg;
        try {
            ppVar.df("call_create_initializer");
            cVarRg = c.rg(TTAppContextHolder.getContext());
            baseDexClassLoaderRg = cVarRg.rg(ppVar);
        } catch (Throwable th) {
            if (th instanceof q) {
                q qVar = th;
                pt.rg(qVar.rg(), qVar.getMessage(), 0L);
            } else {
                pt.rg(6, th.getMessage(), 0L);
            }
            com.bykv.vk.openvk.api.rg.pp("TTPluginManager", "Create initializer failed: " + th);
        }
        if (baseDexClassLoaderRg == null) {
            pt.rg(6, "Load plugin failed", 0L);
            com.bykv.vk.openvk.api.rg.pp("TTPluginManager", "Load plugin failed");
            return null;
        }
        Class<?> clsLoadClass = baseDexClassLoaderRg.loadClass(TTVfSdk.INITIALIZER_CLASS_NAME);
        ppVar.df("get_init_class_cost");
        Bundle bundle = new Bundle();
        bundle.putSerializable(PluginConstants.KEY_PL_UPDATE_LISTENER, new c.df());
        bundle.putSerializable(PluginConstants.KEY_PL_UPDATE_EVENT_LISTENER, new c.q());
        Bundle bundleRg = rg(q);
        bundle.putBundle(PluginConstants.KEY_PL_CONFIG_INFO, bundleRg);
        ppVar.df("create_bundle_cost");
        bundle.putSerializable(PluginConstants.KEY_LIVE_SDK, com.bykv.vk.openvk.live.df.rg());
        Bundle bundleRg2 = com.bykv.vk.openvk.live.rg.rg(cVarRg, adConfig.getAppId());
        com.bykv.vk.openvk.live.df.rg().rg(cVarRg, bundleRg2);
        if (bundleRg2 != null) {
            bundleRg.putBundle("com.byted.live.lite", bundleRg2);
        }
        ppVar.df("live_init_cost");
        Method declaredMethod = clsLoadClass.getDeclaredMethod("getInstance", Bundle.class);
        ppVar.df("get_init_method_cost");
        TTInitializer tTInitializer = (TTInitializer) declaredMethod.invoke(null, bundle);
        ppVar.df("get_init_instance_cost");
        com.bykv.vk.openvk.api.rg.df("TTPluginManager", "Create initializer success");
        return tTInitializer;
    }

    private static final Bundle rg(Map<String, Bundle> map) {
        if (map == null || map.size() == 0) {
            return new Bundle();
        }
        Bundle bundle = new Bundle();
        for (Map.Entry<String, Bundle> entry : map.entrySet()) {
            String key = entry.getKey();
            Bundle value = entry.getValue();
            if (!TextUtils.isEmpty(key) && value != null) {
                bundle.putBundle(key, value);
            }
        }
        return bundle;
    }

    public static class df implements ThreadFactory {
        private final AtomicInteger df;
        private final String q;
        private final ThreadGroup rg;

        df() {
            this.df = new AtomicInteger(1);
            this.rg = new ThreadGroup("csj_g_pl_init");
            this.q = "csj_pl_init";
        }

        df(String str) {
            this.df = new AtomicInteger(1);
            this.rg = new ThreadGroup("csj_g_pl_init");
            this.q = str;
        }

        @Override
        public Thread newThread(Runnable runnable) {
            Thread thread = new Thread(this.rg, runnable, this.q + this.df.getAndIncrement(), 0L);
            if (thread.isDaemon()) {
                thread.setDaemon(false);
            }
            if (thread.getPriority() != 10) {
                thread.setPriority(10);
            }
            return thread;
        }
    }
}
