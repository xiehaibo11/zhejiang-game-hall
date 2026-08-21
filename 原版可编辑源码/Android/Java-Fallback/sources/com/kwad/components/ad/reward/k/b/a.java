package com.kwad.components.ad.reward.k.b;

public final class a extends com.kwad.components.ad.reward.k.a {
    private com.kwad.components.ad.reward.k.b.a.c xX;
    private com.kwad.components.ad.reward.k.b.a.a xY;
    private final com.kwad.components.ad.reward.k.b.a.b xZ;

    static class a extends com.kwad.components.ad.reward.k.b {
        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "安装应用"
                r1.xT = r0
                return
        }
    }

    static class b extends com.kwad.components.ad.reward.k.b {
        public b(int r5) {
                r4 = this;
                r4.<init>()
                r0 = 1
                java.lang.Object[] r1 = new java.lang.Object[r0]
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r5)
                java.lang.String r2 = r2.toString()
                r3 = 0
                r1[r3] = r2
                java.lang.String r2 = "进阶奖励：安装并激活APP %ss"
                java.lang.String r1 = java.lang.String.format(r2, r1)
                r4.xT = r1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0[r3] = r5
                java.lang.String r5 = java.lang.String.format(r2, r0)
                r4.xU = r5
                return
        }
    }

    static class c extends com.kwad.components.ad.reward.k.b {
        public c() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "基础奖励：观看视频"
                r1.xT = r0
                java.lang.String r0 = "基础奖励：需再观看%ss视频"
                r1.xU = r0
                return
        }
    }

    public a() {
            r2 = this;
            r2.<init>()
            com.kwad.components.ad.reward.k.b.a$c r0 = new com.kwad.components.ad.reward.k.b.a$c
            r0.<init>()
            r2.xX = r0
            com.kwad.components.ad.reward.k.b.a$a r0 = new com.kwad.components.ad.reward.k.b.a$a
            r0.<init>()
            r2.xY = r0
            com.kwad.components.ad.reward.k.b.a$b r0 = new com.kwad.components.ad.reward.k.b.a$b
            int r1 = com.kwad.components.ad.reward.a.b.gE()
            r0.<init>(r1)
            r2.xZ = r0
            return
    }

    public static void a(com.kwad.components.ad.reward.k.b.a r0, android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aq(r2)
            boolean r1 = com.kwad.sdk.utils.ak.ak(r1, r2)
            if (r1 == 0) goto L12
            r0.jJ()
            return
        L12:
            r0.jK()
            return
    }

    private void jI() {
            r1 = this;
            com.kwad.components.ad.reward.k.b.a$c r0 = r1.xX
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L1a
            com.kwad.components.ad.reward.k.b.a$a r0 = r1.xY
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L1a
            com.kwad.components.ad.reward.k.b.a$b r0 = r1.xZ
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            if (r0 == 0) goto L21
            r1.jy()
            return
        L21:
            r1.jz()
            return
    }

    private void jK() {
            r2 = this;
            java.lang.String r0 = "LaunchAppTask"
            java.lang.String r1 = "markInstallUncompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.b.a$a r0 = r2.xY
            r0.jz()
            r2.jI()
            return
    }

    @Override
    public final boolean isCompleted() {
            r1 = this;
            com.kwad.components.ad.reward.k.b.a$a r0 = r1.xY
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L12
            com.kwad.components.ad.reward.k.b.a$b r0 = r1.xZ
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    public final void jG() {
            r2 = this;
            java.lang.String r0 = "LaunchAppTask"
            java.lang.String r1 = "markWatchVideoCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.b.a$c r0 = r2.xX
            r0.jy()
            r2.jI()
            return
    }

    public final boolean jH() {
            r1 = this;
            com.kwad.components.ad.reward.k.b.a$c r0 = r1.xX
            boolean r0 = r0.isCompleted()
            return r0
    }

    public final void jJ() {
            r2 = this;
            java.lang.String r0 = "LaunchAppTask"
            java.lang.String r1 = "markInstallCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.b.a$a r0 = r2.xY
            r0.jy()
            r2.jI()
            return
    }

    public final void jL() {
            r2 = this;
            java.lang.String r0 = "LaunchAppTask"
            java.lang.String r1 = "markUseAppCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.b.a$b r0 = r2.xZ
            r0.jy()
            r2.jI()
            return
    }

    public final boolean jM() {
            r2 = this;
            java.lang.String r0 = "LaunchAppTask"
            java.lang.String r1 = "isInstallCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.b.a$a r0 = r2.xY
            boolean r0 = r0.isCompleted()
            return r0
    }

    @Override
    public final java.util.List<com.kwad.components.ad.reward.k.c> jw() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.components.ad.reward.k.b.a$c r1 = r2.xX
            r0.add(r1)
            com.kwad.components.ad.reward.k.b.a$b r1 = r2.xZ
            r0.add(r1)
            return r0
    }

    @Override
    public final int jx() {
            r3 = this;
            java.util.List r0 = r3.jw()
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L9:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r0.next()
            com.kwad.components.ad.reward.k.c r2 = (com.kwad.components.ad.reward.k.c) r2
            boolean r2 = r2.isCompleted()
            if (r2 != 0) goto L9
            int r1 = r1 + 1
            goto L9
        L1e:
            return r1
    }

    @Override
    public final void parseJson(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "mWatchVideoTask"
            org.json.JSONObject r0 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L16
            com.kwad.components.ad.reward.k.b.a$c r1 = r2.xX     // Catch: java.lang.Throwable -> L16
            r1.parseJson(r0)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "mUseAppTask"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L16
            com.kwad.components.ad.reward.k.b.a$b r0 = r2.xZ     // Catch: java.lang.Throwable -> L16
            r0.parseJson(r3)     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.components.ad.reward.k.b.a$c r1 = r3.xX
            java.lang.String r2 = "mWatchVideoTask"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            com.kwad.components.ad.reward.k.b.a$a r1 = r3.xY
            java.lang.String r2 = "mInstallAppTask"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            com.kwad.components.ad.reward.k.b.a$b r1 = r3.xZ
            java.lang.String r2 = "mUseAppTask"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            return r0
    }
}
