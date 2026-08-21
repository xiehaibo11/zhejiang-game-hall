package com.tencent.mm.opensdk.diffdev.a;

public class a implements com.tencent.mm.opensdk.diffdev.IDiffDevOAuth {
    private android.os.Handler a;
    private java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> b;
    private com.tencent.mm.opensdk.diffdev.a.b c;
    private com.tencent.mm.opensdk.diffdev.OAuthListener d;

    class a implements com.tencent.mm.opensdk.diffdev.OAuthListener {
        final com.tencent.mm.opensdk.diffdev.a.a a;

        class a implements java.lang.Runnable {
            final com.tencent.mm.opensdk.diffdev.a.a.a a;

            a(com.tencent.mm.opensdk.diffdev.a.a.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.util.ArrayList r0 = new java.util.ArrayList
                    r0.<init>()
                    com.tencent.mm.opensdk.diffdev.a.a$a r1 = r2.a
                    com.tencent.mm.opensdk.diffdev.a.a r1 = r1.a
                    java.util.List r1 = com.tencent.mm.opensdk.diffdev.a.a.a(r1)
                    r0.addAll(r1)
                    java.util.Iterator r0 = r0.iterator()
                L14:
                    boolean r1 = r0.hasNext()
                    if (r1 == 0) goto L24
                    java.lang.Object r1 = r0.next()
                    com.tencent.mm.opensdk.diffdev.OAuthListener r1 = (com.tencent.mm.opensdk.diffdev.OAuthListener) r1
                    r1.onQrcodeScanned()
                    goto L14
                L24:
                    return
            }
        }

        a(com.tencent.mm.opensdk.diffdev.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onAuthFinish(com.tencent.mm.opensdk.diffdev.OAuthErrCode r4, java.lang.String r5) {
                r3 = this;
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = r4.toString()
                r2 = 0
                r0[r2] = r1
                r1 = 1
                r0[r1] = r5
                java.lang.String r1 = "onAuthFinish, errCode = %s, authCode = %s"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                java.lang.String r1 = "MicroMsg.SDK.ListenerWrapper"
                com.tencent.mm.opensdk.utils.Log.d(r1, r0)
                com.tencent.mm.opensdk.diffdev.a.a r0 = r3.a
                r1 = 0
                com.tencent.mm.opensdk.diffdev.a.a.a(r0, r1)
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                com.tencent.mm.opensdk.diffdev.a.a r1 = r3.a
                java.util.List r1 = com.tencent.mm.opensdk.diffdev.a.a.a(r1)
                r0.addAll(r1)
                java.util.Iterator r0 = r0.iterator()
            L30:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L40
                java.lang.Object r1 = r0.next()
                com.tencent.mm.opensdk.diffdev.OAuthListener r1 = (com.tencent.mm.opensdk.diffdev.OAuthListener) r1
                r1.onAuthFinish(r4, r5)
                goto L30
            L40:
                return
        }

        @Override
        public void onAuthGotQrcode(java.lang.String r3, byte[] r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onAuthGotQrcode, qrcodeImgPath = "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "MicroMsg.SDK.ListenerWrapper"
                com.tencent.mm.opensdk.utils.Log.d(r1, r0)
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                com.tencent.mm.opensdk.diffdev.a.a r1 = r2.a
                java.util.List r1 = com.tencent.mm.opensdk.diffdev.a.a.a(r1)
                r0.addAll(r1)
                java.util.Iterator r0 = r0.iterator()
            L28:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L38
                java.lang.Object r1 = r0.next()
                com.tencent.mm.opensdk.diffdev.OAuthListener r1 = (com.tencent.mm.opensdk.diffdev.OAuthListener) r1
                r1.onAuthGotQrcode(r3, r4)
                goto L28
            L38:
                return
        }

        @Override
        public void onQrcodeScanned() {
                r2 = this;
                java.lang.String r0 = "MicroMsg.SDK.ListenerWrapper"
                java.lang.String r1 = "onQrcodeScanned"
                com.tencent.mm.opensdk.utils.Log.d(r0, r1)
                com.tencent.mm.opensdk.diffdev.a.a r0 = r2.a
                android.os.Handler r0 = com.tencent.mm.opensdk.diffdev.a.a.b(r0)
                if (r0 == 0) goto L1d
                com.tencent.mm.opensdk.diffdev.a.a r0 = r2.a
                android.os.Handler r0 = com.tencent.mm.opensdk.diffdev.a.a.b(r0)
                com.tencent.mm.opensdk.diffdev.a.a$a$a r1 = new com.tencent.mm.opensdk.diffdev.a.a$a$a
                r1.<init>(r2)
                r0.post(r1)
            L1d:
                return
        }
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            com.tencent.mm.opensdk.diffdev.a.a$a r0 = new com.tencent.mm.opensdk.diffdev.a.a$a
            r0.<init>(r1)
            r1.d = r0
            return
    }

