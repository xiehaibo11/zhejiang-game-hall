package com.qihoo360.loader.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PatchClassLoaderUtils {
    private static final java.lang.String TAG = "PatchClassLoaderUtils";

    public PatchClassLoaderUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean patch(android.app.Application r8) {
            java.lang.String r0 = "mClassLoader"
            r1 = 0
            android.content.Context r2 = r8.getBaseContext()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = "ws001"
            if (r2 != 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r0.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = "pclu.p: nf mb. ap cl="
            r0.append(r2)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r8 = r8.getClass()     // Catch: java.lang.Throwable -> Lbf
            r0.append(r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.helper.LogRelease.e(r3, r8)     // Catch: java.lang.Throwable -> Lbf
            return r1
        L24:
            java.lang.String r8 = "mPackageInfo"
            java.lang.Object r8 = com.qihoo360.replugin.utils.ReflectUtils.readField(r2, r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r4 = "pclu.p: nf mpi. mb cl="
            if (r8 != 0) goto L45
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r8.<init>()     // Catch: java.lang.Throwable -> Lbf
            r8.append(r4)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r0 = r2.getClass()     // Catch: java.lang.Throwable -> Lbf
            r8.append(r0)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.helper.LogRelease.e(r3, r8)     // Catch: java.lang.Throwable -> Lbf
            return r1
        L45:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r6 = "PatchClassLoaderUtils"
            if (r5 == 0) goto L6f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r5.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r7 = "patch: mBase cl="
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r7 = r2.getClass()     // Catch: java.lang.Throwable -> Lbf
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r7 = "; mPackageInfo cl="
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r7 = r8.getClass()     // Catch: java.lang.Throwable -> Lbf
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lbf
            android.util.Log.d(r6, r5)     // Catch: java.lang.Throwable -> Lbf
        L6f:
            java.lang.Object r5 = com.qihoo360.replugin.utils.ReflectUtils.readField(r8, r0)     // Catch: java.lang.Throwable -> Lbf
            java.lang.ClassLoader r5 = (java.lang.ClassLoader) r5     // Catch: java.lang.Throwable -> Lbf
            if (r5 != 0) goto L9a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r0.<init>()     // Catch: java.lang.Throwable -> Lbf
            r0.append(r4)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Throwable -> Lbf
            r0.append(r2)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r2 = "; mpi cl="
            r0.append(r2)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Class r8 = r8.getClass()     // Catch: java.lang.Throwable -> Lbf
            r0.append(r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.helper.LogRelease.e(r3, r8)     // Catch: java.lang.Throwable -> Lbf
            return r1
        L9a:
            com.qihoo360.replugin.RePluginConfig r2 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.RePluginCallbacks r2 = r2.getCallbacks()     // Catch: java.lang.Throwable -> Lbf
            java.lang.ClassLoader r3 = r5.getParent()     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.RePluginClassLoader r2 = r2.createClassLoader(r3, r5)     // Catch: java.lang.Throwable -> Lbf
            com.qihoo360.replugin.utils.ReflectUtils.writeField(r8, r0, r2)     // Catch: java.lang.Throwable -> Lbf
            java.lang.Thread r8 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> Lbf
            r8.setContextClassLoader(r2)     // Catch: java.lang.Throwable -> Lbf
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lbf
            if (r8 == 0) goto Lbd
            java.lang.String r8 = "patch: patch mClassLoader ok"
            android.util.Log.d(r6, r8)     // Catch: java.lang.Throwable -> Lbf
        Lbd:
            r8 = 1
            return r8
        Lbf:
            r8 = move-exception
            r8.printStackTrace()
            return r1
    }
}
