package com.tkay.basead.mraid;

public final class a implements com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge {
    com.tkay.basead.mraid.c a;
    java.lang.ref.WeakReference<android.app.Activity> b;
    private com.tkay.basead.mraid.b c;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.b = r0
            return
    }

    public final void a(com.tkay.basead.mraid.b r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.c = r1
        L4:
            return
    }

    @Override
    public final void cai(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void click(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void close() {
            r1 = this;
            com.tkay.basead.mraid.b r0 = r1.c
            if (r0 == 0) goto L7
            r0.close()
        L7:
            return
    }

    @Override
    public final void expand(java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3d
            if (r0 == 0) goto L7
            return
        L7:
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3d
            r0.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = "url"
            r0.putString(r1, r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = "shouldUseCustomClose"
            r0.putBoolean(r3, r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.ref.WeakReference<android.app.Activity> r3 = r2.b     // Catch: java.lang.Throwable -> L3d
            if (r3 == 0) goto L3d
            java.lang.ref.WeakReference<android.app.Activity> r3 = r2.b     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r3 = r3.get()     // Catch: java.lang.Throwable -> L3d
            android.content.Context r3 = (android.content.Context) r3     // Catch: java.lang.Throwable -> L3d
            if (r3 == 0) goto L3d
            com.tkay.basead.mraid.c r4 = r2.a     // Catch: java.lang.Throwable -> L3d
            if (r4 == 0) goto L31
            com.tkay.basead.mraid.c r4 = r2.a     // Catch: java.lang.Throwable -> L3d
            boolean r4 = r4.isShowing()     // Catch: java.lang.Throwable -> L3d
            if (r4 == 0) goto L31
            return
        L31:
            com.tkay.basead.mraid.c r4 = new com.tkay.basead.mraid.c     // Catch: java.lang.Throwable -> L3d
            com.tkay.basead.mraid.b r1 = r2.c     // Catch: java.lang.Throwable -> L3d
            r4.<init>(r3, r0, r1)     // Catch: java.lang.Throwable -> L3d
            r2.a = r4     // Catch: java.lang.Throwable -> L3d
            r4.show()     // Catch: java.lang.Throwable -> L3d
        L3d:
            return
    }

    @Override
    public final void getFileInfo(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void getNetstat(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void gial(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void handlerH5Exception(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void increaseOfferFrequence(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void init(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void install(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void onJSBridgeConnect(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void open(java.lang.String r2) {
            r1 = this;
            com.tkay.basead.mraid.b r0 = r1.c
            if (r0 == 0) goto L7
            r0.open(r2)
        L7:
            return
    }

    @Override
    public final void openURL(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void readyStatus(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void reportUrls(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void resetCountdown(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void sendImpressions(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void triggerCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public final void useCustomClose(boolean r2) {
            r1 = this;
            com.tkay.basead.mraid.b r0 = r1.c     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.basead.mraid.b r0 = r1.c     // Catch: java.lang.Throwable -> L9
            r0.useCustomClose(r2)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }
}
