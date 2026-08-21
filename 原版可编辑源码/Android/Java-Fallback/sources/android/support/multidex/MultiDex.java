package android.support.multidex;

public final class MultiDex {
    private static final boolean IS_VM_MULTIDEX_CAPABLE = false;
    private static final int MAX_SUPPORTED_SDK_VERSION = 20;
    private static final int MIN_SDK_VERSION = 4;
    private static final java.lang.String OLD_SECONDARY_FOLDER_NAME = "secondary-dexes";
    private static final java.lang.String SECONDARY_FOLDER_NAME = null;
    static final java.lang.String TAG = "MultiDex";
    private static final int VM_WITH_MULTIDEX_VERSION_MAJOR = 2;
    private static final int VM_WITH_MULTIDEX_VERSION_MINOR = 1;
    private static final java.util.Set<java.lang.String> installedApk = null;

    private static final class V14 {
        private V14() {
                r0 = this;
                r0.<init>()
                return
        }

        static void access$100(java.lang.ClassLoader r0, java.util.List r1, java.io.File r2) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                install(r0, r1, r2)
                return
        }

        private static void install(java.lang.ClassLoader r4, java.util.List<java.io.File> r5, java.io.File r6) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                java.lang.String r2 = "pathList"
                java.lang.reflect.Field r1 = android.support.multidex.MultiDex.access$300(r4, r2)
                java.lang.Object r0 = r1.get(r4)
                java.lang.String r2 = "dexElements"
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>(r5)
                java.lang.Object[] r3 = makeDexElements(r0, r3, r6)
                android.support.multidex.MultiDex.access$400(r0, r2, r3)
                return
        }

        private static java.lang.Object[] makeDexElements(java.lang.Object r7, java.util.ArrayList<java.io.File> r8, java.io.File r9) throws java.lang.IllegalAccessException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                r6 = 2
                r5 = 1
                r4 = 0
                java.lang.String r1 = "makeDexElements"
                java.lang.Class[] r2 = new java.lang.Class[r6]
                java.lang.Class<java.util.ArrayList> r3 = java.util.ArrayList.class
                r2[r4] = r3
                java.lang.Class<java.io.File> r3 = java.io.File.class
                r2[r5] = r3
                java.lang.reflect.Method r0 = android.support.multidex.MultiDex.access$500(r7, r1, r2)
                java.lang.Object[] r1 = new java.lang.Object[r6]
                r1[r4] = r8
                r1[r5] = r9
                java.lang.Object r1 = r0.invoke(r7, r1)
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                return r1
        }
    }

    private static final class V19 {
        private V19() {
                r0 = this;
                r0.<init>()
                return
        }

        static void access$000(java.lang.ClassLoader r0, java.util.List r1, java.io.File r2) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                install(r0, r1, r2)
                return
        }

        private static void install(java.lang.ClassLoader r11, java.util.List<java.io.File> r12, java.io.File r13) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                java.lang.String r8 = "pathList"
                java.lang.reflect.Field r5 = android.support.multidex.MultiDex.access$300(r11, r8)
                java.lang.Object r2 = r5.get(r11)
                java.util.ArrayList r6 = new java.util.ArrayList
                r6.<init>()
                java.lang.String r8 = "dexElements"
                java.util.ArrayList r9 = new java.util.ArrayList
                r9.<init>(r12)
                java.lang.Object[] r9 = makeDexElements(r2, r9, r13, r6)
                android.support.multidex.MultiDex.access$400(r2, r8, r9)
                int r8 = r6.size()
                if (r8 <= 0) goto L5b
                java.util.Iterator r4 = r6.iterator()
            L27:
                boolean r8 = r4.hasNext()
                if (r8 == 0) goto L3b
                java.lang.Object r3 = r4.next()
                java.io.IOException r3 = (java.io.IOException) r3
                java.lang.String r8 = "MultiDex"
                java.lang.String r9 = "Exception in makeDexElement"
                android.util.Log.w(r8, r9, r3)
                goto L27
            L3b:
                java.lang.String r8 = "dexElementsSuppressedExceptions"
                java.lang.reflect.Field r7 = android.support.multidex.MultiDex.access$300(r11, r8)
                java.lang.Object r8 = r7.get(r11)
                java.io.IOException[] r8 = (java.io.IOException[]) r8
                r1 = r8
                java.io.IOException[] r1 = (java.io.IOException[]) r1
                if (r1 != 0) goto L5c
                int r8 = r6.size()
                java.io.IOException[] r8 = new java.io.IOException[r8]
                java.lang.Object[] r1 = r6.toArray(r8)
                java.io.IOException[] r1 = (java.io.IOException[]) r1
            L58:
                r7.set(r11, r1)
            L5b:
                return
            L5c:
                int r8 = r6.size()
                int r9 = r1.length
                int r8 = r8 + r9
                java.io.IOException[] r0 = new java.io.IOException[r8]
                r6.toArray(r0)
                r8 = 0
                int r9 = r6.size()
                int r10 = r1.length
                java.lang.System.arraycopy(r1, r8, r0, r9, r10)
                r1 = r0
                goto L58
        }

        private static java.lang.Object[] makeDexElements(java.lang.Object r8, java.util.ArrayList<java.io.File> r9, java.io.File r10, java.util.ArrayList<java.io.IOException> r11) throws java.lang.IllegalAccessException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException {
                r7 = 3
                r6 = 2
                r5 = 1
                r4 = 0
                java.lang.String r1 = "makeDexElements"
                java.lang.Class[] r2 = new java.lang.Class[r7]
                java.lang.Class<java.util.ArrayList> r3 = java.util.ArrayList.class
                r2[r4] = r3
                java.lang.Class<java.io.File> r3 = java.io.File.class
                r2[r5] = r3
                java.lang.Class<java.util.ArrayList> r3 = java.util.ArrayList.class
                r2[r6] = r3
                java.lang.reflect.Method r0 = android.support.multidex.MultiDex.access$500(r8, r1, r2)
                java.lang.Object[] r1 = new java.lang.Object[r7]
                r1[r4] = r9
                r1[r5] = r10
                r1[r6] = r11
                java.lang.Object r1 = r0.invoke(r8, r1)
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                java.lang.Object[] r1 = (java.lang.Object[]) r1
                return r1
        }
    }

    private static final class V4 {
        private V4() {
                r0 = this;
                r0.<init>()
                return
        }

        static void access$200(java.lang.ClassLoader r0, java.util.List r1) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.io.IOException {
                install(r0, r1)
                return
        }

        private static void install(java.lang.ClassLoader r13, java.util.List<java.io.File> r14) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.io.IOException {
                int r5 = r14.size()
                java.lang.String r11 = "path"
                java.lang.reflect.Field r10 = android.support.multidex.MultiDex.access$300(r13, r11)
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                java.lang.Object r11 = r10.get(r13)
                java.lang.String r11 = (java.lang.String) r11
                r9.<init>(r11)
                java.lang.String[] r4 = new java.lang.String[r5]
                java.io.File[] r3 = new java.io.File[r5]
                java.util.zip.ZipFile[] r6 = new java.util.zip.ZipFile[r5]
                dalvik.system.DexFile[] r2 = new dalvik.system.DexFile[r5]
                java.util.ListIterator r8 = r14.listIterator()
            L21:
                boolean r11 = r8.hasNext()
                if (r11 == 0) goto L64
                java.lang.Object r0 = r8.next()
                java.io.File r0 = (java.io.File) r0
                java.lang.String r1 = r0.getAbsolutePath()
                r11 = 58
                java.lang.StringBuilder r11 = r9.append(r11)
                r11.append(r1)
                int r7 = r8.previousIndex()
                r4[r7] = r1
                r3[r7] = r0
                java.util.zip.ZipFile r11 = new java.util.zip.ZipFile
                r11.<init>(r0)
                r6[r7] = r11
                java.lang.StringBuilder r11 = new java.lang.StringBuilder
                r11.<init>()
                java.lang.StringBuilder r11 = r11.append(r1)
                java.lang.String r12 = ".dex"
                java.lang.StringBuilder r11 = r11.append(r12)
                java.lang.String r11 = r11.toString()
                r12 = 0
                dalvik.system.DexFile r11 = dalvik.system.DexFile.loadDex(r1, r11, r12)
                r2[r7] = r11
                goto L21
            L64:
                java.lang.String r11 = r9.toString()
                r10.set(r13, r11)
                java.lang.String r11 = "mPaths"
                android.support.multidex.MultiDex.access$400(r13, r11, r4)
                java.lang.String r11 = "mFiles"
                android.support.multidex.MultiDex.access$400(r13, r11, r3)
                java.lang.String r11 = "mZips"
                android.support.multidex.MultiDex.access$400(r13, r11, r6)
                java.lang.String r11 = "mDexs"
                android.support.multidex.MultiDex.access$400(r13, r11, r2)
                return
        }
    }

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "code_cache"
            java.lang.StringBuilder r0 = r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            java.lang.StringBuilder r0 = r0.append(r1)
            java.lang.String r1 = "secondary-dexes"
            java.lang.StringBuilder r0 = r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.support.multidex.MultiDex.SECONDARY_FOLDER_NAME = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            android.support.multidex.MultiDex.installedApk = r0
            java.lang.String r0 = "java.vm.version"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            boolean r0 = isVMMultidexCapable(r0)
            android.support.multidex.MultiDex.IS_VM_MULTIDEX_CAPABLE = r0
            return
    }

    private MultiDex() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.reflect.Field access$300(java.lang.Object r1, java.lang.String r2) throws java.lang.NoSuchFieldException {
            java.lang.reflect.Field r0 = findField(r1, r2)
            return r0
    }

    static void access$400(java.lang.Object r0, java.lang.String r1, java.lang.Object[] r2) throws java.lang.NoSuchFieldException, java.lang.IllegalArgumentException, java.lang.IllegalAccessException {
            expandFieldArray(r0, r1, r2)
            return
    }

    static java.lang.reflect.Method access$500(java.lang.Object r1, java.lang.String r2, java.lang.Class[] r3) throws java.lang.NoSuchMethodException {
            java.lang.reflect.Method r0 = findMethod(r1, r2, r3)
            return r0
    }

    private static boolean checkValidZipFiles(java.util.List<java.io.File> r3) {
            java.util.Iterator r1 = r3.iterator()
        L4:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L18
            java.lang.Object r0 = r1.next()
            java.io.File r0 = (java.io.File) r0
            boolean r2 = android.support.multidex.MultiDexExtractor.verifyZipFile(r0)
            if (r2 != 0) goto L4
            r2 = 0
        L17:
            return r2
        L18:
            r2 = 1
            goto L17
    }

    private static void clearOldDexDir(android.content.Context r10) throws java.lang.Exception {
            java.io.File r1 = new java.io.File
            java.io.File r6 = r10.getFilesDir()
            java.lang.String r7 = "secondary-dexes"
            r1.<init>(r6, r7)
            boolean r6 = r1.isDirectory()
            if (r6 == 0) goto L5b
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Clearing old secondary dex dir ("
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r1.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = ")."
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.i(r6, r7)
            java.io.File[] r2 = r1.listFiles()
            if (r2 != 0) goto L5c
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to list secondary dex dir content ("
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r1.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = ")."
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.w(r6, r7)
        L5b:
            return
        L5c:
            r0 = r2
            int r4 = r0.length
            r3 = 0
        L5f:
            if (r3 >= r4) goto Lcf
            r5 = r0[r3]
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Trying to delete old file "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r5.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = " of size "
            java.lang.StringBuilder r7 = r7.append(r8)
            long r8 = r5.length()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.i(r6, r7)
            boolean r6 = r5.delete()
            if (r6 != 0) goto Lb2
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to delete old file "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r5.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.w(r6, r7)
        Laf:
            int r3 = r3 + 1
            goto L5f
        Lb2:
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Deleted old file "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r5.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.i(r6, r7)
            goto Laf
        Lcf:
            boolean r6 = r1.delete()
            if (r6 != 0) goto Lf3
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to delete secondary dex dir "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r1.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.w(r6, r7)
            goto L5b
        Lf3:
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Deleted old secondary dex dir "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r1.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.i(r6, r7)
            goto L5b
    }

    private static void expandFieldArray(java.lang.Object r7, java.lang.String r8, java.lang.Object[] r9) throws java.lang.NoSuchFieldException, java.lang.IllegalArgumentException, java.lang.IllegalAccessException {
            r6 = 0
            java.lang.reflect.Field r1 = findField(r7, r8)
            java.lang.Object r3 = r1.get(r7)
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r2 = r3
            java.lang.Object[] r2 = (java.lang.Object[]) r2
            java.lang.Class r3 = r2.getClass()
            java.lang.Class r3 = r3.getComponentType()
            int r4 = r2.length
            int r5 = r9.length
            int r4 = r4 + r5
            java.lang.Object r3 = java.lang.reflect.Array.newInstance(r3, r4)
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r0 = r3
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r3 = r2.length
            java.lang.System.arraycopy(r2, r6, r0, r6, r3)
            int r3 = r2.length
            int r4 = r9.length
            java.lang.System.arraycopy(r9, r6, r0, r3, r4)
            r1.set(r7, r0)
            return
    }

    private static java.lang.reflect.Field findField(java.lang.Object r5, java.lang.String r6) throws java.lang.NoSuchFieldException {
            java.lang.Class r0 = r5.getClass()
        L4:
            if (r0 == 0) goto L1b
            java.lang.reflect.Field r1 = r0.getDeclaredField(r6)     // Catch: java.lang.NoSuchFieldException -> L15
            boolean r2 = r1.isAccessible()     // Catch: java.lang.NoSuchFieldException -> L15
            if (r2 != 0) goto L14
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.NoSuchFieldException -> L15
        L14:
            return r1
        L15:
            r2 = move-exception
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L1b:
            java.lang.NoSuchFieldException r2 = new java.lang.NoSuchFieldException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Field "
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.StringBuilder r3 = r3.append(r6)
            java.lang.String r4 = " not found in "
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    private static java.lang.reflect.Method findMethod(java.lang.Object r5, java.lang.String r6, java.lang.Class<?>... r7) throws java.lang.NoSuchMethodException {
            java.lang.Class r0 = r5.getClass()
        L4:
            if (r0 == 0) goto L1b
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r6, r7)     // Catch: java.lang.NoSuchMethodException -> L15
            boolean r2 = r1.isAccessible()     // Catch: java.lang.NoSuchMethodException -> L15
            if (r2 != 0) goto L14
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.NoSuchMethodException -> L15
        L14:
            return r1
        L15:
            r2 = move-exception
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L1b:
            java.lang.NoSuchMethodException r2 = new java.lang.NoSuchMethodException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Method "
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.StringBuilder r3 = r3.append(r6)
            java.lang.String r4 = " with parameters "
            java.lang.StringBuilder r3 = r3.append(r4)
            java.util.List r4 = java.util.Arrays.asList(r7)
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.String r4 = " not found in "
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.Class r4 = r5.getClass()
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    private static android.content.pm.ApplicationInfo getApplicationInfo(android.content.Context r6) throws android.content.pm.PackageManager.NameNotFoundException {
            r0 = 0
            android.content.pm.PackageManager r3 = r6.getPackageManager()     // Catch: java.lang.RuntimeException -> Le
            java.lang.String r2 = r6.getPackageName()     // Catch: java.lang.RuntimeException -> Le
            if (r3 == 0) goto Ld
            if (r2 != 0) goto L17
        Ld:
            return r0
        Le:
            r1 = move-exception
            java.lang.String r4 = "MultiDex"
            java.lang.String r5 = "Failure while trying to obtain ApplicationInfo from Context. Must be running in test mode. Skip patching."
            android.util.Log.w(r4, r5, r1)
            goto Ld
        L17:
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo(r2, r4)
            goto Ld
    }

    public static void install(android.content.Context r11) {
            r9 = 20
            r10 = 4
            java.lang.String r7 = "MultiDex"
            java.lang.String r8 = "install"
            android.util.Log.i(r7, r8)
            boolean r7 = android.support.multidex.MultiDex.IS_VM_MULTIDEX_CAPABLE
            if (r7 == 0) goto L16
            java.lang.String r7 = "MultiDex"
            java.lang.String r8 = "VM has multidex support, MultiDex support library is disabled."
            android.util.Log.i(r7, r8)
        L15:
            return
        L16:
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 >= r10) goto L45
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Multi dex installation failed. SDK "
            java.lang.StringBuilder r8 = r8.append(r9)
            int r9 = android.os.Build.VERSION.SDK_INT
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = " is unsupported. Min SDK version is "
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.StringBuilder r8 = r8.append(r10)
            java.lang.String r9 = "."
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L45:
            android.content.pm.ApplicationInfo r1 = getApplicationInfo(r11)     // Catch: java.lang.Exception -> L5d
            if (r1 == 0) goto L15
            java.util.Set<java.lang.String> r8 = android.support.multidex.MultiDex.installedApk     // Catch: java.lang.Exception -> L5d
            monitor-enter(r8)     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = r1.sourceDir     // Catch: java.lang.Throwable -> L5a
            java.util.Set<java.lang.String> r7 = android.support.multidex.MultiDex.installedApk     // Catch: java.lang.Throwable -> L5a
            boolean r7 = r7.contains(r0)     // Catch: java.lang.Throwable -> L5a
            if (r7 == 0) goto L88
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            goto L15
        L5a:
            r7 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            throw r7     // Catch: java.lang.Exception -> L5d
        L5d:
            r3 = move-exception
            java.lang.String r7 = "MultiDex"
            java.lang.String r8 = "Multidex installation failure"
            android.util.Log.e(r7, r8, r3)
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Multi dex installation failed ("
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r3.getMessage()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = ")."
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L88:
            java.util.Set<java.lang.String> r7 = android.support.multidex.MultiDex.installedApk     // Catch: java.lang.Throwable -> L5a
            r7.add(r0)     // Catch: java.lang.Throwable -> L5a
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5a
            if (r7 <= r9) goto Ld9
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5a
            r9.<init>()     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "MultiDex is not guaranteed to work in SDK version "
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            int r10 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5a
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = ": SDK version higher than "
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            r10 = 20
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = " should be backed by "
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "runtime with built-in multidex capabilty but it's not the "
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "case here: java.vm.version=\""
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "java.vm.version"
            java.lang.String r10 = java.lang.System.getProperty(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r10 = "\""
            java.lang.StringBuilder r9 = r9.append(r10)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L5a
            android.util.Log.w(r7, r9)     // Catch: java.lang.Throwable -> L5a
        Ld9:
            java.lang.ClassLoader r5 = r11.getClassLoader()     // Catch: java.lang.Throwable -> L5a java.lang.RuntimeException -> Le9
            if (r5 != 0) goto Lf4
            java.lang.String r7 = "MultiDex"
            java.lang.String r9 = "Context class loader is null. Must be running in test mode. Skip patching."
            android.util.Log.e(r7, r9)     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            goto L15
        Le9:
            r3 = move-exception
            java.lang.String r7 = "MultiDex"
            java.lang.String r9 = "Failure while trying to obtain Context class loader. Must be running in test mode. Skip patching."
            android.util.Log.w(r7, r9, r3)     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            goto L15
        Lf4:
            clearOldDexDir(r11)     // Catch: java.lang.Throwable -> L5a java.lang.Throwable -> L118
        Lf7:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L5a
            java.lang.String r7 = r1.dataDir     // Catch: java.lang.Throwable -> L5a
            java.lang.String r9 = android.support.multidex.MultiDex.SECONDARY_FOLDER_NAME     // Catch: java.lang.Throwable -> L5a
            r2.<init>(r7, r9)     // Catch: java.lang.Throwable -> L5a
            r7 = 0
            java.util.List r4 = android.support.multidex.MultiDexExtractor.load(r11, r1, r2, r7)     // Catch: java.lang.Throwable -> L5a
            boolean r7 = checkValidZipFiles(r4)     // Catch: java.lang.Throwable -> L5a
            if (r7 == 0) goto L121
            installSecondaryDexes(r5, r2, r4)     // Catch: java.lang.Throwable -> L5a
        L10e:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r7 = "MultiDex"
            java.lang.String r8 = "install done"
            android.util.Log.i(r7, r8)
            goto L15
        L118:
            r6 = move-exception
            java.lang.String r7 = "MultiDex"
            java.lang.String r9 = "Something went wrong when trying to clear old MultiDex extraction, continuing without cleaning."
            android.util.Log.w(r7, r9, r6)     // Catch: java.lang.Throwable -> L5a
            goto Lf7
        L121:
            java.lang.String r7 = "MultiDex"
            java.lang.String r9 = "Files were not valid zip files.  Forcing a reload."
            android.util.Log.w(r7, r9)     // Catch: java.lang.Throwable -> L5a
            r7 = 1
            java.util.List r4 = android.support.multidex.MultiDexExtractor.load(r11, r1, r2, r7)     // Catch: java.lang.Throwable -> L5a
            boolean r7 = checkValidZipFiles(r4)     // Catch: java.lang.Throwable -> L5a
            if (r7 == 0) goto L137
            installSecondaryDexes(r5, r2, r4)     // Catch: java.lang.Throwable -> L5a
            goto L10e
        L137:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L5a
            java.lang.String r9 = "Zip files were not valid."
            r7.<init>(r9)     // Catch: java.lang.Throwable -> L5a
            throw r7     // Catch: java.lang.Throwable -> L5a
    }

    private static void installSecondaryDexes(java.lang.ClassLoader r2, java.io.File r3, java.util.List<java.io.File> r4) throws java.lang.IllegalArgumentException, java.lang.IllegalAccessException, java.lang.NoSuchFieldException, java.lang.reflect.InvocationTargetException, java.lang.NoSuchMethodException, java.io.IOException {
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto Lf
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L10
            android.support.multidex.MultiDex.V19.access$000(r2, r4, r3)
        Lf:
            return
        L10:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 < r1) goto L1a
            android.support.multidex.MultiDex.V14.access$100(r2, r4, r3)
            goto Lf
        L1a:
            android.support.multidex.MultiDex.V4.access$200(r2, r4)
            goto Lf
    }

    static boolean isVMMultidexCapable(java.lang.String r7) {
            r6 = 2
            r4 = 1
            r0 = 0
            if (r7 == 0) goto L2e
            java.lang.String r5 = "(\\d+)\\.(\\d+)(\\.\\d+)?"
            java.util.regex.Pattern r5 = java.util.regex.Pattern.compile(r5)
            java.util.regex.Matcher r2 = r5.matcher(r7)
            boolean r5 = r2.matches()
            if (r5 == 0) goto L2e
            r5 = 1
            java.lang.String r5 = r2.group(r5)     // Catch: java.lang.NumberFormatException -> L54
            int r1 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> L54
            r5 = 2
            java.lang.String r5 = r2.group(r5)     // Catch: java.lang.NumberFormatException -> L54
            int r3 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.NumberFormatException -> L54
            if (r1 > r6) goto L2d
            if (r1 != r6) goto L4f
            if (r3 < r4) goto L4f
        L2d:
            r0 = r4
        L2e:
            java.lang.String r5 = "MultiDex"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "VM with version "
            java.lang.StringBuilder r4 = r4.append(r6)
            java.lang.StringBuilder r6 = r4.append(r7)
            if (r0 == 0) goto L51
            java.lang.String r4 = " has multidex support"
        L43:
            java.lang.StringBuilder r4 = r6.append(r4)
            java.lang.String r4 = r4.toString()
            android.util.Log.i(r5, r4)
            return r0
        L4f:
            r0 = 0
            goto L2e
        L51:
            java.lang.String r4 = " does not have multidex support"
            goto L43
        L54:
            r4 = move-exception
            goto L2e
    }
}
