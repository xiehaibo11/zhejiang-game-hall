package com.kwad.sdk.core.network.b;

public final class d implements com.kwad.sdk.core.network.b.b {
    private static boolean apZ = true;
    public static double aqa = 1.0d;
    private static volatile boolean aqe = false;
    private static java.lang.String aqf = "";
    private long aqb;
    private long aqc;
    private long aqd;
    private com.kwad.sdk.core.network.k aqg;

    static {
            return
    }

    public d() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.aqb = r0
            r2.aqc = r0
            r2.aqd = r0
            com.kwad.sdk.core.network.k r0 = new com.kwad.sdk.core.network.k
            r0.<init>()
            r2.aqg = r0
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            double r0 = r0.nextDouble()
            com.kwad.sdk.core.network.b.d.aqa = r0
            return
    }

    private static java.lang.String BB() {
            boolean r0 = com.kwad.sdk.core.network.b.d.aqe
            if (r0 == 0) goto L7
            java.lang.String r0 = com.kwad.sdk.core.network.b.d.aqf
            return r0
        L7:
            java.lang.String r0 = okhttp3.internal.Version.userAgent()     // Catch: java.lang.Throwable -> Le
            com.kwad.sdk.core.network.b.d.aqf = r0     // Catch: java.lang.Throwable -> Le
            goto L1a
        Le:
            java.lang.Class<okhttp3.internal.Version> r0 = okhttp3.internal.Version.class
            java.lang.String r1 = "userAgent"
            java.lang.Object r0 = com.kwad.sdk.utils.s.c(r0, r1)     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L1a
            com.kwad.sdk.core.network.b.d.aqf = r0     // Catch: java.lang.Exception -> L1a
        L1a:
            r0 = 1
            com.kwad.sdk.core.network.b.d.aqe = r0
            java.lang.String r0 = com.kwad.sdk.core.network.b.d.aqf
            return r0
    }

    private com.kwad.sdk.core.network.b.d BC() {
            r3 = this;
            com.kwad.sdk.core.network.k r0 = r3.aqg
            long r1 = android.os.SystemClock.elapsedRealtime()
            r0.apr = r1
            return r3
    }

    private com.kwad.sdk.core.network.b.d BD() {
            r3 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r3.aqc = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "this.responseReceiveTime:"
            r0.<init>(r1)
            long r1 = r3.aqc
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
            return r3
    }

    private com.kwad.sdk.core.network.b.d BE() {
            r5 = this;
            long r0 = r5.aqb
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2e
            long r0 = r5.aqc
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2e
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r1 = r5.aqc
            long r3 = r5.aqb
            long r1 = r1 - r3
            r0.apy = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.waiting_response_cost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apy
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L2e:
            return r5
    }

    private com.kwad.sdk.core.network.b.d BF() {
            r5 = this;
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r0 = r0.apr
            boolean r0 = Z(r0)
            if (r0 == 0) goto L56
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.aqb = r0
            com.kwad.sdk.core.network.k r2 = r5.aqg
            long r3 = r2.apr
            long r0 = r0 - r3
            r2.apl = r0
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r0 = r0.apj
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2c
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r1 = r0.apl
            com.kwad.sdk.core.network.k r3 = r5.aqg
            long r3 = r3.apj
            long r1 = r1 - r3
            r0.apk = r1
        L2c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.request_create_cost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apl
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.requestAddParamsCost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apk
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L56:
            return r5
    }

    private com.kwad.sdk.core.network.b.d BG() {
            r5 = this;
            long r0 = r5.aqc
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2a
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.aqd = r0
            com.kwad.sdk.core.network.k r2 = r5.aqg
            long r3 = r5.aqc
            long r0 = r0 - r3
            r2.apw = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.response_parse_cost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apw
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L2a:
            return r5
    }

    private com.kwad.sdk.core.network.b.d BH() {
            r5 = this;
            long r0 = r5.aqd
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2b
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r3 = r5.aqd
            long r1 = r1 - r3
            r0.apD = r1
            r5.BI()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.response_done_cost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apD
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L2b:
            return r5
    }

    private void BI() {
            r3 = this;
            com.kwad.sdk.core.network.k r0 = r3.aqg
            if (r0 == 0) goto L19
            int r0 = r0.apC
            r1 = 1
            if (r0 != r1) goto L19
            com.kwad.sdk.core.network.k r0 = r3.aqg
            long r0 = r0.apD
            boolean r0 = ac(r0)
            if (r0 != 0) goto L19
            com.kwad.sdk.core.network.k r0 = r3.aqg
            r1 = -1
            r0.apD = r1
        L19:
            return
    }

    private com.kwad.sdk.core.network.b.d BJ() {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            float r1 = com.kwad.sdk.ip.direct.a.FH()
            int r1 = (int) r1
            r0.apG = r1
            com.kwad.sdk.core.network.k r0 = r2.aqg
            float r1 = com.kwad.sdk.ip.direct.a.FI()
            int r1 = (int) r1
            r0.apH = r1
            com.kwad.sdk.core.network.k r0 = r2.aqg
            float r1 = com.kwad.sdk.ip.direct.a.FJ()
            int r1 = (int) r1
            r0.apI = r1
            return r2
    }

    private void BK() {
            r3 = this;
            com.kwad.sdk.core.network.k r0 = r3.aqg
            com.kwad.sdk.core.network.j r0 = b(r0)
            java.lang.Class<com.kwad.sdk.core.network.l> r1 = com.kwad.sdk.core.network.l.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.core.network.l r1 = (com.kwad.sdk.core.network.l) r1
            if (r1 == 0) goto L13
            r1.a(r0)
        L13:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "reportError"
            r1.<init>(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            dk(r0)
            return
    }

    private static boolean Z(long r2) {
            r0 = -1
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 == 0) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }

    private com.kwad.sdk.core.network.b.d aa(long r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.apx = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "responseSize:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private com.kwad.sdk.core.network.b.d ab(long r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.apz = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "totalCost:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private static boolean ac(long r2) {
            r0 = 50
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 < 0) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }

    private static com.kwad.sdk.core.network.j b(com.kwad.sdk.core.network.k r2) {
            com.kwad.sdk.core.network.j r0 = new com.kwad.sdk.core.network.j
            r0.<init>()
            java.lang.String r1 = r2.errorMsg
            r0.errorMsg = r1
            java.lang.String r1 = r2.host
            r0.host = r1
            int r1 = r2.httpCode
            r0.httpCode = r1
            java.lang.String r1 = r2.apg
            r0.apg = r1
            java.lang.String r1 = r2.url
            r0.url = r1
            int r1 = r2.aph
            r0.aph = r1
            java.lang.String r2 = r2.api
            r0.api = r2
            return r0
    }

    private static boolean b(com.kwad.sdk.core.network.j r2) {
            java.lang.String r0 = r2.url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String r2 = r2.url
            java.lang.String r2 = r2.toLowerCase()
            java.lang.String r0 = "beta"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "test"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "staging"
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto L29
            goto L2b
        L29:
            r2 = 0
            return r2
        L2b:
            return r1
    }

    private com.kwad.sdk.core.network.b.d cd(int r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.httpCode = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "http_code:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private com.kwad.sdk.core.network.b.d ce(int r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.apC = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "hasData:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private com.kwad.sdk.core.network.b.d cf(int r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.result = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "result:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private static void dk(java.lang.String r1) {
            boolean r0 = com.kwad.sdk.core.network.b.d.apZ
            if (r0 == 0) goto L9
            java.lang.String r0 = "NetworkMonitorRecorder"
            com.kwad.sdk.core.e.c.d(r0, r1)
        L9:
            return
    }

    private com.kwad.sdk.core.network.b.d dl(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return r2
        L7:
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.url = r3
            java.lang.String r0 = "?"
            boolean r0 = r3.contains(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = "\\?"
            java.lang.String[] r0 = r3.split(r0)
            int r1 = r0.length
            if (r1 <= 0) goto L1f
            r3 = 0
            r3 = r0[r3]
        L1f:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L36
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "url:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
        L36:
            return r2
    }

    private com.kwad.sdk.core.network.b.d dm(java.lang.String r2) {
            r1 = this;
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L22
            com.kwad.sdk.core.network.k r0 = r1.aqg     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getHost()     // Catch: java.lang.Exception -> L22
            r0.host = r2     // Catch: java.lang.Exception -> L22
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            java.lang.String r0 = "host:"
            r2.<init>(r0)     // Catch: java.lang.Exception -> L22
            com.kwad.sdk.core.network.k r0 = r1.aqg     // Catch: java.lang.Exception -> L22
            java.lang.String r0 = r0.host     // Catch: java.lang.Exception -> L22
            r2.append(r0)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L22
            dk(r2)     // Catch: java.lang.Exception -> L22
            goto L2c
        L22:
            r2 = move-exception
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            java.lang.String r0 = "NetworkMonitorRecorder"
            com.kwad.sdk.core.e.c.e(r0, r2)
        L2c:
            return r1
    }

    private com.kwad.sdk.core.network.b.d dn(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.network.k r0 = r1.aqg
            r0.errorMsg = r2
            dk(r2)
            return r1
    }

    private com.kwad.sdk.core.network.b.d do(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.apg = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "reqType:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            java.lang.String r3 = com.kwad.sdk.ip.direct.a.FG()
            r2.dq(r3)
            r2.BJ()
            return r2
    }

    private com.kwad.sdk.core.network.b.d dp(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.network.k r0 = r2.aqg
            r0.apB = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "requestId:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            dk(r3)
            return r2
    }

    private com.kwad.sdk.core.network.b.d dq(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.network.k r0 = r1.aqg
            r0.apE = r2
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bt() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BC()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bu() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BD()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bv() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BE()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bw() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BF()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bx() {
            r5 = this;
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r0 = r0.apr
            boolean r0 = Z(r0)
            if (r0 == 0) goto L2c
            com.kwad.sdk.core.network.k r0 = r5.aqg
            long r1 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.core.network.k r3 = r5.aqg
            long r3 = r3.apr
            long r1 = r1 - r3
            r0.apj = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "info.request_prepare_cost:"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r5.aqg
            long r1 = r1.apj
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L2c:
            return r5
    }

    @Override
    public final com.kwad.sdk.core.network.b.b By() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BG()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Bz() {
            r1 = this;
            com.kwad.sdk.core.network.b.d r0 = r1.BH()
            return r0
    }

    @Override
    public final com.kwad.sdk.core.network.b.b Y(long r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.aa(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b bZ(int r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.cd(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b ca(int r1) {
            r0 = this;
            r1 = 1
            com.kwad.sdk.core.network.b.d r1 = r0.ce(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b cb(int r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.cf(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b cc(int r5) {
            r4 = this;
            com.kwad.sdk.core.network.k r0 = r4.aqg
            r0.apF = r5
            long r0 = (long) r5
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 == 0) goto L10
            com.kwad.sdk.core.network.k r5 = r4.aqg
            r0 = 1
            r5.aph = r0
        L10:
            return r4
    }

    @Override
    public final com.kwad.sdk.core.network.b.b df(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.dl(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b dg(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.dm(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b dh(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.dn(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b di(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.do(r1)
            return r1
    }

    @Override
    public final com.kwad.sdk.core.network.b.b dj(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.core.network.b.d r1 = r0.dp(r1)
            return r1
    }

    @Override
    public final void report() {
            r7 = this;
            com.kwad.sdk.core.network.k r0 = r7.aqg
            boolean r0 = b(r0)
            if (r0 == 0) goto L9
            return
        L9:
            com.kwad.sdk.core.network.k r0 = r7.aqg
            java.lang.String r1 = BB()
            r0.api = r1
            com.kwad.sdk.core.network.k r0 = r7.aqg
            int r0 = r0.httpCode
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 == r1) goto L1d
            r7.BK()
            return
        L1d:
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.core.network.k r2 = r7.aqg
            long r2 = r2.apr
            boolean r2 = Z(r2)
            r3 = -1
            if (r2 == 0) goto L33
            com.kwad.sdk.core.network.k r2 = r7.aqg
            long r5 = r2.apr
            long r0 = r0 - r5
            goto L34
        L33:
            r0 = r3
        L34:
            r7.ab(r0)
            r5 = 30000(0x7530, double:1.4822E-319)
            int r2 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r2 > 0) goto L68
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L42
            goto L68
        L42:
            java.lang.Class<com.kwad.sdk.core.network.l> r0 = com.kwad.sdk.core.network.l.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.core.network.l r0 = (com.kwad.sdk.core.network.l) r0
            if (r0 == 0) goto L51
            com.kwad.sdk.core.network.k r1 = r7.aqg
            r0.a(r1)
        L51:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "report normal"
            r0.<init>(r1)
            com.kwad.sdk.core.network.k r1 = r7.aqg
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            dk(r0)
        L68:
            return
    }
}
