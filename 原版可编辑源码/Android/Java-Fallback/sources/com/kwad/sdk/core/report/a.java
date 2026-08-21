package com.kwad.sdk.core.report;

public final class a {
    private static java.util.concurrent.ExecutorService aqw;
    public static org.json.JSONObject aqx;
    public static boolean aqy;




    public static class a extends com.kwad.sdk.core.response.a.a {
        public int code;
        public java.lang.String msg;

        public a(int r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.code = r1
                r0.msg = r2
                return
        }
    }

    static {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CV()
            com.kwad.sdk.core.report.a.aqw = r0
            return
    }

    private static int BO() {
            boolean r0 = com.kwad.sdk.utils.ai.IO()
            if (r0 == 0) goto L8
            r0 = 2
            return r0
        L8:
            r0 = 1
            return r0
    }

    private static boolean D(com.kwad.sdk.core.response.model.AdInfo r3) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aq(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 == 0) goto L17
            return r1
        L17:
            android.content.Context r0 = r0.getContext()
            boolean r3 = com.kwad.sdk.utils.ak.ak(r0, r3)
            return r3
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r0, int r1, long r2, int r4, long r5, org.json.JSONObject r7) {
            com.kwad.sdk.core.report.z$b r7 = new com.kwad.sdk.core.report.z$b
            r7.<init>()
            r7.vy = r2
            r7.atv = r4
            r7.asU = r1
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            r1.duration = r5
            r7.att = r1
            r1 = 3
            r2 = 0
            b(r0, r1, r7, r2)
            return
    }

    @java.lang.Deprecated
    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, long r3, org.json.JSONObject r5) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asU = r2
            com.kwad.sdk.core.report.z$a r2 = new com.kwad.sdk.core.report.z$a
            r2.<init>()
            r2.duration = r3
            r0.att = r2
            r2 = 3
            b(r1, r2, r0, r5)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r4, int r5, com.kwad.sdk.api.model.AdExposureFailedReason r6) {
            r0 = 2
            if (r5 == 0) goto Lf
            r1 = 1
            if (r5 == r1) goto Lf
            if (r5 == r0) goto Lf
            r1 = 3
            if (r5 == r1) goto Lf
            r1 = 4
            if (r5 == r1) goto Lf
            return
        Lf:
            com.kwad.sdk.core.report.z$b r1 = new com.kwad.sdk.core.report.z$b
            r1.<init>()
            r1.asY = r5
            if (r6 == 0) goto L2b
            if (r5 != r0) goto L2b
            int r5 = r6.winEcpm
            long r2 = (long) r5
            r1.asZ = r2
            int r5 = r6.adnType     // Catch: java.lang.Throwable -> L2b
            r1.adnType = r5     // Catch: java.lang.Throwable -> L2b
            int r5 = r6.adnType     // Catch: java.lang.Throwable -> L2b
            if (r5 != r0) goto L2b
            java.lang.String r5 = r6.adnName     // Catch: java.lang.Throwable -> L2b
            r1.adnName = r5     // Catch: java.lang.Throwable -> L2b
        L2b:
            r5 = 809(0x329, float:1.134E-42)
            r6 = 0
            b(r4, r5, r1, r6)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r0, int r1, com.kwad.sdk.core.report.z.b r2, org.json.JSONObject r3) {
            r2.asV = r1
            r1 = 140(0x8c, float:1.96E-43)
            r3 = 0
            b(r0, r1, r2, r3)
            return
    }

    @java.lang.Deprecated
    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, com.kwad.sdk.utils.ac.a r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.jG = r2
            if (r3 == 0) goto Lb
            r0.jI = r3
        Lb:
            r2 = 0
            a(r1, r0, r2)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asS = r2
            r2 = 402(0x192, float:5.63E-43)
            b(r1, r2, r0, r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, org.json.JSONObject r3, java.lang.String r4) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.UP = r4
            b(r1, r2, r0, r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r3, long r4, org.json.JSONObject r6) {
            com.kwad.sdk.core.report.z$b r6 = new com.kwad.sdk.core.report.z$b
            r6.<init>()
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            r1 = -1
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 == 0) goto L14
            r0.duration = r4
            r6.att = r0
        L14:
            r4 = 934(0x3a6, float:1.309E-42)
            r5 = 0
            b(r3, r4, r6, r5)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.a.a r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            r0.ath = r3
            r3 = 40
            r1 = 0
            b(r2, r3, r0, r1)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.j r3) {
            r0 = 0
            if (r3 == 0) goto L8
            com.kwad.sdk.core.report.z$b r3 = r3.Ca()
            goto L9
        L8:
            r3 = r0
        L9:
            r1 = 141(0x8d, float:1.98E-43)
            b(r2, r1, r3, r0)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r0, com.kwad.sdk.core.report.j r1, org.json.JSONObject r2) {
            if (r1 == 0) goto L7
            com.kwad.sdk.core.report.z$b r1 = r1.Ca()
            goto L8
        L7:
            r1 = 0
        L8:
            a(r0, r1, r2)
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.sdk.core.report.z.b r4) {
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r0 = r3.downloadFilePath
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aq(r3)
            java.lang.String r0 = com.kwad.sdk.utils.ak.fC(r0)
            if (r0 == 0) goto L27
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L27
            boolean r2 = r0.equals(r1)
            if (r2 != 0) goto L27
            r4.atk = r0
            r4.atj = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo
            r3.appPackageName = r0
        L27:
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.sdk.core.report.z.b r2, org.json.JSONObject r3) {
            if (r2 == 0) goto Ld
            boolean r0 = r1.fromCache
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.report.k r0 = com.kwad.sdk.core.report.k.aJ(r1)
            r2.a(r0)
        Ld:
            r0 = 2
            b(r1, r0, r2, r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, java.lang.String r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.atc = r3
            java.lang.String r3 = ""
            boolean r3 = r2.equals(r3)
            if (r3 != 0) goto L11
            r0.atd = r2
        L11:
            r2 = 803(0x323, float:1.125E-42)
            r3 = 0
            b(r1, r2, r0, r3)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r0, java.lang.String r1, int r2, com.kwad.sdk.core.report.z.b r3) {
            if (r3 != 0) goto L7
            com.kwad.sdk.core.report.z$b r3 = new com.kwad.sdk.core.report.z$b
            r3.<init>()
        L7:
            r3.atc = r2
            java.lang.String r2 = ""
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L13
            r3.atd = r1
        L13:
            r1 = 320(0x140, float:4.48E-43)
            r2 = 0
            b(r0, r1, r3, r2)
            return
    }

    public static void aA(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 0
            h(r1, r0)
            return
    }

    public static void aB(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 58
            r(r1, r0)
            return
    }

    public static void aC(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 914(0x392, float:1.281E-42)
            r(r1, r0)
            return
    }

    public static void aD(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r3)
            int r1 = com.kwad.sdk.core.response.b.a.bo(r1)
            r0.atr = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "reportDownloadCardClose downloadStatus="
            r1.<init>(r2)
            int r2 = r0.atr
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AdReportManager"
            com.kwad.sdk.core.e.c.d(r2, r1)
            r1 = 713(0x2c9, float:9.99E-43)
            r2 = 0
            b(r3, r1, r0, r2)
            return
    }

    public static void aE(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 722(0x2d2, float:1.012E-42)
            r(r1, r0)
            return
    }

    public static void aF(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 721(0x2d1, float:1.01E-42)
            r(r1, r0)
            return
    }

    public static void aG(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            r2 = 1
            r1.asL = r2
            r0.a(r1)
            com.kwad.sdk.core.report.z$b r0 = r0.Ca()
            r1 = 804(0x324, float:1.127E-42)
            r2 = 0
            b(r3, r1, r0, r2)
            return
    }

    public static void aH(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            r2 = 2
            r1.asL = r2
            r0.a(r1)
            com.kwad.sdk.core.report.z$b r0 = r0.Ca()
            r1 = 804(0x324, float:1.127E-42)
            r2 = 0
            b(r3, r1, r0, r2)
            return
    }

    private static boolean aI(com.kwad.sdk.core.response.model.AdTemplate r2) {
            boolean r0 = com.kwad.sdk.core.response.b.d.bY(r2)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto L19
            boolean r2 = r0.ac(r2)
            if (r2 == 0) goto L19
            return r1
        L19:
            r2 = 0
            return r2
    }

    public static void at(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 4
            r(r1, r0)
            return
    }

    public static void au(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            int r1 = r3.downloadSource
            r0.downloadSource = r1
            r1 = 30
            r2 = 0
            b(r3, r1, r0, r2)
            return
    }

    public static void av(com.kwad.sdk.core.response.model.AdTemplate r2) {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.report.a.aqw
            com.kwad.sdk.core.report.a$2 r1 = new com.kwad.sdk.core.report.a$2
            r1.<init>(r2)
            r0.submit(r1)
            return
    }

    public static void aw(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 36
            r(r1, r0)
            return
    }

    public static void ax(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 38
            r(r1, r0)
            return
    }

    public static void ay(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 41
            r(r1, r0)
            return
    }

    public static void az(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aq(r1)
            r0.atj = r1
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r2 = 768(0x300, float:1.076E-42)
            b(r3, r2, r0, r1)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r2, int r3, com.kwad.sdk.core.report.z.b r4, org.json.JSONObject r5) {
            if (r2 == 0) goto L4f
            boolean r0 = aI(r2)
            if (r0 != 0) goto L9
            goto L4f
        L9:
            if (r4 != 0) goto L10
            com.kwad.sdk.core.report.z$b r4 = new com.kwad.sdk.core.report.z$b
            r4.<init>()
        L10:
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            int r0 = com.kwad.sdk.core.response.b.a.aL(r0)
            r4.ats = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdReportManager"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r0 = r2.adxResult
            r4.adxResult = r0
            r0 = 2
            if (r3 != r0) goto L47
            boolean r0 = com.kwad.sdk.core.report.a.aqy
            if (r0 == 0) goto L47
            com.kwad.sdk.core.report.z$a r0 = r4.att
            if (r0 != 0) goto L41
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            r4.att = r0
        L41:
            com.kwad.sdk.core.report.z$a r0 = r4.att
            org.json.JSONObject r1 = com.kwad.sdk.core.report.a.aqx
            r0.asO = r1
        L47:
            com.kwad.sdk.core.report.a$3 r0 = new com.kwad.sdk.core.report.a$3
            r0.<init>(r2, r3, r4, r5)
            r0.fetch()
        L4f:
            return
    }

    @java.lang.Deprecated
    public static void b(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asV = r2
            r2 = 140(0x8c, float:1.96E-43)
            b(r1, r2, r0, r3)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.sdk.core.report.j r2, org.json.JSONObject r3) {
            if (r2 == 0) goto L7
            com.kwad.sdk.core.report.z$b r2 = r2.Ca()
            goto L8
        L7:
            r2 = 0
        L8:
            r0 = 3
            b(r1, r0, r2, r3)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.z.b r3) {
            r0 = 50
            r1 = 0
            b(r2, r0, r3, r1)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r0, java.lang.String r1, int r2, com.kwad.sdk.core.report.z.b r3) {
            if (r3 != 0) goto L7
            com.kwad.sdk.core.report.z$b r3 = new com.kwad.sdk.core.report.z$b
            r3.<init>()
        L7:
            r3.atc = r2
            java.lang.String r2 = ""
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L13
            r3.atd = r1
        L13:
            r1 = 321(0x141, float:4.5E-43)
            r2 = 0
            b(r0, r1, r3, r2)
            return
    }

    public static void b(com.kwad.sdk.core.response.model.AdTemplate r3, org.json.JSONObject r4, com.kwad.sdk.core.report.j r5) {
            boolean r0 = r3.mPvReported
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r3.mPvReported = r0
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r3)
            if (r5 != 0) goto L13
            com.kwad.sdk.core.report.j r5 = new com.kwad.sdk.core.report.j
            r5.<init>()
        L13:
            int r2 = BO()
            r5.cr(r2)
            com.kwad.sdk.core.report.z$b r5 = r5.Ca()
            boolean r2 = r3.fromCache
            if (r2 == 0) goto L29
            com.kwad.sdk.core.report.k r2 = com.kwad.sdk.core.report.k.aJ(r3)
            r5.a(r2)
        L29:
            boolean r1 = D(r1)
            r5.atq = r1
            b(r3, r0, r5, r4)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.atp = r2
            r0.atD = r3
            r2 = 323(0x143, float:4.53E-43)
            r3 = 0
            b(r1, r2, r0, r3)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r2 = new com.kwad.sdk.core.report.z$b
            r2.<init>()
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aq(r3)
            r2.atj = r3
            r3 = 93
            r2.asV = r3
            r3 = 140(0x8c, float:1.96E-43)
            r0 = 0
            b(r1, r3, r2, r0)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.z.b r3) {
            r0 = 51
            r1 = 0
            b(r2, r0, r3, r1)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            int r1 = r2.downloadSource
            r0.downloadSource = r1
            r1 = 33
            b(r2, r1, r0, r3)
            return
    }

    public static void c(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.sdk.core.report.j r3) {
            r2 = 0
            if (r3 == 0) goto L8
            com.kwad.sdk.core.report.z$b r3 = r3.Ca()
            goto L9
        L8:
            r3 = r2
        L9:
            r0 = 451(0x1c3, float:6.32E-43)
            b(r1, r0, r3, r2)
            return
    }

    public static void d(com.kwad.sdk.core.response.model.AdTemplate r2, int r3, int r4) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r1 = 69
            r0.asV = r1
            r0.atl = r3
            r0.atm = r4
            r3 = 501(0x1f5, float:7.02E-43)
            r4 = 0
            b(r2, r3, r0, r4)
            return
    }

    private static void d(com.kwad.sdk.core.response.model.AdTemplate r1, int r2, org.json.JSONObject r3) {
            r0 = 0
            b(r1, r2, r0, r3)
            return
    }

    public static void d(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.z.b r3) {
            r0 = 52
            r1 = 0
            b(r2, r0, r3, r1)
            return
    }

    public static void d(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            int r1 = r2.downloadSource
            r0.downloadSource = r1
            r1 = 34
            b(r2, r1, r0, r3)
            return
    }

    public static void d(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.sdk.core.report.j r3) {
            if (r3 == 0) goto L7
            com.kwad.sdk.core.report.z$b r3 = r3.Ca()
            goto L8
        L7:
            r3 = 0
        L8:
            r0 = 140(0x8c, float:1.96E-43)
            b(r1, r0, r3, r2)
            return
    }

    public static void e(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.report.z.b r3) {
            r0 = 59
            r1 = 0
            b(r2, r0, r3, r1)
            return
    }

    public static void e(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3) {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.report.a.aqw
            com.kwad.sdk.core.report.a$1 r1 = new com.kwad.sdk.core.report.a$1
            r1.<init>(r2, r3)
            r0.submit(r1)
            return
    }

    static void f(com.kwad.sdk.core.response.model.AdTemplate r0, com.kwad.sdk.core.report.z.b r1) {
            a(r0, r1)
            return
    }

    public static void f(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            int r1 = r2.downloadSource
            r0.downloadSource = r1
            r1 = 35
            b(r2, r1, r0, r3)
            return
    }

    public static void g(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2) {
            r0 = 399(0x18f, float:5.59E-43)
            d(r1, r0, r2)
            return
    }

    public static void h(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2) {
            r0 = 400(0x190, float:5.6E-43)
            d(r1, r0, r2)
            return
    }

    public static void i(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.atz = r3
            r3 = 37
            r1 = 0
            b(r2, r3, r0, r1)
            return
    }

    public static void i(com.kwad.sdk.core.response.model.AdTemplate r1, long r2) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asX = r2
            r2 = 600(0x258, float:8.41E-43)
            r3 = 0
            b(r1, r2, r0, r3)
            return
    }

    public static void i(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2) {
            r0 = 501(0x1f5, float:7.02E-43)
            d(r1, r0, r2)
            return
    }

    public static void j(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = 0
            g(r1, r0)
            return
    }

    public static void j(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.atb = r3
            r3 = 923(0x39b, float:1.293E-42)
            r1 = 0
            b(r2, r3, r0, r1)
            return
    }

    public static void j(com.kwad.sdk.core.response.model.AdTemplate r1, long r2) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.ato = r2
            r2 = 401(0x191, float:5.62E-43)
            r3 = 0
            b(r1, r2, r0, r3)
            return
    }

    public static void j(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2) {
            r0 = 450(0x1c2, float:6.3E-43)
            d(r1, r0, r2)
            return
    }

    public static void k(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.ate = r3
            java.lang.String r3 = "wxsmallapp"
            r1 = 1
            b(r2, r3, r1, r0)
            return
    }

    public static void k(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2) {
            r0 = 451(0x1c3, float:6.32E-43)
            d(r1, r0, r2)
            return
    }

    public static void l(com.kwad.sdk.core.response.model.AdTemplate r1, int r2) {
            r0 = 0
            c(r1, r2, r0)
            return
    }

    public static void m(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asT = r3
            r3 = 759(0x2f7, float:1.064E-42)
            r1 = 0
            b(r2, r3, r0, r1)
            return
    }

    public static void n(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r0.asS = r3
            r3 = 28
            r1 = 0
            b(r2, r3, r0, r1)
            return
    }

    public static void o(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aq(r1)
            r0.atj = r1
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            b(r2, r3, r0, r1)
            return
    }

    public static void p(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            b(r2, r3, r0, r1)
            return
    }

    @java.lang.Deprecated
    public static void q(com.kwad.sdk.core.response.model.AdTemplate r1, int r2) {
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.j r2 = r0.ci(r2)
            a(r1, r2)
            return
    }

    private static void r(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = 0
            b(r2, r3, r1, r0)
            return
    }
}
