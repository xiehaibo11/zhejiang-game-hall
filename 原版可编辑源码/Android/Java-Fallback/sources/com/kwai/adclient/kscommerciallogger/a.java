package com.kwai.adclient.kscommerciallogger;

public final class a {
    private com.kwai.adclient.kscommerciallogger.a.a aMQ;
    private com.kwai.adclient.kscommerciallogger.a.b aMR;
    private org.json.JSONObject aMS;
    private boolean aMT;
    private boolean isDebug;

    static final class a {
        private static com.kwai.adclient.kscommerciallogger.a aMU;

        public static com.kwai.adclient.kscommerciallogger.a KW() {
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.a.aMU
                if (r0 != 0) goto Lc
                com.kwai.adclient.kscommerciallogger.a r0 = new com.kwai.adclient.kscommerciallogger.a
                r1 = 0
                r0.<init>(r1)
                com.kwai.adclient.kscommerciallogger.a.a.aMU = r0
            Lc:
                com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.a.aMU
                return r0
        }
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isDebug = r0
            r1.aMT = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwai.adclient.kscommerciallogger.a KW() {
            com.kwai.adclient.kscommerciallogger.a r0 = com.kwai.adclient.kscommerciallogger.a.a.KW()
            return r0
    }

    private void d(com.kwai.adclient.kscommerciallogger.model.c r5) {
            r4 = this;
            com.kwai.adclient.kscommerciallogger.a.a r0 = r4.aMQ
            if (r0 == 0) goto L46
            java.lang.String r1 = r5.getTag()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = r5.La()
            if (r2 != 0) goto L11
            java.lang.String r2 = ""
            goto L17
        L11:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r2 = r5.La()
            java.lang.String r2 = r2.value
        L17:
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = r5.Lb()
            if (r3 != 0) goto L1e
            goto L24
        L1e:
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r3 = r5.Lb()
            java.lang.String r3 = r3.value
        L24:
            com.kwai.adclient.kscommerciallogger.model.d r3 = r5.Lc()
            if (r3 != 0) goto L2b
            goto L32
        L2b:
            com.kwai.adclient.kscommerciallogger.model.d r3 = r5.Lc()
            r3.getValue()
        L32:
            r5.Lf()
            org.json.JSONObject r3 = r5.Ld()
            com.kwai.adclient.kscommerciallogger.b.O(r3)
            org.json.JSONObject r5 = r5.Le()
            com.kwai.adclient.kscommerciallogger.b.O(r5)
            r0.S(r1, r2)
        L46:
            return
    }

    public final org.json.JSONObject KX() {
            r1 = this;
            org.json.JSONObject r0 = r1.aMS
            return r0
    }

    public final boolean KY() {
            r1 = this;
            boolean r0 = r1.aMT
            return r0
    }

    public final void a(com.kwai.adclient.kscommerciallogger.a.a r1, com.kwai.adclient.kscommerciallogger.a.b r2, org.json.JSONObject r3, boolean r4, boolean r5) {
            r0 = this;
            r0.aMQ = r1
            r0.aMR = r2
            r1 = 0
            r0.aMS = r1
            r0.isDebug = r4
            r0.aMT = r5
            return
    }

    public final void c(com.kwai.adclient.kscommerciallogger.model.c r3) {
            r2 = this;
            if (r3 != 0) goto Lc
            com.kwai.adclient.kscommerciallogger.a.a r3 = r2.aMQ
            java.lang.String r0 = "KSCommercialLogger"
            java.lang.String r1 = "rl rtLog is null please check it"
            r3.T(r0, r1)
            return
        Lc:
            r2.d(r3)
            com.kwai.adclient.kscommerciallogger.a.b r0 = r2.aMR
            if (r0 == 0) goto L1e
            java.lang.String r1 = r3.KZ()
            java.lang.String r3 = r3.toString()
            r0.U(r1, r3)
        L1e:
            return
    }

    public final boolean isDebug() {
            r1 = this;
            boolean r0 = r1.isDebug
            return r0
    }
}
