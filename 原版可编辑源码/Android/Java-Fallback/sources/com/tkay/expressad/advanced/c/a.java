package com.tkay.expressad.advanced.c;

public final class a {
    private static java.lang.String a = "NativeAdvancedLoadManager";
    private static final int j = 1;
    private static final int k = 2;
    private static final int l = 3;
    private static final int m = 4;
    private static final int n = 5;
    private int A;
    private java.lang.String B;
    private android.os.Handler C;
    private java.lang.Runnable D;
    private java.lang.String b;
    private java.lang.String c;
    private long d;
    private com.tkay.expressad.advanced.b.a e;
    private android.content.Context f;
    private com.tkay.expressad.advanced.view.TYNativeAdvancedView g;
    private com.tkay.expressad.d.c h;
    private com.tkay.expressad.foundation.d.c i;
    private int o;
    private int p;
    private int q;
    private int r;
    private java.lang.String s;
    private int t;
    private boolean u;
    private volatile boolean v;
    private com.tkay.expressad.videocommon.d.b w;
    private com.tkay.expressad.videocommon.b.g.d x;
    private com.tkay.expressad.videocommon.b.g.d y;
    private java.lang.String z;


    final class 10 implements java.lang.Runnable {
        final com.tkay.expressad.advanced.view.TYNativeAdvancedWebview a;
        final java.lang.String b;
        final com.tkay.expressad.advanced.c.a c;

        10(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r2, java.lang.String r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r2.a
                java.lang.String r1 = r2.b
                java.lang.String r1 = com.tkay.expressad.foundation.h.x.c(r1)
                r0.loadUrl(r1)
                return
        }
    }

    final class 2 implements com.tkay.expressad.videocommon.d.b {
        final com.tkay.expressad.foundation.d.c a;
        final com.tkay.expressad.advanced.c.a b;

        2(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.advanced.c.a.d()
                android.os.Message r2 = android.os.Message.obtain()
                com.tkay.expressad.foundation.d.c r0 = r1.a
                r2.obj = r0
                r0 = 5
                r2.what = r0
                com.tkay.expressad.advanced.c.a r0 = r1.b
                android.os.Handler r0 = com.tkay.expressad.advanced.c.a.d(r0)
                r0.sendMessage(r2)
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.advanced.c.a.d()
                android.os.Message r2 = android.os.Message.obtain()
                r2.obj = r1
                r1 = 2
                r2.what = r1
                com.tkay.expressad.advanced.c.a r1 = r0.b
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                r1.sendMessage(r2)
                return
        }
    }


    final class 4 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;



