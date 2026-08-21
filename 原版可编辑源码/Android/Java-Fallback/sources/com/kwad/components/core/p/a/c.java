package com.kwad.components.core.p.a;

public final class c implements com.kwad.sdk.core.b {
    private int PQ;
    private java.lang.String PR;
    private int PS;
    private java.lang.Long PT;
    private java.lang.Long PU;
    private java.lang.Long PV;
    private java.lang.Long PW;
    private java.lang.String PX;
    private java.lang.String PY;
    private java.util.List<com.kwad.sdk.utils.bq.a> PZ;
    private long Qa;
    private java.lang.String Qb;
    private java.lang.String Qc;
    private long Qd;
    private int Qe;
    private java.lang.String Qf;
    private java.lang.String Qg;
    private boolean Qh;
    private int Qi;
    private java.util.List<com.kwad.components.core.p.a.c.a> Qj;
    private com.kwad.sdk.k.a.f Qk;
    private com.kwad.sdk.k.a.d Ql;
    private com.kwad.sdk.k.a.b Qm;
    private java.util.List<com.kwad.sdk.k.a.e> Qn;
    private float screenBrightness;

    public static class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int Qo;
        public int Qp;
        public int Qq;
        public int streamType;

        private a(int r2) {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.Qo = r0
                r1.Qp = r0
                r1.Qq = r0
                r1.streamType = r2
                return
        }

        private static int aD(int r6) {
                r0 = 5
                r1 = 4
                r2 = 3
                r3 = 2
                r4 = 1
                r5 = 0
                if (r6 == 0) goto L12
                if (r6 == r4) goto L1a
                if (r6 == r3) goto L18
                if (r6 == r2) goto L16
                if (r6 == r1) goto L14
                if (r6 == r0) goto L1b
            L12:
                r0 = r5
                goto L1b
            L14:
                r0 = r1
                goto L1b
            L16:
                r0 = r2
                goto L1b
            L18:
                r0 = r3
                goto L1b
            L1a:
                r0 = r4
            L1b:
                return r0
        }

