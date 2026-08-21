package com.qihoo360.loader.utils;

import android.app.Application;
import android.content.Context;
import android.util.Log;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginClassLoader;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.ReflectUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PatchClassLoaderUtils {
    private static final String TAG = "PatchClassLoaderUtils";

    public static boolean patch(Application application) {
        try {
            Context baseContext = application.getBaseContext();
            if (baseContext == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "pclu.p: nf mb. ap cl=" + application.getClass());
                return false;
            }
            Object field = ReflectUtils.readField(baseContext, "mPackageInfo");
            if (field == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "pclu.p: nf mpi. mb cl=" + baseContext.getClass());
                return false;
            }
            if (LogDebug.LOG) {
                Log.d(TAG, "patch: mBase cl=" + baseContext.getClass() + "; mPackageInfo cl=" + field.getClass());
            }
            ClassLoader classLoader = (ClassLoader) ReflectUtils.readField(field, "mClassLoader");
            if (classLoader == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "pclu.p: nf mpi. mb cl=" + baseContext.getClass() + "; mpi cl=" + field.getClass());
                return false;
            }
            RePluginClassLoader rePluginClassLoaderCreateClassLoader = RePlugin.getConfig().getCallbacks().createClassLoader(classLoader.getParent(), classLoader);
            ReflectUtils.writeField(field, "mClassLoader", rePluginClassLoaderCreateClassLoader);
            Thread.currentThread().setContextClassLoader(rePluginClassLoaderCreateClassLoader);
            if (!LogDebug.LOG) {
                return true;
            }
            Log.d(TAG, "patch: patch mClassLoader ok");
            return true;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }
}
