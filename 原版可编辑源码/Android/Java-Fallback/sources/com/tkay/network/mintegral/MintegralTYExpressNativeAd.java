package com.tkay.network.mintegral;

public class MintegralTYExpressNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    com.mbridge.msdk.out.MBNativeAdvancedHandler a;
    android.view.ViewGroup b;
    com.mbridge.msdk.out.NativeAdvancedAdListener c;
    boolean d;
    private final java.lang.String e;


    public MintegralTYExpressNativeAd(android.content.Context r1, com.mbridge.msdk.out.MBNativeAdvancedHandler r2, boolean r3) {
            r0 = this;
            r0.<init>()
            java.lang.Class<com.tkay.network.mintegral.MintegralTYExpressNativeAd> r1 = com.tkay.network.mintegral.MintegralTYExpressNativeAd.class
            java.lang.String r1 = r1.getSimpleName()
            r0.e = r1
            com.tkay.network.mintegral.MintegralTYExpressNativeAd$1 r1 = new com.tkay.network.mintegral.MintegralTYExpressNativeAd$1
            r1.<init>(r0)
            r0.c = r1
            r0.a = r2
            r2.setAdListener(r1)
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.mbridge.msdk.out.MBNativeAdvancedHandler r0 = r2.a
            r1 = 0
            if (r0 == 0) goto Lf
            r0.release()
            com.mbridge.msdk.out.MBNativeAdvancedHandler r0 = r2.a
            r0.setAdListener(r1)
            r2.a = r1
        Lf:
            r2.c = r1
            r2.b = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            android.view.ViewGroup r1 = r0.b     // Catch: java.lang.Exception -> Lf
            if (r1 != 0) goto Lc
            com.mbridge.msdk.out.MBNativeAdvancedHandler r1 = r0.a     // Catch: java.lang.Exception -> Lf
            android.view.ViewGroup r1 = r1.getAdViewGroup()     // Catch: java.lang.Exception -> Lf
            r0.b = r1     // Catch: java.lang.Exception -> Lf
        Lc:
            android.view.ViewGroup r1 = r0.b     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            com.mbridge.msdk.out.MBNativeAdvancedHandler r0 = r1.a
            if (r0 == 0) goto La
            r0.onPause()
        La:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            com.mbridge.msdk.out.MBNativeAdvancedHandler r0 = r1.a
            if (r0 == 0) goto La
            r0.onResume()
        La:
            return
    }

    @Override
    public void prepare(android.view.View r1, com.tkay.nativead.api.TYNativePrepareInfo r2) {
            r0 = this;
            com.mbridge.msdk.out.MBNativeAdvancedHandler r1 = r0.a
            if (r1 == 0) goto L7
            r1.onResume()
        L7:
            return
    }

    public void setIsAutoPlay(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
