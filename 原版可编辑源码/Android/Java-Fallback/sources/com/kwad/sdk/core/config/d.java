package com.kwad.sdk.core.config;

public class d {
    private static volatile com.kwad.sdk.core.response.model.SdkConfigData amA;
    private static final java.util.concurrent.atomic.AtomicBoolean amz = null;


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.core.config.d.amz = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean R(long r2) {
            com.kwad.sdk.core.config.item.m r0 = com.kwad.sdk.core.config.c.akC
            java.lang.Long r0 = r0.Ag()
            long r0 = r0.longValue()
            long r2 = r2 & r0
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 == 0) goto L13
            r2 = 1
            return r2
        L13:
            r2 = 0
            return r2
    }

    public static double a(com.kwad.sdk.core.config.item.f r2) {
            java.lang.Object r0 = b(r2)
            java.lang.Double r0 = (java.lang.Double) r0
            if (r0 == 0) goto L9
            goto L10
        L9:
            java.lang.Object r2 = r2.zZ()
            r0 = r2
            java.lang.Double r0 = (java.lang.Double) r0
        L10:
            double r0 = r0.doubleValue()
            return r0
    }

    public static int a(com.kwad.sdk.core.config.item.k r1) {
            java.lang.Object r0 = b(r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto L9
            goto L10
        L9:
            java.lang.Object r1 = r1.zZ()
            r0 = r1
            java.lang.Integer r0 = (java.lang.Integer) r0
        L10:
            int r1 = r0.intValue()
            return r1
    }

    public static long a(com.kwad.sdk.core.config.item.m r2) {
            java.lang.Object r0 = b(r2)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 == 0) goto L9
            goto L10
        L9:
            java.lang.Object r2 = r2.zZ()
            r0 = r2
            java.lang.Long r0 = (java.lang.Long) r0
        L10:
            long r0 = r0.longValue()
            return r0
    }

    public static java.lang.String a(com.kwad.sdk.core.config.item.p r1) {
            java.lang.Object r0 = b(r1)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L9
            return r0
        L9:
            java.lang.Object r1 = r1.zZ()
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    public static org.json.JSONObject a(com.kwad.sdk.core.config.item.e r1) {
            java.lang.Object r0 = b(r1)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            if (r0 == 0) goto L9
            return r0
        L9:
            java.lang.Object r1 = r1.zZ()
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            return r1
    }

    public static boolean a(com.kwad.sdk.core.config.item.d r1) {
            java.lang.Object r0 = b(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto L9
            goto L10
        L9:
            java.lang.Object r1 = r1.zZ()
            r0 = r1
            java.lang.Boolean r0 = (java.lang.Boolean) r0
        L10:
            boolean r1 = r0.booleanValue()
            return r1
    }

    public static synchronized void aQ(android.content.Context r3) {
            java.lang.Class<com.kwad.sdk.core.config.d> r0 = com.kwad.sdk.core.config.d.class
            monitor-enter(r0)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.sdk.core.config.d.amz     // Catch: java.lang.Throwable -> L28
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto Ld
            monitor-exit(r0)
            return
        Ld:
            java.lang.String r1 = "SdkConfigManager"
            java.lang.String r2 = "loadCache"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L28
            com.kwad.sdk.core.config.c.init()     // Catch: java.lang.Throwable -> L28
            yZ()     // Catch: java.lang.Throwable -> L28
            com.kwad.sdk.core.config.b.aP(r3)     // Catch: java.lang.Throwable -> L28
            zw()     // Catch: java.lang.Throwable -> L28
            java.util.concurrent.atomic.AtomicBoolean r3 = com.kwad.sdk.core.config.d.amz     // Catch: java.lang.Throwable -> L28
            r1 = 1
            r3.set(r1)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static <T> T b(com.kwad.sdk.core.config.item.b<T> r2) {
            boolean r0 = isLoaded()
            if (r0 != 0) goto L15
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            com.kwad.sdk.core.config.b.a(r0, r2)
            com.kwad.sdk.core.config.d$1 r1 = new com.kwad.sdk.core.config.d$1
            r1.<init>(r0)
            com.kwad.sdk.utils.g.execute(r1)
        L15:
            java.lang.Object r0 = r2.getValue()
            if (r0 == 0) goto L1c
            return r0
        L1c:
            java.lang.Object r2 = r2.zZ()
            return r2
    }

    public static boolean b(com.kwad.sdk.core.config.item.k r3) {
            java.lang.Object r0 = b(r3)
            java.lang.Integer r0 = (java.lang.Integer) r0
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L12
            int r3 = r0.intValue()
            if (r3 <= 0) goto L11
            return r1
        L11:
            return r2
        L12:
            java.lang.Object r3 = r3.zZ()
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            if (r3 <= 0) goto L1f
            return r1
        L1f:
            return r2
    }

    public static void c(com.kwad.sdk.core.response.model.SdkConfigData r1) {
            java.lang.Class<com.kwad.sdk.core.config.d> r0 = com.kwad.sdk.core.config.d.class
            monitor-enter(r0)
            com.kwad.sdk.core.config.d.amA = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public static boolean gF() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alP
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static java.lang.String getLogObiwanData() {
            com.kwad.sdk.core.config.item.l r0 = com.kwad.sdk.core.config.c.alU
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static java.lang.String getUserAgent() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.alD
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static boolean isCanUseTk() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alr
            boolean r0 = a(r0)
            return r0
    }

    public static boolean isLoaded() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.core.config.d.amz
            boolean r0 = r0.get()
            return r0
    }

    public static boolean vK() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amm
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static java.util.List<java.lang.String> xA() {
            com.kwad.sdk.core.config.item.q r0 = com.kwad.sdk.core.config.c.akK
            java.util.List r0 = r0.Ah()
            return r0
    }

    public static boolean xB() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alC
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean xC() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alE
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean xE() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alY
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean xF() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alZ
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static int xG() {
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.amA
            if (r0 == 0) goto L9
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.amA
            int r0 = r0.goodIdcThresholdMs
            return r0
        L9:
            r0 = 200(0xc8, float:2.8E-43)
            return r0
    }

    public static int xH() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.amb
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static double xI() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.sdk.core.config.c.alL
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            double r0 = (double) r0
            return r0
    }

    public static boolean xJ() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amp
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean xN() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amy
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static int xr() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akm
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean xs() {
            r0 = 0
            return r0
    }

    public static boolean xt() {
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akq
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto L13
            return r1
        L13:
            r0 = 0
            return r0
    }

    public static boolean xu() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alc
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean xv() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.ale
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean xw() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.ald
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean xx() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alb
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static java.lang.String xy() {
            com.kwad.sdk.core.config.item.h r0 = com.kwad.sdk.core.config.c.alp
            java.lang.String r0 = r0.getImei()
            return r0
    }

    public static java.lang.String xz() {
            com.kwad.sdk.core.config.item.h r0 = com.kwad.sdk.core.config.c.alp
            java.lang.String r0 = r0.getOaid()
            return r0
    }

    public static boolean yX() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.aku
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int yY() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akv
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    @com.ksad.annotation.invoker.ForInvoker(methodId = "initConfigList")
    private static void yZ() {
            com.kwad.components.ad.d.a.init()
            com.kwad.components.ad.feed.a.a.init()
            com.kwad.components.ad.fullscreen.a.a.init()
            com.kwad.components.ad.interstitial.a.a.init()
            com.kwad.components.ad.reward.a.a.init()
            com.kwad.components.ad.splashscreen.b.a.init()
            return
    }

    public static boolean zA() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.akB
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean zB() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alX
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zC() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akz
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static int zD() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alG
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static int zE() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alF
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean zF() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alH
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean zG() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alI
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static float zH() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.sdk.core.config.c.alJ
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            r1 = 0
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 <= 0) goto L16
            r1 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 > 0) goto L16
            goto L19
        L16:
            r0 = 1050253722(0x3e99999a, float:0.3)
        L19:
            return r0
    }

    public static float zI() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.sdk.core.config.c.alK
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            return r0
    }

    public static boolean zJ() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alM
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean zK() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alQ
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            if (r0 <= 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean zL() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alW
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static long zM() {
            com.kwad.sdk.core.config.item.m r0 = com.kwad.sdk.core.config.c.alV
            java.lang.Long r0 = r0.Ag()
            long r0 = r0.longValue()
            return r0
    }

    public static boolean zN() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.ama
            boolean r0 = r0.Ae()
            return r0
    }

    public static com.kwad.sdk.core.network.idc.a.a zO() {
            com.kwad.sdk.core.config.item.i r0 = com.kwad.sdk.core.config.c.amc
            java.lang.Object r0 = r0.getValue()
            com.kwad.sdk.core.network.idc.a.a r0 = (com.kwad.sdk.core.network.idc.a.a) r0
            return r0
    }

    public static long zP() {
            com.kwad.sdk.core.config.item.m r0 = com.kwad.sdk.core.config.c.amd
            java.lang.Long r0 = r0.Ag()
            long r0 = r0.longValue()
            return r0
    }

    public static int zQ() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.ame
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean zR() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.sdk.core.config.c.amf
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    public static boolean zS() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.amg
            boolean r0 = r0.Ae()
            return r0
    }

    public static boolean zT() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.ami
            boolean r0 = r0.Ae()
            return r0
    }

    public static java.lang.String zU() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.amj
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static java.lang.String zV() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.amk
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static java.lang.String zW() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.aml
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static int zX() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.amo
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean zY() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.amq
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static java.util.List<java.lang.String> za() {
            com.kwad.sdk.core.config.item.q r0 = com.kwad.sdk.core.config.c.akM
            java.util.List r0 = r0.Ah()
            return r0
    }

    public static java.lang.String zb() {
            com.kwad.sdk.core.config.item.l r0 = com.kwad.sdk.core.config.c.akJ
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static java.util.List<java.lang.String> zc() {
            com.kwad.sdk.core.config.item.q r0 = com.kwad.sdk.core.config.c.akL
            java.util.List r0 = r0.Ah()
            return r0
    }

    public static int zd() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.amh
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean ze() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.akE
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static java.lang.String zf() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.akG
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static java.lang.String zg() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.sdk.core.config.c.akH
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static boolean zh() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akr
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zi() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.aks
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean zj() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akt
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zk() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akT
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static int zl() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akU
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static int zm() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akV
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static long zn() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akW
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            long r0 = (long) r0
            r2 = 60000(0xea60, double:2.9644E-319)
            long r0 = r0 * r2
            return r0
    }

    public static boolean zo() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alf
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean zp() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alg
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zq() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.aln
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean zr() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alo
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean zs() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alt
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static boolean zt() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.als
            boolean r0 = a(r0)
            return r0
    }

    public static boolean zu() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alv
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zv() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.alw
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static com.kwad.sdk.core.response.model.SdkConfigData zw() {
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.amA
            if (r0 != 0) goto L3c
            java.lang.Class<com.kwad.sdk.core.config.d> r0 = com.kwad.sdk.core.config.d.class
            monitor-enter(r0)
            com.kwad.sdk.core.response.model.SdkConfigData r1 = com.kwad.sdk.core.config.d.amA     // Catch: java.lang.Throwable -> L39
            if (r1 != 0) goto L37
            com.kwad.sdk.core.response.model.SdkConfigData r1 = new com.kwad.sdk.core.response.model.SdkConfigData     // Catch: java.lang.Throwable -> L39
            r1.<init>()     // Catch: java.lang.Throwable -> L39
            com.kwad.sdk.core.config.d.amA = r1     // Catch: java.lang.Throwable -> L39
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.HD()     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = com.kwad.sdk.utils.y.cg(r1)     // Catch: java.lang.Throwable -> L39
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L39
            if (r2 != 0) goto L30
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2b java.lang.Throwable -> L39
            r2.<init>(r1)     // Catch: org.json.JSONException -> L2b java.lang.Throwable -> L39
            com.kwad.sdk.core.response.model.SdkConfigData r1 = com.kwad.sdk.core.config.d.amA     // Catch: org.json.JSONException -> L2b java.lang.Throwable -> L39
            r1.parseJson(r2)     // Catch: org.json.JSONException -> L2b java.lang.Throwable -> L39
            goto L37
        L2b:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)     // Catch: java.lang.Throwable -> L39
            goto L37
        L30:
            java.lang.String r1 = "SdkConfigManager"
            java.lang.String r2 = "configCache is empty"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L39
        L37:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            goto L3c
        L39:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            throw r1
        L3c:
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.amA
            return r0
    }

    public static boolean zx() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akx
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean zy() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.aky
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int zz() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.sdk.core.config.c.akA
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }
}
