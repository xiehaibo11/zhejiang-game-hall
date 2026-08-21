package com.tkay.basead.mraid;

public class MraidWebView extends com.tkay.expressad.mbbanner.view.TYBannerWebView {
    public static java.lang.String TAG;
    com.tkay.basead.mraid.b a;
    boolean b;
    com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver c;
    boolean d;


    final class 2 implements com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener {
        final com.tkay.basead.mraid.MraidWebView a;

        2(com.tkay.basead.mraid.MraidWebView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onVolumeChanged(double r3) {
                r2 = this;
                java.lang.String r0 = com.tkay.basead.mraid.MraidWebView.TAG
                com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Exception -> Lc
                com.tkay.basead.mraid.MraidWebView r1 = r2.a     // Catch: java.lang.Exception -> Lc
                r0.fireAudioVolumeChange(r1, r3)     // Catch: java.lang.Exception -> Lc
                return
            Lc:
                r3 = move-exception
                java.lang.String r4 = com.tkay.basead.mraid.MraidWebView.TAG
                r3.getMessage()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.basead.mraid.MraidWebView> r0 = com.tkay.basead.mraid.MraidWebView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.mraid.MraidWebView.TAG = r0
            return
    }

    public MraidWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.b = r1
            return
    }

    public MraidWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.b = r1
            return
    }

    public MraidWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.b = r1
            return
    }

    static void a(com.tkay.basead.mraid.MraidWebView r5) {
            java.lang.Object r0 = r5.getObject()
            com.tkay.expressad.atsignalcommon.base.b r1 = r5.getBaseWebViewClient()
            boolean r2 = r0 instanceof com.tkay.basead.mraid.a
            if (r2 == 0) goto L27
            android.content.Context r2 = r5.getContext()
            boolean r3 = r2 instanceof android.app.Activity
            if (r3 == 0) goto L20
            r3 = r0
            com.tkay.basead.mraid.a r3 = (com.tkay.basead.mraid.a) r3
            android.app.Activity r2 = (android.app.Activity) r2
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference
            r4.<init>(r2)
            r3.b = r4
        L20:
            com.tkay.basead.mraid.a r0 = (com.tkay.basead.mraid.a) r0
            com.tkay.basead.mraid.b r2 = r5.a
            r0.a(r2)
        L27:
            boolean r0 = r1 instanceof com.tkay.basead.mraid.e
            if (r0 == 0) goto L31
            com.tkay.basead.mraid.e r1 = (com.tkay.basead.mraid.e) r1
            com.tkay.basead.mraid.b r5 = r5.a
            r1.c = r5
        L31:
            return
    }

    private void b() {
            r5 = this;
            java.lang.Object r0 = r5.getObject()
            com.tkay.expressad.atsignalcommon.base.b r1 = r5.getBaseWebViewClient()
            boolean r2 = r0 instanceof com.tkay.basead.mraid.a
            if (r2 == 0) goto L27
            android.content.Context r2 = r5.getContext()
            boolean r3 = r2 instanceof android.app.Activity
            if (r3 == 0) goto L20
            r3 = r0
            com.tkay.basead.mraid.a r3 = (com.tkay.basead.mraid.a) r3
            android.app.Activity r2 = (android.app.Activity) r2
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference
            r4.<init>(r2)
            r3.b = r4
        L20:
            com.tkay.basead.mraid.a r0 = (com.tkay.basead.mraid.a) r0
            com.tkay.basead.mraid.b r2 = r5.a
            r0.a(r2)
        L27:
            boolean r0 = r1 instanceof com.tkay.basead.mraid.e
            if (r0 == 0) goto L31
            com.tkay.basead.mraid.e r1 = (com.tkay.basead.mraid.e) r1
            com.tkay.basead.mraid.b r0 = r5.a
            r1.c = r0
        L31:
            return
    }

    static void b(com.tkay.basead.mraid.MraidWebView r2) {
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.c = r0
            r0.registerReceiver()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r2.c
            r0.getCurrentVolume()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r2.c
            com.tkay.basead.mraid.MraidWebView$2 r1 = new com.tkay.basead.mraid.MraidWebView$2
            r1.<init>(r2)
            r0.setVolumeChangeListener(r1)
            return
    }

    private void c() {
            r2 = this;
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.c = r0
            r0.registerReceiver()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r2.c
            r0.getCurrentVolume()
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r2.c
            com.tkay.basead.mraid.MraidWebView$2 r1 = new com.tkay.basead.mraid.MraidWebView$2
            r1.<init>(r2)
            r0.setVolumeChangeListener(r1)
            return
    }

    @Override
    protected final java.lang.String a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L3f
            java.lang.String r0 = "../"
            boolean r0 = r5.contains(r0)
            r2 = 1
            if (r0 == 0) goto L12
        L10:
            r1 = r2
            goto L3f
        L12:
            java.lang.String r0 = "file"
            boolean r0 = r5.startsWith(r0)
            if (r0 == 0) goto L3f
            android.net.Uri r0 = android.net.Uri.parse(r5)
            java.lang.String r0 = r0.getPath()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L10
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            com.tkay.core.common.res.d r3 = com.tkay.core.common.res.d.a(r3)
            java.lang.String r3 = r3.a()
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L3f
            goto L10
        L3f:
            if (r1 == 0) goto L52
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r0 = "illegal URL: "
            java.lang.String r5 = r0.concat(r5)
            java.lang.String r0 = "tkay_express"
            android.util.Log.e(r0, r5)
            java.lang.String r5 = "about:blank"
        L52:
            return r5
    }

    public void prepare(android.content.Context r1, com.tkay.basead.mraid.b r2) {
            r0 = this;
            r0.a = r2
            android.view.ViewTreeObserver r1 = r0.getViewTreeObserver()
            com.tkay.basead.mraid.MraidWebView$1 r2 = new com.tkay.basead.mraid.MraidWebView$1
            r2.<init>(r0)
            r1.addOnPreDrawListener(r2)
            return
    }

    @Override
    public void release() {
            r1 = this;
            super.release()
            r0 = 0
            r1.setWebViewListener(r0)
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r0 = r1.c
            if (r0 == 0) goto Le
            r0.unregisterReceiver()
        Le:
            return
    }

    public void setNeedRegisterVolumeChangeReceiver(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
