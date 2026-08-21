package com.mbridge.msdk.mbnative.controller;

public final class a {
    private java.lang.ref.WeakReference<android.view.ViewTreeObserver> a;
    private java.util.List<android.view.View> b;
    private android.view.ViewTreeObserver.OnPreDrawListener c;
    private com.mbridge.msdk.mbnative.controller.a.a d;
    private android.os.Handler e;
    private boolean f;




    public interface a {
        void a(java.util.ArrayList<android.view.View> r1, java.util.ArrayList<android.view.View> r2);
    }

    public a(java.util.List<android.view.View> r4, com.mbridge.msdk.mbnative.controller.a.a r5, android.os.Handler r6) {
            r3 = this;
            java.lang.String r0 = "ImpressionTracker"
            r3.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r3.b = r1
            r2 = 0
            r3.c = r2
            r3.d = r5
            r3.e = r6
            if (r4 == 0) goto L18
            r3.b = r4
            goto L1b
        L18:
            r1.clear()
        L1b:
            r3.b()     // Catch: java.lang.Throwable -> L1f
            goto L27
        L1f:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L27:
            com.mbridge.msdk.mbnative.controller.a$1 r4 = new com.mbridge.msdk.mbnative.controller.a$1     // Catch: java.lang.Throwable -> L2f
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L2f
            r3.c = r4     // Catch: java.lang.Throwable -> L2f
            goto L37
        L2f:
            r4 = move-exception
            java.lang.String r5 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L37:
            return
    }

    static java.lang.ref.WeakReference a(com.mbridge.msdk.mbnative.controller.a r0, java.lang.ref.WeakReference r1) {
            r0.a = r1
            return r1
    }

    static void a(com.mbridge.msdk.mbnative.controller.a r0) {
            r0.b()
            return
    }

