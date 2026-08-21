package com.iab.omid.library.mmadbridge.publisher;

public abstract class AdSessionStatePublisher {
    private com.iab.omid.library.mmadbridge.weakreference.b a;
    private com.iab.omid.library.mmadbridge.adsession.AdEvents b;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents c;
    private com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a d;
    private long e;

    enum a extends java.lang.Enum<com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a> {
        public static final com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a a = null;
        public static final com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a b = null;
        public static final com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a c = null;
        private static final com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a[] d = null;

        static {
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r0 = new com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a
                r1 = 0
                java.lang.String r2 = "AD_STATE_IDLE"
                r0.<init>(r2, r1)
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.a = r0
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r2 = new com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a
                r3 = 1
                java.lang.String r4 = "AD_STATE_VISIBLE"
                r2.<init>(r4, r3)
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.b = r2
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r4 = new com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a
                r5 = 2
                java.lang.String r6 = "AD_STATE_NOTVISIBLE"
                r4.<init>(r6, r5)
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.c = r4
                r6 = 3
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a[] r6 = new com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a[r6]
                r6[r1] = r0
                r6[r3] = r2
                r6[r5] = r4
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.d = r6
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a valueOf(java.lang.String r1) {
                java.lang.Class<com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a> r0 = com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r1 = (com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a) r1
                return r1
        }

        public static com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a[] values() {
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a[] r0 = com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.d
                java.lang.Object r0 = r0.clone()
                com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a[] r0 = (com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a[]) r0
                return r0
        }
    }

    public AdSessionStatePublisher() {
            r2 = this;
            r2.<init>()
            r2.a()
            com.iab.omid.library.mmadbridge.weakreference.b r0 = new com.iab.omid.library.mmadbridge.weakreference.b
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public void a() {
            r2 = this;
            long r0 = com.iab.omid.library.mmadbridge.utils.f.b()
            r2.e = r0
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r0 = com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.a
            r2.d = r0
            return
    }

    public void a(float r3) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.a(r1, r3)
            return
    }

