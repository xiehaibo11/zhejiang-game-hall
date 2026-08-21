package com.kwad.sdk.crash.online.monitor.a;

public class a extends com.kwad.sdk.core.response.a.a {
    public java.util.List<java.lang.String> aAT;
    public java.util.List<java.lang.String> aAU;
    public java.util.List<java.lang.String> aAV;
    public java.util.List<java.lang.String> aAW;
    public java.util.List<com.kwad.sdk.crash.online.monitor.a.b> aAX;
    public java.util.Map<java.lang.String, com.kwad.sdk.crash.online.monitor.a.b> aAY;
    public int aAZ;
    public int aBa;
    public int aBb;
    public double aqQ;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aAT = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aAU = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aAV = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aAW = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aAX = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.aAY = r0
            return
    }

    public final boolean Fc() {
            r1 = this;
            int r0 = r1.aBb
            r0 = r0 & 4
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final boolean Fd() {
            r2 = this;
            int r0 = r2.aBb
            r1 = 1
            r0 = r0 & r1
            if (r0 == 0) goto L7
            return r1
        L7:
            r0 = 0
            return r0
    }

    public final boolean Fe() {
            r1 = this;
            int r0 = r1.aBb
            r0 = r0 & 2
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public final boolean Ff() {
            r1 = this;
            int r0 = r1.aBb
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public void afterParseJson(org.json.JSONObject r4) {
            r3 = this;
            super.afterParseJson(r4)
            java.util.List<com.kwad.sdk.crash.online.monitor.a.b> r4 = r3.aAX
            if (r4 == 0) goto L24
            java.util.Iterator r4 = r4.iterator()
        Lb:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r4.next()
            com.kwad.sdk.crash.online.monitor.a.b r0 = (com.kwad.sdk.crash.online.monitor.a.b) r0
            java.util.Map<java.lang.String, com.kwad.sdk.crash.online.monitor.a.b> r1 = r3.aAY
            java.lang.String r2 = r0.appId
            r1.put(r2, r0)
            goto Lb
        L1f:
            java.util.List<com.kwad.sdk.crash.online.monitor.a.b> r4 = r3.aAX
            r4.clear()
        L24:
            return
    }

    public final com.kwad.sdk.crash.online.monitor.a.b eK(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.crash.online.monitor.a.b> r0 = r2.aAY
            r1 = 0
            if (r0 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L14
            java.util.Map<java.lang.String, com.kwad.sdk.crash.online.monitor.a.b> r0 = r2.aAY
            java.lang.Object r3 = r0.get(r3)
            r1 = r3
            com.kwad.sdk.crash.online.monitor.a.b r1 = (com.kwad.sdk.crash.online.monitor.a.b) r1
        L14:
            if (r1 != 0) goto L21
            java.util.Map<java.lang.String, com.kwad.sdk.crash.online.monitor.a.b> r3 = r2.aAY
            java.lang.String r0 = "000000000"
            java.lang.Object r3 = r3.get(r0)
            r1 = r3
            com.kwad.sdk.crash.online.monitor.a.b r1 = (com.kwad.sdk.crash.online.monitor.a.b) r1
        L21:
            return r1
    }
}
