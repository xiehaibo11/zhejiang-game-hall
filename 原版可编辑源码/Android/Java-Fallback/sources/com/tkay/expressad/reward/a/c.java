package com.tkay.expressad.reward.a;

public final class c {
    private static final java.lang.String a = "RewardCampaignsResourceManager";
    private static java.util.Map<java.lang.String, com.tkay.expressad.reward.a.c.a> d = null;
    private static final int f = 100;
    private static final int g = 200;
    private static final int h = 101;
    private static final int i = 201;
    private static final int j = 102;
    private static final int k = 202;
    private static final int l = 103;
    private static final int m = 203;
    private static final int n = 104;
    private static final int o = 204;
    private static final int p = 105;
    private static final int q = 205;
    private static final int r = 0;
    private static final int s = 1;
    private final com.tkay.expressad.reward.a.c.h b;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> c;
    private boolean e;
    private volatile java.util.List<com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView> t;



    final class 3 implements java.lang.Runnable {
        final boolean a;
        final com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView b;
        final com.tkay.expressad.foundation.d.c c;
        final java.util.List d;
        final java.lang.String e;
        final com.tkay.expressad.videocommon.e.d f;
        final java.lang.String g;
        final com.tkay.expressad.reward.a.c h;

        3(com.tkay.expressad.reward.a.c r1, boolean r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, com.tkay.expressad.foundation.d.c r4, java.util.List r5, java.lang.String r6, com.tkay.expressad.videocommon.e.d r7, java.lang.String r8) {
                r0 = this;
                r0.h = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.g = r8
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r10 = this;
                boolean r0 = r10.a
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r10.b
                com.tkay.expressad.foundation.d.c r2 = r10.c
                com.tkay.expressad.foundation.d.c$c r2 = r2.M()
                java.lang.String r2 = r2.e()
                com.tkay.expressad.foundation.d.c r3 = r10.c
                java.util.List r4 = r10.d
                com.tkay.expressad.videocommon.b.g r5 = com.tkay.expressad.videocommon.b.g.a()
                com.tkay.expressad.foundation.d.c r6 = r10.c
                com.tkay.expressad.foundation.d.c$c r6 = r6.M()
                java.lang.String r6 = r6.e()
                java.lang.String r5 = r5.c(r6)
                java.lang.String r6 = r10.e
                com.tkay.expressad.videocommon.e.d r7 = r10.f
                java.lang.String r8 = r10.g
                com.tkay.expressad.reward.a.c r9 = r10.h
                boolean r9 = com.tkay.expressad.reward.a.c.b(r9)
                com.tkay.expressad.reward.a.c.a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9)
                return
        }
    }

    private static class a {
        boolean a;
        boolean b;
        int c;
        int d;
        java.lang.String e;
        java.lang.String f;
        int g;
        java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> h;
        java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> i;

        public a(boolean r1, boolean r2, int r3, int r4, java.lang.String r5, java.lang.String r6, int r7, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r8) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                r0.g = r7
                r0.h = r8
                java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
                r1.<init>(r8)
                r0.i = r1
                return
        }
    }

    private static class b extends com.tkay.expressad.atsignalcommon.a.a {
        private final android.os.Handler b;
        private final java.lang.Runnable c;
        private final boolean d;
        private final boolean e;
        private int f;
        private java.lang.String g;
        private java.lang.String h;
        private java.lang.String i;
        private java.lang.String j;
        private com.tkay.expressad.videocommon.a.a k;
        private com.tkay.expressad.foundation.d.c l;
        private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> m;
        private com.tkay.expressad.videocommon.e.d n;
        private final com.tkay.expressad.reward.a.c.j o;
        private boolean p;
        private boolean q;
        private boolean r;
        private int s;
        private boolean t;
        private long u;

        public b(boolean r4, android.os.Handler r5, java.lang.Runnable r6, boolean r7, boolean r8, int r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, com.tkay.expressad.videocommon.a.a r14, com.tkay.expressad.foundation.d.c r15, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r16, com.tkay.expressad.videocommon.e.d r17, com.tkay.expressad.reward.a.c.j r18, long r19) {
                r3 = this;
                r0 = r3
                r3.<init>()
                r1 = 0
                r0.s = r1
                r2 = r5
                r0.b = r2
                r2 = r6
                r0.c = r2
                r2 = r7
                r0.d = r2
                r2 = r8
                r0.e = r2
                r2 = r9
                r0.f = r2
                r2 = r10
                r0.g = r2
                r2 = r11
                r0.i = r2
                r2 = r12
                r0.h = r2
                r2 = r13
                r0.j = r2
                r2 = r14
                r0.k = r2
                r2 = r15
                r0.l = r2
                r2 = r16
                r0.m = r2
                r2 = r17
                r0.n = r2
                r2 = r18
                r0.o = r2
                r0.p = r1
                r1 = r4
                r0.t = r1
                r1 = r19
                r0.u = r1
                return
        }

        @Override
        public final java.lang.String a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
                java.lang.String r2 = r0.c(r2)
                return r2
        }

        @Override
        public final void a(java.lang.Object r18, java.lang.String r19) {
                r17 = this;
                r1 = r17
                r0 = r18
                java.lang.String r2 = "id"
                if (r0 == 0) goto L12b
                boolean r3 = android.text.TextUtils.isEmpty(r19)     // Catch: java.lang.Throwable -> L127
                if (r3 != 0) goto L12b
                org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L127
                r4 = r19
                r3.<init>(r4)     // Catch: java.lang.Throwable -> L127
                java.lang.String r12 = r3.optString(r2)     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.video.bt.a.c.a(r0, r12)     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L127
                java.lang.String r10 = com.tkay.expressad.video.bt.a.c.c(r12)     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.foundation.d.c r8 = com.tkay.expressad.video.bt.a.c.a(r12)     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.videocommon.e.d r11 = com.tkay.expressad.video.bt.a.c.b(r12)     // Catch: java.lang.Throwable -> L127
                java.util.concurrent.CopyOnWriteArrayList r9 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L127
                r9.<init>()     // Catch: java.lang.Throwable -> L127
                r9.add(r8)     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.atsignalcommon.windvane.a r0 = (com.tkay.expressad.atsignalcommon.windvane.a) r0     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r0.a     // Catch: java.lang.Throwable -> L127
                boolean r3 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L127
                if (r3 == 0) goto L12b
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r0.a     // Catch: java.lang.Throwable -> L127
                com.tkay.expressad.reward.a.c r5 = com.tkay.expressad.reward.a.c.m.a()     // Catch: java.lang.Throwable -> L127
                boolean r6 = r1.t     // Catch: java.lang.Throwable -> L127
                int r0 = r1.s     // Catch: java.lang.Throwable -> L127
                if (r0 != 0) goto L52
                r0 = 3
                goto L53
            L52:
                r0 = 6
            L53:
                if (r7 == 0) goto L11e
                java.lang.String r4 = "onSubPlayTemplateViewLoad"
                java.lang.String r13 = "data"
                java.lang.String r14 = "data is null"
                java.lang.String r15 = "error"
                java.lang.String r3 = "result"
                r1 = 2
                if (r8 == 0) goto Le8
                if (r11 == 0) goto Le8
                com.tkay.expressad.foundation.d.c$c r16 = r8.M()     // Catch: java.lang.Throwable -> L11a
                if (r16 == 0) goto Le8
                boolean r16 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L11a
                if (r16 == 0) goto L72
                goto Le8
            L72:
                com.tkay.expressad.foundation.d.c$c r16 = r8.M()     // Catch: java.lang.Throwable -> L11a
                java.lang.String r16 = r16.e()     // Catch: java.lang.Throwable -> L11a
                boolean r16 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Throwable -> L11a
                if (r16 == 0) goto Lb4
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L11a
                r0.<init>()     // Catch: java.lang.Throwable -> L11a
                r0.put(r2, r12)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                r2.<init>()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                r5 = 1
                r2.put(r3, r5)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                r2.put(r15, r14)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                r0.put(r13, r2)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a(r7, r4, r0)     // Catch: java.lang.Exception -> Lab java.lang.Throwable -> L11a
                goto L11e
            Lab:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L11a
                if (r1 == 0) goto L11e
                r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L11a
                goto L11e
            Lb4:
                com.tkay.expressad.foundation.d.c$c r1 = r8.M()     // Catch: java.lang.Throwable -> L11a
                java.lang.String r1 = r1.e()     // Catch: java.lang.Throwable -> L11a
                boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L11a
                if (r1 != 0) goto Ld2
                com.tkay.expressad.foundation.d.c$c r1 = r8.M()     // Catch: java.lang.Throwable -> L11a
                java.lang.String r1 = r1.e()     // Catch: java.lang.Throwable -> L11a
                java.lang.String r2 = "cmpt=1"
                boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L11a
                if (r1 != 0) goto L11e
            Ld2:
                android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L11a
                android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L11a
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L11a
                com.tkay.expressad.reward.a.c$3 r2 = new com.tkay.expressad.reward.a.c$3     // Catch: java.lang.Throwable -> L11a
                r4 = r2
                r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L11a
                int r0 = r0 * 1000
                long r3 = (long) r0     // Catch: java.lang.Throwable -> L11a
                r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L11a
                goto L11e
            Le8:
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L11a
                r0.<init>()     // Catch: java.lang.Throwable -> L11a
                r0.put(r2, r12)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                r2.<init>()     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                r2.put(r3, r1)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                r2.put(r15, r14)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                r0.put(r13, r2)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a(r7, r4, r0)     // Catch: java.lang.Exception -> L111 java.lang.Throwable -> L11a
                goto L11e
            L111:
                r0 = move-exception
                boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L11a
                if (r1 == 0) goto L11e
                r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L11a
                goto L11e
            L11a:
                r0 = move-exception
                r1 = r17
                goto L128
            L11e:
                r1 = r17
                int r0 = r1.s     // Catch: java.lang.Throwable -> L127
                r2 = 1
                int r0 = r0 + r2
                r1.s = r0     // Catch: java.lang.Throwable -> L127
                goto L12b
            L127:
                r0 = move-exception
            L128:
                r0.getMessage()
            L12b:
                return
        }

        @Override
        public final void a(java.lang.String r3, int r4, int r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "loadAds: unitID "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = " type "
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = " adType "
                r0.append(r3)
                r0.append(r5)
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r5, java.lang.String r6) {
                r4 = this;
                super.onPageFinished(r5, r6)
                boolean r0 = r4.q
                if (r0 != 0) goto L6a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r4.h
                r0.append(r1)
                java.lang.String r1 = "_"
                r0.append(r1)
                java.lang.String r2 = r4.g
                r0.append(r2)
                java.lang.String r0 = "wfr=1"
                boolean r6 = r6.contains(r0)
                r0 = 1
                if (r6 != 0) goto L62
                com.tkay.expressad.videocommon.b.j r6 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.h
                r2.append(r3)
                r2.append(r1)
                java.lang.String r3 = r4.j
                r2.append(r3)
                r2.append(r1)
                java.lang.String r1 = r4.g
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                r6.c(r1, r0)
                android.os.Handler r6 = r4.b
                if (r6 == 0) goto L54
                java.lang.Runnable r1 = r4.c
                if (r1 == 0) goto L54
                r6.removeCallbacks(r1)
            L54:
                com.tkay.expressad.videocommon.a$a r6 = r4.k
                if (r6 == 0) goto L5b
                r6.a(r0)
            L5b:
                com.tkay.expressad.reward.a.c$j r6 = r4.o
                if (r6 == 0) goto L62
                r6.a()
            L62:
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.atsignalcommon.windvane.j.b(r5)
                r4.q = r0
            L6a:
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r5 = "onReceivedError: "
                r2.<init>(r5)
                r2.append(r3)
                java.lang.String r3 = "  "
                r2.append(r3)
                r2.append(r4)
                com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = r1.h
                r3.append(r5)
                java.lang.String r5 = "_"
                r3.append(r5)
                java.lang.String r0 = r1.j
                r3.append(r0)
                r3.append(r5)
                java.lang.String r0 = r1.g
                r3.append(r0)
                java.lang.String r3 = r3.toString()
                r0 = 0
                r2.c(r3, r0)
                com.tkay.expressad.reward.a.c$j r2 = r1.o
                if (r2 == 0) goto L5f
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r1.h
                r2.append(r3)
                r2.append(r5)
                java.lang.String r3 = r1.g
                r2.append(r3)
                com.tkay.expressad.videocommon.a$a r2 = r1.k
                if (r2 == 0) goto L5a
                r2.a(r0)
            L5a:
                com.tkay.expressad.reward.a.c$j r2 = r1.o
                r2.a(r4)
            L5f:
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r4, int r5) {
                r3 = this;
                boolean r4 = r3.r
                if (r4 != 0) goto L11e
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = r3.h
                r4.append(r0)
                java.lang.String r0 = "_"
                r4.append(r0)
                java.lang.String r1 = r3.g
                r4.append(r1)
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r1 = "CampaignTPLWindVaneWebviewClient start to preload bid temp resource readyState: "
                r4.<init>(r1)
                r4.append(r5)
                java.lang.String r1 = " isCache: "
                r4.append(r1)
                boolean r1 = r3.p
                r4.append(r1)
                r4 = 1
                if (r5 != r4) goto Le6
                boolean r5 = r3.p
                if (r5 == 0) goto L4d
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r1 = r3.h
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.j
                r5.append(r1)
                java.lang.String r5 = r5.toString()
                com.tkay.expressad.videocommon.a.e(r5)
                goto L66
            L4d:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r1 = r3.h
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.j
                r5.append(r1)
                java.lang.String r5 = r5.toString()
                com.tkay.expressad.videocommon.a.d(r5)
            L66:
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                java.lang.String r1 = "add bid temp: "
                r5.<init>(r1)
                java.lang.String r1 = r3.h
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.j
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.g
                r5.append(r1)
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r1 = r3.h
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.j
                r5.append(r1)
                r5.append(r0)
                java.lang.String r1 = r3.g
                r5.append(r1)
                java.lang.String r5 = r5.toString()
                com.tkay.expressad.videocommon.a$a r1 = r3.k
                boolean r2 = r3.p
                com.tkay.expressad.videocommon.a.a(r5, r1, r4, r2)
                android.os.Handler r5 = r3.b
                if (r5 == 0) goto Lb2
                java.lang.Runnable r1 = r3.c
                if (r1 == 0) goto Lb2
                r5.removeCallbacks(r1)
            Lb2:
                com.tkay.expressad.videocommon.b.j r5 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r3.h
                r1.append(r2)
                r1.append(r0)
                java.lang.String r2 = r3.j
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r3.g
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r5.c(r0, r4)
                com.tkay.expressad.videocommon.a$a r5 = r3.k
                if (r5 == 0) goto Lde
                r5.a(r4)
            Lde:
                com.tkay.expressad.reward.a.c$j r5 = r3.o
                if (r5 == 0) goto L11c
                r5.a()
                goto L11c
            Le6:
                com.tkay.expressad.videocommon.b.j r5 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r3.h
                r1.append(r2)
                r1.append(r0)
                java.lang.String r2 = r3.j
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r3.g
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r1 = 0
                r5.c(r0, r1)
                com.tkay.expressad.videocommon.a$a r5 = r3.k
                if (r5 == 0) goto L113
                r5.a(r1)
            L113:
                com.tkay.expressad.reward.a.c$j r5 = r3.o
                if (r5 == 0) goto L11c
                java.lang.String r0 = "state 2"
                r5.a(r0)
            L11c:
                r3.r = r4
            L11e:
                return
        }
    }

    public interface c {
        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r4);

        void a(java.lang.String r1, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r2);
    }

    private static final class d implements com.tkay.expressad.videocommon.b.g.b {
        public static final int a = 497;
        public static final int b = 313;
        public static final int c = 859;
        private boolean d;
        private int e;
        private final java.lang.String f;
        private final java.lang.String g;
        private final java.lang.String h;
        private com.tkay.expressad.foundation.d.c i;
        private com.tkay.expressad.reward.a.c.i j;
        private android.os.Handler k;
        private java.util.List<com.tkay.expressad.foundation.d.c> l;
        private final long m;

        public d(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.foundation.d.c r6, com.tkay.expressad.reward.a.c.i r7, android.os.Handler r8, java.util.List<com.tkay.expressad.foundation.d.c> r9) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.d = r0
                r1.e = r2
                r1.f = r3
                r1.g = r4
                r1.h = r5
                r1.i = r6
                r1.j = r7
                r1.k = r8
                r1.l = r9
                long r2 = java.lang.System.currentTimeMillis()
                r1.m = r2
                return
        }

        @Override
        public final void a(java.lang.String r7) {
                r6 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 1
                r0.b(r7, r1)
                int r0 = r6.e
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "url"
                r3 = 101(0x65, float:1.42E-43)
                java.lang.String r4 = "request_id"
                java.lang.String r5 = "unit_id"
                if (r0 == r1) goto L82
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L53
                r7 = 859(0x35b, float:1.204E-42)
                if (r0 == r7) goto L1f
                goto L81
            L1f:
                android.os.Message r7 = android.os.Message.obtain()
                r0 = 105(0x69, float:1.47E-43)
                r7.what = r0
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.lang.String r1 = r6.g
                r0.putString(r5, r1)
                java.lang.String r1 = com.tkay.expressad.b.y
                java.lang.String r2 = r6.f
                r0.putString(r1, r2)
                java.lang.String r1 = r6.h
                r0.putString(r4, r1)
                r7.setData(r0)
                android.os.Handler r0 = r6.k
                r0.sendMessage(r7)
                com.tkay.expressad.reward.a.c$i r7 = r6.j
                if (r7 == 0) goto L81
                java.lang.String r0 = r6.f
                java.lang.String r1 = r6.g
                java.lang.String r2 = r6.h
                r7.a(r0, r1, r2)
                goto L81
            L53:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r6.g
                r1.putString(r5, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r5 = r6.f
                r1.putString(r3, r5)
                java.lang.String r3 = r6.h
                r1.putString(r4, r3)
                r1.putString(r2, r7)
                r0.setData(r1)
                android.os.Handler r7 = r6.k
                r7.sendMessage(r0)
                boolean r7 = r6.d
                if (r7 == 0) goto L81
                java.lang.System.currentTimeMillis()
            L81:
                return
            L82:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r6.g
                r1.putString(r5, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r5 = r6.f
                r1.putString(r3, r5)
                java.lang.String r3 = r6.h
                r1.putString(r4, r3)
                r1.putString(r2, r7)
                r0.setData(r1)
                android.os.Handler r7 = r6.k
                r7.sendMessage(r0)
                return
        }

        @Override
        public final void a(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 0
                r0.b(r8, r1)
                int r0 = r7.e
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "url"
                r3 = 201(0xc9, float:2.82E-43)
                java.lang.String r4 = "message"
                java.lang.String r5 = "request_id"
                java.lang.String r6 = "unit_id"
                if (r0 == r1) goto L86
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L54
                r8 = 859(0x35b, float:1.204E-42)
                if (r0 == r8) goto L21
                goto L85
            L21:
                android.os.Message r8 = android.os.Message.obtain()
                r0 = 205(0xcd, float:2.87E-43)
                r8.what = r0
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.lang.String r1 = r7.g
                r0.putString(r6, r1)
                java.lang.String r1 = com.tkay.expressad.b.y
                java.lang.String r2 = r7.f
                r0.putString(r1, r2)
                java.lang.String r1 = r7.h
                r0.putString(r5, r1)
                r0.putString(r4, r9)
                r8.setData(r0)
                android.os.Handler r9 = r7.k
                r9.sendMessage(r8)
                com.tkay.expressad.reward.a.c$i r8 = r7.j
                if (r8 == 0) goto L85
                java.lang.String r9 = r7.g
                r8.a(r9)
                goto L85
            L54:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r7.g
                r1.putString(r6, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r6 = r7.f
                r1.putString(r3, r6)
                java.lang.String r3 = r7.h
                r1.putString(r5, r3)
                r1.putString(r2, r8)
                r1.putString(r4, r9)
                r0.setData(r1)
                android.os.Handler r8 = r7.k
                r8.sendMessage(r0)
                boolean r8 = r7.d
                if (r8 == 0) goto L85
                java.lang.System.currentTimeMillis()
            L85:
                return
            L86:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r7.g
                r1.putString(r6, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r6 = r7.f
                r1.putString(r3, r6)
                java.lang.String r3 = r7.h
                r1.putString(r5, r3)
                r1.putString(r2, r8)
                r1.putString(r4, r9)
                r0.setData(r1)
                android.os.Handler r8 = r7.k
                r8.sendMessage(r0)
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.d = r1
                return
        }
    }

    private static final class e implements com.tkay.expressad.foundation.g.d.c {
        public static final int a = 0;
        public static final int b = 1;
        private android.os.Handler c;
        private int d;
        private java.lang.String e;
        private java.lang.String f;
        private java.lang.String g;
        private com.tkay.expressad.foundation.d.c h;

        public e(android.os.Handler r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.foundation.d.c r6) {
                r0 = this;
                r0.<init>()
                r0.c = r1
                r0.d = r2
                r0.f = r3
                r0.e = r4
                r0.g = r5
                r0.h = r6
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                com.tkay.expressad.videocommon.b.j.a()
                com.tkay.expressad.videocommon.b.j.c(r4)
                android.os.Message r3 = android.os.Message.obtain()
                int r4 = r2.d
                if (r4 != 0) goto L11
                r4 = 102(0x66, float:1.43E-43)
                goto L13
            L11:
                r4 = 104(0x68, float:1.46E-43)
            L13:
                r3.what = r4
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                java.lang.String r0 = r2.e
                java.lang.String r1 = "unit_id"
                r4.putString(r1, r0)
                java.lang.String r0 = com.tkay.expressad.b.y
                java.lang.String r1 = r2.f
                r4.putString(r0, r1)
                java.lang.String r0 = r2.g
                java.lang.String r1 = "request_id"
                r4.putString(r1, r0)
                r3.setData(r4)
                android.os.Handler r4 = r2.c
                r4.sendMessage(r3)
                return
        }

        @Override
        public final void a(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                android.os.Message r3 = android.os.Message.obtain()
                int r4 = r2.d
                if (r4 != 0) goto Lb
                r4 = 202(0xca, float:2.83E-43)
                goto Ld
            Lb:
                r4 = 204(0xcc, float:2.86E-43)
            Ld:
                r3.what = r4
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                java.lang.String r0 = r2.e
                java.lang.String r1 = "unit_id"
                r4.putString(r1, r0)
                java.lang.String r0 = com.tkay.expressad.b.y
                java.lang.String r1 = r2.f
                r4.putString(r0, r1)
                java.lang.String r0 = r2.g
                java.lang.String r1 = "request_id"
                r4.putString(r1, r0)
                r3.setData(r4)
                android.os.Handler r4 = r2.c
                r4.sendMessage(r3)
                return
        }
    }

    private static final class f implements com.tkay.expressad.videocommon.d.b {
        private android.os.Handler a;
        private final java.lang.String b;
        private final java.lang.String c;
        private final java.lang.String d;

        public f(android.os.Handler r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.c = r2
                r0.b = r3
                r0.d = r4
                return
        }

        @Override
        public final void a(java.lang.String r5) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Video download success: "
                r0.<init>(r1)
                java.lang.String r1 = r4.d
                r0.append(r1)
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 1
                r0.a(r5, r1)
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 100
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r4.b
                java.lang.String r3 = "unit_id"
                r1.putString(r3, r2)
                java.lang.String r2 = com.tkay.expressad.b.y
                java.lang.String r3 = r4.c
                r1.putString(r2, r3)
                java.lang.String r2 = r4.d
                java.lang.String r3 = "request_id"
                r1.putString(r3, r2)
                java.lang.String r2 = "url"
                r1.putString(r2, r5)
                r0.setData(r1)
                android.os.Handler r5 = r4.a
                r5.sendMessage(r0)
                return
        }

        @Override
        public final void a(java.lang.String r5, java.lang.String r6) {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Video download fail: "
                r0.<init>(r1)
                r0.append(r5)
                java.lang.String r1 = " "
                r0.append(r1)
                java.lang.String r1 = r4.d
                r0.append(r1)
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 0
                r0.a(r6, r1)
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 200(0xc8, float:2.8E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r2 = r4.b
                java.lang.String r3 = "unit_id"
                r1.putString(r3, r2)
                java.lang.String r2 = com.tkay.expressad.b.y
                java.lang.String r3 = r4.c
                r1.putString(r2, r3)
                java.lang.String r2 = r4.d
                java.lang.String r3 = "request_id"
                r1.putString(r3, r2)
                java.lang.String r2 = "url"
                r1.putString(r2, r6)
                java.lang.String r6 = "message"
                r1.putString(r6, r5)
                r0.setData(r1)
                android.os.Handler r5 = r4.a
                r5.sendMessage(r0)
                return
        }
    }

    private static final class g implements com.tkay.expressad.videocommon.b.g.d {
        public static final int a = 497;
        public static final int b = 859;
        public static final int c = 313;
        public static final int d = 502;
        private boolean e;
        private android.content.Context f;
        private java.lang.String g;
        private java.lang.String h;
        private java.lang.String i;
        private com.tkay.expressad.foundation.d.c j;
        private int k;
        private android.os.Handler l;
        private com.tkay.expressad.reward.a.c.i m;
        private java.util.List<com.tkay.expressad.foundation.d.c> n;
        private long o;

        public g(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.foundation.d.c r6, int r7, android.os.Handler r8, com.tkay.expressad.reward.a.c.i r9, java.util.List<com.tkay.expressad.foundation.d.c> r10) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.e = r0
                r1.f = r2
                r1.h = r3
                r1.g = r4
                r1.i = r5
                r1.j = r6
                r1.k = r7
                r1.l = r8
                r1.m = r9
                r1.n = r10
                long r2 = java.lang.System.currentTimeMillis()
                r1.o = r2
                return
        }

        @Override
        public final void a(java.lang.String r7) {
                r6 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 1
                r0.b(r7, r1)
                java.lang.System.currentTimeMillis()
                int r0 = r6.k
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "url"
                r3 = 101(0x65, float:1.42E-43)
                java.lang.String r4 = "request_id"
                java.lang.String r5 = "unit_id"
                if (r0 == r1) goto L82
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L56
                r7 = 859(0x35b, float:1.204E-42)
                if (r0 == r7) goto L22
                goto L81
            L22:
                android.os.Message r7 = android.os.Message.obtain()
                r0 = 103(0x67, float:1.44E-43)
                r7.what = r0
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.lang.String r1 = r6.g
                r0.putString(r5, r1)
                java.lang.String r1 = com.tkay.expressad.b.y
                java.lang.String r2 = r6.h
                r0.putString(r1, r2)
                java.lang.String r1 = r6.i
                r0.putString(r4, r1)
                r7.setData(r0)
                android.os.Handler r0 = r6.l
                r0.sendMessage(r7)
                com.tkay.expressad.reward.a.c$i r7 = r6.m
                if (r7 == 0) goto L81
                java.lang.String r0 = r6.h
                java.lang.String r1 = r6.g
                java.lang.String r2 = r6.i
                r7.a(r0, r1, r2)
                goto L81
            L56:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r6.g
                r1.putString(r5, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r5 = r6.h
                r1.putString(r3, r5)
                java.lang.String r3 = r6.i
                r1.putString(r4, r3)
                r1.putString(r2, r7)
                r0.setData(r1)
                android.os.Handler r7 = r6.l
                r7.sendMessage(r0)
                boolean r7 = r6.e
                if (r7 == 0) goto L81
            L81:
                return
            L82:
                android.os.Message r0 = android.os.Message.obtain()
                r0.what = r3
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r3 = r6.g
                r1.putString(r5, r3)
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r5 = r6.h
                r1.putString(r3, r5)
                java.lang.String r3 = r6.i
                r1.putString(r4, r3)
                r1.putString(r2, r7)
                r0.setData(r1)
                android.os.Handler r7 = r6.l
                r7.sendMessage(r0)
                return
        }

        @Override
        public final void a(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
                r1 = 0
                r0.b(r9, r1)
                java.lang.System.currentTimeMillis()
                int r0 = r7.k
                r1 = 313(0x139, float:4.39E-43)
                java.lang.String r2 = "message"
                java.lang.String r3 = "url"
                java.lang.String r4 = "request_id"
                java.lang.String r5 = "unit_id"
                if (r0 == r1) goto L89
                r1 = 497(0x1f1, float:6.96E-43)
                if (r0 == r1) goto L58
                r1 = 859(0x35b, float:1.204E-42)
                if (r0 == r1) goto L22
                goto L88
            L22:
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 203(0xcb, float:2.84E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r6 = r7.g
                r1.putString(r5, r6)
                java.lang.String r5 = com.tkay.expressad.b.y
                java.lang.String r6 = r7.h
                r1.putString(r5, r6)
                java.lang.String r5 = r7.i
                r1.putString(r4, r5)
                r1.putString(r3, r9)
                r1.putString(r2, r8)
                r0.setData(r1)
                android.os.Handler r8 = r7.l
                r8.sendMessage(r0)
                com.tkay.expressad.reward.a.c$i r8 = r7.m
                if (r8 == 0) goto L88
                java.lang.String r9 = r7.g
                r8.a(r9)
                goto L88
            L58:
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 201(0xc9, float:2.82E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r6 = r7.g
                r1.putString(r5, r6)
                java.lang.String r5 = com.tkay.expressad.b.y
                java.lang.String r6 = r7.h
                r1.putString(r5, r6)
                java.lang.String r5 = r7.i
                r1.putString(r4, r5)
                r1.putString(r3, r9)
                r1.putString(r2, r8)
                r0.setData(r1)
                android.os.Handler r8 = r7.l
                r8.sendMessage(r0)
                boolean r8 = r7.e
                if (r8 == 0) goto L88
            L88:
                return
            L89:
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 101(0x65, float:1.42E-43)
                r0.what = r1
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
                java.lang.String r6 = r7.g
                r1.putString(r5, r6)
                java.lang.String r5 = com.tkay.expressad.b.y
                java.lang.String r6 = r7.h
                r1.putString(r5, r6)
                java.lang.String r5 = r7.i
                r1.putString(r4, r5)
                r1.putString(r3, r9)
                r1.putString(r2, r8)
                r0.setData(r1)
                android.os.Handler r8 = r7.l
                r8.sendMessage(r0)
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.e = r1
                return
        }
    }

    private static final class h extends android.os.Handler {
        private android.content.Context a;
        private com.tkay.expressad.reward.a.c.c b;
        private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c.c> c;
        private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> d;

        public h(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>()
                r0.c = r1
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>()
                r0.d = r1
                return
        }

        public final void a(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final void a(java.lang.String r3, java.lang.String r4, com.tkay.expressad.reward.a.c.c r5) {
                r2 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r2.c
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "_"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r0.put(r3, r5)
                return
        }

        public final void a(java.lang.String r2, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r3) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d
                r0.put(r2, r3)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r25) {
                r24 = this;
                r1 = r24
                r0 = r25
                android.os.Bundle r2 = r25.getData()
                java.lang.String r3 = com.tkay.expressad.b.y
                java.lang.String r3 = r2.getString(r3)
                java.lang.String r4 = "unit_id"
                java.lang.String r4 = r2.getString(r4)
                java.lang.String r5 = "request_id"
                java.lang.String r5 = r2.getString(r5)
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                r6.append(r4)
                java.lang.String r7 = "_"
                r6.append(r7)
                r6.append(r5)
                java.lang.String r6 = r6.toString()
                java.util.Map r7 = com.tkay.expressad.reward.a.c.b()
                java.lang.Object r7 = r7.get(r6)
                com.tkay.expressad.reward.a.c$a r7 = (com.tkay.expressad.reward.a.c.a) r7
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r8 = r1.c
                java.lang.Object r8 = r8.get(r6)
                com.tkay.expressad.reward.a.c$c r8 = (com.tkay.expressad.reward.a.c.c) r8
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r9 = r1.d
                java.lang.Object r9 = r9.get(r6)
                r16 = r9
                java.util.concurrent.CopyOnWriteArrayList r16 = (java.util.concurrent.CopyOnWriteArrayList) r16
                int r9 = r0.what
                r15 = 0
                switch(r9) {
                    case 100: goto L55;
                    case 101: goto L55;
                    case 102: goto L55;
                    case 103: goto L55;
                    case 104: goto L55;
                    case 105: goto L55;
                    default: goto L50;
                }
            L50:
                switch(r9) {
                    case 200: goto L5a;
                    case 201: goto L5a;
                    case 202: goto L55;
                    case 203: goto L5a;
                    case 204: goto L55;
                    case 205: goto L5a;
                    default: goto L53;
                }
            L53:
                goto L411
            L55:
                r2 = r6
                r18 = r15
                goto L3d8
            L5a:
                if (r7 == 0) goto L411
                if (r8 == 0) goto L411
                java.lang.String r9 = "message"
                java.lang.String r9 = r2.getString(r9)
                if (r9 != 0) goto L68
                java.lang.String r9 = ""
            L68:
                java.lang.StringBuilder r10 = new java.lang.StringBuilder
                java.lang.String r14 = "resource download failed "
                r10.<init>(r14)
                int r11 = r0.what
                java.lang.String r11 = com.tkay.expressad.reward.a.c.a(r11)
                r10.append(r11)
                java.lang.String r11 = " "
                r10.append(r11)
                r10.append(r9)
                r9 = 0
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r10 = r7.h
                if (r10 == 0) goto L95
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r10 = r7.h
                int r10 = r10.size()
                if (r10 <= 0) goto L95
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.h
                java.lang.Object r9 = r9.get(r15)
                com.tkay.expressad.foundation.d.c r9 = (com.tkay.expressad.foundation.d.c) r9
            L95:
                boolean r10 = r7.a     // Catch: java.lang.Exception -> L3c1
                r17 = 3
                r12 = 203(0xcb, float:2.84E-43)
                r11 = 201(0xc9, float:2.82E-43)
                r15 = 200(0xc8, float:2.8E-43)
                r19 = 2
                r13 = 1
                if (r10 == 0) goto L312
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r10 = r7.i     // Catch: java.lang.Exception -> L3c1
                if (r10 == 0) goto L312
                int r10 = r7.c     // Catch: java.lang.Exception -> L3c1
                if (r10 != r13) goto L151
                if (r9 == 0) goto L13a
                java.util.ArrayList r2 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                if (r2 == 0) goto L13a
                java.util.ArrayList r2 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                int r2 = r2.size()     // Catch: java.lang.Exception -> L3c1
                if (r2 <= 0) goto L13a
                int r0 = r0.what     // Catch: java.lang.Exception -> L3c1
                if (r0 == r15) goto L12a
                if (r0 == r11) goto L11b
                if (r0 == r12) goto L10c
                r2 = 205(0xcd, float:2.87E-43)
                if (r0 == r2) goto Lcb
                goto L13a
            Lcb:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r17)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto Lda
                return
            Lda:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r0 <= 0) goto L13a
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3c1
                r2 = 0
                java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L3c1
                java.lang.String r2 = r0.ar()     // Catch: java.lang.Exception -> L3c1
                java.lang.String r0 = r0.I()     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r2.equals(r0)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r19)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                return
            L10c:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                return
            L11b:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r19)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                return
            L12a:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                r2 = 0
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L13a
                return
            L13a:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3c1
                r8.a(r4, r0)     // Catch: java.lang.Exception -> L3c1
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r1.c     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                return
            L151:
                java.lang.String r10 = "url"
                java.lang.String r2 = r2.getString(r10)     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.what     // Catch: java.lang.Exception -> L3c1
                if (r0 == r15) goto L26f
                if (r0 == r11) goto L1f9
                if (r0 == r12) goto L19b
                r10 = 205(0xcd, float:2.87E-43)
                if (r0 == r10) goto L165
                goto L2c6
            L165:
                if (r9 == 0) goto L186
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L186
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r0 <= 0) goto L186
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r17)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L186
                return
            L186:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                r0.clear()     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.put(r6, r7)     // Catch: java.lang.Exception -> L3c1
                goto L2c6
            L19b:
                if (r9 == 0) goto L1bc
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L1bc
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r0 <= 0) goto L1bc
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r9 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r9)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L1bc
                return
            L1bc:
                r15 = 0
            L1bd:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r15 >= r0) goto L1e9
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                java.lang.Object r0 = r0.get(r15)     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c$c r9 = r0.M()     // Catch: java.lang.Exception -> L3c1
                if (r9 == 0) goto L1e6
                com.tkay.expressad.foundation.d.c$c r0 = r0.M()     // Catch: java.lang.Exception -> L3c1
                java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L1e6
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                r0.remove(r15)     // Catch: java.lang.Exception -> L3c1
            L1e6:
                int r15 = r15 + 1
                goto L1bd
            L1e9:
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.put(r6, r7)     // Catch: java.lang.Exception -> L3c1
                goto L2c6
            L1f9:
                if (r9 == 0) goto L21a
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L21a
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r0 <= 0) goto L21a
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                java.lang.Integer r9 = java.lang.Integer.valueOf(r19)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r9)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L21a
                return
            L21a:
                r15 = 0
            L21b:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r15 >= r0) goto L260
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                java.lang.Object r0 = r0.get(r15)     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c$c r9 = r0.M()     // Catch: java.lang.Exception -> L3c1
                if (r9 == 0) goto L244
                com.tkay.expressad.foundation.d.c$c r9 = r0.M()     // Catch: java.lang.Exception -> L3c1
                java.lang.String r9 = r9.d()     // Catch: java.lang.Exception -> L3c1
                boolean r9 = r9.equals(r2)     // Catch: java.lang.Exception -> L3c1
                if (r9 == 0) goto L244
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r9 = r7.i     // Catch: java.lang.Exception -> L3c1
                r9.remove(r15)     // Catch: java.lang.Exception -> L3c1
            L244:
                java.lang.String r9 = r0.I()     // Catch: java.lang.Exception -> L3c1
                boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L3c1
                if (r9 != 0) goto L25d
                java.lang.String r0 = r0.I()     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L25d
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                r0.remove(r15)     // Catch: java.lang.Exception -> L3c1
            L25d:
                int r15 = r15 + 1
                goto L21b
            L260:
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.put(r6, r7)     // Catch: java.lang.Exception -> L3c1
                goto L2c6
            L26f:
                if (r9 == 0) goto L292
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L292
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r0 <= 0) goto L292
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3c1
                r18 = 0
                java.lang.Integer r9 = java.lang.Integer.valueOf(r18)     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.contains(r9)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L294
                return
            L292:
                r18 = 0
            L294:
                r15 = r18
            L296:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3c1
                if (r15 >= r0) goto L2b8
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                java.lang.Object r0 = r0.get(r15)     // Catch: java.lang.Exception -> L3c1
                com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L3c1
                java.lang.String r0 = r0.S()     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r0.equals(r2)     // Catch: java.lang.Exception -> L3c1
                if (r0 == 0) goto L2b5
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3c1
                r0.remove(r15)     // Catch: java.lang.Exception -> L3c1
            L2b5:
                int r15 = r15 + 1
                goto L296
            L2b8:
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.remove(r6)     // Catch: java.lang.Exception -> L3c1
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3c1
                r0.put(r6, r7)     // Catch: java.lang.Exception -> L3c1
            L2c6:
                com.tkay.expressad.videocommon.b.c r10 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L3c1
                java.lang.String r11 = r7.e     // Catch: java.lang.Exception -> L3c1
                boolean r12 = r7.b     // Catch: java.lang.Exception -> L3c1
                int r13 = r7.d     // Catch: java.lang.Exception -> L3c1
                boolean r0 = r7.a     // Catch: java.lang.Exception -> L3c1
                int r15 = r7.c     // Catch: java.lang.Exception -> L3c1
                r2 = r14
                r14 = r0
                boolean r0 = r10.a(r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Exception -> L3bd
                if (r0 == 0) goto L2f3
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3bd
                r8.a(r3, r4, r5, r0)     // Catch: java.lang.Exception -> L3bd
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r1.c     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
                return
            L2f3:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.i     // Catch: java.lang.Exception -> L3bd
                int r0 = r0.size()     // Catch: java.lang.Exception -> L3bd
                if (r0 != 0) goto L311
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3bd
                r8.a(r4, r0)     // Catch: java.lang.Exception -> L3bd
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r1.c     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d     // Catch: java.lang.Exception -> L3bd
                r0.remove(r6)     // Catch: java.lang.Exception -> L3bd
            L311:
                return
            L312:
                r2 = r14
                r10 = 205(0xcd, float:2.87E-43)
                r18 = 0
                com.tkay.expressad.videocommon.b.c r14 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L3bd
                java.lang.String r11 = r7.e     // Catch: java.lang.Exception -> L3bd
                boolean r12 = r7.b     // Catch: java.lang.Exception -> L3bd
                int r13 = r7.d     // Catch: java.lang.Exception -> L3bd
                boolean r15 = r7.a     // Catch: java.lang.Exception -> L3bd
                r22 = r2
                int r2 = r7.c     // Catch: java.lang.Exception -> L3bb
                r23 = r10
                r10 = r14
                r14 = 201(0xc9, float:2.82E-43)
                r20 = r6
                r6 = 203(0xcb, float:2.84E-43)
                r21 = 1
                r6 = r14
                r14 = r15
                r6 = 200(0xc8, float:2.8E-43)
                r15 = r2
                boolean r2 = r10.a(r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Exception -> L3bb
                if (r2 == 0) goto L343
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3bb
                r8.a(r3, r4, r5, r0)     // Catch: java.lang.Exception -> L3bb
                goto L3a7
            L343:
                if (r9 == 0) goto L3a2
                java.util.ArrayList r2 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                if (r2 == 0) goto L3a2
                java.util.ArrayList r2 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                int r2 = r2.size()     // Catch: java.lang.Exception -> L3bb
                if (r2 <= 0) goto L3a2
                int r0 = r0.what     // Catch: java.lang.Exception -> L3bb
                if (r0 == r6) goto L393
                r2 = 201(0xc9, float:2.82E-43)
                if (r0 == r2) goto L384
                r2 = 203(0xcb, float:2.84E-43)
                if (r0 == r2) goto L375
                r2 = 205(0xcd, float:2.87E-43)
                if (r0 == r2) goto L366
                goto L3a2
            L366:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                java.lang.Integer r2 = java.lang.Integer.valueOf(r17)     // Catch: java.lang.Exception -> L3bb
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3bb
                if (r0 == 0) goto L3a2
                return
            L375:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                java.lang.Integer r2 = java.lang.Integer.valueOf(r21)     // Catch: java.lang.Exception -> L3bb
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3bb
                if (r0 == 0) goto L3a2
                return
            L384:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                java.lang.Integer r2 = java.lang.Integer.valueOf(r19)     // Catch: java.lang.Exception -> L3bb
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3bb
                if (r0 == 0) goto L3a2
                return
            L393:
                java.util.ArrayList r0 = r9.aB()     // Catch: java.lang.Exception -> L3bb
                java.lang.Integer r2 = java.lang.Integer.valueOf(r18)     // Catch: java.lang.Exception -> L3bb
                boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L3bb
                if (r0 == 0) goto L3a2
                return
            L3a2:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h     // Catch: java.lang.Exception -> L3bb
                r8.a(r4, r0)     // Catch: java.lang.Exception -> L3bb
            L3a7:
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r1.c     // Catch: java.lang.Exception -> L3bb
                r2 = r20
                r0.remove(r2)     // Catch: java.lang.Exception -> L3bb
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()     // Catch: java.lang.Exception -> L3bb
                r0.remove(r2)     // Catch: java.lang.Exception -> L3bb
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d     // Catch: java.lang.Exception -> L3bb
                r0.remove(r2)     // Catch: java.lang.Exception -> L3bb
                return
            L3bb:
                r0 = move-exception
                goto L3c4
            L3bd:
                r0 = move-exception
                r22 = r2
                goto L3c4
            L3c1:
                r0 = move-exception
                r22 = r14
            L3c4:
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r2 = r7.h
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r5 = r22
                r3.<init>(r5)
                java.lang.String r0 = r0.getMessage()
                r3.append(r0)
                r8.a(r4, r2)
                goto L411
            L3d8:
                if (r7 == 0) goto L411
                if (r8 == 0) goto L411
                com.tkay.expressad.videocommon.b.c r10 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L3ef
                java.lang.String r11 = r7.e     // Catch: java.lang.Exception -> L3ef
                boolean r12 = r7.b     // Catch: java.lang.Exception -> L3ef
                int r13 = r7.d     // Catch: java.lang.Exception -> L3ef
                boolean r14 = r7.a     // Catch: java.lang.Exception -> L3ef
                int r15 = r7.c     // Catch: java.lang.Exception -> L3ef
                boolean r15 = r10.a(r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Exception -> L3ef
                goto L3f9
            L3ef:
                r0 = move-exception
                boolean r6 = com.tkay.expressad.b.a
                if (r6 == 0) goto L3f7
                r0.getLocalizedMessage()
            L3f7:
                r15 = r18
            L3f9:
                if (r15 == 0) goto L411
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r0 = r7.h
                r8.a(r3, r4, r5, r0)
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.reward.a.c$c> r0 = r1.c
                r0.remove(r2)
                java.util.Map r0 = com.tkay.expressad.reward.a.c.b()
                r0.remove(r2)
                java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c>> r0 = r1.d
                r0.remove(r2)
            L411:
                return
        }
    }

    public interface i {
        void a(java.lang.String r1);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3);
    }

    public interface j {
        void a();

        void a(java.lang.String r1);
    }

    private static class k extends com.tkay.expressad.atsignalcommon.a.b {
        private android.os.Handler a;
        private java.lang.Runnable b;
        private final boolean c;
        private final boolean e;
        private java.lang.String f;
        private final com.tkay.expressad.reward.a.c.j g;
        private final com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView h;
        private final java.lang.String i;
        private final java.lang.String j;
        private final java.lang.String k;
        private final com.tkay.expressad.videocommon.a.a l;
        private final com.tkay.expressad.foundation.d.c m;
        private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> n;
        private long o;
        private boolean p;
        private boolean q;
        private final java.lang.Runnable r;
        private final java.lang.Runnable s;



        public k(android.os.Handler r17, java.lang.Runnable r18, boolean r19, boolean r20, java.lang.String r21, com.tkay.expressad.reward.a.c.j r22, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, com.tkay.expressad.videocommon.a.a r27, com.tkay.expressad.foundation.d.c r28, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r29, long r30) {
                r16 = this;
                r8 = r16
                r9 = r17
                r16.<init>()
                r8.a = r9
                r0 = r18
                r8.b = r0
                r0 = r19
                r8.c = r0
                r0 = r20
                r8.e = r0
                r10 = r21
                r8.f = r10
                r11 = r22
                r8.g = r11
                r0 = r23
                r8.h = r0
                r12 = r24
                r8.i = r12
                r13 = r26
                r8.j = r13
                r14 = r25
                r8.k = r14
                r15 = r27
                r8.l = r15
                r0 = r28
                r8.m = r0
                r0 = r29
                r8.n = r0
                r0 = r30
                r8.o = r0
                com.tkay.expressad.reward.a.c$k$1 r7 = new com.tkay.expressad.reward.a.c$k$1
                r0 = r7
                r1 = r16
                r2 = r22
                r3 = r27
                r4 = r26
                r5 = r21
                r6 = r24
                r10 = r7
                r7 = r25
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                r8.s = r10
                com.tkay.expressad.reward.a.c$k$2 r10 = new com.tkay.expressad.reward.a.c$k$2
                r0 = r10
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                r8.r = r10
                if (r9 == 0) goto L65
                java.lang.Runnable r0 = r8.s
                r1 = 5000(0x1388, double:2.4703E-320)
                r9.postDelayed(r0, r1)
            L65:
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r5, java.lang.String r6) {
                r4 = this;
                super.onPageFinished(r5, r6)
                android.os.Handler r0 = r4.a
                if (r0 == 0) goto Le
                java.lang.Runnable r1 = r4.s
                if (r1 == 0) goto Le
                r0.removeCallbacks(r1)
            Le:
                boolean r0 = r4.p
                if (r0 != 0) goto Lca
                java.lang.String r0 = "wfr=1"
                boolean r6 = r6.contains(r0)
                r0 = 1
                if (r6 != 0) goto Lb5
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r1 = r4.j
                r6.append(r1)
                java.lang.String r1 = "_"
                r6.append(r1)
                java.lang.String r2 = r4.i
                r6.append(r2)
                com.tkay.expressad.videocommon.b.j r6 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.j
                r2.append(r3)
                r2.append(r1)
                java.lang.String r3 = r4.f
                r2.append(r3)
                r2.append(r1)
                java.lang.String r1 = r4.i
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                r6.c(r1, r0)
                java.lang.Runnable r6 = r4.b
                if (r6 == 0) goto L5f
                android.os.Handler r1 = r4.a
                if (r1 == 0) goto L5f
                r1.removeCallbacks(r6)
            L5f:
                com.tkay.expressad.videocommon.a$a r6 = r4.l
                if (r6 == 0) goto L66
                r6.a(r0)
            L66:
                boolean r6 = r4.c
                if (r6 == 0) goto L8c
                com.tkay.expressad.foundation.d.c r6 = r4.m
                boolean r6 = r6.A()
                r1 = 287(0x11f, float:4.02E-43)
                if (r6 == 0) goto L80
                com.tkay.expressad.foundation.d.c r6 = r4.m
                java.lang.String r6 = r6.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.l
                com.tkay.expressad.videocommon.a.a(r1, r6, r2)
                goto Lad
            L80:
                com.tkay.expressad.foundation.d.c r6 = r4.m
                java.lang.String r6 = r6.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.l
                com.tkay.expressad.videocommon.a.b(r1, r6, r2)
                goto Lad
            L8c:
                com.tkay.expressad.foundation.d.c r6 = r4.m
                boolean r6 = r6.A()
                r1 = 94
                if (r6 == 0) goto La2
                com.tkay.expressad.foundation.d.c r6 = r4.m
                java.lang.String r6 = r6.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.l
                com.tkay.expressad.videocommon.a.a(r1, r6, r2)
                goto Lad
            La2:
                com.tkay.expressad.foundation.d.c r6 = r4.m
                java.lang.String r6 = r6.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.l
                com.tkay.expressad.videocommon.a.b(r1, r6, r2)
            Lad:
                com.tkay.expressad.reward.a.c$j r6 = r4.g
                if (r6 == 0) goto Lc2
                r6.a()
                goto Lc2
            Lb5:
                android.os.Handler r6 = r4.a
                if (r6 == 0) goto Lc2
                java.lang.Runnable r1 = r4.r
                if (r1 == 0) goto Lc2
                r2 = 5000(0x1388, double:2.4703E-320)
                r6.postDelayed(r1, r2)
            Lc2:
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.atsignalcommon.windvane.j.b(r5)
                r4.p = r0
            Lca:
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                super.onReceivedError(r2, r3, r4, r5)
                com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = r1.j
                r3.append(r5)
                java.lang.String r5 = "_"
                r3.append(r5)
                java.lang.String r0 = r1.f
                r3.append(r0)
                r3.append(r5)
                java.lang.String r0 = r1.i
                r3.append(r0)
                java.lang.String r3 = r3.toString()
                r0 = 0
                r2.c(r3, r0)
                android.os.Handler r2 = r1.a
                if (r2 == 0) goto L41
                java.lang.Runnable r3 = r1.r
                if (r3 == 0) goto L38
                java.lang.Runnable r3 = r1.s
                r2.removeCallbacks(r3)
            L38:
                java.lang.Runnable r2 = r1.r
                if (r2 == 0) goto L41
                android.os.Handler r3 = r1.a
                r3.removeCallbacks(r2)
            L41:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
                r2.<init>()     // Catch: java.lang.Exception -> L66
                java.lang.String r3 = r1.j     // Catch: java.lang.Exception -> L66
                r2.append(r3)     // Catch: java.lang.Exception -> L66
                r2.append(r5)     // Catch: java.lang.Exception -> L66
                java.lang.String r3 = r1.i     // Catch: java.lang.Exception -> L66
                r2.append(r3)     // Catch: java.lang.Exception -> L66
                com.tkay.expressad.videocommon.a$a r2 = r1.l     // Catch: java.lang.Exception -> L66
                if (r2 == 0) goto L5c
                com.tkay.expressad.videocommon.a$a r2 = r1.l     // Catch: java.lang.Exception -> L66
                r2.a(r0)     // Catch: java.lang.Exception -> L66
            L5c:
                com.tkay.expressad.reward.a.c$j r2 = r1.g     // Catch: java.lang.Exception -> L66
                if (r2 == 0) goto L65
                com.tkay.expressad.reward.a.c$j r2 = r1.g     // Catch: java.lang.Exception -> L66
                r2.a(r4)     // Catch: java.lang.Exception -> L66
            L65:
                return
            L66:
                r2 = move-exception
                boolean r3 = com.tkay.expressad.b.a
                if (r3 == 0) goto L6e
                r2.getLocalizedMessage()
            L6e:
                return
        }

        @Override
        public final void onReceivedSslError(android.webkit.WebView r4, android.webkit.SslErrorHandler r5, android.net.http.SslError r6) {
                r3 = this;
                super.onReceivedSslError(r4, r5, r6)
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: "
                r4.<init>(r5)
                java.lang.String r5 = ""
                if (r6 != 0) goto L10
                r0 = r5
                goto L18
            L10:
                int r0 = r6.getPrimaryError()
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            L18:
                r4.append(r0)
                com.tkay.expressad.videocommon.b.j r4 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r3.j
                r0.append(r1)
                java.lang.String r1 = "_"
                r0.append(r1)
                java.lang.String r2 = r3.f
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = r3.i
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                r2 = 0
                r4.c(r0, r2)
                android.os.Handler r4 = r3.a
                if (r4 == 0) goto L59
                java.lang.Runnable r0 = r3.r
                if (r0 == 0) goto L50
                java.lang.Runnable r0 = r3.s
                r4.removeCallbacks(r0)
            L50:
                java.lang.Runnable r4 = r3.r
                if (r4 == 0) goto L59
                android.os.Handler r0 = r3.a
                r0.removeCallbacks(r4)
            L59:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
                r4.<init>()     // Catch: java.lang.Exception -> L89
                java.lang.String r0 = r3.j     // Catch: java.lang.Exception -> L89
                r4.append(r0)     // Catch: java.lang.Exception -> L89
                r4.append(r1)     // Catch: java.lang.Exception -> L89
                java.lang.String r0 = r3.i     // Catch: java.lang.Exception -> L89
                r4.append(r0)     // Catch: java.lang.Exception -> L89
                com.tkay.expressad.videocommon.a$a r4 = r3.l     // Catch: java.lang.Exception -> L89
                if (r4 == 0) goto L74
                com.tkay.expressad.videocommon.a$a r4 = r3.l     // Catch: java.lang.Exception -> L89
                r4.a(r2)     // Catch: java.lang.Exception -> L89
            L74:
                com.tkay.expressad.reward.a.c$j r4 = r3.g     // Catch: java.lang.Exception -> L89
                if (r4 == 0) goto L88
                com.tkay.expressad.reward.a.c$j r4 = r3.g     // Catch: java.lang.Exception -> L89
                if (r6 != 0) goto L7d
                goto L85
            L7d:
                int r5 = r6.getPrimaryError()     // Catch: java.lang.Exception -> L89
                java.lang.String r5 = java.lang.Integer.toString(r5)     // Catch: java.lang.Exception -> L89
            L85:
                r4.a(r5)     // Catch: java.lang.Exception -> L89
            L88:
                return
            L89:
                r4 = move-exception
                boolean r5 = com.tkay.expressad.b.a
                if (r5 == 0) goto L91
                r4.getLocalizedMessage()
            L91:
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r4, int r5) {
                r3 = this;
                super.readyState(r4, r5)
                android.os.Handler r4 = r3.a
                if (r4 == 0) goto Le
                java.lang.Runnable r0 = r3.r
                if (r0 == 0) goto Le
                r4.removeCallbacks(r0)
            Le:
                android.os.Handler r4 = r3.a
                if (r4 == 0) goto L19
                java.lang.Runnable r0 = r3.s
                if (r0 == 0) goto L19
                r4.removeCallbacks(r0)
            L19:
                boolean r4 = r3.q
                if (r4 != 0) goto Lc5
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = r3.j
                r4.append(r0)
                java.lang.String r0 = "_"
                r4.append(r0)
                java.lang.String r1 = r3.i
                r4.append(r1)
                r4 = 1
                if (r5 != r4) goto Lb2
                java.lang.Runnable r5 = r3.b
                if (r5 == 0) goto L3f
                android.os.Handler r1 = r3.a
                if (r1 == 0) goto L3f
                r1.removeCallbacks(r5)
            L3f:
                com.tkay.expressad.videocommon.b.j r5 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r3.j
                r1.append(r2)
                r1.append(r0)
                java.lang.String r2 = r3.f
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r3.i
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r5.c(r0, r4)
                com.tkay.expressad.videocommon.a$a r5 = r3.l
                if (r5 == 0) goto L6b
                r5.a(r4)
            L6b:
                boolean r5 = r3.c
                if (r5 == 0) goto L8d
                boolean r5 = r3.e
                r0 = 287(0x11f, float:4.02E-43)
                if (r5 == 0) goto L81
                com.tkay.expressad.foundation.d.c r5 = r3.m
                java.lang.String r5 = r5.aa()
                com.tkay.expressad.videocommon.a$a r1 = r3.l
                com.tkay.expressad.videocommon.a.a(r0, r5, r1)
                goto Laa
            L81:
                com.tkay.expressad.foundation.d.c r5 = r3.m
                java.lang.String r5 = r5.aa()
                com.tkay.expressad.videocommon.a$a r1 = r3.l
                com.tkay.expressad.videocommon.a.b(r0, r5, r1)
                goto Laa
            L8d:
                boolean r5 = r3.e
                r0 = 94
                if (r5 == 0) goto L9f
                com.tkay.expressad.foundation.d.c r5 = r3.m
                java.lang.String r5 = r5.aa()
                com.tkay.expressad.videocommon.a$a r1 = r3.l
                com.tkay.expressad.videocommon.a.a(r0, r5, r1)
                goto Laa
            L9f:
                com.tkay.expressad.foundation.d.c r5 = r3.m
                java.lang.String r5 = r5.aa()
                com.tkay.expressad.videocommon.a$a r1 = r3.l
                com.tkay.expressad.videocommon.a.b(r0, r5, r1)
            Laa:
                com.tkay.expressad.reward.a.c$j r5 = r3.g
                if (r5 == 0) goto Lc3
                r5.a()
                goto Lc3
            Lb2:
                com.tkay.expressad.reward.a.c$j r0 = r3.g
                if (r0 == 0) goto Lc3
                java.lang.String r5 = java.lang.String.valueOf(r5)
                java.lang.String r1 = "state "
                java.lang.String r5 = r1.concat(r5)
                r0.a(r5)
            Lc3:
                r3.q = r4
            Lc5:
                return
        }
    }

    private static class l extends com.tkay.expressad.atsignalcommon.a.b {
        private java.lang.String a;
        private final boolean b;
        private final com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView c;
        private final java.lang.String e;
        private final java.lang.String f;
        private final com.tkay.expressad.videocommon.a.a g;
        private final com.tkay.expressad.foundation.d.c h;
        private boolean i;
        private java.lang.String j;
        private boolean k;
        private boolean l;

        public l(java.lang.String r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3, java.lang.String r4, java.lang.String r5, com.tkay.expressad.videocommon.a.a r6, com.tkay.expressad.foundation.d.c r7, boolean r8, java.lang.String r9) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.b = r0
                r1.c = r3
                r1.e = r4
                r1.f = r5
                r1.g = r6
                r1.h = r7
                r1.a = r2
                r1.i = r8
                r1.j = r9
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r5, java.lang.String r6) {
                r4 = this;
                boolean r0 = r4.k
                if (r0 != 0) goto Lf7
                java.lang.String r0 = "wfr=1"
                boolean r6 = r6.contains(r0)
                r0 = 1
                if (r6 != 0) goto Lef
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r4.c
                if (r6 == 0) goto L53
                org.json.JSONObject r6 = new org.json.JSONObject
                r6.<init>()
                java.lang.String r1 = "id"
                java.lang.String r2 = r4.a     // Catch: java.lang.Exception -> L4b
                r6.put(r1, r2)     // Catch: java.lang.Exception -> L4b
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
                r1.<init>()     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = "result"
                r1.put(r2, r0)     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = "error"
                java.lang.String r3 = ""
                r1.put(r2, r3)     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = "data"
                r6.put(r2, r1)     // Catch: java.lang.Exception -> L4b
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L4b
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r4.c     // Catch: java.lang.Exception -> L4b
                java.lang.String r2 = "componentReact"
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L4b
                byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L4b
                r3 = 2
                java.lang.String r6 = android.util.Base64.encodeToString(r6, r3)     // Catch: java.lang.Exception -> L4b
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r6)     // Catch: java.lang.Exception -> L4b
                goto L53
            L4b:
                r6 = move-exception
                boolean r1 = com.tkay.expressad.b.a
                if (r1 == 0) goto L53
                r6.getLocalizedMessage()
            L53:
                com.tkay.expressad.videocommon.b.j r6 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r4.f
                r1.append(r2)
                java.lang.String r2 = "_"
                r1.append(r2)
                java.lang.String r3 = r4.j
                r1.append(r3)
                r1.append(r2)
                java.lang.String r3 = r4.e
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                r6.c(r1, r0)
                com.tkay.expressad.videocommon.a$a r6 = r4.g
                if (r6 == 0) goto L81
                r6.a(r0)
            L81:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r1 = r4.f
                r6.append(r1)
                r6.append(r2)
                com.tkay.expressad.foundation.d.c r1 = r4.h
                java.lang.String r1 = r1.aZ()
                r6.append(r1)
                r6.append(r2)
                com.tkay.expressad.foundation.d.c r1 = r4.h
                java.lang.String r1 = r1.Z()
                r6.append(r1)
                r6.append(r2)
                java.lang.String r1 = r4.e
                r6.append(r1)
                java.lang.String r6 = r6.toString()
                boolean r1 = r4.b
                r2 = 0
                if (r1 == 0) goto Ld2
                com.tkay.expressad.foundation.d.c r1 = r4.h
                boolean r1 = r1.A()
                if (r1 == 0) goto Lca
                r6 = 287(0x11f, float:4.02E-43)
                com.tkay.expressad.foundation.d.c r1 = r4.h
                java.lang.String r1 = r1.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.g
                com.tkay.expressad.videocommon.a.a(r6, r1, r2)
                goto Lef
            Lca:
                com.tkay.expressad.videocommon.a$a r1 = r4.g
                boolean r3 = r4.i
                com.tkay.expressad.videocommon.a.a(r6, r1, r2, r3)
                goto Lef
            Ld2:
                com.tkay.expressad.foundation.d.c r1 = r4.h
                boolean r1 = r1.A()
                if (r1 == 0) goto Le8
                r6 = 94
                com.tkay.expressad.foundation.d.c r1 = r4.h
                java.lang.String r1 = r1.aa()
                com.tkay.expressad.videocommon.a$a r2 = r4.g
                com.tkay.expressad.videocommon.a.a(r6, r1, r2)
                goto Lef
            Le8:
                com.tkay.expressad.videocommon.a$a r1 = r4.g
                boolean r3 = r4.i
                com.tkay.expressad.videocommon.a.a(r6, r1, r2, r3)
            Lef:
                com.tkay.expressad.atsignalcommon.windvane.j.a()
                com.tkay.expressad.atsignalcommon.windvane.j.b(r5)
                r4.k = r0
            Lf7:
                return
        }

        @Override
        public final void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = r1.f
                r3.append(r5)
                java.lang.String r5 = "_"
                r3.append(r5)
                java.lang.String r0 = r1.j
                r3.append(r0)
                r3.append(r5)
                java.lang.String r5 = r1.e
                r3.append(r5)
                java.lang.String r3 = r3.toString()
                r5 = 0
                r2.c(r3, r5)
                com.tkay.expressad.videocommon.a$a r2 = r1.g
                if (r2 == 0) goto L2f
                r2.a(r5)
            L2f:
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r1.c
                if (r2 == 0) goto L73
                org.json.JSONObject r2 = new org.json.JSONObject
                r2.<init>()
                java.lang.String r3 = "id"
                java.lang.String r5 = r1.a     // Catch: java.lang.Exception -> L6b
                r2.put(r3, r5)     // Catch: java.lang.Exception -> L6b
                org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6b
                r3.<init>()     // Catch: java.lang.Exception -> L6b
                java.lang.String r5 = "result"
                r0 = 2
                r3.put(r5, r0)     // Catch: java.lang.Exception -> L6b
                java.lang.String r5 = "error"
                r3.put(r5, r4)     // Catch: java.lang.Exception -> L6b
                java.lang.String r4 = "data"
                r2.put(r4, r3)     // Catch: java.lang.Exception -> L6b
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L6b
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r1.c     // Catch: java.lang.Exception -> L6b
                java.lang.String r4 = "onSubPlayTemplateViewLoad"
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L6b
                byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L6b
                java.lang.String r2 = android.util.Base64.encodeToString(r2, r0)     // Catch: java.lang.Exception -> L6b
                com.tkay.expressad.atsignalcommon.windvane.j.a(r3, r4, r2)     // Catch: java.lang.Exception -> L6b
                return
            L6b:
                r2 = move-exception
                boolean r3 = com.tkay.expressad.b.a
                if (r3 == 0) goto L73
                r2.getLocalizedMessage()
            L73:
                return
        }

        @Override
        public final void readyState(android.webkit.WebView r6, int r7) {
                r5 = this;
                boolean r6 = r5.l
                if (r6 != 0) goto L10c
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r6 = r5.c
                if (r6 == 0) goto L4a
                org.json.JSONObject r6 = new org.json.JSONObject
                r6.<init>()
                java.lang.String r0 = "id"
                java.lang.String r1 = r5.a     // Catch: java.lang.Exception -> L42
                r6.put(r0, r1)     // Catch: java.lang.Exception -> L42
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L42
                r0.<init>()     // Catch: java.lang.Exception -> L42
                java.lang.String r1 = "result"
                r0.put(r1, r7)     // Catch: java.lang.Exception -> L42
                java.lang.String r1 = "error"
                java.lang.String r2 = ""
                r0.put(r1, r2)     // Catch: java.lang.Exception -> L42
                java.lang.String r1 = "data"
                r6.put(r1, r0)     // Catch: java.lang.Exception -> L42
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L42
                com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r5.c     // Catch: java.lang.Exception -> L42
                java.lang.String r1 = "onSubPlayTemplateViewLoad"
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L42
                byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L42
                r2 = 2
                java.lang.String r6 = android.util.Base64.encodeToString(r6, r2)     // Catch: java.lang.Exception -> L42
                com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r6)     // Catch: java.lang.Exception -> L42
                goto L4a
            L42:
                r6 = move-exception
                boolean r0 = com.tkay.expressad.b.a
                if (r0 == 0) goto L4a
                r6.getLocalizedMessage()
            L4a:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r0 = r5.f
                r6.append(r0)
                java.lang.String r0 = "_"
                r6.append(r0)
                com.tkay.expressad.foundation.d.c r1 = r5.h
                java.lang.String r1 = r1.aZ()
                r6.append(r1)
                r6.append(r0)
                com.tkay.expressad.foundation.d.c r1 = r5.h
                java.lang.String r1 = r1.Z()
                r6.append(r1)
                r6.append(r0)
                java.lang.String r1 = r5.e
                r6.append(r1)
                java.lang.String r6 = r6.toString()
                r1 = 1
                r2 = 0
                if (r7 != r1) goto Lde
                com.tkay.expressad.videocommon.b.j r7 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = r5.f
                r3.append(r4)
                r3.append(r0)
                java.lang.String r4 = r5.j
                r3.append(r4)
                r3.append(r0)
                java.lang.String r0 = r5.e
                r3.append(r0)
                java.lang.String r0 = r3.toString()
                r7.c(r0, r1)
                com.tkay.expressad.videocommon.a$a r7 = r5.g
                if (r7 == 0) goto Laa
                r7.a(r1)
            Laa:
                boolean r7 = r5.b
                if (r7 == 0) goto Lc6
                com.tkay.expressad.foundation.d.c r7 = r5.h
                boolean r7 = r7.A()
                if (r7 == 0) goto Lbe
                com.tkay.expressad.videocommon.a$a r7 = r5.g
                boolean r0 = r5.i
                com.tkay.expressad.videocommon.a.a(r6, r7, r2, r0)
                goto L10a
            Lbe:
                com.tkay.expressad.videocommon.a$a r7 = r5.g
                boolean r0 = r5.i
                com.tkay.expressad.videocommon.a.a(r6, r7, r2, r0)
                goto L10a
            Lc6:
                com.tkay.expressad.foundation.d.c r7 = r5.h
                boolean r7 = r7.A()
                if (r7 == 0) goto Ld6
                com.tkay.expressad.videocommon.a$a r7 = r5.g
                boolean r0 = r5.i
                com.tkay.expressad.videocommon.a.a(r6, r7, r2, r0)
                goto L10a
            Ld6:
                com.tkay.expressad.videocommon.a$a r7 = r5.g
                boolean r0 = r5.i
                com.tkay.expressad.videocommon.a.a(r6, r7, r2, r0)
                goto L10a
            Lde:
                com.tkay.expressad.videocommon.b.j r6 = com.tkay.expressad.videocommon.b.j.a()
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r3 = r5.f
                r7.append(r3)
                r7.append(r0)
                java.lang.String r3 = r5.j
                r7.append(r3)
                r7.append(r0)
                java.lang.String r0 = r5.e
                r7.append(r0)
                java.lang.String r7 = r7.toString()
                r6.c(r7, r2)
                com.tkay.expressad.videocommon.a$a r6 = r5.g
                if (r6 == 0) goto L10a
                r6.a(r2)
            L10a:
                r5.l = r1
            L10c:
                return
        }
    }

    private static final class m {
        private static final com.tkay.expressad.reward.a.c a = null;

        static {
                com.tkay.expressad.reward.a.c r0 = new com.tkay.expressad.reward.a.c
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.reward.a.c.m.a = r0
                return
        }

        private m() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.reward.a.c a() {
                com.tkay.expressad.reward.a.c r0 = com.tkay.expressad.reward.a.c.m.a
                return r0
        }
    }

    private c() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 6
            r0.<init>(r1)
            r2.t = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "mb-reward-load-thread"
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.tkay.expressad.reward.a.c.d = r1
            r0.start()
            com.tkay.expressad.reward.a.c$h r1 = new com.tkay.expressad.reward.a.c$h
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r0)
            r2.b = r1
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.c = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.expressad.reward.a.c.h a(com.tkay.expressad.reward.a.c r0) {
            com.tkay.expressad.reward.a.c$h r0 = r0.b
            return r0
    }

    public static com.tkay.expressad.reward.a.c a() {
            com.tkay.expressad.reward.a.c r0 = com.tkay.expressad.reward.a.c.m.a()
            return r0
    }

    static java.lang.String a(int r0) {
            java.lang.String r0 = b(r0)
            return r0
    }

    private void a(android.content.Context r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, com.tkay.expressad.foundation.d.c r19, java.lang.String r20, com.tkay.expressad.reward.a.c.i r21, java.util.List<com.tkay.expressad.foundation.d.c> r22) {
            r14 = this;
            r1 = r14
            r0 = r20
            boolean r2 = android.text.TextUtils.isEmpty(r20)
            if (r2 != 0) goto L8b
            boolean r2 = r19.H()
            if (r2 != 0) goto L8b
            java.lang.String r2 = ".zip"
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L56
            java.lang.String r2 = "md5filename"
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L56
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r2.c(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.tkay.expressad.reward.a.c$g r13 = new com.tkay.expressad.reward.a.c$g     // Catch: java.lang.Exception -> L4d
            r9 = 497(0x1f1, float:6.96E-43)
            com.tkay.expressad.reward.a.c$h r10 = r1.b     // Catch: java.lang.Exception -> L4d
            r3 = r13
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r11 = r21
            r12 = r22
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L4d
            r13.a(r2)     // Catch: java.lang.Exception -> L4d
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L4d
            r2.b(r0, r13)     // Catch: java.lang.Exception -> L4d
            return
        L4d:
            r0 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L55
            r0.getLocalizedMessage()
        L55:
            return
        L56:
            com.tkay.expressad.videocommon.b.h r2 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r2 = r2.b(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.tkay.expressad.reward.a.c$d r12 = new com.tkay.expressad.reward.a.c$d     // Catch: java.lang.Exception -> L83
            r4 = 497(0x1f1, float:6.96E-43)
            com.tkay.expressad.reward.a.c$h r10 = r1.b     // Catch: java.lang.Exception -> L83
            r3 = r12
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r21
            r11 = r22
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L83
            r12.a(r2)     // Catch: java.lang.Exception -> L83
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L83
            r2.b(r0, r12)     // Catch: java.lang.Exception -> L83
            return
        L83:
            r0 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L8b
            r0.getLocalizedMessage()
        L8b:
            return
    }

    static void a(com.tkay.expressad.reward.a.c r14, android.content.Context r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, com.tkay.expressad.foundation.d.c r19, java.lang.String r20, com.tkay.expressad.reward.a.c.i r21, java.util.List r22) {
            r0 = r14
            r1 = r20
            boolean r2 = android.text.TextUtils.isEmpty(r20)
            if (r2 != 0) goto L8b
            boolean r2 = r19.H()
            if (r2 != 0) goto L8b
            java.lang.String r2 = ".zip"
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L56
            java.lang.String r2 = "md5filename"
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L56
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r2.c(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.tkay.expressad.reward.a.c$g r13 = new com.tkay.expressad.reward.a.c$g     // Catch: java.lang.Exception -> L4d
            r9 = 497(0x1f1, float:6.96E-43)
            com.tkay.expressad.reward.a.c$h r10 = r0.b     // Catch: java.lang.Exception -> L4d
            r3 = r13
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r11 = r21
            r12 = r22
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> L4d
            r13.a(r2)     // Catch: java.lang.Exception -> L4d
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L4d
            r0.b(r1, r13)     // Catch: java.lang.Exception -> L4d
            return
        L4d:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L55
            r0.getLocalizedMessage()
        L55:
            return
        L56:
            com.tkay.expressad.videocommon.b.h r2 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r2 = r2.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            com.tkay.expressad.reward.a.c$d r12 = new com.tkay.expressad.reward.a.c$d     // Catch: java.lang.Exception -> L83
            r4 = 497(0x1f1, float:6.96E-43)
            com.tkay.expressad.reward.a.c$h r10 = r0.b     // Catch: java.lang.Exception -> L83
            r3 = r12
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r21
            r11 = r22
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L83
            r12.a(r2)     // Catch: java.lang.Exception -> L83
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L83
            r0.b(r1, r12)     // Catch: java.lang.Exception -> L83
            return
        L83:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L8b
            r0.getLocalizedMessage()
        L8b:
            return
    }

    private static void a(com.tkay.expressad.reward.a.c r12, boolean r13, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r14, com.tkay.expressad.foundation.d.c r15, java.util.List r16, com.tkay.expressad.videocommon.e.d r17, java.lang.String r18, java.lang.String r19, int r20) {
            r0 = r14
            r9 = r19
            if (r0 == 0) goto Ld8
            java.lang.String r1 = "onSubPlayTemplateViewLoad"
            java.lang.String r2 = "data"
            java.lang.String r3 = "data is null"
            java.lang.String r4 = "error"
            java.lang.String r5 = "result"
            java.lang.String r6 = "id"
            r7 = 2
            if (r15 == 0) goto La7
            if (r17 == 0) goto La7
            com.tkay.expressad.foundation.d.c$c r8 = r15.M()
            if (r8 == 0) goto La7
            boolean r8 = android.text.TextUtils.isEmpty(r18)
            if (r8 == 0) goto L24
            goto La7
        L24:
            com.tkay.expressad.foundation.d.c$c r8 = r15.M()
            java.lang.String r8 = r8.e()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L65
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
            r8.put(r6, r9)     // Catch: java.lang.Exception -> L5c
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5c
            r6.<init>()     // Catch: java.lang.Exception -> L5c
            r9 = 1
            r6.put(r5, r9)     // Catch: java.lang.Exception -> L5c
            r6.put(r4, r3)     // Catch: java.lang.Exception -> L5c
            r8.put(r2, r6)     // Catch: java.lang.Exception -> L5c
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Exception -> L5c
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r7)     // Catch: java.lang.Exception -> L5c
            com.tkay.expressad.atsignalcommon.windvane.j.a(r14, r1, r2)     // Catch: java.lang.Exception -> L5c
            return
        L5c:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L64
            r0.getLocalizedMessage()
        L64:
            return
        L65:
            com.tkay.expressad.foundation.d.c$c r1 = r15.M()
            java.lang.String r1 = r1.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L83
            com.tkay.expressad.foundation.d.c$c r1 = r15.M()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = "cmpt=1"
            boolean r1 = r1.contains(r2)
            if (r1 != 0) goto Ld8
        L83:
            android.os.Handler r10 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r10.<init>(r1)
            com.tkay.expressad.reward.a.c$3 r11 = new com.tkay.expressad.reward.a.c$3
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r18
            r8 = r17
            r9 = r19
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r0 = r20
            int r0 = r0 * 1000
            long r0 = (long) r0
            r10.postDelayed(r11, r0)
            goto Ld8
        La7:
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
            r8.put(r6, r9)     // Catch: java.lang.Exception -> Ld0
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld0
            r6.<init>()     // Catch: java.lang.Exception -> Ld0
            r6.put(r5, r7)     // Catch: java.lang.Exception -> Ld0
            r6.put(r4, r3)     // Catch: java.lang.Exception -> Ld0
            r8.put(r2, r6)     // Catch: java.lang.Exception -> Ld0
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Exception -> Ld0
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r7)     // Catch: java.lang.Exception -> Ld0
            com.tkay.expressad.atsignalcommon.windvane.j.a(r14, r1, r2)     // Catch: java.lang.Exception -> Ld0
            return
        Ld0:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto Ld8
            r0.getLocalizedMessage()
        Ld8:
            return
    }

    private void a(boolean r13, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r14, com.tkay.expressad.foundation.d.c r15, java.util.List<com.tkay.expressad.foundation.d.c> r16, com.tkay.expressad.videocommon.e.d r17, java.lang.String r18, java.lang.String r19, int r20) {
            r12 = this;
            r0 = r14
            r9 = r19
            if (r0 == 0) goto Ld9
            java.lang.String r1 = "onSubPlayTemplateViewLoad"
            java.lang.String r2 = "data"
            java.lang.String r3 = "data is null"
            java.lang.String r4 = "error"
            java.lang.String r5 = "result"
            java.lang.String r6 = "id"
            r7 = 2
            if (r15 == 0) goto La8
            if (r17 == 0) goto La8
            com.tkay.expressad.foundation.d.c$c r8 = r15.M()
            if (r8 == 0) goto La8
            boolean r8 = android.text.TextUtils.isEmpty(r18)
            if (r8 == 0) goto L24
            goto La8
        L24:
            com.tkay.expressad.foundation.d.c$c r8 = r15.M()
            java.lang.String r8 = r8.e()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto L65
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
            r8.put(r6, r9)     // Catch: java.lang.Exception -> L5c
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5c
            r6.<init>()     // Catch: java.lang.Exception -> L5c
            r9 = 1
            r6.put(r5, r9)     // Catch: java.lang.Exception -> L5c
            r6.put(r4, r3)     // Catch: java.lang.Exception -> L5c
            r8.put(r2, r6)     // Catch: java.lang.Exception -> L5c
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Exception -> L5c
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r7)     // Catch: java.lang.Exception -> L5c
            com.tkay.expressad.atsignalcommon.windvane.j.a(r14, r1, r2)     // Catch: java.lang.Exception -> L5c
            return
        L5c:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L64
            r0.getLocalizedMessage()
        L64:
            return
        L65:
            com.tkay.expressad.foundation.d.c$c r1 = r15.M()
            java.lang.String r1 = r1.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L84
            com.tkay.expressad.foundation.d.c$c r1 = r15.M()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = "cmpt=1"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L84
            return
        L84:
            android.os.Handler r10 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r10.<init>(r1)
            com.tkay.expressad.reward.a.c$3 r11 = new com.tkay.expressad.reward.a.c$3
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r18
            r8 = r17
            r9 = r19
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r0 = r20
            int r0 = r0 * 1000
            long r0 = (long) r0
            r10.postDelayed(r11, r0)
            goto Ld9
        La8:
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
            r8.put(r6, r9)     // Catch: java.lang.Exception -> Ld1
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld1
            r6.<init>()     // Catch: java.lang.Exception -> Ld1
            r6.put(r5, r7)     // Catch: java.lang.Exception -> Ld1
            r6.put(r4, r3)     // Catch: java.lang.Exception -> Ld1
            r8.put(r2, r6)     // Catch: java.lang.Exception -> Ld1
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r2 = r8.toString()     // Catch: java.lang.Exception -> Ld1
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> Ld1
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r7)     // Catch: java.lang.Exception -> Ld1
            com.tkay.expressad.atsignalcommon.windvane.j.a(r14, r1, r2)     // Catch: java.lang.Exception -> Ld1
            return
        Ld1:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto Ld9
            r0.getLocalizedMessage()
        Ld9:
            return
    }

    private static void a(boolean r14, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r15, java.lang.String r16, int r17, com.tkay.expressad.foundation.d.c r18, java.util.List<com.tkay.expressad.foundation.d.c> r19, java.lang.String r20, java.lang.String r21, com.tkay.expressad.videocommon.e.d r22, java.lang.String r23, boolean r24) {
            r0 = r18
            r1 = r19
            r5 = r21
            com.tkay.expressad.videocommon.a$a r6 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Exception -> Ld5
            r6.<init>()     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.reward.a.c r2 = com.tkay.expressad.reward.a.c.m.a()     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r2.d()     // Catch: java.lang.Exception -> Ld5
            if (r2 != 0) goto L22
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> Ld5
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r3 = r3.f()     // Catch: java.lang.Exception -> Ld5
            r2.<init>(r3)     // Catch: java.lang.Exception -> Ld5
        L22:
            r10 = r2
            r6.a(r10)     // Catch: java.lang.Exception -> Ld5
            r2 = 0
            if (r1 == 0) goto L93
            int r3 = r19.size()     // Catch: java.lang.Exception -> Ld5
            if (r3 <= 0) goto L93
            com.tkay.expressad.videocommon.b.c r3 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> Ld5
            java.util.List r3 = r3.a(r5)     // Catch: java.lang.Exception -> Ld5
            r4 = 0
            if (r3 == 0) goto L83
            int r7 = r3.size()     // Catch: java.lang.Exception -> Ld5
            if (r7 <= 0) goto L83
            r7 = r4
        L41:
            int r8 = r19.size()     // Catch: java.lang.Exception -> Ld5
            if (r7 >= r8) goto L83
            java.lang.Object r8 = r1.get(r7)     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8     // Catch: java.lang.Exception -> Ld5
            java.util.Iterator r9 = r3.iterator()     // Catch: java.lang.Exception -> Ld5
        L51:
            boolean r11 = r9.hasNext()     // Catch: java.lang.Exception -> Ld5
            if (r11 == 0) goto L80
            java.lang.Object r11 = r9.next()     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.foundation.d.c r11 = (com.tkay.expressad.foundation.d.c) r11     // Catch: java.lang.Exception -> Ld5
            java.lang.String r12 = r11.aZ()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r13 = r8.aZ()     // Catch: java.lang.Exception -> Ld5
            boolean r12 = r12.equals(r13)     // Catch: java.lang.Exception -> Ld5
            if (r12 == 0) goto L51
            java.lang.String r11 = r11.Z()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r12 = r8.Z()     // Catch: java.lang.Exception -> Ld5
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Exception -> Ld5
            if (r11 == 0) goto L51
            r8.au()     // Catch: java.lang.Exception -> Ld5
            r1.set(r7, r8)     // Catch: java.lang.Exception -> Ld5
            goto L51
        L80:
            int r7 = r7 + 1
            goto L41
        L83:
            com.tkay.expressad.video.signal.a.j r3 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> Ld5
            r3.<init>(r2, r0, r1)     // Catch: java.lang.Exception -> Ld5
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = r1.Z()     // Catch: java.lang.Exception -> Ld5
            goto L9c
        L93:
            com.tkay.expressad.video.signal.a.j r3 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> Ld5
            r3.<init>(r2, r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = r18.Z()     // Catch: java.lang.Exception -> Ld5
        L9c:
            r11 = r1
            r12 = r3
            r1 = r17
            r12.a(r1)     // Catch: java.lang.Exception -> Ld5
            r12.a(r5)     // Catch: java.lang.Exception -> Ld5
            r2 = r23
            r12.c(r2)     // Catch: java.lang.Exception -> Ld5
            r1 = r22
            r12.a(r1)     // Catch: java.lang.Exception -> Ld5
            r1 = r14
            r12.b(r14)     // Catch: java.lang.Exception -> Ld5
            com.tkay.expressad.reward.a.c$l r13 = new com.tkay.expressad.reward.a.c$l     // Catch: java.lang.Exception -> Ld5
            r1 = r13
            r2 = r23
            r3 = r15
            r4 = r16
            r5 = r21
            r7 = r18
            r8 = r24
            r9 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Ld5
            r10.setWebViewListener(r13)     // Catch: java.lang.Exception -> Ld5
            r10.setObject(r12)     // Catch: java.lang.Exception -> Ld5
            r0 = r20
            r10.loadUrl(r0)     // Catch: java.lang.Exception -> Ld5
            r10.setRid(r11)     // Catch: java.lang.Exception -> Ld5
            return
        Ld5:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto Ldd
            r0.getLocalizedMessage()
        Ldd:
            return
    }

    static void a(boolean r14, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r15, java.lang.String r16, com.tkay.expressad.foundation.d.c r17, java.util.List r18, java.lang.String r19, java.lang.String r20, com.tkay.expressad.videocommon.e.d r21, java.lang.String r22, boolean r23) {
            r0 = r17
            r1 = r18
            r5 = r20
            com.tkay.expressad.videocommon.a$a r6 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Exception -> Ld3
            r6.<init>()     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.reward.a.c r2 = com.tkay.expressad.reward.a.c.m.a()     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r2.d()     // Catch: java.lang.Exception -> Ld3
            if (r2 != 0) goto L22
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> Ld3
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Ld3
            android.content.Context r3 = r3.f()     // Catch: java.lang.Exception -> Ld3
            r2.<init>(r3)     // Catch: java.lang.Exception -> Ld3
        L22:
            r10 = r2
            r6.a(r10)     // Catch: java.lang.Exception -> Ld3
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L93
            int r4 = r18.size()     // Catch: java.lang.Exception -> Ld3
            if (r4 <= 0) goto L93
            com.tkay.expressad.videocommon.b.c r4 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> Ld3
            java.util.List r4 = r4.a(r5)     // Catch: java.lang.Exception -> Ld3
            if (r4 == 0) goto L83
            int r7 = r4.size()     // Catch: java.lang.Exception -> Ld3
            if (r7 <= 0) goto L83
            r7 = r3
        L41:
            int r8 = r18.size()     // Catch: java.lang.Exception -> Ld3
            if (r7 >= r8) goto L83
            java.lang.Object r8 = r1.get(r7)     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8     // Catch: java.lang.Exception -> Ld3
            java.util.Iterator r9 = r4.iterator()     // Catch: java.lang.Exception -> Ld3
        L51:
            boolean r11 = r9.hasNext()     // Catch: java.lang.Exception -> Ld3
            if (r11 == 0) goto L80
            java.lang.Object r11 = r9.next()     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.foundation.d.c r11 = (com.tkay.expressad.foundation.d.c) r11     // Catch: java.lang.Exception -> Ld3
            java.lang.String r12 = r11.aZ()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r13 = r8.aZ()     // Catch: java.lang.Exception -> Ld3
            boolean r12 = r12.equals(r13)     // Catch: java.lang.Exception -> Ld3
            if (r12 == 0) goto L51
            java.lang.String r11 = r11.Z()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r12 = r8.Z()     // Catch: java.lang.Exception -> Ld3
            boolean r11 = r11.equals(r12)     // Catch: java.lang.Exception -> Ld3
            if (r11 == 0) goto L51
            r8.au()     // Catch: java.lang.Exception -> Ld3
            r1.set(r7, r8)     // Catch: java.lang.Exception -> Ld3
            goto L51
        L80:
            int r7 = r7 + 1
            goto L41
        L83:
            com.tkay.expressad.video.signal.a.j r4 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> Ld3
            r4.<init>(r2, r0, r1)     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1     // Catch: java.lang.Exception -> Ld3
            java.lang.String r1 = r1.Z()     // Catch: java.lang.Exception -> Ld3
            goto L9c
        L93:
            com.tkay.expressad.video.signal.a.j r4 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> Ld3
            r4.<init>(r2, r0)     // Catch: java.lang.Exception -> Ld3
            java.lang.String r1 = r17.Z()     // Catch: java.lang.Exception -> Ld3
        L9c:
            r11 = r1
            r12 = r4
            r12.a(r3)     // Catch: java.lang.Exception -> Ld3
            r12.a(r5)     // Catch: java.lang.Exception -> Ld3
            r2 = r22
            r12.c(r2)     // Catch: java.lang.Exception -> Ld3
            r1 = r21
            r12.a(r1)     // Catch: java.lang.Exception -> Ld3
            r1 = r14
            r12.b(r14)     // Catch: java.lang.Exception -> Ld3
            com.tkay.expressad.reward.a.c$l r13 = new com.tkay.expressad.reward.a.c$l     // Catch: java.lang.Exception -> Ld3
            r1 = r13
            r2 = r22
            r3 = r15
            r4 = r16
            r5 = r20
            r7 = r17
            r8 = r23
            r9 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Ld3
            r10.setWebViewListener(r13)     // Catch: java.lang.Exception -> Ld3
            r10.setObject(r12)     // Catch: java.lang.Exception -> Ld3
            r0 = r19
            r10.loadUrl(r0)     // Catch: java.lang.Exception -> Ld3
            r10.setRid(r11)     // Catch: java.lang.Exception -> Ld3
            return
        Ld3:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto Ldb
            r0.getLocalizedMessage()
        Ldb:
            return
    }

    private static synchronized java.lang.String b(int r2) {
            java.lang.Class<com.tkay.expressad.reward.a.c> r0 = com.tkay.expressad.reward.a.c.class
            monitor-enter(r0)
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 == r1) goto L23
            r1 = 201(0xc9, float:2.82E-43)
            if (r2 == r1) goto L1f
            r1 = 203(0xcb, float:2.84E-43)
            if (r2 == r1) goto L1b
            r1 = 205(0xcd, float:2.87E-43)
            if (r2 == r1) goto L17
            java.lang.String r2 = "unknown"
            monitor-exit(r0)
            return r2
        L17:
            java.lang.String r2 = "tpl"
            monitor-exit(r0)
            return r2
        L1b:
            java.lang.String r2 = "temp"
            monitor-exit(r0)
            return r2
        L1f:
            java.lang.String r2 = "zip/html"
            monitor-exit(r0)
            return r2
        L23:
            java.lang.String r2 = "video"
            monitor-exit(r0)
            return r2
        L27:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static java.util.Map b() {
            java.util.Map<java.lang.String, com.tkay.expressad.reward.a.c$a> r0 = com.tkay.expressad.reward.a.c.d
            return r0
    }

    static boolean b(com.tkay.expressad.reward.a.c r0) {
            boolean r0 = r0.e
            return r0
    }

    private static java.lang.String c(int r3) {
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "code"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L20
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L20
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L20
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L20
            r1 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r1)     // Catch: java.lang.Throwable -> L20
            r0 = r3
        L20:
            return r0
    }

    private synchronized void c() {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    private synchronized com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView d() {
            r1 = this;
            monitor-enter(r1)
            monitor-exit(r1)
            r0 = 0
            return r0
    }

    public final synchronized void a(android.content.Context r8, com.tkay.expressad.foundation.d.c r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, com.tkay.expressad.reward.a.c.i r13) {
            r7 = this;
            monitor-enter(r7)
            com.tkay.expressad.reward.a.c$h r0 = r7.b     // Catch: java.lang.Throwable -> L76
            r0.a(r8)     // Catch: java.lang.Throwable -> L76
            if (r9 == 0) goto L48
            java.lang.String r8 = r9.ar()     // Catch: java.lang.Throwable -> L76
            boolean r0 = r9.j()     // Catch: java.lang.Throwable -> L76
            if (r0 == 0) goto L48
            com.tkay.expressad.videocommon.b.j r9 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Throwable -> L76
            r0 = 1
            r9.b(r8, r0)     // Catch: java.lang.Throwable -> L76
            android.os.Message r9 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L76
            r0 = 105(0x69, float:1.47E-43)
            r9.what = r0     // Catch: java.lang.Throwable -> L76
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L76
            r0.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = "unit_id"
            r0.putString(r1, r11)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = com.tkay.expressad.b.y     // Catch: java.lang.Throwable -> L76
            r0.putString(r1, r10)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = "request_id"
            r0.putString(r1, r12)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = "url"
            r0.putString(r1, r8)     // Catch: java.lang.Throwable -> L76
            r9.setData(r0)     // Catch: java.lang.Throwable -> L76
            com.tkay.expressad.reward.a.c$h r8 = r7.b     // Catch: java.lang.Throwable -> L76
            r8.sendMessage(r9)     // Catch: java.lang.Throwable -> L76
            r13.a(r10, r11, r12)     // Catch: java.lang.Throwable -> L76
            monitor-exit(r7)
            return
        L48:
            if (r9 == 0) goto L74
            java.lang.String r8 = r9.ar()     // Catch: java.lang.Throwable -> L76
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L76
            if (r8 != 0) goto L74
            com.tkay.expressad.videocommon.b.g r8 = com.tkay.expressad.videocommon.b.g.a()     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L76
            java.lang.String r9 = r9.ar()     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L76
            com.tkay.expressad.reward.a.c$2 r6 = new com.tkay.expressad.reward.a.c$2     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L76
            r0 = r6
            r1 = r7
            r2 = r11
            r3 = r10
            r4 = r12
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L76
            r8.b(r9, r6)     // Catch: java.lang.Exception -> L6c java.lang.Throwable -> L76
            monitor-exit(r7)
            return
        L6c:
            r8 = move-exception
            boolean r9 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L76
            if (r9 == 0) goto L74
            r8.getLocalizedMessage()     // Catch: java.lang.Throwable -> L76
        L74:
            monitor-exit(r7)
            return
        L76:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final synchronized void a(android.content.Context r16, boolean r17, int r18, boolean r19, int r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r24, com.tkay.expressad.reward.a.c.c r25, com.tkay.expressad.reward.a.c.i r26) {
            r15 = this;
            r10 = r15
            r0 = r22
            r11 = r23
            monitor-enter(r15)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
            r1.<init>()     // Catch: java.lang.Throwable -> L68
            r1.append(r0)     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L68
            r1.append(r11)     // Catch: java.lang.Throwable -> L68
            java.lang.String r12 = r1.toString()     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, com.tkay.expressad.reward.a.c$a> r13 = com.tkay.expressad.reward.a.c.d     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$a r14 = new com.tkay.expressad.reward.a.c$a     // Catch: java.lang.Throwable -> L68
            int r5 = r24.size()     // Catch: java.lang.Throwable -> L68
            r1 = r14
            r2 = r17
            r3 = r19
            r4 = r18
            r6 = r22
            r7 = r23
            r8 = r20
            r9 = r24
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L68
            r13.put(r12, r14)     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$h r1 = r10.b     // Catch: java.lang.Throwable -> L68
            r2 = r25
            r1.a(r0, r11, r2)     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$h r1 = r10.b     // Catch: java.lang.Throwable -> L68
            r4 = r16
            r1.a(r4)     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$h r1 = r10.b     // Catch: java.lang.Throwable -> L68
            r3 = r24
            r1.a(r12, r3)     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$h r12 = r10.b     // Catch: java.lang.Throwable -> L68
            com.tkay.expressad.reward.a.c$1 r13 = new com.tkay.expressad.reward.a.c$1     // Catch: java.lang.Throwable -> L68
            r1 = r13
            r2 = r15
            r3 = r24
            r4 = r16
            r5 = r22
            r6 = r20
            r7 = r21
            r8 = r23
            r9 = r26
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L68
            r12.post(r13)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r15)
            return
        L68:
            r0 = move-exception
            monitor-exit(r15)
            throw r0
    }

    public final synchronized void a(boolean r21, android.os.Handler r22, boolean r23, boolean r24, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r25, java.lang.String r26, int r27, com.tkay.expressad.foundation.d.c r28, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, java.lang.String r33, com.tkay.expressad.videocommon.e.d r34, com.tkay.expressad.reward.a.c.j r35) {
            r20 = this;
            r0 = r26
            r13 = r28
            r14 = r29
            r11 = r32
            r15 = r33
            monitor-enter(r20)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r1.<init>()     // Catch: java.lang.Throwable -> L137
            r1.append(r11)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L137
            r1.append(r0)     // Catch: java.lang.Throwable -> L137
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L137
            boolean r1 = com.tkay.expressad.foundation.h.t.e(r26)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            if (r1 == 0) goto L2a
            r35.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            monitor-exit(r20)
            return
        L2a:
            com.tkay.expressad.videocommon.a$a r12 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r12.<init>()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            com.tkay.expressad.reward.a.c r1 = com.tkay.expressad.reward.a.c.m.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.d()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            if (r1 != 0) goto Lbf
            r1 = 1
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L84
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L84
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L84
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L84
            r10 = r2
            goto Lc0
        L49:
            r12.a(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r11)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r15)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r0)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r2.c(r3, r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.<init>()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.append(r11)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.append(r0)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r35.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            monitor-exit(r20)
            return
        L84:
            r12.a(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            com.tkay.expressad.videocommon.b.j r2 = com.tkay.expressad.videocommon.b.j.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r11)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r15)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3.append(r0)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r2.c(r3, r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.<init>()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.append(r11)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1.append(r0)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r35.a()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            monitor-exit(r20)
            return
        Lbf:
            r10 = r1
        Lc0:
            r12.a(r10)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = 0
            if (r14 == 0) goto Ld2
            int r2 = r29.size()     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            if (r2 <= 0) goto Ld2
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r2.<init>(r1, r13, r14)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            goto Ld7
        Ld2:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r2.<init>(r1, r13)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
        Ld7:
            r1 = r27
            r9 = r2
            r9.a(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r9.a(r11)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = r34
            r9.a(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = r21
            r9.b(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            com.tkay.expressad.reward.a.c$k r8 = new com.tkay.expressad.reward.a.c$k     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r3 = 0
            r1 = r8
            r2 = r22
            r4 = r23
            r5 = r24
            r6 = r33
            r7 = r35
            r18 = r8
            r8 = r25
            r19 = r9
            r9 = r26
            r0 = r10
            r10 = r31
            r11 = r32
            r13 = r28
            r14 = r29
            r15 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = r18
            r0.setWebViewListener(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r2 = r19
            r0.setObject(r2)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = r30
            r0.loadUrl(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            r1 = r33
            r0.setRid(r1)     // Catch: java.lang.Exception -> L124 java.lang.Throwable -> L137
            monitor-exit(r20)
            return
        L124:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L137
            if (r1 == 0) goto L12c
            r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L137
        L12c:
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L137
            r1 = r35
            r1.a(r0)     // Catch: java.lang.Throwable -> L137
            monitor-exit(r20)
            return
        L137:
            r0 = move-exception
            monitor-exit(r20)
            throw r0
    }

    public final synchronized void a(boolean r25, android.os.Handler r26, boolean r27, boolean r28, java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, com.tkay.expressad.foundation.d.c r34, java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> r35, java.lang.String r36, java.lang.String r37, com.tkay.expressad.videocommon.e.d r38, com.tkay.expressad.reward.a.c.j r39) {
            r24 = this;
            r1 = r24
            r0 = r29
            r15 = r31
            r14 = r34
            r13 = r35
            monitor-enter(r24)
            r2 = 0
            r1.e = r2     // Catch: java.lang.Throwable -> L198
            long r18 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L198
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r3.<init>()     // Catch: java.lang.Throwable -> L198
            r3.append(r15)     // Catch: java.lang.Throwable -> L198
            java.lang.String r4 = "_"
            r3.append(r4)     // Catch: java.lang.Throwable -> L198
            r9 = r32
            r3.append(r9)     // Catch: java.lang.Throwable -> L198
            r1.e = r2     // Catch: java.lang.Throwable -> L198
            boolean r3 = com.tkay.expressad.foundation.h.t.e(r32)     // Catch: java.lang.Throwable -> L198
            if (r3 == 0) goto L31
            r39.a()     // Catch: java.lang.Throwable -> L198
            monitor-exit(r24)
            return
        L31:
            com.tkay.expressad.videocommon.a$a r12 = new com.tkay.expressad.videocommon.a$a     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r12.<init>()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.reward.a.c r3 = com.tkay.expressad.reward.a.c.m.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.d()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r3 != 0) goto L4d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.content.Context r4 = r4.f()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3.<init>(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
        L4d:
            r11 = r3
            r12.a(r11)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.lang.String r10 = com.tkay.expressad.video.bt.a.c.b()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.lang.String r8 = com.tkay.expressad.video.bt.a.c.b()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r12.a(r8)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r13 == 0) goto Lc9
            int r4 = r35.size()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r4 <= 0) goto Lc9
            com.tkay.expressad.videocommon.b.c r4 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.util.List r4 = r4.a(r15)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r4 == 0) goto Lc2
            int r5 = r4.size()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r5 <= 0) goto Lc2
        L7a:
            int r5 = r35.size()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r2 >= r5) goto Lc2
            java.lang.Object r5 = r13.get(r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.util.Iterator r6 = r4.iterator()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
        L8a:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r7 == 0) goto Lbd
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.foundation.d.c r7 = (com.tkay.expressad.foundation.d.c) r7     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.lang.String r3 = r7.aZ()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r17 = r4
            java.lang.String r4 = r5.aZ()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r3 == 0) goto Lba
            java.lang.String r3 = r7.Z()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.lang.String r4 = r5.Z()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            if (r3 == 0) goto Lba
            r5.au()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r13.set(r2, r5)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
        Lba:
            r4 = r17
            goto L8a
        Lbd:
            r17 = r4
            int r2 = r2 + 1
            goto L7a
        Lc2:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3 = 0
            r2.<init>(r3, r14, r13)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            goto Lcf
        Lc9:
            com.tkay.expressad.video.signal.a.j r2 = new com.tkay.expressad.video.signal.a.j     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3 = 0
            r2.<init>(r3, r14)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
        Lcf:
            r6 = r33
            r7 = r2
            r7.a(r6)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2 = r37
            r7.a(r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.c(r8)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.d(r10)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.p()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r4 = r38
            r7.a(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3 = r25
            r7.b(r3)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.reward.a.c$b r2 = new com.tkay.expressad.reward.a.c$b     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r5 = 0
            r37 = r2
            r3 = r25
            r4 = r26
            r6 = r27
            r20 = r7
            r7 = r28
            r21 = r8
            r8 = r33
            r9 = r32
            r22 = r10
            r10 = r30
            r23 = r11
            r11 = r31
            r16 = r12
            r12 = r29
            r13 = r16
            r14 = r34
            r15 = r35
            r16 = r38
            r17 = r39
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3 = r23
            r3.setWebViewListener(r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2 = r20
            r3.setObject(r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2 = r36
            r3.loadUrl(r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r3.setRid(r0)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.video.bt.module.TkayBTRootLayout r2 = new com.tkay.expressad.video.bt.module.TkayBTRootLayout     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.content.Context r4 = r4.f()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2.<init>(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r5 = -1
            r4.<init>(r5, r5)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2.setLayoutParams(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r4 = r22
            r2.setInstanceId(r4)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r6 = r31
            r2.setUnitId(r6)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.video.bt.module.TkayBTLayout r7 = new com.tkay.expressad.video.bt.module.TkayBTLayout     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.content.Context r8 = r8.f()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.<init>(r8)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.widget.FrameLayout$LayoutParams r8 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r8.<init>(r5, r5)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.setLayoutParams(r8)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r8 = r21
            r7.setInstanceId(r8)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.setUnitId(r6)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r7.setWebView(r3)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            com.tkay.expressad.video.bt.a.c r3 = com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            java.util.LinkedHashMap r0 = r3.b(r6, r0)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r0.put(r8, r7)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r0.put(r4, r2)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r0.<init>(r5, r5)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            r2.addView(r7, r0)     // Catch: java.lang.Exception -> L185 java.lang.Throwable -> L198
            monitor-exit(r24)
            return
        L185:
            r0 = move-exception
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L198
            r3 = r39
            r3.a(r2)     // Catch: java.lang.Throwable -> L198
            boolean r2 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L198
            if (r2 == 0) goto L196
            r0.getLocalizedMessage()     // Catch: java.lang.Throwable -> L198
        L196:
            monitor-exit(r24)
            return
        L198:
            r0 = move-exception
            monitor-exit(r24)
            throw r0
    }
}
