package com.tkay.expressad.atsignalcommon.windvane;

public final class i {
    private static java.util.HashMap<java.lang.String, java.lang.Class> a;
    private android.content.Context b;
    private java.lang.Object c;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView d;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.i.a = r0
            return
    }

    public i(android.content.Context r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.d = r2
            java.lang.String r1 = "com.tkay.expressad.atsignalcommon.bridge.BannerJSPlugin"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L10
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L10
        L10:
            java.lang.String r1 = "com.tkay.expressad.video.signal.communication.RewardJs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L19
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L19
        L19:
            java.lang.String r1 = "com.tkay.expressad.video.signal.communication.VideoBridge"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L22
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L22
        L22:
            java.lang.String r1 = "com.tkay.expressad.atsignalcommon.mraid.MraidJSBridge"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L2b
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L2b
        L2b:
            java.lang.String r1 = "com.tkay.expressad.splash.js.SplashJs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L34
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L34
        L34:
            java.lang.String r1 = "com.tkay.expressad.atsignalcommon.webEnvCheck.WebGLCheckjs"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L3d
            a(r1)     // Catch: java.lang.ClassNotFoundException -> L3d
        L3d:
            return
    }

    private java.lang.Object a(java.lang.String r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, android.content.Context r4) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            java.lang.Object r2 = r0.get(r2)
            java.lang.Class r2 = (java.lang.Class) r2
            if (r2 == 0) goto L25
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.l> r0 = com.tkay.expressad.atsignalcommon.windvane.l.class
            boolean r0 = r0.isAssignableFrom(r2)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L21
            com.tkay.expressad.atsignalcommon.windvane.l r2 = (com.tkay.expressad.atsignalcommon.windvane.l) r2     // Catch: java.lang.Exception -> L21
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

    private static void a() {
            java.lang.String r0 = "com.tkay.expressad.atsignalcommon.bridge.BannerJSPlugin"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L9
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L9
        L9:
            java.lang.String r0 = "com.tkay.expressad.video.signal.communication.RewardJs"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L12
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L12
        L12:
            java.lang.String r0 = "com.tkay.expressad.video.signal.communication.VideoBridge"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L1b
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L1b
        L1b:
            java.lang.String r0 = "com.tkay.expressad.atsignalcommon.mraid.MraidJSBridge"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L24
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L24
        L24:
            java.lang.String r0 = "com.tkay.expressad.splash.js.SplashJs"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L2d
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L2d
        L2d:
            java.lang.String r0 = "com.tkay.expressad.atsignalcommon.webEnvCheck.WebGLCheckjs"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L36
            a(r0)     // Catch: java.lang.ClassNotFoundException -> L36
        L36:
            return
    }

    public static void a(java.lang.Class r2) {
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.i.a = r0
        Lb:
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            java.lang.String r1 = r2.getSimpleName()
            r0.put(r1, r2)
            return
    }

    private static void b(java.lang.String r1) {
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.i.a = r0
        Lb:
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            r0.remove(r1)
            return
    }

    public final java.lang.Object a(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Class> r0 = com.tkay.expressad.atsignalcommon.windvane.i.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.atsignalcommon.windvane.i.a = r0
        Lb:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.d
            android.content.Context r1 = r2.b
            java.lang.Object r3 = r2.a(r3, r0, r1)
            return r3
    }

    public final void a(android.content.Context r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.Object r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
