package com.qihoo360.loader.utils2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FilePermissionUtils {
    public static final int S_IRGRP = 32;
    public static final int S_IROTH = 4;
    public static final int S_IRUSR = 256;
    public static final int S_IRWXG = 56;
    public static final int S_IRWXO = 7;
    public static final int S_IRWXU = 448;
    public static final int S_IWGRP = 16;
    public static final int S_IWOTH = 2;
    public static final int S_IWUSR = 128;
    public static final int S_IXGRP = 8;
    public static final int S_IXOTH = 1;
    public static final int S_IXUSR = 64;
    private static java.lang.Class<?> sFileUtilsClass;
    private static java.lang.reflect.Method sGetPermissionMethod;
    private static java.lang.reflect.Method sSetPermissionMethod;

    public FilePermissionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getPermissions(java.lang.String r7, int[] r8) {
            initClass()     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.reflect.Method r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sGetPermissionMethod     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 != 0) goto L1e
            java.lang.Class<?> r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sFileUtilsClass     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.String r4 = "getPermissions"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.Class<int[]> r6 = int[].class
            r5[r1] = r6     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.reflect.Method r0 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r0, r4, r5)     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            com.qihoo360.loader.utils2.FilePermissionUtils.sGetPermissionMethod = r0     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
        L1e:
            java.lang.reflect.Method r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sGetPermissionMethod     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            r4 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            r3[r2] = r7     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            r3[r1] = r8     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            java.lang.Object r7 = r0.invoke(r4, r3)     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            if (r7 == 0) goto L46
            boolean r8 = r7 instanceof java.lang.Integer     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            if (r8 == 0) goto L46
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            int r7 = r7.intValue()     // Catch: java.lang.IllegalAccessException -> L38 java.lang.reflect.InvocationTargetException -> L3d java.lang.ClassNotFoundException -> L42
            return r7
        L38:
            r7 = move-exception
            r7.printStackTrace()
            goto L46
        L3d:
            r7 = move-exception
            r7.printStackTrace()
            goto L46
        L42:
            r7 = move-exception
            r7.printStackTrace()
        L46:
            r7 = -1
            return r7
    }

    private static void initClass() throws java.lang.ClassNotFoundException {
            java.lang.Class<?> r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sFileUtilsClass
            if (r0 != 0) goto Lc
            java.lang.String r0 = "android.os.FileUtils"
            java.lang.Class r0 = com.qihoo360.replugin.utils.ReflectUtils.getClass(r0)
            com.qihoo360.loader.utils2.FilePermissionUtils.sFileUtilsClass = r0
        Lc:
            return
    }

    public static int setPermissions(java.lang.String r9, int r10, int r11, int r12) {
            initClass()     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.reflect.Method r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sSetPermissionMethod     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r1 = 3
            r2 = 2
            r3 = 1
            r4 = 0
            r5 = 4
            if (r0 != 0) goto L28
            java.lang.Class<?> r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sFileUtilsClass     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.String r6 = "setPermissions"
            java.lang.Class[] r7 = new java.lang.Class[r5]     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r4] = r8     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r7[r3] = r8     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r7[r2] = r8     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r7[r1] = r8     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.reflect.Method r0 = com.qihoo360.replugin.utils.ReflectUtils.getMethod(r0, r6, r7)     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            com.qihoo360.loader.utils2.FilePermissionUtils.sSetPermissionMethod = r0     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
        L28:
            java.lang.reflect.Method r0 = com.qihoo360.loader.utils2.FilePermissionUtils.sSetPermissionMethod     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r6 = 0
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r5[r4] = r9     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Integer r9 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r5[r3] = r9     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Integer r9 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r5[r2] = r9     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Integer r9 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            r5[r1] = r9     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            java.lang.Object r9 = r0.invoke(r6, r5)     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            if (r9 == 0) goto L60
            boolean r10 = r9 instanceof java.lang.Integer     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            if (r10 == 0) goto L60
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            int r9 = r9.intValue()     // Catch: java.lang.IllegalAccessException -> L52 java.lang.reflect.InvocationTargetException -> L57 java.lang.ClassNotFoundException -> L5c
            return r9
        L52:
            r9 = move-exception
            r9.printStackTrace()
            goto L60
        L57:
            r9 = move-exception
            r9.printStackTrace()
            goto L60
        L5c:
            r9 = move-exception
            r9.printStackTrace()
        L60:
            r9 = -1
            return r9
    }
}
