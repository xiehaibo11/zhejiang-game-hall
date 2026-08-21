package com.mbridge.msdk.b.a;

public final class a implements com.mbridge.msdk.out.PreloadListener {
    java.lang.ref.WeakReference<com.mbridge.msdk.out.PreloadListener> a;
    private boolean b;
    private int c;

    public a(com.mbridge.msdk.out.PreloadListener r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.c = r0
            if (r2 == 0) goto L11
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
        L11:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    @Override
    public final void onPreloadFaild(java.lang.String r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.mbridge.msdk.out.PreloadListener> r0 = r1.a
            if (r0 == 0) goto L15
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L15
            java.lang.ref.WeakReference<com.mbridge.msdk.out.PreloadListener> r0 = r1.a
            java.lang.Object r0 = r0.get()
            com.mbridge.msdk.out.PreloadListener r0 = (com.mbridge.msdk.out.PreloadListener) r0
            r0.onPreloadFaild(r2)
        L15:
            return
    }

    @Override
    public final void onPreloadSucceed() {
            r1 = this;
            java.lang.ref.WeakReference<com.mbridge.msdk.out.PreloadListener> r0 = r1.a
            if (r0 == 0) goto L15
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L15
            java.lang.ref.WeakReference<com.mbridge.msdk.out.PreloadListener> r0 = r1.a
            java.lang.Object r0 = r0.get()
            com.mbridge.msdk.out.PreloadListener r0 = (com.mbridge.msdk.out.PreloadListener) r0
            r0.onPreloadSucceed()
        L15:
            return
    }
}
