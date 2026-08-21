package com.qihoo360.loader2;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.i.Factory;
import com.qihoo360.i.Factory2;
import com.qihoo360.i.IModule;
import com.qihoo360.loader.utils.PatchClassLoaderUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PMF {
    private static Context sContext;
    static PmBase sPluginMgr;

    private static final void setApplicationContext(Context context) {
        sContext = context;
    }

    public static final Context getApplicationContext() {
        return sContext;
    }

    public static final void init(Application application) {
        setApplicationContext(application);
        PluginManager.init(application);
        PmBase pmBase = new PmBase(application);
        sPluginMgr = pmBase;
        pmBase.init();
        Factory.sPluginManager = getLocal();
        Factory2.sPLProxy = getInternal();
        PatchClassLoaderUtils.patch(application);
    }

    public static final void callAppCreate() {
        sPluginMgr.callAppCreate();
    }

    public static final void callAttach() {
        sPluginMgr.callAttach();
    }

    public static final void addBuiltinModule(String str, Class<? extends IModule> cls, IModule iModule) {
        sPluginMgr.addBuiltinModule(str, cls, iModule);
    }

    public static final PluginCommImpl getLocal() {
        return sPluginMgr.mLocal;
    }

    public static final PluginLibraryInternalProxy getInternal() {
        return sPluginMgr.mInternal;
    }

    public static final Class<?> loadClass(String str, boolean z) {
        return sPluginMgr.loadClass(str, z);
    }

    public static final void forward(Activity activity, Intent intent) {
        activity.finish();
        try {
            PluginIntent pluginIntent = new PluginIntent(intent);
            String original = pluginIntent.getOriginal();
            if (TextUtils.isEmpty(original)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: orig=nul i=" + intent);
                return;
            }
            String container = pluginIntent.getContainer();
            if (TextUtils.isEmpty(container)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: c=nul i=" + intent);
                return;
            }
            String plugin = pluginIntent.getPlugin();
            if (TextUtils.isEmpty(plugin)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: n=nul i=" + intent);
                return;
            }
            String activity2 = pluginIntent.getActivity();
            if (TextUtils.isEmpty(activity2)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: t=nul i=" + intent);
                return;
            }
            int process = pluginIntent.getProcess();
            if (!PluginManager.isValidActivityProcess(process)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: p=" + process + " i=" + intent);
                return;
            }
            int counter = pluginIntent.getCounter();
            if (counter >= 0 && counter < 10) {
                pluginIntent.setCounter(counter + 1);
                sPluginMgr.mClient.mACM.forwardIntent(activity, intent, original, container, plugin, activity2, process);
                return;
            }
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: ooc c=" + counter);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a f: " + th.getMessage(), th);
        }
    }

    public static final void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        sPluginMgr.dump(fileDescriptor, printWriter, strArr);
    }

    public static void stopService(Intent intent) throws RemoteException {
        sPluginMgr.mClient.fetchServiceServer().stopService(intent, null);
    }
}