    void a(android.webkit.WebView r2) {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.b r0 = new com.iab.omid.library.mmadbridge.weakreference.b
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.AdEvents r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r3) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            org.json.JSONObject r3 = r3.toJsonObject()
            r0.a(r1, r3)
            return
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.ErrorType r3, java.lang.String r4) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.a(r1, r3, r4)
            return
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.a r2, com.iab.omid.library.mmadbridge.adsession.AdSessionContext r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    protected void a(com.iab.omid.library.mmadbridge.adsession.a r7, com.iab.omid.library.mmadbridge.adsession.AdSessionContext r8, org.json.JSONObject r9) {
            r6 = this;
            java.lang.String r2 = r7.getAdSessionId()
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r7 = "app"
            java.lang.String r0 = "environment"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r0, r7)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r0 = r8.getAdSessionContextType()
            java.lang.String r1 = "adSessionType"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r1, r0)
            org.json.JSONObject r0 = com.iab.omid.library.mmadbridge.utils.b.d()
            java.lang.String r1 = "deviceInfo"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r1, r0)
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = com.iab.omid.library.mmadbridge.utils.a.a()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "deviceCategory"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r1, r0)
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.lang.String r1 = "clid"
            r0.put(r1)
            java.lang.String r1 = "vlid"
            r0.put(r1)
            java.lang.String r1 = "supports"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.iab.omid.library.mmadbridge.adsession.Partner r1 = r8.getPartner()
            java.lang.String r1 = r1.getName()
            java.lang.String r4 = "partnerName"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r4, r1)
            com.iab.omid.library.mmadbridge.adsession.Partner r1 = r8.getPartner()
            java.lang.String r1 = r1.getVersion()
            java.lang.String r4 = "partnerVersion"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r4, r1)
            java.lang.String r1 = "omidNativeInfo"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "libraryVersion"
            java.lang.String r4 = "1.4.2-Mmadbridge"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r4)
            com.iab.omid.library.mmadbridge.internal.f r1 = com.iab.omid.library.mmadbridge.internal.f.b()
            android.content.Context r1 = r1.a()
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r4 = "appId"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r4, r1)
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r7, r0)
            java.lang.String r7 = r8.getContentUrl()
            if (r7 == 0) goto L9a
            java.lang.String r7 = r8.getContentUrl()
            java.lang.String r0 = "contentUrl"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r0, r7)
        L9a:
            java.lang.String r7 = r8.getCustomReferenceData()
            if (r7 == 0) goto La9
            java.lang.String r7 = r8.getCustomReferenceData()
            java.lang.String r0 = "customReferenceData"
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r0, r7)
        La9:
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.util.List r7 = r8.getVerificationScriptResources()
            java.util.Iterator r7 = r7.iterator()
        Lb6:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto Lce
            java.lang.Object r8 = r7.next()
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r8 = (com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource) r8
            java.lang.String r0 = r8.getVendorKey()
            java.lang.String r8 = r8.getVerificationParameters()
            com.iab.omid.library.mmadbridge.utils.c.a(r4, r0, r8)
            goto Lb6
        Lce:
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r6.getWebView()
            r5 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public void a(com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(java.lang.String r4) {
            r3 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r3.getWebView()
            r2 = 0
            r0.a(r1, r4, r2)
            return
    }

    public void a(java.lang.String r3, long r4) {
            r2 = this;
            long r0 = r2.e
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r4 < 0) goto L19
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r4 = r2.d
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r5 = com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.c
            if (r4 == r5) goto L19
            r2.d = r5
            com.iab.omid.library.mmadbridge.internal.g r4 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r5 = r2.getWebView()
            r4.a(r5, r3)
        L19:
            return
    }

    public void a(java.lang.String r3, org.json.JSONObject r4) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.a(r1, r3, r4)
            return
    }

    public void a(java.util.Date r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r4.getTime()
            java.lang.Long r4 = java.lang.Long.valueOf(r1)
            java.lang.String r1 = "timestamp"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r1, r4)
            com.iab.omid.library.mmadbridge.internal.g r4 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r3.getWebView()
            r4.c(r1, r0)
            return
    }

    public void a(org.json.JSONObject r3) {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.b(r1, r3)
            return
    }

    public void a(boolean r3) {
            r2 = this;
            boolean r0 = r2.e()
            if (r0 == 0) goto L18
            if (r3 == 0) goto Lb
            java.lang.String r3 = "foregrounded"
            goto Ld
        Lb:
            java.lang.String r3 = "backgrounded"
        Ld:
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.b(r1, r3)
        L18:
            return
    }

    public void b() {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.b r0 = r1.a
            r0.clear()
            return
    }

    public void b(java.lang.String r3, long r4) {
            r2 = this;
            long r0 = r2.e
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r4 < 0) goto L15
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher$a r4 = com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher.a.b
            r2.d = r4
            com.iab.omid.library.mmadbridge.internal.g r4 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r5 = r2.getWebView()
            r4.a(r5, r3)
        L15:
            return
    }

    public com.iab.omid.library.mmadbridge.adsession.AdEvents c() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdEvents r0 = r1.b
            return r0
    }

    public com.iab.omid.library.mmadbridge.adsession.media.MediaEvents d() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r1.c
            return r0
    }

    public boolean e() {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.b r0 = r1.a
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public void f() {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.a(r1)
            return
    }

    public void g() {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.b(r1)
            return
    }

    public android.webkit.WebView getWebView() {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.b r0 = r1.a
            java.lang.Object r0 = r0.get()
            android.webkit.WebView r0 = (android.webkit.WebView) r0
            return r0
    }

    public void h() {
            r2 = this;
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r2.getWebView()
            r0.c(r1)
            return
    }

    public void i() {
            r0 = this;
            return
    }
}
