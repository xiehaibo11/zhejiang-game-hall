package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Dex2OatUtils {
    private static final boolean FOR_DEV = false;
    public static final java.lang.String TAG = "Dex2Oat";

    static {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV = r0
            return
    }

    public Dex2OatUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void injectLoadDex(java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            boolean r0 = isArtMode()
            if (r0 == 0) goto L8f
            java.io.File r0 = new java.io.File
            r0.<init>(r8, r9)
            boolean r1 = r0.exists()
            java.lang.String r2 = "Dex2Oat"
            if (r1 == 0) goto L3e
            long r3 = r0.length()
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 > 0) goto L1e
            goto L3e
        L1e:
            boolean r7 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r7 == 0) goto L8f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r9)
            java.lang.String r8 = " 文件存在, 不需要inject，size:"
            r7.append(r8)
            long r8 = r0.length()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            android.util.Log.d(r2, r7)
            goto L8f
        L3e:
            boolean r0 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r0 == 0) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r1 = " 文件不存在"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r2, r0)
        L56:
            long r0 = java.lang.System.currentTimeMillis()
            boolean r7 = innerInjectLoadDex(r7, r8, r9)
            boolean r8 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r8 == 0) goto L8f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "injectLoadDex use:"
            r8.append(r9)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r8.append(r3)
            java.lang.String r8 = r8.toString()
            android.util.Log.d(r2, r8)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "injectLoadDex result:"
            r8.append(r9)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.d(r2, r7)
        L8f:
            return
    }

    private static boolean injectLoadDex4Art(java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            boolean r0 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            java.lang.String r1 = "Dex2Oat"
            if (r0 == 0) goto Lb
            java.lang.String r0 = "Andorid Art, try 2 interpretDex2Oat, interpret-only."
            android.util.Log.d(r1, r0)
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r7 = java.io.File.separator
            r0.append(r7)
            r0.append(r8)
            java.lang.String r7 = r0.toString()
            long r2 = java.lang.System.currentTimeMillis()
            com.qihoo360.replugin.utils.InterpretDex2OatHelper.interpretDex2Oat(r6, r7)     // Catch: java.io.IOException -> L5d
            boolean r6 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r6 == 0) goto L5b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "interpretDex2Oat use:"
            r6.append(r8)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r1, r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "interpretDex2Oat odexSize:"
            r6.append(r8)
            long r7 = com.qihoo360.replugin.utils.InterpretDex2OatHelper.getOdexSize(r7)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r1, r6)
        L5b:
            r6 = 1
            return r6
        L5d:
            r6 = move-exception
            boolean r7 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r7 == 0) goto L6a
            r6.printStackTrace()
            java.lang.String r6 = "interpretDex2Oat Error"
            android.util.Log.e(r1, r6)
        L6a:
            r6 = 0
            return r6
    }

    private static boolean injectLoadDex4More() {
            r0 = 0
            return r0
    }

    private static boolean injectLoadDexBeforeN() {
            boolean r0 = isArtMode()
            java.lang.String r1 = "Dex2Oat"
            if (r0 == 0) goto L34
            long r2 = java.lang.System.currentTimeMillis()
            boolean r0 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r0 == 0) goto L15
            java.lang.String r0 = "Art before Android N, try 2 hook."
            android.util.Log.d(r1, r0)
        L15:
            boolean r0 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "hook end, use："
            r0.append(r4)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r1, r0)
        L32:
            r0 = 1
            return r0
        L34:
            boolean r0 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r0 == 0) goto L3d
            java.lang.String r0 = "not Art, do nothing."
            android.util.Log.d(r1, r0)
        L3d:
            r0 = 0
            return r0
    }

    private static boolean innerInjectLoadDex(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L13
            boolean r2 = com.qihoo360.replugin.utils.Dex2OatUtils.FOR_DEV
            if (r2 == 0) goto L11
            java.lang.String r2 = "Dex2Oat"
            java.lang.String r3 = "before Android L, do nothing."
            android.util.Log.d(r2, r3)
        L11:
            r2 = 0
            return r2
        L13:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L22
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 > r1) goto L22
            boolean r2 = injectLoadDex4Art(r2, r3, r4)
            return r2
        L22:
            boolean r2 = injectLoadDex4More()
            return r2
    }

    public static boolean isArtMode() {
            java.lang.String r0 = "java.vm.version"
            java.lang.String r1 = ""
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)
            java.lang.String r1 = "2"
            boolean r0 = r0.startsWith(r1)
            return r0
    }
}