    private void b() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L5
            return
        L5:
            android.os.Handler r0 = r4.e
            if (r0 == 0) goto L13
            com.mbridge.msdk.mbnative.controller.a$2 r1 = new com.mbridge.msdk.mbnative.controller.a$2
            r1.<init>(r4)
            r2 = 100
            r0.postDelayed(r1, r2)
        L13:
            r0 = 1
            r4.f = r0
            return
    }

    static void b(com.mbridge.msdk.mbnative.controller.a r11) {
            r0 = 0
            r11.f = r0     // Catch: java.lang.Exception -> L8d
            java.util.List<android.view.View> r1 = r11.b     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L8d
            java.util.List<android.view.View> r1 = r11.b     // Catch: java.lang.Exception -> L8d
            int r1 = r1.size()     // Catch: java.lang.Exception -> L8d
            if (r1 <= 0) goto L8d
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L8d
            r1.<init>()     // Catch: java.lang.Exception -> L8d
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L8d
            r2.<init>()     // Catch: java.lang.Exception -> L8d
            r3 = r0
        L1a:
            java.util.List<android.view.View> r4 = r11.b     // Catch: java.lang.Exception -> L8d
            int r4 = r4.size()     // Catch: java.lang.Exception -> L8d
            if (r3 >= r4) goto L75
            java.util.List<android.view.View> r4 = r11.b     // Catch: java.lang.Exception -> L8d
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Exception -> L8d
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Exception -> L8d
            if (r4 == 0) goto L68
            int r5 = r4.getVisibility()     // Catch: java.lang.Exception -> L8d
            if (r5 == 0) goto L33
            goto L68
        L33:
            android.graphics.Rect r5 = new android.graphics.Rect     // Catch: java.lang.Exception -> L8d
            r5.<init>()     // Catch: java.lang.Exception -> L8d
            boolean r6 = r4.getGlobalVisibleRect(r5)     // Catch: java.lang.Exception -> L8d
            if (r6 != 0) goto L3f
            goto L68
        L3f:
            int r6 = r5.height()     // Catch: java.lang.Exception -> L8d
            int r5 = r5.width()     // Catch: java.lang.Exception -> L8d
            int r6 = r6 * r5
            long r5 = (long) r6     // Catch: java.lang.Exception -> L8d
            int r7 = r4.getHeight()     // Catch: java.lang.Exception -> L8d
            int r8 = r4.getWidth()     // Catch: java.lang.Exception -> L8d
            int r7 = r7 * r8
            long r7 = (long) r7     // Catch: java.lang.Exception -> L8d
            r9 = 0
            int r9 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r9 > 0) goto L5a
            goto L68
        L5a:
            double r5 = (double) r5     // Catch: java.lang.Exception -> L8d
            double r7 = (double) r7     // Catch: java.lang.Exception -> L8d
            r9 = 4600877379321698714(0x3fd999999999999a, double:0.4)
            double r7 = r7 * r9
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L68
            r5 = 1
            goto L69
        L68:
            r5 = r0
        L69:
            if (r5 == 0) goto L6f
            r1.add(r4)     // Catch: java.lang.Exception -> L8d
            goto L72
        L6f:
            r2.add(r4)     // Catch: java.lang.Exception -> L8d
        L72:
            int r3 = r3 + 1
            goto L1a
        L75:
            com.mbridge.msdk.mbnative.controller.a$a r0 = r11.d     // Catch: java.lang.Exception -> L8d
            if (r0 == 0) goto L7e
            com.mbridge.msdk.mbnative.controller.a$a r0 = r11.d     // Catch: java.lang.Exception -> L8d
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L8d
        L7e:
            int r0 = r1.size()     // Catch: java.lang.Exception -> L8d
            if (r0 <= 0) goto L87
            r11.a()     // Catch: java.lang.Exception -> L8d
        L87:
            r1.clear()     // Catch: java.lang.Exception -> L8d
            r2.clear()     // Catch: java.lang.Exception -> L8d
        L8d:
            return
    }

    static android.view.ViewTreeObserver.OnPreDrawListener c(com.mbridge.msdk.mbnative.controller.a r0) {
            android.view.ViewTreeObserver$OnPreDrawListener r0 = r0.c
            return r0
    }

    public final void a() {
            r2 = this;
            r0 = 0
            r2.f = r0     // Catch: java.lang.Throwable -> L39
            java.lang.ref.WeakReference<android.view.ViewTreeObserver> r0 = r2.a     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L29
            java.lang.ref.WeakReference<android.view.ViewTreeObserver> r0 = r2.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L29
            java.lang.ref.WeakReference<android.view.ViewTreeObserver> r0 = r2.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Throwable -> L39
            android.view.ViewTreeObserver r0 = (android.view.ViewTreeObserver) r0     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L24
            boolean r1 = r0.isAlive()     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L24
            android.view.ViewTreeObserver$OnPreDrawListener r1 = r2.c     // Catch: java.lang.Throwable -> L39
            r0.removeOnPreDrawListener(r1)     // Catch: java.lang.Throwable -> L39
        L24:
            java.lang.ref.WeakReference<android.view.ViewTreeObserver> r0 = r2.a     // Catch: java.lang.Throwable -> L39
            r0.clear()     // Catch: java.lang.Throwable -> L39
        L29:
            r0 = 0
            r2.d = r0     // Catch: java.lang.Throwable -> L39
            r2.c = r0     // Catch: java.lang.Throwable -> L39
            java.util.List<android.view.View> r1 = r2.b     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L37
            java.util.List<android.view.View> r1 = r2.b     // Catch: java.lang.Throwable -> L39
            r1.clear()     // Catch: java.lang.Throwable -> L39
        L37:
            r2.b = r0     // Catch: java.lang.Throwable -> L39
        L39:
            return
    }

    public final void a(android.view.View r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L11
            android.content.Context r0 = r3.getContext()
            android.view.View r0 = com.mbridge.msdk.mbnative.controller.d.a(r0, r3)
            java.util.List<android.view.View> r1 = r2.b
            r1.add(r3)
            goto L3b
        L11:
            java.util.List<android.view.View> r3 = r2.b
            if (r3 == 0) goto L3b
            int r3 = r3.size()
            if (r3 <= 0) goto L3b
            r3 = 0
        L1c:
            java.util.List<android.view.View> r1 = r2.b
            int r1 = r1.size()
            if (r3 >= r1) goto L3b
            java.util.List<android.view.View> r1 = r2.b
            java.lang.Object r1 = r1.get(r3)
            android.view.View r1 = (android.view.View) r1
            if (r1 == 0) goto L38
            android.content.Context r0 = r1.getContext()
            android.view.View r0 = com.mbridge.msdk.mbnative.controller.d.a(r0, r1)
            if (r0 != 0) goto L3b
        L38:
            int r3 = r3 + 1
            goto L1c
        L3b:
            if (r0 != 0) goto L3e
            return
        L3e:
            com.mbridge.msdk.mbnative.controller.a$3 r3 = new com.mbridge.msdk.mbnative.controller.a$3
            r3.<init>(r2, r0)
            r0.post(r3)
            return
    }
}
