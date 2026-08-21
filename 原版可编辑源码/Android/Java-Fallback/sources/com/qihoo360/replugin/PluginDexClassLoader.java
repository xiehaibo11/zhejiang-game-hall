package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginDexClassLoader extends dalvik.system.DexClassLoader {
    private static final java.lang.String TAG = "PluginDexClassLoader";
    private static java.lang.reflect.Method sLoadClassMethod;
    private final java.lang.ClassLoader mHostClassLoader;
    private java.lang.String mPluginName;

    public PluginDexClassLoader(com.qihoo360.replugin.model.PluginInfo r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.ClassLoader r5) {
            r0 = this;
            r0.<init>(r2, r3, r4, r5)
            java.lang.String r3 = r1.getName()
            r0.mPluginName = r3
            r0.installMultiDexesBeforeLollipop(r1, r2, r5)
            java.lang.ClassLoader r1 = com.qihoo360.replugin.RePluginInternal.getAppClassLoader()
            r0.mHostClassLoader = r1
            initMethods(r1)
            return
    }

    private java.lang.Object combineArray(java.util.List<java.lang.Object[]> r6) {
            r5 = this;
            java.util.Iterator r0 = r6.iterator()
            r1 = 0
            r2 = 0
            r3 = r1
        L7:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L19
            java.lang.Object r4 = r0.next()
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            if (r2 != 0) goto L16
            r2 = r4
        L16:
            int r4 = r4.length
            int r3 = r3 + r4
            goto L7
        L19:
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r0 = r0.getComponentType()
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r3)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.util.Iterator r6 = r6.iterator()
            r2 = r1
        L2e:
            boolean r3 = r6.hasNext()
            if (r3 == 0) goto L41
            java.lang.Object r3 = r6.next()
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            int r4 = r3.length
            java.lang.System.arraycopy(r3, r1, r0, r2, r4)
            int r3 = r3.length
            int r2 = r2 + r3
            goto L2e
        L41:
            return r0
    }

    private static void extractFile(java.util.zip.ZipFile r2, java.util.zip.ZipEntry r3, java.io.File r4) throws java.io.IOException {
            java.io.InputStream r2 = r2.getInputStream(r3)     // Catch: java.lang.Throwable -> L35
            com.qihoo360.replugin.utils.FileUtils.copyInputStreamToFile(r2, r4)     // Catch: java.lang.Throwable -> L33
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L2f
            com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L33
            boolean r3 = r3.isPrintDetailLog()     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L2f
            java.lang.String r3 = "PluginDexClassLoader"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "extractFile(): Success! fn="
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L33
            r0.append(r4)     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L33
            com.qihoo360.replugin.helper.LogDebug.d(r3, r4)     // Catch: java.lang.Throwable -> L33
        L2f:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return
        L33:
            r3 = move-exception
            goto L37
        L35:
            r3 = move-exception
            r2 = 0
        L37:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r3
    }

    private java.util.List<java.io.File> getExtraDexFiles(com.qihoo360.replugin.model.PluginInfo r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L21
            java.util.zip.ZipFile r1 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L10 java.lang.Exception -> L12
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L10 java.lang.Exception -> L12
            java.util.List r3 = traverseExtraDex(r3, r1)     // Catch: java.lang.Exception -> Le java.lang.Throwable -> L1b
            r0 = r1
            goto L22
        Le:
            r3 = move-exception
            goto L14
        L10:
            r3 = move-exception
            goto L1d
        L12:
            r3 = move-exception
            r1 = r0
        L14:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L1b
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            goto L26
        L1b:
            r3 = move-exception
            r0 = r1
        L1d:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r3
        L21:
            r3 = r0
        L22:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            r0 = r3
        L26:
            return r0
    }

    private static void initMethods(java.lang.ClassLoader r3) {
            java.lang.Class r3 = r3.getClass()
            java.lang.reflect.Method r0 = com.qihoo360.replugin.PluginDexClassLoader.sLoadClassMethod
            if (r0 != 0) goto L26
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r0[r1] = r2
            r1 = 1
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r0[r1] = r2
            java.lang.String r1 = "loadClass"
            java.lang.reflect.Method r3 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r3, r1, r0)
            com.qihoo360.replugin.PluginDexClassLoader.sLoadClassMethod = r3
            if (r3 == 0) goto L20
            goto L26
        L20:
            java.lang.NoSuchMethodError r3 = new java.lang.NoSuchMethodError
            r3.<init>(r1)
            throw r3
        L26:
            return
    }

    private void installMultiDexesBeforeLollipop(com.qihoo360.replugin.model.PluginInfo r11, java.lang.String r12, java.lang.ClassLoader r13) {
            r10 = this;
            java.lang.String r0 = "pathList"
            java.lang.String r1 = "dexElements"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 < r3) goto Lb
            return
        Lb:
            java.util.List r12 = r10.getExtraDexFiles(r11, r12)     // Catch: java.lang.Exception -> Ld3
            if (r12 == 0) goto Ld7
            int r2 = r12.size()     // Catch: java.lang.Exception -> Ld3
            if (r2 <= 0) goto Ld7
            java.util.LinkedList r2 = new java.util.LinkedList     // Catch: java.lang.Exception -> Ld3
            r2.<init>()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r3 = "dalvik.system.BaseDexClassLoader"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r4 = com.qihoo360.replugin.utils.ReflectUtils.readField(r3, r10, r0)     // Catch: java.lang.Exception -> Ld3
            java.lang.Class r5 = r4.getClass()     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r5 = com.qihoo360.replugin.utils.ReflectUtils.readField(r5, r4, r1)     // Catch: java.lang.Exception -> Ld3
            java.lang.Object[] r5 = (java.lang.Object[]) r5     // Catch: java.lang.Exception -> Ld3
            java.lang.Object[] r5 = (java.lang.Object[]) r5     // Catch: java.lang.Exception -> Ld3
            r2.add(r5)     // Catch: java.lang.Exception -> Ld3
            java.io.File r5 = r11.getExtraOdexDir()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> Ld3
            java.util.Iterator r12 = r12.iterator()     // Catch: java.lang.Exception -> Ld3
        L41:
            boolean r6 = r12.hasNext()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r7 = "PluginDexClassLoader"
            if (r6 == 0) goto L92
            java.lang.Object r6 = r12.next()     // Catch: java.lang.Exception -> Ld3
            java.io.File r6 = (java.io.File) r6     // Catch: java.lang.Exception -> Ld3
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Exception -> Ld3
            if (r8 == 0) goto L75
            com.qihoo360.replugin.RePluginConfig r8 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Exception -> Ld3
            boolean r8 = r8.isPrintDetailLog()     // Catch: java.lang.Exception -> Ld3
            if (r8 == 0) goto L75
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld3
            r8.<init>()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r9 = "dex file:"
            r8.append(r9)     // Catch: java.lang.Exception -> Ld3
            java.lang.String r9 = r6.getName()     // Catch: java.lang.Exception -> Ld3
            r8.append(r9)     // Catch: java.lang.Exception -> Ld3
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> Ld3
            com.qihoo360.replugin.helper.LogDebug.d(r7, r8)     // Catch: java.lang.Exception -> Ld3
        L75:
            dalvik.system.DexClassLoader r7 = new dalvik.system.DexClassLoader     // Catch: java.lang.Exception -> Ld3
            java.lang.String r6 = r6.getAbsolutePath()     // Catch: java.lang.Exception -> Ld3
            r7.<init>(r6, r5, r5, r13)     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r6 = com.qihoo360.replugin.utils.ReflectUtils.readField(r3, r7, r0)     // Catch: java.lang.Exception -> Ld3
            java.lang.Class r7 = r6.getClass()     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r6 = com.qihoo360.replugin.utils.ReflectUtils.readField(r7, r6, r1)     // Catch: java.lang.Exception -> Ld3
            java.lang.Object[] r6 = (java.lang.Object[]) r6     // Catch: java.lang.Exception -> Ld3
            java.lang.Object[] r6 = (java.lang.Object[]) r6     // Catch: java.lang.Exception -> Ld3
            r2.add(r6)     // Catch: java.lang.Exception -> Ld3
            goto L41
        L92:
            java.lang.Object r12 = r10.combineArray(r2)     // Catch: java.lang.Exception -> Ld3
            java.lang.Class r13 = r4.getClass()     // Catch: java.lang.Exception -> Ld3
            com.qihoo360.replugin.utils.ReflectUtils.writeField(r13, r4, r1, r12)     // Catch: java.lang.Exception -> Ld3
            java.io.File r11 = r11.getExtraDexDir()     // Catch: java.lang.Exception -> Ld3
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r11)     // Catch: java.lang.Exception -> Ld3
            boolean r11 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Exception -> Ld3
            if (r11 == 0) goto Ld7
            com.qihoo360.replugin.RePluginConfig r11 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Exception -> Ld3
            boolean r11 = r11.isPrintDetailLog()     // Catch: java.lang.Exception -> Ld3
            if (r11 == 0) goto Ld7
            java.lang.Class r11 = r4.getClass()     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r11 = com.qihoo360.replugin.utils.ReflectUtils.readField(r11, r4, r1)     // Catch: java.lang.Exception -> Ld3
            int r11 = java.lang.reflect.Array.getLength(r11)     // Catch: java.lang.Exception -> Ld3
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld3
            r12.<init>()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r13 = "dexElements length:"
            r12.append(r13)     // Catch: java.lang.Exception -> Ld3
            r12.append(r11)     // Catch: java.lang.Exception -> Ld3
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Exception -> Ld3
            com.qihoo360.replugin.helper.LogDebug.d(r7, r11)     // Catch: java.lang.Exception -> Ld3
            goto Ld7
        Ld3:
            r11 = move-exception
            r11.printStackTrace()
        Ld7:
            return
    }

    private java.lang.Class<?> loadClassFromHost(java.lang.String r5, boolean r6) throws java.lang.ClassNotFoundException {
            r4 = this;
            java.lang.reflect.Method r0 = com.qihoo360.replugin.PluginDexClassLoader.sLoadClassMethod     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.ClassLoader r1 = r4.mHostClassLoader     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r3 = 1
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r2[r3] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.Object r6 = r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.Class r6 = (java.lang.Class) r6     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            if (r0 == 0) goto L43
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            boolean r0 = r0.isPrintDetailLog()     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            if (r0 == 0) goto L43
            java.lang.String r0 = "PluginDexClassLoader"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r1.<init>()     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.String r2 = "loadClass: load host class, cn="
            r1.append(r2)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r1.append(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.String r5 = ", cz="
            r1.append(r5)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            r1.append(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            java.lang.String r5 = r1.toString()     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
            com.qihoo360.replugin.helper.LogDebug.w(r0, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L44 java.lang.IllegalAccessException -> L4d
        L43:
            return r6
        L44:
            r5 = move-exception
            java.lang.ClassNotFoundException r6 = new java.lang.ClassNotFoundException
            java.lang.String r0 = "Calling the loadClass method failed (InvocationTargetException)"
            r6.<init>(r0, r5)
            throw r6
        L4d:
            r5 = move-exception
            java.lang.ClassNotFoundException r6 = new java.lang.ClassNotFoundException
            java.lang.String r0 = "Calling the loadClass method failed (IllegalAccessException)"
            r6.<init>(r0, r5)
            throw r6
    }

    private static java.util.List<java.io.File> traverseExtraDex(com.qihoo360.replugin.model.PluginInfo r7, java.util.zip.ZipFile r8) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.Enumeration r1 = r8.entries()
            r2 = 0
        La:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L76
            java.lang.Object r3 = r1.nextElement()
            java.util.zip.ZipEntry r3 = (java.util.zip.ZipEntry) r3
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "../"
            boolean r5 = r4.contains(r5)
            if (r5 == 0) goto L23
            goto La
        L23:
            java.lang.String r5 = ".dex"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Exception -> L71
            if (r5 == 0) goto La
            java.lang.String r5 = "classes.dex"
            boolean r5 = r4.equals(r5)     // Catch: java.lang.Exception -> L71
            if (r5 != 0) goto La
            if (r2 != 0) goto L3d
            java.io.File r5 = r7.getExtraDexDir()     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L71
        L3d:
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> L71
            r5.<init>(r2, r4)     // Catch: java.lang.Exception -> L71
            extractFile(r8, r3, r5)     // Catch: java.lang.Exception -> L71
            r0.add(r5)     // Catch: java.lang.Exception -> L71
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Exception -> L71
            if (r3 == 0) goto La
            com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Exception -> L71
            boolean r3 = r3.isPrintDetailLog()     // Catch: java.lang.Exception -> L71
            if (r3 == 0) goto La
            java.lang.String r3 = "PluginDexClassLoader"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r4.<init>()     // Catch: java.lang.Exception -> L71
            java.lang.String r6 = "dex path:"
            r4.append(r6)     // Catch: java.lang.Exception -> L71
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L71
            r4.append(r5)     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L71
            com.qihoo360.replugin.helper.LogDebug.d(r3, r4)     // Catch: java.lang.Exception -> L71
            goto La
        L71:
            r3 = move-exception
            r3.printStackTrace()
            goto La
        L76:
            return r0
    }

    @Override
    protected java.lang.Class<?> loadClass(java.lang.String r7, boolean r8) throws java.lang.ClassNotFoundException {
            r6 = this;
            java.lang.String r0 = "PluginDexClassLoader"
            r1 = 0
            java.lang.Class r2 = super.loadClass(r7, r8)     // Catch: java.lang.ClassNotFoundException -> L2e
            if (r2 == 0) goto L2c
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.ClassNotFoundException -> L2e
            if (r3 == 0) goto L2b
            com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.ClassNotFoundException -> L2e
            boolean r3 = r3.isPrintDetailLog()     // Catch: java.lang.ClassNotFoundException -> L2e
            if (r3 == 0) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L2e
            r3.<init>()     // Catch: java.lang.ClassNotFoundException -> L2e
            java.lang.String r4 = "loadClass: load plugin class, cn="
            r3.append(r4)     // Catch: java.lang.ClassNotFoundException -> L2e
            r3.append(r7)     // Catch: java.lang.ClassNotFoundException -> L2e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.ClassNotFoundException -> L2e
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)     // Catch: java.lang.ClassNotFoundException -> L2e
        L2b:
            return r2
        L2c:
            r2 = r1
            goto L7e
        L2e:
            r2 = move-exception
            boolean r3 = com.qihoo360.replugin.PluginDexClassLoaderPatch.need2LoadFromHost(r7)
            java.lang.String r4 = ", pluginName="
            if (r3 == 0) goto L5e
            java.lang.Class r7 = r6.loadClassFromHost(r7, r8)     // Catch: java.lang.ClassNotFoundException -> L3c
            return r7
        L3c:
            r2 = move-exception
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L7e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "loadClass ClassNotFoundException, from HostClassLoader&&PluginClassLoader, cn="
            r3.append(r5)
            r3.append(r7)
            r3.append(r4)
            java.lang.String r4 = r6.mPluginName
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
            goto L7e
        L5e:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L7e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "loadClass ClassNotFoundException, from PluginClassLoader, cn="
            r3.append(r5)
            r3.append(r7)
            r3.append(r4)
            java.lang.String r4 = r6.mPluginName
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
        L7e:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r0 = r0.isUseHostClassIfNotFound()
            if (r0 == 0) goto L8e
            java.lang.Class r7 = r6.loadClassFromHost(r7, r8)     // Catch: java.lang.ClassNotFoundException -> L8d
            return r7
        L8d:
            r2 = move-exception
        L8e:
            if (r2 != 0) goto L91
            return r1
        L91:
            throw r2
    }
}
