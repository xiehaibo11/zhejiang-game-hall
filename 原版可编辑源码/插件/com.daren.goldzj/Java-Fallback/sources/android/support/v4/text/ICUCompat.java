package android.support.v4.text;

import android.os.Build;
import android.support.annotation.Nullable;
import android.util.Log;
import java.lang.reflect.Method;
import java.util.Locale;

public final class ICUCompat {
    private static final String TAG = "ICUCompat";
    private static Method sAddLikelySubtagsMethod;
    private static Method sGetScriptMethod;

    static {
        if (Build.VERSION.SDK_INT < 21) goto L18;
        sAddLikelySubtagsMethod = Class.forName("libcore.icu.ICU").getMethod("addLikelySubtags", new Class[]{Locale.class});     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        throw new IllegalStateException(e);
    L18:
        Class<?> r0 = Class.forName("libcore.icu.ICU");     // Catch: Exception -> L13
        if (r0 == null) goto L20;
        sGetScriptMethod = r0.getMethod("getScript", new Class[]{String.class});     // Catch: Exception -> L13
        sAddLikelySubtagsMethod = r0.getMethod("addLikelySubtags", new Class[]{String.class});     // Catch: Exception -> L13
        return;
    L20:
        return;
    L13:
        e = move-exception;
        sGetScriptMethod = null;
        sAddLikelySubtagsMethod = null;
        Log.w(TAG, e);
    }

    @Nullable
    public static String maximizeAndGetScript(Locale r4) {
        if (Build.VERSION.SDK_INT >= 21) goto L18;
        String r42 = addLikelySubtags(r4);
        if (r42 != null) goto L16;
        return null;
    L16:
        return getScript(r42);
    L18:
        return ((Locale) sAddLikelySubtagsMethod.invoke(null, new Object[]{r4})).getScript();
    L7:
        e = move-exception;
        Log.w(TAG, e);
    L12:
        return r4.getScript();
    L9:
        e = move-exception;
        Log.w(TAG, e);
        goto L12
    }

    private static String getScript(String r4) {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.text.ICUCompat.getScript(java.lang.String):java.lang.String");
    }

    private static String addLikelySubtags(Locale r4) {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.text.ICUCompat.addLikelySubtags(java.util.Locale):java.lang.String");
    }

    private ICUCompat() {
    }
}
