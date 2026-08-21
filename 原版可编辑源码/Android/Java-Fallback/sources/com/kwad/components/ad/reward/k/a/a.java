package com.kwad.components.ad.reward.k.a;

public final class a extends com.kwad.components.ad.reward.k.a {
    private com.kwad.components.ad.reward.k.a.a.b xV;
    private final com.kwad.components.ad.reward.k.a.a.a xW;

    static class a extends com.kwad.components.ad.reward.k.b {
        public a(int r5) {
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
                java.lang.String r2 = "进阶奖励：浏览详情页 %ss"
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

    static class b extends com.kwad.components.ad.reward.k.b {
        public b() {
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
            com.kwad.components.ad.reward.k.a.a$b r0 = new com.kwad.components.ad.reward.k.a.a$b
            r0.<init>()
            r2.xV = r0
            com.kwad.components.ad.reward.k.a.a$a r0 = new com.kwad.components.ad.reward.k.a.a$a
            int r1 = com.kwad.sdk.core.config.d.zC()
            r0.<init>(r1)
            r2.xW = r0
            return
    }

    private void jI() {
            r1 = this;
            com.kwad.components.ad.reward.k.a.a$a r0 = r1.xW
            boolean r0 = r0.isCompleted()
            if (r0 == 0) goto Lc
            r1.jy()
            return
        Lc:
            r1.jz()
            return
    }

    @Override
    public final boolean isCompleted() {
            r1 = this;
            com.kwad.components.ad.reward.k.a.a$a r0 = r1.xW
            boolean r0 = r0.isCompleted()
            return r0
    }

    public final void jG() {
            r2 = this;
            java.lang.String r0 = "LandPageOpenTask"
            java.lang.String r1 = "markWatchVideoCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.a.a$b r0 = r2.xV
            r0.jy()
            r2.jI()
            return
    }

    public final boolean jH() {
            r1 = this;
            com.kwad.components.ad.reward.k.a.a$b r0 = r1.xV
            boolean r0 = r0.isCompleted()
            return r0
    }

    @Override
    public final java.util.List<com.kwad.components.ad.reward.k.c> jw() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.components.ad.reward.k.a.a$b r1 = r2.xV
            r0.add(r1)
            com.kwad.components.ad.reward.k.a.a$a r1 = r2.xW
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

    public final void markOpenNsCompleted() {
            r2 = this;
            java.lang.String r0 = "LandPageOpenTask"
            java.lang.String r1 = "markOpenNsCompleted"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.k.a.a$a r0 = r2.xW
            r0.jy()
            r2.jI()
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "mWatchVideoTask"
            org.json.JSONObject r0 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L16
            com.kwad.components.ad.reward.k.a.a$b r1 = r2.xV     // Catch: java.lang.Throwable -> L16
            r1.parseJson(r0)     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "mOpenNsTask"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L16
            com.kwad.components.ad.reward.k.a.a$a r0 = r2.xW     // Catch: java.lang.Throwable -> L16
            r0.parseJson(r3)     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.components.ad.reward.k.a.a$b r1 = r3.xV
            java.lang.String r2 = "mWatchVideoTask"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            com.kwad.components.ad.reward.k.a.a$a r1 = r3.xW
            java.lang.String r2 = "mOpenNsTask"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            return r0
    }
}
