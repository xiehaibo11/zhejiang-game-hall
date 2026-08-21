package com.kwad.sdk.collector.b;

public class a extends com.kwad.sdk.l.a {
    private static java.util.concurrent.atomic.AtomicBoolean ajS;
    public static volatile android.os.Message ajT;
    private com.kwad.sdk.collector.b.a.a ajQ;
    private android.os.Messenger ajR;


    static class a extends android.os.Handler {
        private java.lang.ref.WeakReference<android.app.Service> ajV;


        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final void a(android.app.Service r2) {
                r1 = this;
                if (r2 == 0) goto La
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.ajV = r0
                return
            La:
                r2 = 0
                r1.ajV = r2
                return
        }

        @Override
        public final void handleMessage(android.os.Message r6) {
                r5 = this;
                super.handleMessage(r6)
                java.lang.String r0 = "RemoteService"
                java.lang.String r1 = "handleMessage"
                com.kwad.sdk.core.e.c.d(r0, r1)
                java.lang.ref.WeakReference<android.app.Service> r1 = r5.ajV
                if (r1 == 0) goto L15
                java.lang.Object r1 = r1.get()
                android.app.Service r1 = (android.app.Service) r1
                goto L16
            L15:
                r1 = 0
            L16:
                if (r1 != 0) goto L19
                return
            L19:
                java.util.concurrent.atomic.AtomicBoolean r2 = com.kwad.sdk.collector.b.a.yO()
                boolean r2 = r2.get()
                if (r2 != 0) goto L2f
                java.lang.String r1 = "save buffered message"
                com.kwad.sdk.core.e.c.d(r0, r1)
                android.os.Message r6 = android.os.Message.obtain(r6)
                com.kwad.sdk.collector.b.a.ajT = r6
                return
            L2f:
                android.os.Messenger r2 = r6.replyTo
                int r6 = r6.what
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r4 = "handleMessage what: "
                r3.<init>(r4)
                r3.append(r6)
                java.lang.String r3 = r3.toString()
                com.kwad.sdk.core.e.c.d(r0, r3)
                r0 = 100
                if (r6 == r0) goto L49
                goto L56
            L49:
                android.os.Bundle r6 = new android.os.Bundle
                r6.<init>()
                com.kwad.sdk.collector.b.a$a$1 r0 = new com.kwad.sdk.collector.b.a$a$1
                r0.<init>(r5, r6, r2)
                com.kwad.sdk.utils.f.a(r1, r0)
            L56:
                return
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.collector.b.a.ajS = r0
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            com.kwad.sdk.collector.b.a$a r0 = new com.kwad.sdk.collector.b.a$a
            r1 = 0
            r0.<init>(r1)
            r2.ajQ = r0
            android.os.Messenger r0 = new android.os.Messenger
            com.kwad.sdk.collector.b.a$a r1 = r2.ajQ
            r0.<init>(r1)
            r2.ajR = r0
            return
    }

    static com.kwad.sdk.collector.b.a.a a(com.kwad.sdk.collector.b.a r0) {
            com.kwad.sdk.collector.b.a$a r0 = r0.ajQ
            return r0
    }

    public static void a(android.content.Context r2, android.content.ServiceConnection r3) {
            java.lang.String r0 = "RemoteService"
            java.lang.String r1 = "bindASService"
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.kwad.sdk.api.proxy.app.ServiceProxyRemote> r1 = com.kwad.sdk.api.proxy.app.ServiceProxyRemote.class
            r0.<init>(r2, r1)
            r1 = 1
            r2.bindService(r0, r3, r1)
            return
    }

    private static boolean aM(android.content.Context r2) {
            java.lang.String r0 = com.kwad.sdk.utils.ap.getProcessName(r2)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L14
            r2 = 1
            return r2
        L14:
            return r1
    }

    public static void b(android.content.Context r2, android.content.ServiceConnection r3) {
            java.lang.String r0 = "RemoteService"
            java.lang.String r1 = "unbindASService"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r2.unbindService(r3)     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }

    static java.util.concurrent.atomic.AtomicBoolean mH() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.b.a.ajS
            return r0
    }

    public static void register() {
            java.lang.String r0 = "com.kwad.sdk.api.proxy.app.ServiceProxyRemote"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Class<com.kwad.sdk.collector.b.a> r1 = com.kwad.sdk.collector.b.a.class
            com.kwad.sdk.service.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lb
        Lb:
            return
    }

    public static java.util.concurrent.atomic.AtomicBoolean yO() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.b.a.ajS
            return r0
    }

    @Override
    public android.os.IBinder onBind(android.app.Service r1, android.content.Intent r2) {
            r0 = this;
            android.os.Messenger r1 = r0.ajR
            android.os.IBinder r1 = r1.getBinder()
            return r1
    }

    @Override
    public void onCreate(android.app.Service r5) {
            r4 = this;
            super.onCreate(r5)
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "RemoteService"
            r2 = 28
            if (r0 < r2) goto L2d
            android.content.Context r0 = r5.getApplicationContext()     // Catch: java.lang.Exception -> L17
            java.lang.String r0 = com.kwad.sdk.utils.ap.getProcessName(r0)     // Catch: java.lang.Exception -> L17
            android.webkit.WebView.setDataDirectorySuffix(r0)     // Catch: java.lang.Exception -> L17
            goto L2d
        L17:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "WebView has already been initialized "
            r2.<init>(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
        L2d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "onCreate processName:"
            r0.<init>(r2)
            java.lang.String r2 = com.kwad.sdk.utils.ap.getProcessName(r5)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = com.kwad.sdk.utils.SystemUtil.isInMainProcess(r5)
            if (r0 != 0) goto L51
            com.kwad.sdk.collector.b.a$1 r0 = new com.kwad.sdk.collector.b.a$1
            r0.<init>(r4)
            com.kwad.sdk.collector.d.a(r5, r0)
            goto L57
        L51:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.collector.b.a.ajS
            r1 = 1
            r0.set(r1)
        L57:
            com.kwad.sdk.collector.b.a$a r0 = r4.ajQ
            r0.a(r5)
            return
    }

    @Override
    public void onDestroy(android.app.Service r4) {
            r3 = this;
            super.onDestroy(r4)
            java.lang.String r0 = "RemoteService"
            java.lang.String r1 = "onDestroy"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.collector.b.a$a r1 = r3.ajQ
            r2 = 0
            r1.a(r2)
            boolean r4 = aM(r4)
            if (r4 == 0) goto L22
            java.lang.String r4 = "goto kill myself"
            com.kwad.sdk.core.e.c.d(r0, r4)
            int r4 = android.os.Process.myPid()
            android.os.Process.killProcess(r4)
        L22:
            return
    }
}