    static com.tencent.mm.opensdk.diffdev.a.b a(com.tencent.mm.opensdk.diffdev.a.a r0, com.tencent.mm.opensdk.diffdev.a.b r1) {
            r0.c = r1
            return r1
    }

    static java.util.List a(com.tencent.mm.opensdk.diffdev.a.a r0) {
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r0.b
            return r0
    }

    static android.os.Handler b(com.tencent.mm.opensdk.diffdev.a.a r0) {
            android.os.Handler r0 = r0.a
            return r0
    }

    @Override
    public void addListener(com.tencent.mm.opensdk.diffdev.OAuthListener r2) {
            r1 = this;
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r1.b
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Ld
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r1.b
            r0.add(r2)
        Ld:
            return
    }

    @Override
    public boolean auth(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, com.tencent.mm.opensdk.diffdev.OAuthListener r17) {
            r11 = this;
            r0 = r11
            r2 = r12
            r1 = r17
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "start auth, appId = "
            r3.append(r4)
            r3.append(r12)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "MicroMsg.SDK.DiffDevOAuth"
            com.tencent.mm.opensdk.utils.Log.i(r4, r3)
            r8 = 1
            r9 = 0
            if (r2 == 0) goto L77
            int r3 = r12.length()
            if (r3 <= 0) goto L77
            if (r13 == 0) goto L77
            int r3 = r13.length()
            if (r3 > 0) goto L2d
            goto L77
        L2d:
            android.os.Handler r3 = r0.a
            if (r3 != 0) goto L3c
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r5 = android.os.Looper.getMainLooper()
            r3.<init>(r5)
            r0.a = r3
        L3c:
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r3 = r0.b
            boolean r3 = r3.contains(r1)
            if (r3 != 0) goto L49
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r3 = r0.b
            r3.add(r1)
        L49:
            com.tencent.mm.opensdk.diffdev.a.b r1 = r0.c
            if (r1 == 0) goto L53
            java.lang.String r1 = "auth, already running, no need to start auth again"
            com.tencent.mm.opensdk.utils.Log.d(r4, r1)
            return r8
        L53:
            com.tencent.mm.opensdk.diffdev.a.b r10 = new com.tencent.mm.opensdk.diffdev.a.b
            com.tencent.mm.opensdk.diffdev.OAuthListener r7 = r0.d
            r1 = r10
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.c = r10
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 11
            if (r1 < r2) goto L71
            java.util.concurrent.Executor r1 = android.os.AsyncTask.THREAD_POOL_EXECUTOR
            java.lang.Void[] r2 = new java.lang.Void[r9]
            r10.executeOnExecutor(r1, r2)
            goto L76
        L71:
            java.lang.Void[] r1 = new java.lang.Void[r9]
            r10.execute(r1)
        L76:
            return r8
        L77:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r9] = r2
            r1[r8] = r13
            java.lang.String r2 = "auth fail, invalid argument, appId = %s, scope = %s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            com.tencent.mm.opensdk.utils.Log.d(r4, r1)
            return r9
    }

    @Override
    public void detach() {
            r2 = this;
            java.lang.String r0 = "MicroMsg.SDK.DiffDevOAuth"
            java.lang.String r1 = "detach"
            com.tencent.mm.opensdk.utils.Log.i(r0, r1)
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r2.b
            r0.clear()
            r2.stopAuth()
            return
    }

    @Override
    public void removeAllListeners() {
            r1 = this;
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r1.b
            r0.clear()
            return
    }

    @Override
    public void removeListener(com.tencent.mm.opensdk.diffdev.OAuthListener r2) {
            r1 = this;
            java.util.List<com.tencent.mm.opensdk.diffdev.OAuthListener> r0 = r1.b
            r0.remove(r2)
            return
    }

    @Override
    public boolean stopAuth() {
            r4 = this;
            java.lang.String r0 = "MicroMsg.SDK.DiffDevOAuth"
            java.lang.String r1 = "stopAuth"
            com.tencent.mm.opensdk.utils.Log.i(r0, r1)
            com.tencent.mm.opensdk.diffdev.a.b r1 = r4.c     // Catch: java.lang.Exception -> L14
            if (r1 != 0) goto Ld
            r0 = 1
            goto L2e
        Ld:
            com.tencent.mm.opensdk.diffdev.a.b r1 = r4.c     // Catch: java.lang.Exception -> L14
            boolean r0 = r1.a()     // Catch: java.lang.Exception -> L14
            goto L2e
        L14:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "stopAuth fail, ex = "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.tencent.mm.opensdk.utils.Log.w(r0, r1)
            r0 = 0
        L2e:
            r1 = 0
            r4.c = r1
            return r0
    }
}
