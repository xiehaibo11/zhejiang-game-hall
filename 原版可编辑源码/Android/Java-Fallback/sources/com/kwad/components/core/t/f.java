package com.kwad.components.core.t;

public final class f {
    public static void destroyActivity(android.content.Context r0, android.view.Window r1) {
            if (r1 != 0) goto L3
            return
        L3:
            android.view.View r1 = r1.getDecorView()
            destroyWebViewInTree(r1)
            fixInputMethodManagerLeak(r0, r1)
            return
    }

    public static void destroyFragment(android.content.Context r0, android.view.View r1) {
            destroyWebViewInTree(r1)
            fixInputMethodManagerLeak(r0, r1)
            return
    }

    private static synchronized void destroyWebViewInTree(android.view.View r4) {
            java.lang.Class<com.kwad.components.core.t.f> r0 = com.kwad.components.core.t.f.class
            monitor-enter(r0)
            if (r4 != 0) goto L7
            monitor-exit(r0)
            return
        L7:
            boolean r1 = r4 instanceof android.webkit.WebView     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L14
            android.webkit.WebView r4 = (android.webkit.WebView) r4     // Catch: java.lang.Throwable -> L12
            r4.destroy()     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return
        L12:
            monitor-exit(r0)
            return
        L14:
            boolean r1 = r4 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L1a
            monitor-exit(r0)
            return
        L1a:
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L2f
            int r1 = r4.getChildCount()     // Catch: java.lang.Throwable -> L2f
            r2 = 0
        L21:
            if (r2 >= r1) goto L2d
            android.view.View r3 = r4.getChildAt(r2)     // Catch: java.lang.Throwable -> L2f
            destroyWebViewInTree(r3)     // Catch: java.lang.Throwable -> L2f
            int r2 = r2 + 1
            goto L21
        L2d:
            monitor-exit(r0)
            return
        L2f:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static void fixInputMethodManagerLeak(android.content.Context r5, android.view.View r6) {
            if (r5 == 0) goto L5a
            if (r6 != 0) goto L5
            goto L5a
        L5:
            int r6 = android.os.Build.VERSION.SDK_INT
            r0 = 29
            if (r6 < r0) goto Lc
            return
        Lc:
            java.lang.String r6 = "input_method"
            java.lang.Object r6 = r5.getSystemService(r6)
            android.view.inputmethod.InputMethodManager r6 = (android.view.inputmethod.InputMethodManager) r6
            if (r6 != 0) goto L17
            return
        L17:
            java.lang.String r0 = "mCurRootView"
            java.lang.String r1 = "mServedView"
            java.lang.String r2 = "mNextServedView"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            r1 = 0
        L22:
            r2 = 3
            if (r1 >= r2) goto L5a
            r2 = r0[r1]
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L53
            java.lang.reflect.Field r2 = r3.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L53
            boolean r3 = r2.isAccessible()     // Catch: java.lang.Throwable -> L53
            if (r3 != 0) goto L39
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> L53
        L39:
            java.lang.Object r3 = r2.get(r6)     // Catch: java.lang.Throwable -> L53
            boolean r4 = r3 instanceof android.view.View     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L57
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L53
            android.content.Context r3 = r3.getContext()     // Catch: java.lang.Throwable -> L53
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L52
            r3 = 0
            r2.set(r6, r3)     // Catch: java.lang.Throwable -> L53
            goto L57
        L52:
            return
        L53:
            r2 = move-exception
            r2.printStackTrace()
        L57:
            int r1 = r1 + 1
            goto L22
        L5a:
            return
    }
}
