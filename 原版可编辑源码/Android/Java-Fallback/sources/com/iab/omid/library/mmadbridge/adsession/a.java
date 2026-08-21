package com.iab.omid.library.mmadbridge.adsession;

public class a extends com.iab.omid.library.mmadbridge.adsession.AdSession {
    private static final java.util.regex.Pattern l = null;
    private final com.iab.omid.library.mmadbridge.adsession.AdSessionContext a;
    private final com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration b;
    private final java.util.List<com.iab.omid.library.mmadbridge.internal.e> c;
    private com.iab.omid.library.mmadbridge.weakreference.a d;
    private com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher e;
    private boolean f;
    private boolean g;
    private final java.lang.String h;
    private boolean i;
    private boolean j;
    private com.iab.omid.library.mmadbridge.adsession.PossibleObstructionListener k;

    static {
            java.lang.String r0 = "^[a-zA-Z0-9 ]+$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.iab.omid.library.mmadbridge.adsession.a.l = r0
            return
    }

    a(com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r3, com.iab.omid.library.mmadbridge.adsession.AdSessionContext r4) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.c = r0
            r0 = 0
            r2.f = r0
            r2.g = r0
            r2.b = r3
            r2.a = r4
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r2.h = r0
            r0 = 0
            r2.d(r0)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r0 = r4.getAdSessionContextType()
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r1 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.HTML
            if (r0 == r1) goto L40
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r0 = r4.getAdSessionContextType()
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r1 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.JAVASCRIPT
            if (r0 != r1) goto L32
            goto L40
        L32:
            com.iab.omid.library.mmadbridge.publisher.b r0 = new com.iab.omid.library.mmadbridge.publisher.b
            java.util.Map r1 = r4.getInjectedResourcesMap()
            java.lang.String r4 = r4.getOmidJsScriptContent()
            r0.<init>(r1, r4)
            goto L49
        L40:
            com.iab.omid.library.mmadbridge.publisher.a r0 = new com.iab.omid.library.mmadbridge.publisher.a
            android.webkit.WebView r4 = r4.getWebView()
            r0.<init>(r4)
        L49:
            r2.e = r0
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r4 = r2.e
            r4.i()
            com.iab.omid.library.mmadbridge.internal.c r4 = com.iab.omid.library.mmadbridge.internal.c.c()
            r4.a(r2)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r4 = r2.e
            r4.a(r3)
            return
    }

    private void a() {
            r2 = this;
            boolean r0 = r2.i
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Impression event can only be sent once"
            r0.<init>(r1)
            throw r0
    }

    private static void a(android.view.View r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "FriendlyObstruction is null"
            r1.<init>(r0)
            throw r1
    }

    private void a(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L27
            int r0 = r3.length()
            r1 = 50
            if (r0 > r1) goto L1f
            java.util.regex.Pattern r0 = com.iab.omid.library.mmadbridge.adsession.a.l
            java.util.regex.Matcher r3 = r0.matcher(r3)
            boolean r3 = r3.matches()
            if (r3 == 0) goto L17
            goto L27
        L17:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "FriendlyObstruction has detailed reason that contains characters not in [a-z][A-Z][0-9] or space"
            r3.<init>(r0)
            throw r3
        L1f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "FriendlyObstruction has detailed reason over 50 characters in length"
            r3.<init>(r0)
            throw r3
        L27:
            return
    }

    private com.iab.omid.library.mmadbridge.internal.e b(android.view.View r4) {
            r3 = this;
            java.util.List<com.iab.omid.library.mmadbridge.internal.e> r0 = r3.c
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.internal.e r1 = (com.iab.omid.library.mmadbridge.internal.e) r1
            com.iab.omid.library.mmadbridge.weakreference.a r2 = r1.c()
            java.lang.Object r2 = r2.get()
            if (r2 != r4) goto L6
            return r1
        L1d:
            r4 = 0
            return r4
    }

    private void b() {
            r2 = this;
            boolean r0 = r2.j
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Loaded event can only be sent once"
            r0.<init>(r1)
            throw r0
    }

    private void c(android.view.View r4) {
            r3 = this;
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.b()
            if (r0 == 0) goto L2e
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L2e
            java.util.Iterator r0 = r0.iterator()
        L14:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            if (r1 == r3) goto L14
            android.view.View r2 = r1.c()
            if (r2 != r4) goto L14
            com.iab.omid.library.mmadbridge.weakreference.a r1 = r1.d
            r1.clear()
            goto L14
        L2e:
            return
    }

    private void d(android.view.View r2) {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.a r0 = new com.iab.omid.library.mmadbridge.weakreference.a
            r0.<init>(r2)
            r1.d = r0
            return
    }

    public void a(java.util.List<com.iab.omid.library.mmadbridge.weakreference.a> r3) {
            r2 = this;
            boolean r0 = r2.e()
            if (r0 == 0) goto L2e
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r3.next()
            com.iab.omid.library.mmadbridge.weakreference.a r1 = (com.iab.omid.library.mmadbridge.weakreference.a) r1
            java.lang.Object r1 = r1.get()
            android.view.View r1 = (android.view.View) r1
            if (r1 == 0) goto Lf
            r0.add(r1)
            goto Lf
        L27:
            com.iab.omid.library.mmadbridge.adsession.PossibleObstructionListener r3 = r2.k
            java.lang.String r1 = r2.h
            r3.onPossibleObstructionsDetected(r1, r0)
        L2e:
            return
    }

    void a(org.json.JSONObject r2) {
            r1 = this;
            r1.b()
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.a(r2)
            r2 = 1
            r1.j = r2
            return
    }

    @Override
    public void addFriendlyObstruction(android.view.View r3, com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r4, java.lang.String r5) {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto L5
            return
        L5:
            a(r3)
            r2.a(r5)
            com.iab.omid.library.mmadbridge.internal.e r0 = r2.b(r3)
            if (r0 != 0) goto L1b
            java.util.List<com.iab.omid.library.mmadbridge.internal.e> r0 = r2.c
            com.iab.omid.library.mmadbridge.internal.e r1 = new com.iab.omid.library.mmadbridge.internal.e
            r1.<init>(r3, r4, r5)
            r0.add(r1)
        L1b:
            return
    }

    public android.view.View c() {
            r1 = this;
            com.iab.omid.library.mmadbridge.weakreference.a r0 = r1.d
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            return r0
    }

    public java.util.List<com.iab.omid.library.mmadbridge.internal.e> d() {
            r1 = this;
            java.util.List<com.iab.omid.library.mmadbridge.internal.e> r0 = r1.c
            return r0
    }

    public boolean e() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.PossibleObstructionListener r0 = r1.k
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public void error(com.iab.omid.library.mmadbridge.adsession.ErrorType r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r1.g
            if (r0 != 0) goto L16
            java.lang.String r0 = "Error type is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            java.lang.String r0 = "Message is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r3, r0)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.a(r2, r3)
            return
        L16:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "AdSession is finished"
            r2.<init>(r3)
            throw r2
    }

    public boolean f() {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto La
            boolean r0 = r1.g
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public void finish() {
            r1 = this;
            boolean r0 = r1.g
            if (r0 == 0) goto L5
            return
        L5:
            com.iab.omid.library.mmadbridge.weakreference.a r0 = r1.d
            r0.clear()
            r1.removeAllFriendlyObstructions()
            r0 = 1
            r1.g = r0
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.f()
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            r0.b(r1)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.b()
            r0 = 0
            r1.e = r0
            r1.k = r0
            return
    }

    public boolean g() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    @Override
    public java.lang.String getAdSessionId() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    @Override
    public com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher getAdSessionStatePublisher() {
            r1 = this;
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.e
            return r0
    }

    public boolean h() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r0 = r1.b
            boolean r0 = r0.isNativeImpressionOwner()
            return r0
    }

    public boolean i() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r0 = r1.b
            boolean r0 = r0.isNativeMediaEventsOwner()
            return r0
    }

    public boolean j() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    void k() {
            r1 = this;
            r1.a()
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.g()
            r0 = 1
            r1.i = r0
            return
    }

    void l() {
            r1 = this;
            r1.b()
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.h()
            r0 = 1
            r1.j = r0
            return
    }

    @Override
    public void registerAdView(android.view.View r2) {
            r1 = this;
            boolean r0 = r1.g
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = "AdView is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            android.view.View r0 = r1.c()
            if (r0 != r2) goto L11
            return
        L11:
            r1.d(r2)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r1.getAdSessionStatePublisher()
            r0.a()
            r1.c(r2)
            return
    }

    @Override
    public void removeAllFriendlyObstructions() {
            r1 = this;
            boolean r0 = r1.g
            if (r0 == 0) goto L5
            return
        L5:
            java.util.List<com.iab.omid.library.mmadbridge.internal.e> r0 = r1.c
            r0.clear()
            return
    }

    @Override
    public void removeFriendlyObstruction(android.view.View r2) {
            r1 = this;
            boolean r0 = r1.g
            if (r0 == 0) goto L5
            return
        L5:
            a(r2)
            com.iab.omid.library.mmadbridge.internal.e r2 = r1.b(r2)
            if (r2 == 0) goto L13
            java.util.List<com.iab.omid.library.mmadbridge.internal.e> r0 = r1.c
            r0.remove(r2)
        L13:
            return
    }

    @Override
    public void setPossibleObstructionListener(com.iab.omid.library.mmadbridge.adsession.PossibleObstructionListener r1) {
            r0 = this;
            r0.k = r1
            return
    }

    @Override
    public void start() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.f = r0
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            r0.c(r2)
            com.iab.omid.library.mmadbridge.internal.h r0 = com.iab.omid.library.mmadbridge.internal.h.c()
            float r0 = r0.b()
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r2.e
            r1.a(r0)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r2.e
            com.iab.omid.library.mmadbridge.internal.a r1 = com.iab.omid.library.mmadbridge.internal.a.a()
            java.util.Date r1 = r1.b()
            r0.a(r1)
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r0 = r2.e
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r1 = r2.a
            r0.a(r2, r1)
            return
    }
}
