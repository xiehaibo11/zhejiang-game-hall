package android.support.v4.text;

public final class ICUCompat {
    private static final java.lang.String TAG = "ICUCompat";
    private static java.lang.reflect.Method sAddLikelySubtagsMethod;
    private static java.lang.reflect.Method sGetScriptMethod;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "addLikelySubtags"
            java.lang.String r2 = "libcore.icu.ICU"
            r3 = 0
            r4 = 1
            r5 = 21
            if (r0 < r5) goto L24
            java.lang.Class r0 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L1d
            java.lang.Class[] r2 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L1d
            java.lang.Class<java.util.Locale> r4 = java.util.Locale.class
            r2[r3] = r4     // Catch: java.lang.Exception -> L1d
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Exception -> L1d
            android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod = r0     // Catch: java.lang.Exception -> L1d
            goto L50
        L1d:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
        L24:
            java.lang.Class r0 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L50
            java.lang.String r2 = "getScript"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L45
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6     // Catch: java.lang.Exception -> L45
            java.lang.reflect.Method r2 = r0.getMethod(r2, r5)     // Catch: java.lang.Exception -> L45
            android.support.v4.text.ICUCompat.sGetScriptMethod = r2     // Catch: java.lang.Exception -> L45
            java.lang.Class[] r2 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L45
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r2[r3] = r4     // Catch: java.lang.Exception -> L45
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Exception -> L45
            android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod = r0     // Catch: java.lang.Exception -> L45
            goto L50
        L45:
            r0 = move-exception
            r1 = 0
            android.support.v4.text.ICUCompat.sGetScriptMethod = r1
            android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod = r1
            java.lang.String r1 = "ICUCompat"
            android.util.Log.w(r1, r0)
        L50:
            return
    }

    private ICUCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String addLikelySubtags(java.util.Locale r4) {
            java.lang.String r0 = "ICUCompat"
            java.lang.String r4 = r4.toString()
            java.lang.reflect.Method r1 = android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            if (r1 == 0) goto L23
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            java.lang.reflect.Method r2 = android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            r3 = 0
            java.lang.Object r1 = r2.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.reflect.InvocationTargetException -> L1a java.lang.IllegalAccessException -> L1f
            return r1
        L1a:
            r1 = move-exception
            android.util.Log.w(r0, r1)
            goto L23
        L1f:
            r1 = move-exception
            android.util.Log.w(r0, r1)
        L23:
            return r4
    }

    private static java.lang.String getScript(java.lang.String r4) {
            java.lang.String r0 = "ICUCompat"
            r1 = 0
            java.lang.reflect.Method r2 = android.support.v4.text.ICUCompat.sGetScriptMethod     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            if (r2 == 0) goto L1f
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            java.lang.reflect.Method r4 = android.support.v4.text.ICUCompat.sGetScriptMethod     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            java.lang.Object r4 = r4.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.reflect.InvocationTargetException -> L16 java.lang.IllegalAccessException -> L1b
            return r4
        L16:
            r4 = move-exception
            android.util.Log.w(r0, r4)
            goto L1f
        L1b:
            r4 = move-exception
            android.util.Log.w(r0, r4)
        L1f:
            return r1
    }

    @android.support.annotation.Nullable
    public static java.lang.String maximizeAndGetScript(java.util.Locale r4) {
            java.lang.String r0 = "ICUCompat"
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 0
            r3 = 21
            if (r1 < r3) goto L2a
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            r3 = 0
            r1[r3] = r4     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            java.lang.reflect.Method r3 = android.support.v4.text.ICUCompat.sAddLikelySubtagsMethod     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            java.lang.Object r1 = r3.invoke(r2, r1)     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            java.util.Locale r1 = (java.util.Locale) r1     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            java.lang.String r4 = r1.getScript()     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L21
            return r4
        L1c:
            r1 = move-exception
            android.util.Log.w(r0, r1)
            goto L25
        L21:
            r1 = move-exception
            android.util.Log.w(r0, r1)
        L25:
            java.lang.String r4 = r4.getScript()
            return r4
        L2a:
            java.lang.String r4 = addLikelySubtags(r4)
            if (r4 == 0) goto L35
            java.lang.String r4 = getScript(r4)
            return r4
        L35:
            return r2
    }
}
