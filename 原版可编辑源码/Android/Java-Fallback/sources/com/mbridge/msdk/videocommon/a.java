package com.mbridge.msdk.videocommon;

public final class a {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> a;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> b;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> c;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> d;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> e;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> f;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> g;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> h;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> i;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a.a> j;

    public static class a {
        private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a;
        private boolean b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a() {
                r1 = this;
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.a
                return r0
        }

        public final void a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final void a(java.lang.String r2) {
                r1 = this;
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.a
                if (r0 == 0) goto L7
                r0.setTag(r2)
            L7:
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public final java.lang.String b() {
                r1 = this;
                com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.a
                if (r0 == 0) goto Lb
                java.lang.Object r0 = r0.getTag()
                java.lang.String r0 = (java.lang.String) r0
                return r0
            Lb:
                java.lang.String r0 = ""
                return r0
        }

        public final boolean c() {
                r1 = this;
                boolean r0 = r1.b
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.e = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.f = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.g = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.h = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.i = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.a.j = r0
            return
    }

    public static com.mbridge.msdk.videocommon.a.a a(int r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r5.getRequestIdNotice()     // Catch: java.lang.Exception -> La4
            r2 = 288(0x120, float:4.04E-43)
            if (r4 != r2) goto L10
            java.lang.String r1 = r5.getKeyIaUrl()     // Catch: java.lang.Exception -> La4
        L10:
            r3 = 94
            if (r4 == r3) goto L74
            r3 = 287(0x11f, float:4.02E-43)
            if (r4 == r3) goto L44
            if (r4 == r2) goto L2f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        L2f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        L44:
            boolean r4 = r5.isBidCampaign()     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto L5f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        L5f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        L74:
            boolean r4 = r5.isBidCampaign()     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto L8f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        L8f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> La4
            if (r4 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> La4
            int r4 = r4.size()     // Catch: java.lang.Exception -> La4
            if (r4 <= 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r4 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> La4
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> La4
            com.mbridge.msdk.videocommon.a$a r4 = (com.mbridge.msdk.videocommon.a.a) r4     // Catch: java.lang.Exception -> La4
            return r4
        La4:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto Lac
            r4.printStackTrace()
        Lac:
            return r0
    }

    public static com.mbridge.msdk.videocommon.a.a a(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            java.lang.Object r1 = r0.get(r1)
            com.mbridge.msdk.videocommon.a$a r1 = (com.mbridge.msdk.videocommon.a.a) r1
            return r1
        L11:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.h
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L22
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.h
            java.lang.Object r1 = r0.get(r1)
            com.mbridge.msdk.videocommon.a$a r1 = (com.mbridge.msdk.videocommon.a.a) r1
            return r1
        L22:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.i
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L33
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.i
            java.lang.Object r1 = r0.get(r1)
            com.mbridge.msdk.videocommon.a$a r1 = (com.mbridge.msdk.videocommon.a.a) r1
            return r1
        L33:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.j
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L44
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.j
            java.lang.Object r1 = r0.get(r1)
            com.mbridge.msdk.videocommon.a$a r1 = (com.mbridge.msdk.videocommon.a.a) r1
            return r1
        L44:
            r1 = 0
            return r1
    }

    public static void a() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.i
            r0.clear()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.j
            r0.clear()
            return
    }

    public static void a(int r1, java.lang.String r2, com.mbridge.msdk.videocommon.a.a r3) {
            r0 = 94
            if (r1 == r0) goto L1a
            r0 = 287(0x11f, float:4.02E-43)
            if (r1 == r0) goto L9
            goto L33
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> L2b
            if (r1 != 0) goto L14
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L2b
            r1.<init>()     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.videocommon.a.c = r1     // Catch: java.lang.Exception -> L2b
        L14:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> L2b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2b
            goto L33
        L1a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> L2b
            if (r1 != 0) goto L25
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L2b
            r1.<init>()     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.videocommon.a.b = r1     // Catch: java.lang.Exception -> L2b
        L25:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> L2b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2b
            goto L33
        L2b:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L33
            r1.printStackTrace()
        L33:
            return
    }

    public static void a(java.lang.String r0, com.mbridge.msdk.videocommon.a.a r1, boolean r2, boolean r3) {
            if (r2 == 0) goto L10
            if (r3 == 0) goto La
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.h
            r2.put(r0, r1)
            goto L1d
        La:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.g
            r2.put(r0, r1)
            goto L1d
        L10:
            if (r3 == 0) goto L18
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.j
            r2.put(r0, r1)
            goto L1d
        L18:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.i
            r2.put(r0, r1)
        L1d:
            return
    }

    public static void b(int r3, com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r4.getRequestIdNotice()     // Catch: java.lang.Exception -> L61
            r1 = 288(0x120, float:4.04E-43)
            if (r3 != r1) goto Lf
            java.lang.String r0 = r4.getKeyIaUrl()     // Catch: java.lang.Exception -> L61
        Lf:
            r2 = 94
            if (r3 == r2) goto L47
            r2 = 287(0x11f, float:4.02E-43)
            if (r3 == r2) goto L2d
            if (r3 == r1) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L23:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L2d:
            boolean r3 = r4.isBidCampaign()     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L3d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.c     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L3d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L47:
            boolean r3 = r4.isBidCampaign()     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L57
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.b     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L57:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto L69
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> L61
            r3.remove(r0)     // Catch: java.lang.Exception -> L61
            goto L69
        L61:
            r3 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L69
            r3.printStackTrace()
        L69:
            return
    }

    public static void b(int r1, java.lang.String r2, com.mbridge.msdk.videocommon.a.a r3) {
            r0 = 94
            if (r1 == r0) goto L3f
            r0 = 287(0x11f, float:4.02E-43)
            if (r1 == r0) goto L2e
            r0 = 288(0x120, float:4.04E-43)
            if (r1 == r0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L17
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L50
            r1.<init>()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.a.a = r1     // Catch: java.lang.Exception -> L50
        L17:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.a     // Catch: java.lang.Exception -> L50
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L50
            goto L58
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L28
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L50
            r1.<init>()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.a.d = r1     // Catch: java.lang.Exception -> L50
        L28:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.d     // Catch: java.lang.Exception -> L50
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L50
            goto L58
        L2e:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L39
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L50
            r1.<init>()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.a.f = r1     // Catch: java.lang.Exception -> L50
        L39:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.f     // Catch: java.lang.Exception -> L50
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L50
            goto L58
        L3f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L4a
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L50
            r1.<init>()     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.videocommon.a.e = r1     // Catch: java.lang.Exception -> L50
        L4a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r1 = com.mbridge.msdk.videocommon.a.e     // Catch: java.lang.Exception -> L50
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L50
            goto L58
        L50:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L58
            r1.printStackTrace()
        L58:
            return
    }

    public static void b(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto Ld
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            r0.remove(r1)
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.i
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.i
            r0.remove(r1)
        L1a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.h
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L27
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.h
            r0.remove(r1)
        L27:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.j
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.j
            r0.remove(r1)
        L34:
            return
    }

    public static void c(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L10
            boolean r2 = r1.startsWith(r3)
            if (r2 == 0) goto L10
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.g
            r2.remove(r1)
            goto L10
        L2e:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.g
            r3.clear()
        L33:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r3 = com.mbridge.msdk.videocommon.a.h
            r3.clear()
            return
    }

    public static void d(java.lang.String r3) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.g
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto La
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.g
            java.lang.Object r1 = r1.getKey()
            r2.remove(r1)
            goto La
        L2c:
            return
    }

    public static void e(java.lang.String r3) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r0 = com.mbridge.msdk.videocommon.a.h
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto La
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.a$a> r2 = com.mbridge.msdk.videocommon.a.h
            java.lang.Object r1 = r1.getKey()
            r2.remove(r1)
            goto La
        L2c:
            return
    }
}