        4(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r1 = 2
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                if (r1 == 0) goto L19
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                com.tkay.expressad.advanced.c.a$4$1 r2 = new com.tkay.expressad.advanced.c.a$4$1
                r2.<init>(r0)
                r1.post(r2)
            L19:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                if (r1 == 0) goto L19
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                com.tkay.expressad.advanced.c.a$4$2 r2 = new com.tkay.expressad.advanced.c.a$4$2
                r2.<init>(r0)
                r1.post(r2)
            L19:
                return
        }
    }

    final class 5 implements com.tkay.expressad.videocommon.b.g.d {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;

        5(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r1 = 2
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r2 = r1.c
                android.os.Handler r2 = com.tkay.expressad.advanced.c.a.d(r2)
                if (r2 == 0) goto L23
                android.os.Message r2 = android.os.Message.obtain()
                r0 = 4
                r2.what = r0
                com.tkay.expressad.foundation.d.c r0 = r1.a
                r2.obj = r0
                int r0 = r1.b
                r2.arg1 = r0
                com.tkay.expressad.advanced.c.a r0 = r1.c
                android.os.Handler r0 = com.tkay.expressad.advanced.c.a.d(r0)
                r0.sendMessage(r2)
            L23:
                return
        }

        @Override
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r3 = r1.c
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r3 = com.tkay.expressad.advanced.c.a.a(r3)
                if (r3 == 0) goto L15
                com.tkay.expressad.advanced.c.a r3 = r1.c
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r3 = com.tkay.expressad.advanced.c.a.a(r3)
                r0 = 0
                r3.setEndCardReady(r0)
            L15:
                android.os.Message r3 = android.os.Message.obtain()
                r0 = 2
                r3.what = r0
                r3.obj = r2
                com.tkay.expressad.advanced.c.a r2 = r1.c
                android.os.Handler r2 = com.tkay.expressad.advanced.c.a.d(r2)
                r2.sendMessage(r3)
                return
        }
    }

    final class 6 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;



        6(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r1 = 2
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                if (r1 == 0) goto L19
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                com.tkay.expressad.advanced.c.a$6$1 r2 = new com.tkay.expressad.advanced.c.a$6$1
                r2.<init>(r0)
                r1.post(r2)
            L19:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.advanced.c.a.d()
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                if (r1 == 0) goto L19
                com.tkay.expressad.advanced.c.a r1 = r0.c
                android.os.Handler r1 = com.tkay.expressad.advanced.c.a.d(r1)
                com.tkay.expressad.advanced.c.a$6$2 r2 = new com.tkay.expressad.advanced.c.a$6$2
                r2.<init>(r0)
                r1.post(r2)
            L19:
                return
        }
    }

    final class 7 implements java.lang.Runnable {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;


        7(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r1 = 2
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                r0 = 0
                com.tkay.expressad.foundation.d.c r1 = r6.a     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L96
                java.lang.String r1 = r1.d()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L96
                java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L96
                r2.<init>(r1)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L96
                boolean r1 = r2.exists()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                if (r1 != 0) goto L8b
                com.tkay.expressad.foundation.g.c.c r1 = com.tkay.expressad.foundation.g.c.c.i     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.lang.String r1 = com.tkay.expressad.foundation.g.c.f.b(r1)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                com.tkay.expressad.foundation.d.c r3 = r6.a     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.lang.String r3 = r3.d()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r3)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                if (r4 == 0) goto L34
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
            L34:
                java.lang.String r4 = ".html"
                java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                r4.<init>(r1, r3)     // Catch: java.lang.Exception -> L91 java.lang.Throwable -> L94
                boolean r1 = r4.exists()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L94
                if (r1 != 0) goto L87
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L94
                r1.<init>(r4)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L94
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r0.<init>()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                java.lang.String r2 = "<script>"
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                com.tkay.expressad.d.b.a.a()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                java.lang.String r2 = com.tkay.expressad.d.b.a.b()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                java.lang.String r2 = "</script>"
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                com.tkay.expressad.foundation.d.c r2 = r6.a     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                java.lang.String r2 = r2.d()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r0.append(r2)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r1.write(r0)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r1.flush()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L82
                r0 = r1
                goto L87
            L7c:
                r0 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
                goto Le5
            L82:
                r0 = move-exception
                r5 = r1
                r1 = r0
                r0 = r5
                goto L98
            L87:
                r2 = r4
                goto L8b
            L89:
                r1 = move-exception
                goto L98
            L8b:
                if (r0 == 0) goto La8
                r0.close()     // Catch: java.lang.Exception -> Leb
                goto La8
            L91:
                r1 = move-exception
                r4 = r2
                goto L98
            L94:
                r1 = move-exception
                goto Le5
            L96:
                r1 = move-exception
                r4 = r0
            L98:
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L94
                com.tkay.expressad.foundation.d.c r1 = r6.a     // Catch: java.lang.Throwable -> L94
                java.lang.String r2 = ""
                r1.j(r2)     // Catch: java.lang.Throwable -> L94
                if (r0 == 0) goto La7
                r0.close()     // Catch: java.lang.Exception -> Leb
            La7:
                r2 = r4
            La8:
                boolean r0 = r2.exists()     // Catch: java.lang.Exception -> Leb
                if (r0 == 0) goto Ld3
                boolean r0 = r2.isFile()     // Catch: java.lang.Exception -> Leb
                if (r0 == 0) goto Ld3
                boolean r0 = r2.canRead()     // Catch: java.lang.Exception -> Leb
                if (r0 == 0) goto Ld3
                com.tkay.expressad.foundation.d.c r0 = r6.a     // Catch: java.lang.Exception -> Leb
                java.lang.String r1 = r2.getAbsolutePath()     // Catch: java.lang.Exception -> Leb
                r0.b(r1)     // Catch: java.lang.Exception -> Leb
                com.tkay.expressad.advanced.c.a.d()     // Catch: java.lang.Exception -> Leb
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Leb
                com.tkay.expressad.advanced.c.a$7$1 r1 = new com.tkay.expressad.advanced.c.a$7$1     // Catch: java.lang.Exception -> Leb
                r1.<init>(r6, r2)     // Catch: java.lang.Exception -> Leb
                r0.a(r1)     // Catch: java.lang.Exception -> Leb
                return
            Ld3:
                com.tkay.expressad.advanced.c.a.d()     // Catch: java.lang.Exception -> Leb
                com.tkay.expressad.advanced.c.a r0 = r6.c     // Catch: java.lang.Exception -> Leb
                java.lang.String r1 = "html file write failed"
                com.tkay.expressad.advanced.c.a r2 = r6.c     // Catch: java.lang.Exception -> Leb
                com.tkay.expressad.advanced.c.a.c(r2)     // Catch: java.lang.Exception -> Leb
                int r2 = r6.b     // Catch: java.lang.Exception -> Leb
                com.tkay.expressad.advanced.c.a.a(r0, r1, r2)     // Catch: java.lang.Exception -> Leb
                return
            Le5:
                if (r0 == 0) goto Lea
                r0.close()     // Catch: java.lang.Exception -> Leb
            Lea:
                throw r1     // Catch: java.lang.Exception -> Leb
            Leb:
                r0 = move-exception
                com.tkay.expressad.advanced.c.a r1 = r6.c
                java.lang.String r0 = r0.getMessage()
                com.tkay.expressad.advanced.c.a r2 = r6.c
                com.tkay.expressad.advanced.c.a.c(r2)
                int r2 = r6.b
                com.tkay.expressad.advanced.c.a.a(r1, r0, r2)
                return
        }
    }

    final class 8 implements com.tkay.expressad.videocommon.b.g.d {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;

        8(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r1 = 2
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.advanced.c.a.d()
                android.os.Message r2 = android.os.Message.obtain()
                r0 = 1
                r2.what = r0
                com.tkay.expressad.foundation.d.c r0 = r1.a
                r2.obj = r0
                int r0 = r1.b
                r2.arg1 = r0
                com.tkay.expressad.advanced.c.a r0 = r1.c
                android.os.Handler r0 = com.tkay.expressad.advanced.c.a.d(r0)
                r0.sendMessage(r2)
                return
        }

        @Override
        public final void a(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                com.tkay.expressad.advanced.c.a.d()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "zip download fail: "
                r0.<init>(r1)
                r0.append(r4)
                java.lang.String r4 = " "
                r0.append(r4)
                r0.append(r3)
                android.os.Message r4 = android.os.Message.obtain()
                r0 = 2
                r4.what = r0
                r4.obj = r3
                com.tkay.expressad.advanced.c.a r3 = r2.c
                android.os.Handler r3 = com.tkay.expressad.advanced.c.a.d(r3)
                r3.sendMessage(r4)
                return
        }
    }

    final class 9 extends com.tkay.expressad.atsignalcommon.a.b {
        final com.tkay.expressad.foundation.d.c a;
        final int b;
        final com.tkay.expressad.advanced.c.a c;

        9(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r3, java.lang.String r4) {
                r2 = this;
                super.onPageFinished(r3, r4)
                com.tkay.expressad.foundation.d.c r4 = r2.a
                boolean r4 = r4.s()
                if (r4 != 0) goto L27
                com.tkay.expressad.advanced.c.a r4 = r2.c
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r4 = com.tkay.expressad.advanced.c.a.a(r4)
                r0 = 1
                r4.setH5Ready(r0)
                com.tkay.expressad.foundation.d.c r4 = r2.a
                java.lang.String r4 = r4.Z()
                com.tkay.expressad.advanced.a.c.a(r4)
                com.tkay.expressad.advanced.c.a r4 = r2.c
                com.tkay.expressad.foundation.d.c r0 = r2.a
                int r1 = r2.b
                com.tkay.expressad.advanced.c.a.b(r4, r0, r1)
            L27:
                com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.fireOnJSBridgeConnected(r3)
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r0 = "onReceivedError: "
                r2.<init>(r0)
                r2.append(r3)
                java.lang.String r3 = "  "
                r2.append(r3)
                r2.append(r4)
                r2.append(r3)
                r2.append(r5)
                com.tkay.expressad.advanced.c.a r2 = r1.c
                int r3 = r1.b
                com.tkay.expressad.advanced.c.a.b(r2, r4, r3)
                return
        }

        @Override
        public final void onReceivedSslError(android.webkit.WebView r2, android.webkit.SslErrorHandler r3, android.net.http.SslError r4) {
                r1 = this;
                super.onReceivedSslError(r2, r3, r4)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "onReceivedSslError: "
                r2.<init>(r3)
                int r3 = r4.getPrimaryError()
                r2.append(r3)
                com.tkay.expressad.advanced.c.a r2 = r1.c
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r0 = "onReceivedSslError:"
                r3.<init>(r0)
                java.lang.String r4 = r4.getUrl()
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                int r4 = r1.b
                com.tkay.expressad.advanced.c.a.b(r2, r3, r4)
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r2, int r3) {
                r1 = this;
                super.readyState(r2, r3)
                r2 = 1
                if (r3 != r2) goto L22
                com.tkay.expressad.advanced.c.a r3 = r1.c
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r3 = com.tkay.expressad.advanced.c.a.a(r3)
                r3.setH5Ready(r2)
                com.tkay.expressad.foundation.d.c r2 = r1.a
                java.lang.String r2 = r2.Z()
                com.tkay.expressad.advanced.a.c.a(r2)
                com.tkay.expressad.advanced.c.a r2 = r1.c
                com.tkay.expressad.foundation.d.c r3 = r1.a
                int r0 = r1.b
                com.tkay.expressad.advanced.c.a.b(r2, r3, r0)
                return
            L22:
                com.tkay.expressad.advanced.c.a r2 = r1.c
                int r3 = r1.b
                java.lang.String r0 = "readyState 2"
                com.tkay.expressad.advanced.c.a.b(r2, r0, r3)
                return
        }
    }

    static {
            return
    }

    public a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.B = r0
            com.tkay.expressad.advanced.c.a$1 r0 = new com.tkay.expressad.advanced.c.a$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.C = r0
            com.tkay.expressad.advanced.c.a$3 r0 = new com.tkay.expressad.advanced.c.a$3
            r0.<init>(r2)
            r2.D = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r2.f = r0
            r2.c = r3
            r2.b = r4
            return
    }

    static com.tkay.expressad.advanced.view.TYNativeAdvancedView a(com.tkay.expressad.advanced.c.a r0) {
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r0.g
            return r0
    }

    private void a(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.C
            java.lang.Runnable r1 = r2.D
            r0.postDelayed(r1, r3)
            return
    }

    static void a(com.tkay.expressad.advanced.c.a r0, com.tkay.expressad.foundation.d.c r1, int r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.tkay.expressad.advanced.c.a r0, java.lang.String r1, int r2) {
            r0.b(r1, r2)
            return
    }

    static void a(com.tkay.expressad.advanced.c.a r4, java.lang.String r5, com.tkay.expressad.foundation.d.c r6, int r7) {
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.g
            if (r0 == 0) goto L72
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L72
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = new com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r4.g
            android.content.Context r1 = r1.getContext()
            java.lang.String r2 = r4.c
            java.lang.String r3 = r4.b
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r6)
            r0.setCampaignList(r1)
            int r1 = r4.o
            r0.setAllowSkip(r1)
            int r1 = r4.p
            r0.setCountdownS(r1)
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r4.g
            r1.setAdvancedNativeJSBridgeImpl(r0)
            java.lang.System.currentTimeMillis()
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.g
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 != 0) goto L44
            java.lang.String r5 = "webview is null"
            r4.b(r5, r7)
            return
        L44:
            if (r0 == 0) goto L52
            boolean r1 = r0.isDestroyed()
            if (r1 == 0) goto L52
            java.lang.String r5 = "webview is destroyed"
            r4.b(r5, r7)
            return
        L52:
            com.tkay.expressad.advanced.c.a$9 r1 = new com.tkay.expressad.advanced.c.a$9
            r1.<init>(r4, r6, r7)
            r0.setWebViewListener(r1)
            boolean r6 = r0.isDestroyed()
            if (r6 != 0) goto L6d
            android.os.Handler r6 = r4.C
            if (r6 == 0) goto L72
            com.tkay.expressad.advanced.c.a$10 r7 = new com.tkay.expressad.advanced.c.a$10
            r7.<init>(r4, r0, r5)
            r6.post(r7)
            return
        L6d:
            java.lang.String r5 = "webview has destory"
            r4.b(r5, r7)
        L72:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r7) {
            r6 = this;
            r6.i = r7
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r6.g
            boolean r0 = com.tkay.expressad.advanced.c.c.a(r0, r7)
            r1 = 2
            if (r0 == 0) goto Lf
            r6.a(r7, r1)
            return
        Lf:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r6.g
            if (r0 == 0) goto L16
            r0.clearResState()
        L16:
            java.lang.String r0 = r7.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "start download zip: "
            r0.<init>(r2)
            java.lang.String r2 = r7.c()
            r0.append(r2)
            com.tkay.expressad.advanced.c.a$8 r0 = new com.tkay.expressad.advanced.c.a$8
            r0.<init>(r6, r7)
            r6.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r7.c()
            com.tkay.expressad.videocommon.b.g$d r3 = r6.x
            r0.b(r2, r3)
        L42:
            java.lang.String r0 = r7.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L66
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "start download HTML: "
            r0.<init>(r2)
            java.lang.String r2 = r7.d()
            r0.append(r2)
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.advanced.c.a$7 r2 = new com.tkay.expressad.advanced.c.a$7
            r2.<init>(r6, r7)
            r0.a(r2)
        L66:
            java.lang.String r0 = r7.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lbd
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "start download Video: "
            r0.<init>(r2)
            java.lang.String r2 = r7.S()
            r0.append(r2)
            com.tkay.expressad.advanced.c.a$2 r0 = new com.tkay.expressad.advanced.c.a$2
            r0.<init>(r6, r7)
            r6.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r7)
            com.tkay.expressad.videocommon.b.c r2 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r3 = r6.b
            com.tkay.expressad.videocommon.d.b r4 = r6.w
            r5 = 298(0x12a, float:4.18E-43)
            r2.a(r3, r0, r5, r4)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r6.b
            boolean r3 = r7.A()
            boolean r0 = r0.a(r5, r2, r3)
            if (r0 != 0) goto Lb4
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r6.b
            r0.d(r1)
            goto Lbd
        Lb4:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r6.g
            r2 = 1
            r0.setVideoReady(r2)
            r6.a(r7, r1)
        Lbd:
            java.lang.String r0 = r7.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Led
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download image: "
            r0.<init>(r1)
            java.lang.String r1 = r7.be()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r7.be()
            com.tkay.expressad.advanced.c.a$6 r2 = new com.tkay.expressad.advanced.c.a$6
            r2.<init>(r6, r7)
            r0.a(r1, r2)
        Led:
            java.lang.String r0 = r7.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L119
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download EndCard: "
            r0.<init>(r1)
            java.lang.String r1 = r7.I()
            r0.append(r1)
            com.tkay.expressad.advanced.c.a$5 r0 = new com.tkay.expressad.advanced.c.a$5
            r0.<init>(r6, r7)
            r6.y = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r7.I()
            com.tkay.expressad.videocommon.b.g$d r2 = r6.y
            r0.b(r1, r2)
        L119:
            java.lang.String r0 = r7.y()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L149
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download gitUrl: "
            r0.<init>(r1)
            java.lang.String r1 = r7.y()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r7.y()
            com.tkay.expressad.advanced.c.a$4 r2 = new com.tkay.expressad.advanced.c.a$4
            r2.<init>(r6, r7)
            r0.a(r1, r2)
        L149:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r2, int r3) {
            r1 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r1.g
            boolean r0 = com.tkay.expressad.advanced.c.c.a(r0, r2)
            if (r0 == 0) goto L19
            boolean r0 = r1.v
            if (r0 != 0) goto L19
            r1.i()
            r0 = 1
            r1.v = r0
            com.tkay.expressad.advanced.b.a r0 = r1.e
            if (r0 == 0) goto L19
            r0.a(r2, r3)
        L19:
            return
    }

    private void a(java.lang.String r1, int r2) {
            r0 = this;
            r0.b(r1, r2)
            return
    }

    private void a(java.lang.String r5, com.tkay.expressad.foundation.d.c r6, int r7) {
            r4 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.g
            if (r0 == 0) goto L72
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L72
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = new com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r4.g
            android.content.Context r1 = r1.getContext()
            java.lang.String r2 = r4.c
            java.lang.String r3 = r4.b
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r6)
            r0.setCampaignList(r1)
            int r1 = r4.o
            r0.setAllowSkip(r1)
            int r1 = r4.p
            r0.setCountdownS(r1)
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r4.g
            r1.setAdvancedNativeJSBridgeImpl(r0)
            java.lang.System.currentTimeMillis()
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.g
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 != 0) goto L44
            java.lang.String r5 = "webview is null"
            r4.b(r5, r7)
            return
        L44:
            if (r0 == 0) goto L52
            boolean r1 = r0.isDestroyed()
            if (r1 == 0) goto L52
            java.lang.String r5 = "webview is destroyed"
            r4.b(r5, r7)
            return
        L52:
            com.tkay.expressad.advanced.c.a$9 r1 = new com.tkay.expressad.advanced.c.a$9
            r1.<init>(r4, r6, r7)
            r0.setWebViewListener(r1)
            boolean r6 = r0.isDestroyed()
            if (r6 != 0) goto L6d
            android.os.Handler r6 = r4.C
            if (r6 == 0) goto L72
            com.tkay.expressad.advanced.c.a$10 r7 = new com.tkay.expressad.advanced.c.a$10
            r7.<init>(r4, r0, r5)
            r6.post(r7)
            return
        L6d:
            java.lang.String r5 = "webview has destory"
            r4.b(r5, r7)
        L72:
            return
    }

    static int b(com.tkay.expressad.advanced.c.a r0) {
            int r0 = r0.t
            return r0
    }

    private java.util.List<com.tkay.expressad.foundation.d.c> b(com.tkay.expressad.foundation.d.d r5) {
            r4 = this;
            if (r5 == 0) goto L88
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r0 = r5.J
            if (r0 == 0) goto L88
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r5.J
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            java.lang.String r2 = r4.b
            r1.l(r2)
            java.lang.String r5 = r5.c()
            r4.z = r5
            int r5 = r1.O()
            r2 = 99
            if (r5 == r2) goto L89
            java.lang.String r5 = r1.c()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L3b
            java.lang.String r5 = r1.d()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L89
        L3b:
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r1)
            r2 = 1
            if (r5 == 0) goto L54
            android.content.Context r5 = r4.f
            java.lang.String r3 = r1.ba()
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r5, r3)
            if (r5 == 0) goto L50
            r5 = r2
            goto L51
        L50:
            r5 = 2
        L51:
            r1.i(r5)
        L54:
            int r5 = r1.ae()
            if (r5 == r2) goto L84
            android.content.Context r5 = r4.f
            java.lang.String r2 = r1.ba()
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r5, r2)
            if (r5 != 0) goto L67
            goto L84
        L67:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r2 = "onload: "
            r5.<init>(r2)
            java.lang.String r2 = r1.bb()
            r5.append(r2)
            java.lang.String r2 = " has been installed."
            r5.append(r2)
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r1)
            if (r5 == 0) goto L89
            r0.add(r1)
            goto L89
        L84:
            r0.add(r1)
            goto L89
        L88:
            r0 = 0
        L89:
            return r0
    }

    private void b(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    static void b(com.tkay.expressad.advanced.c.a r1, com.tkay.expressad.foundation.d.c r2, int r3) {
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r1.g
            boolean r0 = r0.isH5Ready()
            if (r0 == 0) goto Lb
            r1.a(r2, r3)
        Lb:
            return
    }

    static void b(com.tkay.expressad.advanced.c.a r0, java.lang.String r1, int r2) {
            r0.b(r1, r2)
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r6) {
            r5 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r5.g
            if (r0 == 0) goto L7
            r0.clearResState()
        L7:
            java.lang.String r0 = r6.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download zip: "
            r0.<init>(r1)
            java.lang.String r1 = r6.c()
            r0.append(r1)
            com.tkay.expressad.advanced.c.a$8 r0 = new com.tkay.expressad.advanced.c.a$8
            r0.<init>(r5, r6)
            r5.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r6.c()
            com.tkay.expressad.videocommon.b.g$d r2 = r5.x
            r0.b(r1, r2)
        L33:
            java.lang.String r0 = r6.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L57
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download HTML: "
            r0.<init>(r1)
            java.lang.String r1 = r6.d()
            r0.append(r1)
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.advanced.c.a$7 r1 = new com.tkay.expressad.advanced.c.a$7
            r1.<init>(r5, r6)
            r0.a(r1)
        L57:
            java.lang.String r0 = r6.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Laf
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download Video: "
            r0.<init>(r1)
            java.lang.String r1 = r6.S()
            r0.append(r1)
            com.tkay.expressad.advanced.c.a$2 r0 = new com.tkay.expressad.advanced.c.a$2
            r0.<init>(r5, r6)
            r5.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r5.b
            com.tkay.expressad.videocommon.d.b r3 = r5.w
            r4 = 298(0x12a, float:4.18E-43)
            r1.a(r2, r0, r4, r3)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.b
            boolean r2 = r6.A()
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 != 0) goto La5
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.b
            r0.d(r1)
            goto Laf
        La5:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r5.g
            r1 = 1
            r0.setVideoReady(r1)
            r0 = 2
            r5.a(r6, r0)
        Laf:
            java.lang.String r0 = r6.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Ldf
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download image: "
            r0.<init>(r1)
            java.lang.String r1 = r6.be()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r6.be()
            com.tkay.expressad.advanced.c.a$6 r2 = new com.tkay.expressad.advanced.c.a$6
            r2.<init>(r5, r6)
            r0.a(r1, r2)
        Ldf:
            java.lang.String r0 = r6.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download EndCard: "
            r0.<init>(r1)
            java.lang.String r1 = r6.I()
            r0.append(r1)
            com.tkay.expressad.advanced.c.a$5 r0 = new com.tkay.expressad.advanced.c.a$5
            r0.<init>(r5, r6)
            r5.y = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r6.I()
            com.tkay.expressad.videocommon.b.g$d r2 = r5.y
            r0.b(r1, r2)
        L10b:
            java.lang.String r0 = r6.y()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download gitUrl: "
            r0.<init>(r1)
            java.lang.String r1 = r6.y()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r6.y()
            com.tkay.expressad.advanced.c.a$4 r2 = new com.tkay.expressad.advanced.c.a$4
            r2.<init>(r5, r6)
            r0.a(r1, r2)
        L13b:
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r2, int r3) {
            r1 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r1.g
            boolean r0 = r0.isH5Ready()
            if (r0 == 0) goto Lb
            r1.a(r2, r3)
        Lb:
            return
    }

    private void b(java.lang.String r2, int r3) {
            r1 = this;
            boolean r0 = r1.v
            if (r0 != 0) goto L11
            r1.i()
            r0 = 1
            r1.v = r0
            com.tkay.expressad.advanced.b.a r0 = r1.e
            if (r0 == 0) goto L11
            r0.a(r2, r3)
        L11:
            return
    }

    static java.lang.String c(com.tkay.expressad.advanced.c.a r0) {
            java.lang.String r0 = r0.s
            return r0
    }

    private void c(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r4.y()
            com.tkay.expressad.advanced.c.a$4 r2 = new com.tkay.expressad.advanced.c.a$4
            r2.<init>(r3, r4)
            r0.a(r1, r2)
            return
    }

    private void c(java.lang.String r1, int r2) {
            r0 = this;
            r0.b(r1, r2)
            return
    }

    static android.os.Handler d(com.tkay.expressad.advanced.c.a r0) {
            android.os.Handler r0 = r0.C
            return r0
    }

    static java.lang.String d() {
            java.lang.String r0 = com.tkay.expressad.advanced.c.a.a
            return r0
    }

    private void d(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.advanced.c.a$5 r0 = new com.tkay.expressad.advanced.c.a$5
            r0.<init>(r2, r3)
            r2.y = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r3.I()
            com.tkay.expressad.videocommon.b.g$d r1 = r2.y
            r0.b(r3, r1)
            return
    }

    private int e() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    private void e(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r4.be()
            com.tkay.expressad.advanced.c.a$6 r2 = new com.tkay.expressad.advanced.c.a$6
            r2.<init>(r3, r4)
            r0.a(r1, r2)
            return
    }

    private void f() {
            r2 = this;
            int r0 = r2.A     // Catch: java.lang.Exception -> L22
            int r0 = r0 + 1
            r2.A = r0     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.d.c r1 = r2.h     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L12
            com.tkay.expressad.d.c r1 = r2.h     // Catch: java.lang.Exception -> L22
            int r1 = r1.t()     // Catch: java.lang.Exception -> L22
            if (r0 <= r1) goto L15
        L12:
            r0 = 0
            r2.A = r0     // Catch: java.lang.Exception -> L22
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = "onload 算出 下次的offset是:"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L22
            int r1 = r2.A     // Catch: java.lang.Exception -> L22
            r0.append(r1)     // Catch: java.lang.Exception -> L22
            return
        L22:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void f(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.advanced.c.a$7 r1 = new com.tkay.expressad.advanced.c.a$7
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    private static void g() {
            return
    }

    private void g(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.advanced.c.a$8 r0 = new com.tkay.expressad.advanced.c.a$8
            r0.<init>(r2, r3)
            r2.x = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r3.c()
            com.tkay.expressad.videocommon.b.g$d r1 = r2.x
            r0.b(r3, r1)
            return
    }

    private void h() {
            r1 = this;
            r0 = 0
            r1.A = r0
            return
    }

    private void h(com.tkay.expressad.foundation.d.c r6) {
            r5 = this;
            com.tkay.expressad.advanced.c.a$2 r0 = new com.tkay.expressad.advanced.c.a$2
            r0.<init>(r5, r6)
            r5.w = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r5.b
            com.tkay.expressad.videocommon.d.b r3 = r5.w
            r4 = 298(0x12a, float:4.18E-43)
            r1.a(r2, r0, r4, r3)
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r5.b
            boolean r2 = r6.A()
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 != 0) goto L36
            com.tkay.expressad.videocommon.b.c r6 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r0 = r5.b
            r6.d(r0)
            return
        L36:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r5.g
            r1 = 1
            r0.setVideoReady(r1)
            r0 = 2
            r5.a(r6, r0)
            return
    }

    private void i() {
            r2 = this;
            android.os.Handler r0 = r2.C
            java.lang.Runnable r1 = r2.D
            r0.removeCallbacks(r1)
            return
    }

    private static void j() {
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.B
            return r0
    }

    public final java.lang.String a(java.lang.String r5) {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.i
            if (r0 == 0) goto L63
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5e
            r0.<init>()     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.foundation.d.c r1 = r4.i     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r1.aZ()     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.foundation.d.c r1 = r4.i     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r1.S()     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.foundation.d.c r1 = r4.i     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r1.B()     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = r4.b     // Catch: java.lang.Exception -> L5e
            com.tkay.expressad.videocommon.b.a r0 = r1.a(r2, r0)     // Catch: java.lang.Exception -> L5e
            if (r0 == 0) goto L65
            int r1 = r0.k()     // Catch: java.lang.Exception -> L5e
            r2 = 5
            if (r1 != r2) goto L65
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L5e
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L5e
            r2.<init>(r0)     // Catch: java.lang.Exception -> L5e
            boolean r2 = r2.exists()     // Catch: java.lang.Exception -> L5e
            if (r2 == 0) goto L65
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5e
            java.lang.String r3 = "download success locally,use local video url:"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L5e
            r2.append(r0)     // Catch: java.lang.Exception -> L5e
            java.lang.String r3 = " state:"
            r2.append(r3)     // Catch: java.lang.Exception -> L5e
            r2.append(r1)     // Catch: java.lang.Exception -> L5e
            r5 = r0
            goto L65
        L5e:
            r0 = move-exception
            r0.printStackTrace()
            goto L65
        L63:
            java.lang.String r5 = ""
        L65:
            return r5
    }

    public final void a(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.r = r1
            r0.q = r2
            return
    }

    public final void a(com.tkay.expressad.advanced.b.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.tkay.expressad.d.c r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r8) {
            r7 = this;
            r0 = 2
            r1 = 0
            r2 = 1
            if (r8 == 0) goto L89
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r3 = r8.J
            if (r3 == 0) goto L89
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r4 = r8.J
            java.lang.Object r4 = r4.get(r1)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            java.lang.String r5 = r7.b
            r4.l(r5)
            java.lang.String r8 = r8.c()
            r7.z = r8
            int r8 = r4.O()
            r5 = 99
            if (r8 == r5) goto L8a
            java.lang.String r8 = r4.c()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L3d
            java.lang.String r8 = r4.d()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L8a
        L3d:
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r4)
            if (r8 == 0) goto L55
            android.content.Context r8 = r7.f
            java.lang.String r5 = r4.ba()
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r8, r5)
            if (r8 == 0) goto L51
            r8 = r2
            goto L52
        L51:
            r8 = r0
        L52:
            r4.i(r8)
        L55:
            int r8 = r4.ae()
            if (r8 == r2) goto L85
            android.content.Context r8 = r7.f
            java.lang.String r5 = r4.ba()
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r8, r5)
            if (r8 != 0) goto L68
            goto L85
        L68:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r5 = "onload: "
            r8.<init>(r5)
            java.lang.String r5 = r4.bb()
            r8.append(r5)
            java.lang.String r5 = " has been installed."
            r8.append(r5)
            boolean r8 = com.tkay.expressad.foundation.h.t.a(r4)
            if (r8 == 0) goto L8a
            r3.add(r4)
            goto L8a
        L85:
            r3.add(r4)
            goto L8a
        L89:
            r3 = 0
        L8a:
            if (r3 == 0) goto L240
            int r8 = r3.size()
            if (r8 <= 0) goto L240
            int r8 = r7.A     // Catch: java.lang.Exception -> Lb2
            int r8 = r8 + r2
            r7.A = r8     // Catch: java.lang.Exception -> Lb2
            com.tkay.expressad.d.c r4 = r7.h     // Catch: java.lang.Exception -> Lb2
            if (r4 == 0) goto La3
            com.tkay.expressad.d.c r4 = r7.h     // Catch: java.lang.Exception -> Lb2
            int r4 = r4.t()     // Catch: java.lang.Exception -> Lb2
            if (r8 <= r4) goto La5
        La3:
            r7.A = r1     // Catch: java.lang.Exception -> Lb2
        La5:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb2
            java.lang.String r4 = "onload 算出 下次的offset是:"
            r8.<init>(r4)     // Catch: java.lang.Exception -> Lb2
            int r4 = r7.A     // Catch: java.lang.Exception -> Lb2
            r8.append(r4)     // Catch: java.lang.Exception -> Lb2
            goto Lb6
        Lb2:
            r8 = move-exception
            r8.printStackTrace()
        Lb6:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r4 = "onload load成功 size:"
            r8.<init>(r4)
            int r4 = r3.size()
            r8.append(r4)
            java.lang.Object r8 = r3.get(r1)
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
            java.lang.String r3 = r8.c()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Lf2
            java.lang.String r3 = r8.d()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto Leb
            java.lang.String r3 = r8.d()
            java.lang.String r4 = "<MBTPLMARK>"
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto Leb
            goto Lf2
        Leb:
            r8.a(r1)
            r8.b(r2)
            goto Lf8
        Lf2:
            r8.a(r2)
            r8.b(r1)
        Lf8:
            r7.i = r8
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r7.g
            boolean r1 = com.tkay.expressad.advanced.c.c.a(r1, r8)
            if (r1 == 0) goto L106
            r7.a(r8, r0)
            return
        L106:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r7.g
            if (r1 == 0) goto L10d
            r1.clearResState()
        L10d:
            java.lang.String r1 = r8.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L139
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "start download zip: "
            r1.<init>(r3)
            java.lang.String r3 = r8.c()
            r1.append(r3)
            com.tkay.expressad.advanced.c.a$8 r1 = new com.tkay.expressad.advanced.c.a$8
            r1.<init>(r7, r8)
            r7.x = r1
            com.tkay.expressad.videocommon.b.g r1 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r8.c()
            com.tkay.expressad.videocommon.b.g$d r4 = r7.x
            r1.b(r3, r4)
        L139:
            java.lang.String r1 = r8.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L15d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "start download HTML: "
            r1.<init>(r3)
            java.lang.String r3 = r8.d()
            r1.append(r3)
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            com.tkay.expressad.advanced.c.a$7 r3 = new com.tkay.expressad.advanced.c.a$7
            r3.<init>(r7, r8)
            r1.a(r3)
        L15d:
            java.lang.String r1 = r8.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "start download Video: "
            r1.<init>(r3)
            java.lang.String r3 = r8.S()
            r1.append(r3)
            com.tkay.expressad.advanced.c.a$2 r1 = new com.tkay.expressad.advanced.c.a$2
            r1.<init>(r7, r8)
            r7.w = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r8)
            com.tkay.expressad.videocommon.b.c r3 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r4 = r7.b
            com.tkay.expressad.videocommon.d.b r5 = r7.w
            r6 = 298(0x12a, float:4.18E-43)
            r3.a(r4, r1, r6, r5)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r3 = r7.b
            boolean r4 = r8.A()
            boolean r1 = r1.a(r6, r3, r4)
            if (r1 != 0) goto L1ab
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r1 = r7.b
            r0.d(r1)
            goto L1b3
        L1ab:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r7.g
            r1.setVideoReady(r2)
            r7.a(r8, r0)
        L1b3:
            java.lang.String r0 = r8.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download image: "
            r0.<init>(r1)
            java.lang.String r1 = r8.be()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r8.be()
            com.tkay.expressad.advanced.c.a$6 r2 = new com.tkay.expressad.advanced.c.a$6
            r2.<init>(r7, r8)
            r0.a(r1, r2)
        L1e3:
            java.lang.String r0 = r8.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download EndCard: "
            r0.<init>(r1)
            java.lang.String r1 = r8.I()
            r0.append(r1)
            com.tkay.expressad.advanced.c.a$5 r0 = new com.tkay.expressad.advanced.c.a$5
            r0.<init>(r7, r8)
            r7.y = r0
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r8.I()
            com.tkay.expressad.videocommon.b.g$d r2 = r7.y
            r0.b(r1, r2)
        L20f:
            java.lang.String r0 = r8.y()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "start download gitUrl: "
            r0.<init>(r1)
            java.lang.String r1 = r8.y()
            r0.append(r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r8.y()
            com.tkay.expressad.advanced.c.a$4 r2 = new com.tkay.expressad.advanced.c.a$4
            r2.<init>(r7, r8)
            r0.a(r1, r2)
        L23f:
            return
        L240:
            java.lang.String r8 = "invalid  campaign"
            r7.b(r8, r0)
            return
    }

    public final void b() {
            r3 = this;
            com.tkay.expressad.advanced.b.a r0 = r3.e
            r1 = 0
            if (r0 == 0) goto L7
            r3.e = r1
        L7:
            int r0 = r3.t
            java.lang.String r2 = "LoadManager release"
            r3.b(r2, r0)
            com.tkay.expressad.videocommon.d.b r0 = r3.w
            if (r0 == 0) goto L14
            r3.w = r1
        L14:
            com.tkay.expressad.videocommon.b.g$d r0 = r3.x
            if (r0 == 0) goto L1a
            r3.x = r1
        L1a:
            return
    }

    public final com.tkay.expressad.foundation.d.c c() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.i
            return r0
    }
}
