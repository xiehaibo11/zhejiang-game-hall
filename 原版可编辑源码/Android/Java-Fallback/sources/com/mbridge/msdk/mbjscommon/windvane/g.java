package com.mbridge.msdk.mbjscommon.windvane;

public final class g {
    private static java.util.HashMap<java.lang.String, java.lang.Class> a;
    private android.content.Context b;
    private java.lang.Object c;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView d;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbjscommon.windvane.g.a = r0
            return
    }

    public g(android.content.Context r1, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.d = r2
            java.lang.Class<com.mbridge.msdk.mbjscommon.windvane.MvBridge> r1 = com.mbridge.msdk.mbjscommon.windvane.MvBridge.class
            r0.a(r1)
            java.lang.String r1 = "com.mbridge.msdk.offerwall.jscommon.OfferWall"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L15
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L15
        L15:
            java.lang.String r1 = "com.mbridge.msdk.interstitial.jscommon.interstitial"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L1e
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L1e
        L1e:
            java.lang.String r1 = "com.mbridge.msdk.video.js.bridge.RewardJs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L27
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L27
        L27:
            java.lang.String r1 = "com.mbridge.msdk.video.js.bridge.VideoBridge"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L30
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L30
        L30:
            java.lang.String r1 = "com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L3a
            r0.a(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            java.lang.String r1 = "com.mbridge.msdk.mbjscommon.authority.jscommon.PrivateAuthorityJSBridge"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L47
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L47
        L47:
            java.lang.String r1 = "com.mbridge.msdk.interactiveads.jscommon.Interactive"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L50
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L50
        L50:
            java.lang.String r1 = "com.mbridge.msdk.mbjscommon.mraid.MraidJSBridge"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L59
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L59
        L59:
            java.lang.String r1 = "com.mbridge.msdk.mbjscommon.bridge.BannerJSPlugin"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L62
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L62
        L62:
            java.lang.String r1 = "com.mbridge.msdk.splash.js.SplashJs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L6b
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L6b
        L6b:
            java.lang.String r1 = "com.mbridge.msdk.mbjscommon.webEnvCheck.WebGLCheckjs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L74
            r0.a(r1)     // Catch: java.lang.ClassNotFoundException -> L74
        L74:
            return
    }

    private java.lang.Object a(java.lang.String r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3, android.content.Context r4) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.mbridge.msdk.mbjscommon.windvane.g.a
            java.lang.Object r2 = r0.get(r2)
            java.lang.Class r2 = (java.lang.Class) r2
            if (r2 == 0) goto L25
            java.lang.Class<com.mbridge.msdk.mbjscommon.windvane.j> r0 = com.mbridge.msdk.mbjscommon.windvane.j.class
            boolean r0 = r0.isAssignableFrom(r2)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.mbjscommon.windvane.j r2 = (com.mbridge.msdk.mbjscommon.windvane.j) r2     // Catch: java.lang.Exception -> L21
            r2.initialize(r4, r3)     // Catch: java.lang.Exception -> L21
            java.lang.Object r4 = r1.c     // Catch: java.lang.Exception -> L21
            r2.initialize(r4, r3)     // Catch: java.lang.Exception -> L21
            return r2
        L21:
            r2 = move-exception
            r2.printStackTrace()
        L25:
            r2 = 0
            return r2
    }

    public final java.lang.Object a(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.mbridge.msdk.mbjscommon.windvane.g.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbjscommon.windvane.g.a = r0
        Lb:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.d
            android.content.Context r1 = r2.b
            java.lang.Object r3 = r2.a(r3, r0, r1)
            return r3
    }

    public final void a(android.content.Context r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.Class r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.mbridge.msdk.mbjscommon.windvane.g.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbjscommon.windvane.g.a = r0
        Lb:
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.mbridge.msdk.mbjscommon.windvane.g.a
            java.lang.String r1 = r3.getSimpleName()
            r0.put(r1, r3)
            return
    }

    public final void a(java.lang.Object r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
