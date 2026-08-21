package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginClassLoader extends dalvik.system.PathClassLoader {
    private static final java.lang.String TAG = "RePluginClassLoader";
    private java.lang.reflect.Method findLibraryMethod;
    private java.lang.reflect.Method findResourceMethod;
    private java.lang.reflect.Method findResourcesMethod;
    private java.lang.reflect.Method getPackageMethod;
    private final java.lang.ClassLoader mOrig;

    public RePluginClassLoader(java.lang.ClassLoader r2, java.lang.ClassLoader r3) {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r0, r0, r2)
            r1.mOrig = r3
            r1.copyFromOriginal(r3)
            r1.initMethods(r3)
            return
    }

    private void copyFieldValue(java.lang.String r6, java.lang.ClassLoader r7) {
            r5 = this;
            java.lang.String r0 = "ws001"
            java.lang.Class r1 = r7.getClass()     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.reflect.Field r1 = com.qihoo360.replugin.utils.ReflectUtils.getField(r1, r6)     // Catch: java.lang.IllegalAccessException -> L5a
            if (r1 != 0) goto L21
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.IllegalAccessException -> L5a
            r7.<init>()     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r1 = "rpcl.cfv: null! f="
            r7.append(r1)     // Catch: java.lang.IllegalAccessException -> L5a
            r7.append(r6)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r7 = r7.toString()     // Catch: java.lang.IllegalAccessException -> L5a
            com.qihoo360.replugin.helper.LogRelease.e(r0, r7)     // Catch: java.lang.IllegalAccessException -> L5a
            return
        L21:
            com.qihoo360.replugin.utils.ReflectUtils.removeFieldFinalModifier(r1)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.Object r7 = com.qihoo360.replugin.utils.ReflectUtils.readField(r1, r7)     // Catch: java.lang.IllegalAccessException -> L5a
            com.qihoo360.replugin.utils.ReflectUtils.writeField(r1, r5, r7)     // Catch: java.lang.IllegalAccessException -> L5a
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.IllegalAccessException -> L5a
            if (r2 == 0) goto L6e
            java.lang.Object r1 = com.qihoo360.replugin.utils.ReflectUtils.readField(r1, r5)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r2 = "RePluginClassLoader"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.IllegalAccessException -> L5a
            r3.<init>()     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r4 = "copyFieldValue: Copied. f="
            r3.append(r4)     // Catch: java.lang.IllegalAccessException -> L5a
            r3.append(r6)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r4 = "; actually="
            r3.append(r4)     // Catch: java.lang.IllegalAccessException -> L5a
            r3.append(r1)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r1 = "; orig="
            r3.append(r1)     // Catch: java.lang.IllegalAccessException -> L5a
            r3.append(r7)     // Catch: java.lang.IllegalAccessException -> L5a
            java.lang.String r7 = r3.toString()     // Catch: java.lang.IllegalAccessException -> L5a
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)     // Catch: java.lang.IllegalAccessException -> L5a
            goto L6e
        L5a:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "rpcl.cfv: fail! f="
            r7.append(r1)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r6)
        L6e:
            return
    }

    private void copyFromOriginal(java.lang.ClassLoader r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2c
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 == 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "copyFromOriginal: Fields="
            r0.append(r1)
            java.lang.Class r1 = r3.getClass()
            java.util.List r1 = com.qihoo360.replugin.utils.ReflectUtils.getAllFieldsList(r1)
            java.lang.String r1 = com.qihoo360.loader.utils.StringUtils.toStringWithLines(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RePluginClassLoader"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L2c:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 10
            if (r0 > r1) goto L51
            java.lang.String r0 = "libPath"
            r2.copyFieldValue(r0, r3)
            java.lang.String r0 = "libraryPathElements"
            r2.copyFieldValue(r0, r3)
            java.lang.String r0 = "mDexs"
            r2.copyFieldValue(r0, r3)
            java.lang.String r0 = "mFiles"
            r2.copyFieldValue(r0, r3)
            java.lang.String r0 = "mPaths"
            r2.copyFieldValue(r0, r3)
            java.lang.String r0 = "mZips"
            r2.copyFieldValue(r0, r3)
            goto L56
        L51:
            java.lang.String r0 = "pathList"
            r2.copyFieldValue(r0, r3)
        L56:
            return
    }

    private void initMethods(java.lang.ClassLoader r5) {
            r4 = this;
            java.lang.Class r5 = r5.getClass()
            r0 = 1
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "findResource"
            java.lang.reflect.Method r1 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r5, r2, r1)
            r4.findResourceMethod = r1
            r1.setAccessible(r0)
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r1[r3] = r2
            java.lang.String r2 = "findResources"
            java.lang.reflect.Method r1 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r5, r2, r1)
            r4.findResourcesMethod = r1
            r1.setAccessible(r0)
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r1[r3] = r2
            java.lang.String r2 = "findLibrary"
            java.lang.reflect.Method r1 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r5, r2, r1)
            r4.findLibraryMethod = r1
            r1.setAccessible(r0)
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r1[r3] = r2
            java.lang.String r2 = "getPackage"
            java.lang.reflect.Method r5 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r5, r2, r1)
            r4.getPackageMethod = r5
            r5.setAccessible(r0)
            return
    }

    @Override
    protected java.lang.Class<?> findClass(java.lang.String r3) throws java.lang.ClassNotFoundException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NRH lcl.fc: c="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.w(r1, r0)
            java.lang.Class r3 = super.findClass(r3)
            return r3
    }

    @Override
    public java.lang.String findLibrary(java.lang.String r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.findLibraryMethod     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.ClassLoader r1 = r4.mOrig     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            return r0
        L11:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L16:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L1b:
            r0 = move-exception
            r0.printStackTrace()
        L1f:
            java.lang.String r5 = super.findLibrary(r5)
            return r5
    }

    @Override
    protected java.net.URL findResource(java.lang.String r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.findResourceMethod     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.ClassLoader r1 = r4.mOrig     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.net.URL r0 = (java.net.URL) r0     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            return r0
        L11:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L16:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L1b:
            r0 = move-exception
            r0.printStackTrace()
        L1f:
            java.net.URL r5 = super.findResource(r5)
            return r5
    }

    @Override
    protected java.util.Enumeration<java.net.URL> findResources(java.lang.String r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.findResourcesMethod     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.ClassLoader r1 = r4.mOrig     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            java.util.Enumeration r0 = (java.util.Enumeration) r0     // Catch: java.lang.reflect.InvocationTargetException -> L11 java.lang.IllegalAccessException -> L16 java.lang.IllegalArgumentException -> L1b
            return r0
        L11:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L16:
            r0 = move-exception
            r0.printStackTrace()
            goto L1f
        L1b:
            r0 = move-exception
            r0.printStackTrace()
        L1f:
            java.util.Enumeration r5 = super.findResources(r5)
            return r5
    }

    @Override
    protected java.lang.Package getPackage(java.lang.String r12) {
            r11 = this;
            r0 = 0
            if (r12 == 0) goto L6f
            boolean r1 = r12.isEmpty()
            if (r1 != 0) goto L6f
            java.lang.reflect.Method r1 = r11.getPackageMethod     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            java.lang.ClassLoader r2 = r11.mOrig     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            r4 = 0
            r3[r4] = r12     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            java.lang.Package r1 = (java.lang.Package) r1     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L20 java.lang.IllegalArgumentException -> L25
            r0 = r1
            goto L29
        L1b:
            r1 = move-exception
            r1.printStackTrace()
            goto L29
        L20:
            r1 = move-exception
            r1.printStackTrace()
            goto L29
        L25:
            r1 = move-exception
            r1.printStackTrace()
        L29:
            java.lang.String r1 = "ws001"
            if (r0 != 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NRH lcl.gp.1: n="
            r0.append(r2)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r1, r0)
            java.lang.Package r0 = super.getPackage(r12)
        L45:
            if (r0 != 0) goto L6f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "NRH lcl.gp.2: n="
            r0.append(r2)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogRelease.w(r1, r0)
            r10 = 0
            java.lang.String r4 = "Unknown"
            java.lang.String r5 = "0.0"
            java.lang.String r6 = "Unknown"
            java.lang.String r7 = "Unknown"
            java.lang.String r8 = "0.0"
            java.lang.String r9 = "Unknown"
            r2 = r11
            r3 = r12
            java.lang.Package r12 = r2.definePackage(r3, r4, r5, r6, r7, r8, r9, r10)
            return r12
        L6f:
            return r0
    }

    @Override
    protected java.lang.Class<?> loadClass(java.lang.String r5, boolean r6) throws java.lang.ClassNotFoundException {
            r4 = this;
            java.lang.Class r0 = com.qihoo360.loader2.PMF.loadClass(r5, r6)
            if (r0 == 0) goto L7
            return r0
        L7:
            java.lang.ClassLoader r0 = r4.mOrig     // Catch: java.lang.Throwable -> L32
            java.lang.Class r0 = r0.loadClass(r5)     // Catch: java.lang.Throwable -> L32
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L31
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L32
            boolean r1 = r1.isPrintDetailLog()     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L31
            java.lang.String r1 = "RePluginClassLoader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            r2.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "loadClass: load other class, cn="
            r2.append(r3)     // Catch: java.lang.Throwable -> L32
            r2.append(r5)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L32
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> L32
        L31:
            return r0
        L32:
            java.lang.Class r5 = super.loadClass(r5, r6)
            return r5
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "[mBase="
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.mOrig
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
