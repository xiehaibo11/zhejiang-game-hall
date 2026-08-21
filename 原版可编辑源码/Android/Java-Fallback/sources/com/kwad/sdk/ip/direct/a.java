package com.kwad.sdk.ip.direct;

public final class a {
    private static java.lang.Runnable aCA = null;
    private static int aCg = -1;
    private static volatile boolean aCh;
    private static java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> aCi;
    private static java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> aCj;
    private static java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> aCk;
    private static java.util.List<com.kwad.sdk.ip.direct.c> aCl;
    private static java.util.List<com.kwad.sdk.ip.direct.c> aCm;
    private static java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> aCn;
    private static java.util.concurrent.atomic.AtomicInteger aCo;
    private static com.kwad.sdk.ip.direct.c aCp;
    private static android.os.HandlerThread aCq;
    private static android.os.Handler aCr;
    private static volatile boolean aCs;
    private static float aCt;
    private static float aCu;
    private static float aCv;
    private static int aCw;
    private static volatile boolean aCx;
    private static volatile boolean aCy;
    private static com.kwad.sdk.core.NetworkMonitor.a aCz;




    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCi = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCj = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCk = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCl = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCm = r0
            java.util.concurrent.PriorityBlockingQueue r0 = new java.util.concurrent.PriorityBlockingQueue
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCn = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.a.aCo = r0
            com.kwad.sdk.ip.direct.a.aCs = r1
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            com.kwad.sdk.ip.direct.a.aCt = r0
            com.kwad.sdk.ip.direct.a.aCu = r0
            com.kwad.sdk.ip.direct.a.aCv = r0
            com.kwad.sdk.ip.direct.a.aCw = r1
            com.kwad.sdk.ip.direct.a.aCx = r1
            com.kwad.sdk.ip.direct.a.aCy = r1
            com.kwad.sdk.ip.direct.a$1 r0 = new com.kwad.sdk.ip.direct.a$1
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCz = r0
            com.kwad.sdk.ip.direct.a$3 r0 = new com.kwad.sdk.ip.direct.a$3
            r0.<init>()
            com.kwad.sdk.ip.direct.a.aCA = r0
            return
    }

    private static void C(java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> r2) {
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            b(r2, r0)
            java.util.List<com.kwad.sdk.ip.direct.c> r2 = com.kwad.sdk.ip.direct.a.aCl
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L30
            java.util.List<com.kwad.sdk.ip.direct.c> r2 = com.kwad.sdk.ip.direct.a.aCl
            java.util.Iterator r2 = r2.iterator()
            r0 = 0
        L14:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r2.next()
            com.kwad.sdk.ip.direct.c r1 = (com.kwad.sdk.ip.direct.c) r1
            float r1 = r1.Gb()
            float r0 = r0 + r1
            goto L14
        L26:
            java.util.List<com.kwad.sdk.ip.direct.c> r2 = com.kwad.sdk.ip.direct.a.aCl
            int r2 = r2.size()
            float r2 = (float) r2
            float r0 = r0 / r2
            com.kwad.sdk.ip.direct.a.aCt = r0
        L30:
            return
    }

    private static void D(java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> r4) {
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            b(r4, r0)
            java.util.List<com.kwad.sdk.ip.direct.c> r4 = com.kwad.sdk.ip.direct.a.aCm
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto Le
            return
        Le:
            r4 = 0
            r0 = 0
            java.util.List<com.kwad.sdk.ip.direct.c> r1 = com.kwad.sdk.ip.direct.a.aCm
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L33
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.ip.direct.c r2 = (com.kwad.sdk.ip.direct.c) r2
            int r3 = r2.getWeight()
            int r4 = r4 + r3
            int r3 = r2.getWeight()
            float r3 = (float) r3
            float r2 = r2.Gb()
            float r3 = r3 * r2
            float r0 = r0 + r3
            goto L16
        L33:
            if (r4 == 0) goto L39
            float r4 = (float) r4
            float r0 = r0 / r4
            com.kwad.sdk.ip.direct.a.aCu = r0
        L39:
            return
    }

    private static void FF() {
            boolean r0 = com.kwad.sdk.ip.direct.a.aCs
            if (r0 == 0) goto L5
            return
        L5:
            android.os.Handler r0 = com.kwad.sdk.ip.direct.a.aCr
            if (r0 == 0) goto L11
            r1 = 1
            android.os.Message r0 = r0.obtainMessage(r1)
            r0.sendToTarget()
        L11:
            return
    }

    public static java.lang.String FG() {
            com.kwad.sdk.ip.direct.c r0 = com.kwad.sdk.ip.direct.a.aCp
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getIp()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public static float FH() {
            float r0 = com.kwad.sdk.ip.direct.a.aCt
            return r0
    }

    public static float FI() {
            float r0 = com.kwad.sdk.ip.direct.a.aCu
            return r0
    }

    public static float FJ() {
            float r0 = com.kwad.sdk.ip.direct.a.aCv
            return r0
    }

    private static void FK() {
            FP()
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = com.kwad.sdk.ip.direct.a.aCi
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCj
            clear()
            boolean r2 = com.kwad.sdk.ip.direct.a.aCs
            java.lang.String r3 = "IpDirect_Helper"
            if (r2 == 0) goto L16
            java.lang.String r0 = "is picking return"
            com.kwad.sdk.core.e.c.d(r3, r0)
            return
        L16:
            java.lang.String r2 = "start pick"
            com.kwad.sdk.core.e.c.d(r3, r2)
            r2 = 1
            com.kwad.sdk.ip.direct.a.aCs = r2
            C(r0)
            D(r1)
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 == 0) goto L53
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L53
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 != 0) goto L42
            com.kwad.sdk.ip.direct.a.aCs = r1
            return
        L42:
            boolean r0 = r0.xF()
            if (r0 != 0) goto L50
            java.lang.String r0 = "isIpPreferEnable:false"
            com.kwad.sdk.core.e.c.d(r3, r0)
            com.kwad.sdk.ip.direct.a.aCs = r1
            return
        L50:
            FN()
        L53:
            com.kwad.sdk.ip.direct.a.aCs = r1
            java.lang.String r0 = "end pick"
            com.kwad.sdk.core.e.c.d(r3, r0)
            return
    }

    private static void FL() {
            boolean r0 = FM()
            if (r0 != 0) goto L9
            FO()
        L9:
            return
    }

    private static boolean FM() {
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            java.util.List<com.kwad.sdk.ip.direct.c> r1 = com.kwad.sdk.ip.direct.a.aCm
            boolean r2 = r0.isEmpty()
            java.lang.String r3 = "IpDirect_Helper"
            r4 = 1
            if (r2 != 0) goto L38
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            int r2 = r0.size()
            int r1 = r1.nextInt(r2)
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.ip.direct.c r0 = (com.kwad.sdk.ip.direct.c) r0
            com.kwad.sdk.ip.direct.a.aCp = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "set from recommend:"
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.a.aCp
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r3, r0)
            com.kwad.sdk.ip.direct.a.aCw = r4
            return r4
        L38:
            boolean r0 = r1.isEmpty()
            r2 = 0
            if (r0 != 0) goto L97
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.util.Iterator r5 = r1.iterator()
            r6 = r2
        L49:
            boolean r7 = r5.hasNext()
            if (r7 == 0) goto L5b
            java.lang.Object r7 = r5.next()
            com.kwad.sdk.ip.direct.c r7 = (com.kwad.sdk.ip.direct.c) r7
            int r7 = r7.getWeight()
            int r6 = r6 + r7
            goto L49
        L5b:
            int r0 = r0.nextInt(r6)
            r5 = r2
        L60:
            int r6 = r1.size()
            if (r5 >= r6) goto L78
            java.lang.Object r6 = r1.get(r5)
            com.kwad.sdk.ip.direct.c r6 = (com.kwad.sdk.ip.direct.c) r6
            int r6 = r6.getWeight()
            int r0 = r0 - r6
            if (r0 >= 0) goto L75
            r2 = r5
            goto L78
        L75:
            int r5 = r5 + 1
            goto L60
        L78:
            java.lang.Object r0 = r1.get(r2)
            com.kwad.sdk.ip.direct.c r0 = (com.kwad.sdk.ip.direct.c) r0
            com.kwad.sdk.ip.direct.a.aCp = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "set from backUp:"
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.a.aCp
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r3, r0)
            r0 = 2
            com.kwad.sdk.ip.direct.a.aCw = r0
            return r4
        L97:
            return r2
    }

    private static void FN() {
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = com.kwad.sdk.ip.direct.a.aCk
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L47
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r1 = (com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo) r1
            if (r1 == 0) goto Lc
            java.lang.String r2 = r1.ip
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lc
            java.lang.String r1 = r1.ip
            int r2 = com.kwad.sdk.ip.direct.a.aCg
            long r2 = (long) r2
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.b.f(r1, r2)
            boolean r2 = r1.isSuccess()
            if (r2 == 0) goto Lc
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r2 = com.kwad.sdk.ip.direct.a.aCn
            r2.offer(r1)
            goto Lc
        L37:
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            java.lang.Object r0 = r0.peek()
            com.kwad.sdk.ip.direct.c r0 = (com.kwad.sdk.ip.direct.c) r0
            if (r0 == 0) goto L47
            float r0 = r0.Gb()
            com.kwad.sdk.ip.direct.a.aCv = r0
        L47:
            return
    }

    private static void FO() {
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            java.lang.Object r0 = r0.peek()
            com.kwad.sdk.ip.direct.c r0 = (com.kwad.sdk.ip.direct.c) r0
            float r1 = r0.Gb()
            int r2 = com.kwad.sdk.ip.direct.a.aCg
            float r2 = (float) r2
            int r1 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r1 >= 0) goto L36
            com.kwad.sdk.ip.direct.a.aCp = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "set from Other:"
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.a.aCp
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "IpDirect_Helper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = 3
            com.kwad.sdk.ip.direct.a.aCw = r0
        L36:
            return
    }

    private static void FP() {
            int r0 = com.kwad.sdk.ip.direct.a.aCg
            r1 = -1
            if (r0 != r1) goto L1a
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 == 0) goto L16
            int r0 = r0.xG()
            com.kwad.sdk.ip.direct.a.aCg = r0
            return
        L16:
            r0 = 200(0xc8, float:2.8E-43)
            com.kwad.sdk.ip.direct.a.aCg = r0
        L1a:
            return
    }

    private static boolean FQ() {
            boolean r0 = com.kwad.sdk.ip.direct.a.aCx
            r1 = 0
            java.lang.String r2 = "IpDirect_Helper"
            if (r0 == 0) goto Ld
            java.lang.String r0 = "sHasNetChanged direct can not use"
            com.kwad.sdk.core.e.c.d(r2, r0)
            return r1
        Ld:
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.ip.direct.a.aCo
            int r0 = r0.get()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "value:"
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.kwad.sdk.core.e.c.d(r2, r3)
            r2 = 3
            if (r0 > r2) goto L29
            r0 = 1
            return r0
        L29:
            return r1
    }

    private static void FR() {
            java.util.concurrent.atomic.AtomicInteger r0 = com.kwad.sdk.ip.direct.a.aCo
            r0.getAndIncrement()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "addFailedTimes:"
            r0.<init>(r1)
            java.util.concurrent.atomic.AtomicInteger r1 = com.kwad.sdk.ip.direct.a.aCo
            int r1 = r1.intValue()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "IpDirect_Helper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            return
    }

    public static void FS() {
            boolean r0 = com.kwad.sdk.ip.direct.a.aCh
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.ip.direct.c r0 = com.kwad.sdk.ip.direct.a.aCp
            if (r0 == 0) goto L20
            java.lang.String r0 = r0.getIp()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            goto L20
        L14:
            android.os.Handler r0 = com.kwad.sdk.ip.direct.a.aCr
            if (r0 == 0) goto L20
            r1 = 2
            android.os.Message r0 = r0.obtainMessage(r1)
            r0.sendToTarget()
        L20:
            return
    }

    public static void FT() {
            FR()
            FU()
            FV()
            r0 = 0
            com.kwad.sdk.ip.direct.a.aCw = r0
            FL()
            FK()
            return
    }

    private static void FU() {
            com.kwad.sdk.ip.direct.c r0 = com.kwad.sdk.ip.direct.a.aCp
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            goto Lb
        L7:
            java.lang.String r0 = r0.getIp()
        Lb:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L12
            return
        L12:
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCi
            java.util.Iterator r1 = r1.iterator()
        L18:
            boolean r2 = r1.hasNext()
            r3 = 0
            if (r2 == 0) goto L30
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r2 = (com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo) r2
            if (r2 == 0) goto L18
            java.lang.String r4 = r2.ip
            boolean r4 = android.text.TextUtils.equals(r0, r4)
            if (r4 == 0) goto L18
            goto L31
        L30:
            r2 = r3
        L31:
            if (r2 == 0) goto L39
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCi
            r1.remove(r2)
            r2 = r3
        L39:
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCj
            java.util.Iterator r1 = r1.iterator()
        L3f:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L56
            java.lang.Object r4 = r1.next()
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r4 = (com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo) r4
            if (r4 == 0) goto L3f
            java.lang.String r5 = r4.ip
            boolean r5 = android.text.TextUtils.equals(r0, r5)
            if (r5 == 0) goto L3f
            r2 = r4
        L56:
            if (r2 == 0) goto L5e
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCj
            r1.remove(r2)
            goto L5f
        L5e:
            r3 = r2
        L5f:
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r1 = com.kwad.sdk.ip.direct.a.aCk
            java.util.Iterator r1 = r1.iterator()
        L65:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7c
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r2 = (com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo) r2
            if (r2 == 0) goto L65
            java.lang.String r4 = r2.ip
            boolean r4 = android.text.TextUtils.equals(r0, r4)
            if (r4 == 0) goto L65
            r3 = r2
        L7c:
            if (r3 == 0) goto L83
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = com.kwad.sdk.ip.direct.a.aCk
            r0.remove(r3)
        L83:
            return
    }

    private static void FV() {
            com.kwad.sdk.ip.direct.c r0 = com.kwad.sdk.ip.direct.a.aCp
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            java.lang.String r1 = "IpDirect_Helper"
            if (r0 == 0) goto L35
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L35
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            com.kwad.sdk.ip.direct.c r2 = com.kwad.sdk.ip.direct.a.aCp
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L35
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            com.kwad.sdk.ip.direct.c r2 = com.kwad.sdk.ip.direct.a.aCp
            r0.remove(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "sRecommendEntityList remove:"
            r0.<init>(r2)
            com.kwad.sdk.ip.direct.c r2 = com.kwad.sdk.ip.direct.a.aCp
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
        L35:
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            r2 = 0
            if (r0 == 0) goto Lb7
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lb7
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            com.kwad.sdk.ip.direct.c r3 = com.kwad.sdk.ip.direct.a.aCp
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L64
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            com.kwad.sdk.ip.direct.c r3 = com.kwad.sdk.ip.direct.a.aCp
            r0.remove(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "sBackUpIpEntityList remove:"
            r0.<init>(r3)
            com.kwad.sdk.ip.direct.c r3 = com.kwad.sdk.ip.direct.a.aCp
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
        L64:
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            java.util.Iterator r0 = r0.iterator()
        L6a:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L9e
            java.lang.Object r3 = r0.next()
            com.kwad.sdk.ip.direct.c r3 = (com.kwad.sdk.ip.direct.c) r3
            if (r3 == 0) goto L6a
            java.lang.String r4 = r3.getIp()
            com.kwad.sdk.ip.direct.c r5 = com.kwad.sdk.ip.direct.a.aCp
            java.lang.String r5 = r5.getIp()
            boolean r4 = android.text.TextUtils.equals(r4, r5)
            if (r4 == 0) goto L6a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r4 = "set removeEntity:"
            r0.<init>(r4)
            java.lang.String r4 = r3.getIp()
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
            goto L9f
        L9e:
            r3 = r2
        L9f:
            if (r3 == 0) goto Lb7
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            r0.remove(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r4 = "sBackUpIpEntityList remove removeEntity:"
            r0.<init>(r4)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
        Lb7:
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            java.lang.Object r0 = r0.peek()
            com.kwad.sdk.ip.direct.c r0 = (com.kwad.sdk.ip.direct.c) r0
            if (r0 == 0) goto Lca
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.a.aCp
            if (r0 != r1) goto Lca
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            r0.poll()
        Lca:
            com.kwad.sdk.ip.direct.a.aCp = r2
            return
    }

    static void FW() {
            FL()
            return
    }

    public static void a(com.kwad.sdk.core.response.model.HttpDnsInfo r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            java.lang.String r1 = "IpDirect_Helper"
            if (r0 != 0) goto L15
            java.lang.String r4 = "sdkConfigProvider == null"
            com.kwad.sdk.core.e.c.w(r1, r4)
            return
        L15:
            boolean r0 = r0.xE()
            com.kwad.sdk.ip.direct.a.aCh = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "isEnable:"
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.d(r1, r2)
            if (r0 != 0) goto L2f
            return
        L2f:
            java.lang.String r0 = r4.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = r4.recommendList
            com.kwad.sdk.ip.direct.a.aCi = r0
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = r4.backUpList
            com.kwad.sdk.ip.direct.a.aCj = r0
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = r4.otherList
            com.kwad.sdk.ip.direct.a.aCk = r4
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = com.kwad.sdk.ip.direct.a.aCi
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L60
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = com.kwad.sdk.ip.direct.a.aCj
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L60
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = com.kwad.sdk.ip.direct.a.aCk
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L60
            java.lang.String r4 = "HttpDnsInfo is empty"
            com.kwad.sdk.core.e.c.w(r1, r4)
            return
        L60:
            init()
            FF()
            return
    }

    static boolean access$000() {
            boolean r0 = com.kwad.sdk.ip.direct.a.aCy
            return r0
    }

    static boolean access$002(boolean r0) {
            r0 = 1
            com.kwad.sdk.ip.direct.a.aCy = r0
            return r0
    }

    static boolean access$102(boolean r0) {
            r0 = 1
            com.kwad.sdk.ip.direct.a.aCx = r0
            return r0
    }

    private static void b(java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> r4, java.util.List<com.kwad.sdk.ip.direct.c> r5) {
            if (r4 != 0) goto L3
            return
        L3:
            java.util.Iterator r4 = r4.iterator()
        L7:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L49
            java.lang.Object r0 = r4.next()
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r0 = (com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo) r0
            if (r0 == 0) goto L7
            java.lang.String r1 = r0.ip
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7
            java.lang.String r1 = r0.toString()
            java.lang.String r2 = "IpDirect_Helper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            java.lang.String r1 = r0.ip
            int r2 = com.kwad.sdk.ip.direct.a.aCg
            long r2 = (long) r2
            com.kwad.sdk.ip.direct.c r1 = com.kwad.sdk.ip.direct.b.f(r1, r2)
            int r0 = r0.weight
            r1.cF(r0)
            boolean r0 = r1.isSuccess()
            if (r0 == 0) goto L7
            float r0 = r1.Gb()
            int r2 = com.kwad.sdk.ip.direct.a.aCg
            float r2 = (float) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L7
            r5.add(r1)
            goto L7
        L49:
            return
    }

    private static void clear() {
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCl
            r0.clear()
            java.util.List<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCm
            r0.clear()
            java.util.concurrent.PriorityBlockingQueue<com.kwad.sdk.ip.direct.c> r0 = com.kwad.sdk.ip.direct.a.aCn
            r0.clear()
            return
    }

    public static java.lang.String eV(java.lang.String r4) {
            boolean r0 = com.kwad.sdk.ip.direct.a.aCh
            java.lang.String r1 = ""
            java.lang.String r2 = "IpDirect_Helper"
            if (r0 != 0) goto Le
            java.lang.String r4 = "getIpByHost return by sIpDirectEnable false"
        La:
            com.kwad.sdk.core.e.c.d(r2, r4)
            return r1
        Le:
            boolean r0 = eW(r4)
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "isHostInvalid:false ："
            r0.<init>(r3)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            goto La
        L23:
            boolean r4 = FQ()
            if (r4 != 0) goto L2c
            java.lang.String r4 = "canUseIpDirect:false"
            goto La
        L2c:
            java.lang.String r4 = FG()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getIpByHost ip:"
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r2, r0)
            return r4
    }

    private static boolean eW(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "https://"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = com.kwad.sdk.h.wZ()
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r0 = r0 ^ 1
            if (r0 == 0) goto L39
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "非核心域名 current host:"
            r1.<init>(r2)
            java.lang.String r2 = com.kwad.sdk.h.wZ()
            r1.append(r2)
            java.lang.String r2 = "try direct host:https://"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "IpDirect_Helper"
            com.kwad.sdk.core.e.c.d(r1, r3)
        L39:
            return r0
    }

    public static int getType() {
            int r0 = com.kwad.sdk.ip.direct.a.aCw
            return r0
    }

    private static void init() {
            android.os.HandlerThread r0 = com.kwad.sdk.ip.direct.a.aCq
            if (r0 == 0) goto L5
            return
        L5:
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "IpDirectHelper"
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.a.aCq = r0
            r0.start()
            com.kwad.sdk.ip.direct.a$2 r0 = new com.kwad.sdk.ip.direct.a$2
            android.os.HandlerThread r1 = com.kwad.sdk.ip.direct.a.aCq
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            com.kwad.sdk.ip.direct.a.aCr = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto L35
            com.kwad.sdk.core.NetworkMonitor r1 = com.kwad.sdk.core.NetworkMonitor.getInstance()
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.NetworkMonitor$a r2 = com.kwad.sdk.ip.direct.a.aCz
            r1.a(r0, r2)
        L35:
            return
    }

    static void mI() {
            FK()
            return
    }
}
