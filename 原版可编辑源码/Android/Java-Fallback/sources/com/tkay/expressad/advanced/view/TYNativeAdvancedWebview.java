package com.tkay.expressad.advanced.view;

public class TYNativeAdvancedWebview extends com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView {
    private static final java.lang.String a = null;
    private com.tkay.expressad.advanced.a.b b;

    static {
            java.lang.Class<com.tkay.expressad.advanced.view.TYNativeAdvancedWebview> r0 = com.tkay.expressad.advanced.view.TYNativeAdvancedWebview.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview.a = r0
            return
    }

    public TYNativeAdvancedWebview(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.registerNetWorkReceiver()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.unregisterNetWorkReceiver()
            return
    }

    public void registerNetWorkReceiver() {
            r3 = this;
            com.tkay.expressad.advanced.a.b r0 = r3.b     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto Lb
            com.tkay.expressad.advanced.a.b r0 = new com.tkay.expressad.advanced.a.b     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1f
            r3.b = r0     // Catch: java.lang.Throwable -> L1f
        Lb:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L1f
            r0.<init>()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L1f
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Throwable -> L1f
            com.tkay.expressad.advanced.a.b r2 = r3.b     // Catch: java.lang.Throwable -> L1f
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void unregisterNetWorkReceiver() {
            r2 = this;
            com.tkay.expressad.advanced.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L12
            com.tkay.expressad.advanced.a.b r0 = r2.b     // Catch: java.lang.Throwable -> L13
            r0.a()     // Catch: java.lang.Throwable -> L13
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.Throwable -> L13
            com.tkay.expressad.advanced.a.b r1 = r2.b     // Catch: java.lang.Throwable -> L13
            r0.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            r0 = move-exception
            r0.getMessage()
            return
    }
}