        public static java.util.List<com.kwad.components.core.p.a.c.a> ak(android.content.Context r6) {
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r6 != 0) goto L8
                return r0
            L8:
                r1 = 256(0x100, double:1.265E-321)
                boolean r1 = com.kwad.sdk.core.config.d.R(r1)
                if (r1 == 0) goto L11
                return r0
            L11:
                java.lang.String r1 = "audio"
                java.lang.Object r6 = r6.getSystemService(r1)     // Catch: java.lang.Exception -> L47
                android.media.AudioManager r6 = (android.media.AudioManager) r6     // Catch: java.lang.Exception -> L47
                if (r6 != 0) goto L1c
                return r0
            L1c:
                r1 = 0
            L1d:
                r2 = 5
                if (r1 > r2) goto L47
                com.kwad.components.core.p.a.c$a r2 = new com.kwad.components.core.p.a.c$a     // Catch: java.lang.Exception -> L47
                r2.<init>(r1)     // Catch: java.lang.Exception -> L47
                int r3 = aD(r1)     // Catch: java.lang.Exception -> L47
                int r4 = r6.getStreamVolume(r3)     // Catch: java.lang.Exception -> L47
                r2.Qq = r4     // Catch: java.lang.Exception -> L47
                int r4 = r6.getStreamMaxVolume(r3)     // Catch: java.lang.Exception -> L47
                r2.Qo = r4     // Catch: java.lang.Exception -> L47
                int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L47
                r5 = 28
                if (r4 < r5) goto L41
                int r3 = r6.getStreamMinVolume(r3)     // Catch: java.lang.Exception -> L47
                r2.Qp = r3     // Catch: java.lang.Exception -> L47
            L41:
                r0.add(r2)     // Catch: java.lang.Exception -> L47
                int r1 = r1 + 1
                goto L1d
            L47:
                return r0
        }
    }

    public c() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.PZ = r0
            r0 = -1
            r2.Qe = r0
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.screenBrightness = r1
            r2.Qi = r0
            return
    }

    private void aj(android.content.Context r7) {
            r6 = this;
            r0 = 512(0x200, double:2.53E-321)
            boolean r0 = com.kwad.sdk.core.config.d.R(r0)
            if (r0 == 0) goto L9
            return
        L9:
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.intent.action.ACTION_POWER_CONNECTED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.ACTION_POWER_DISCONNECTED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.addAction(r1)
            r1 = 0
            android.content.Intent r7 = r7.registerReceiver(r1, r0)
            if (r7 == 0) goto L54
            r0 = -1
            java.lang.String r1 = "status"
            int r1 = r7.getIntExtra(r1, r0)
            r2 = 0
            r3 = 1
            r4 = 2
            if (r1 == r4) goto L36
            r5 = 5
            if (r1 != r5) goto L34
            goto L36
        L34:
            r1 = r2
            goto L37
        L36:
            r1 = r3
        L37:
            r6.Qh = r1
            java.lang.String r1 = "plugged"
            int r7 = r7.getIntExtra(r1, r0)
            if (r7 != r4) goto L44
            r6.Qi = r3
            return
        L44:
            if (r7 != r3) goto L49
            r6.Qi = r4
            return
        L49:
            r0 = 4
            if (r7 != r0) goto L50
            r7 = 3
            r6.Qi = r7
            return
        L50:
            if (r7 != 0) goto L54
            r6.Qi = r2
        L54:
            return
    }

    private static android.content.Context getContext() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            return r0
    }

    public static com.kwad.components.core.p.a.c pK() {
            com.kwad.components.core.p.a.c r0 = new com.kwad.components.core.p.a.c
            r0.<init>()
            int r1 = com.kwad.sdk.utils.be.JI()
            r0.PQ = r1
            android.content.Context r1 = getContext()
            java.lang.String r1 = com.kwad.sdk.utils.AbiUtil.bD(r1)
            r0.PR = r1
            android.content.Context r1 = getContext()
            int r1 = com.kwad.sdk.utils.be.cZ(r1)
            r0.PS = r1
            android.content.Context r1 = getContext()
            long r1 = com.kwad.sdk.utils.be.da(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.PT = r1
            android.content.Context r1 = getContext()
            long r1 = com.kwad.sdk.utils.be.cY(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.PU = r1
            long r1 = com.kwad.sdk.utils.be.JG()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.PV = r1
            long r1 = com.kwad.sdk.utils.be.JH()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.PW = r1
            android.content.Context r1 = getContext()
            java.lang.String r1 = com.kwad.sdk.utils.au.cz(r1)
            r0.PX = r1
            android.content.Context r1 = getContext()
            java.lang.String r1 = com.kwad.sdk.utils.au.cA(r1)
            r0.PY = r1
            android.content.Context r1 = getContext()
            r2 = 15
            java.util.List r1 = com.kwad.sdk.utils.au.m(r1, r2)
            r0.PZ = r1
            long r1 = com.kwad.sdk.utils.be.JM()
            r0.Qa = r1
            long r1 = com.kwad.sdk.utils.be.JN()
            r0.Qd = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.JO()
            r0.Qg = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.JP()
            r0.Qf = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.JQ()
            r0.Qb = r1
            java.lang.String r1 = com.kwad.sdk.utils.be.JR()
            r0.Qc = r1
            android.content.Context r1 = getContext()
            if (r1 == 0) goto La8
            int r2 = com.kwad.sdk.utils.be.dh(r1)
            r0.Qe = r2
            java.util.List r2 = com.kwad.components.core.p.a.c.a.ak(r1)
            r0.Qj = r2
            r0.aj(r1)
        La8:
            com.kwad.sdk.k.a.d r1 = com.kwad.sdk.utils.n.HV()
            r0.Ql = r1
            com.kwad.sdk.k.a.b r1 = com.kwad.sdk.utils.au.Hl()
            r0.Qm = r1
            java.util.List r1 = com.kwad.sdk.utils.au.Jm()
            r0.Qn = r1
            com.kwad.sdk.k.a.f r1 = com.kwad.sdk.utils.au.Hm()
            r0.Qk = r1
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r4.PQ
            java.lang.String r2 = "cpuCount"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.PR
            java.lang.String r2 = "cpuAbi"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r4.PS
            java.lang.String r2 = "batteryPercent"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.Long r1 = r4.PT
            long r1 = r1.longValue()
            java.lang.String r3 = "totalMemorySize"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.Long r1 = r4.PU
            long r1 = r1.longValue()
            java.lang.String r3 = "availableMemorySize"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.Long r1 = r4.PV
            long r1 = r1.longValue()
            java.lang.String r3 = "totalDiskSize"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.Long r1 = r4.PW
            long r1 = r1.longValue()
            java.lang.String r3 = "availableDiskSize"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.PX
            java.lang.String r2 = "imsi"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.PY
            java.lang.String r2 = "iccid"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<com.kwad.sdk.utils.bq$a> r1 = r4.PZ
            java.lang.String r2 = "wifiList"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            long r1 = r4.Qa
            java.lang.String r3 = "bootTime"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.Qb
            java.lang.String r2 = "romName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.Qc
            java.lang.String r2 = "romVersion"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            long r1 = r4.Qd
            java.lang.String r3 = "romBuildTimestamp"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            int r1 = r4.Qe
            java.lang.String r2 = "ringerMode"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<com.kwad.components.core.p.a.c$a> r1 = r4.Qj
            java.lang.String r2 = "audioStreamInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.Qf
            java.lang.String r2 = "baseBandVersion"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.Qg
            java.lang.String r2 = "fingerPrint"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            float r1 = r4.screenBrightness
            java.lang.String r2 = "screenBrightness"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            boolean r1 = r4.Qh
            java.lang.String r2 = "isCharging"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r4.Qi
            java.lang.String r2 = "chargeType"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            com.kwad.sdk.k.a.f r1 = r4.Qk
            if (r1 == 0) goto Lb1
            java.lang.String r2 = "simCardInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
        Lb1:
            com.kwad.sdk.k.a.d r1 = r4.Ql
            if (r1 == 0) goto Lba
            java.lang.String r2 = "environmentInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
        Lba:
            com.kwad.sdk.k.a.b r1 = r4.Qm
            if (r1 == 0) goto Lc3
            java.lang.String r2 = "baseStationInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
        Lc3:
            java.util.List<com.kwad.sdk.k.a.e> r1 = r4.Qn
            if (r1 == 0) goto Lcc
            java.lang.String r2 = "sensorEventInfoList"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        Lcc:
            return r0
    }
}
