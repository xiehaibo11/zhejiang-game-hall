package com.qihoo360.replugin.component.app;

import android.app.Application;
import android.content.ComponentCallbacks2;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.res.Configuration;
import android.os.Build;
import android.text.TextUtils;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.basic.ArrayMap;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Iterator;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginApplicationClient {
    private static Method sAttachBaseContextMethod;
    private static volatile boolean sInited;
    private Application mApplication;
    private Constructor mApplicationConstructor;
    private final ApplicationInfo mApplicationInfo;
    private final ClassLoader mPlgClassLoader;
    private static final byte[] LOCKER = new byte[0];
    private static ArrayMap<String, WeakReference<PluginApplicationClient>> sRunningClients = new ArrayMap<>();

    public static PluginApplicationClient getOrCreate(String str, ClassLoader classLoader, ComponentList componentList, PluginInfo pluginInfo) {
        if (pluginInfo.getFrameworkVersion() <= 1) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.create(): FrameworkVer less than 1. cl=" + classLoader);
            }
            return null;
        }
        PluginApplicationClient running = getRunning(str);
        if (running != null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.create(): Already Loaded." + classLoader);
            }
            return running;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.create(): Create and load Application. cl=" + classLoader);
        }
        try {
            initMethods();
            PluginApplicationClient pluginApplicationClient = new PluginApplicationClient(classLoader, componentList, pluginInfo);
            if (!pluginApplicationClient.isValid()) {
                return null;
            }
            sRunningClients.put(str, new WeakReference<>(pluginApplicationClient));
            if (Build.VERSION.SDK_INT >= 14) {
                RePluginInternal.getAppContext().registerComponentCallbacks(new ComponentCallbacks2() {
                    @Override
                    public void onTrimMemory(int i) {
                        PluginApplicationClient.this.callOnTrimMemory(i);
                    }

                    @Override
                    public void onConfigurationChanged(Configuration configuration) {
                        PluginApplicationClient.this.callOnConfigurationChanged(configuration);
                    }

                    @Override
                    public void onLowMemory() {
                        PluginApplicationClient.this.callOnLowMemory();
                    }
                });
            }
            return pluginApplicationClient;
        } catch (Throwable th) {
            if (BuildConfig.DEBUG) {
                th.printStackTrace();
            }
            return null;
        }
    }

    public static void notifyOnLowMemory() {
        Iterator<WeakReference<PluginApplicationClient>> it = sRunningClients.values().iterator();
        while (it.hasNext()) {
            PluginApplicationClient pluginApplicationClient = it.next().get();
            if (pluginApplicationClient != null) {
                pluginApplicationClient.callOnLowMemory();
            }
        }
    }

    public static void notifyOnTrimMemory(int i) {
        Iterator<WeakReference<PluginApplicationClient>> it = sRunningClients.values().iterator();
        while (it.hasNext()) {
            PluginApplicationClient pluginApplicationClient = it.next().get();
            if (pluginApplicationClient != null) {
                pluginApplicationClient.callOnTrimMemory(i);
            }
        }
    }

    public static void notifyOnConfigurationChanged(Configuration configuration) {
        Iterator<WeakReference<PluginApplicationClient>> it = sRunningClients.values().iterator();
        while (it.hasNext()) {
            PluginApplicationClient pluginApplicationClient = it.next().get();
            if (pluginApplicationClient != null) {
                pluginApplicationClient.callOnConfigurationChanged(configuration);
            }
        }
    }

    public static PluginApplicationClient getRunning(String str) {
        WeakReference<PluginApplicationClient> weakReference = sRunningClients.get(str);
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    private static void initMethods() throws NoSuchMethodException {
        if (sInited) {
            return;
        }
        synchronized (LOCKER) {
            if (sInited) {
                return;
            }
            Method declaredMethod = Application.class.getDeclaredMethod("attach", Context.class);
            sAttachBaseContextMethod = declaredMethod;
            declaredMethod.setAccessible(true);
            sInited = true;
        }
    }

    private PluginApplicationClient(ClassLoader classLoader, ComponentList componentList, PluginInfo pluginInfo) {
        this.mPlgClassLoader = classLoader;
        ApplicationInfo application = componentList.getApplication();
        this.mApplicationInfo = application;
        if (application != null) {
            try {
                if (!TextUtils.isEmpty(application.className)) {
                    initCustom();
                }
            } catch (Throwable th) {
                if (BuildConfig.DEBUG) {
                    th.printStackTrace();
                }
                this.mApplication = new Application();
                return;
            }
        }
        if (isValid() || pluginInfo.getFrameworkVersion() < 3) {
            return;
        }
        this.mApplication = new Application();
    }

    public void callAttachBaseContext(Context context) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.callAttachBaseContext(): Call attachBaseContext(), cl=" + this.mPlgClassLoader);
        }
        try {
            sAttachBaseContextMethod.setAccessible(true);
            sAttachBaseContextMethod.invoke(this.mApplication, context);
        } catch (Throwable th) {
            if (BuildConfig.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    public void callOnCreate() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.callOnCreate(): Call onCreate(), cl=" + this.mPlgClassLoader);
        }
        this.mApplication.onCreate();
    }

    public void callOnLowMemory() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.callOnLowMemory(): Call onLowMemory(), cl=" + this.mPlgClassLoader);
        }
        this.mApplication.onLowMemory();
    }

    public void callOnTrimMemory(int i) {
        if (Build.VERSION.SDK_INT < 14) {
            return;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.callOnLowMemory(): Call onTrimMemory(), cl=" + this.mPlgClassLoader + "; lv=" + i);
        }
        this.mApplication.onTrimMemory(i);
    }

    public void callOnConfigurationChanged(Configuration configuration) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PAC.callOnLowMemory(): Call onConfigurationChanged(), cl=" + this.mPlgClassLoader + "; nc=" + configuration);
        }
        this.mApplication.onConfigurationChanged(configuration);
    }

    public Application getObj() {
        return this.mApplication;
    }

    private boolean initCustom() {
        try {
            initCustomConstructor();
            initCustomObject();
            return this.mApplication != null;
        } catch (Throwable th) {
            if (BuildConfig.DEBUG) {
                th.printStackTrace();
            }
            return false;
        }
    }

    private void initCustomConstructor() throws NoSuchMethodException, ClassNotFoundException {
        this.mApplicationConstructor = this.mPlgClassLoader.loadClass(this.mApplicationInfo.className).getConstructor(new Class[0]);
    }

    private void initCustomObject() throws IllegalAccessException, InstantiationException, InvocationTargetException {
        Object objNewInstance = this.mApplicationConstructor.newInstance(new Object[0]);
        if (objNewInstance instanceof Application) {
            this.mApplication = (Application) objNewInstance;
        }
    }

    private boolean isValid() {
        return this.mApplication != null;
    }
}
