package com.kwad.sdk.core.f;

public final class a {
    private static java.lang.String aqh = "";
    private static boolean aqi;
    private static boolean sGetOaidFail;


    static {
            return
    }

    static java.lang.String access$102(java.lang.String r0) {
            com.kwad.sdk.core.f.a.aqh = r0
            return r0
    }

    public static java.lang.String ba(android.content.Context r3) {
            boolean r0 = com.kwad.sdk.utils.at.Je()
            if (r0 == 0) goto L15
            java.lang.String r0 = com.kwad.sdk.utils.at.Jf()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L15
            java.lang.String r3 = com.kwad.sdk.utils.at.Jf()
            return r3
        L15:
            java.lang.String r0 = com.kwad.sdk.core.f.a.aqh
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r3 = com.kwad.sdk.core.f.a.aqh
            return r3
        L20:
            boolean r0 = com.kwad.sdk.utils.at.Je()
            if (r0 != 0) goto L3d
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 2048(0x800, double:1.012E-320)
            boolean r0 = r0.R(r1)
            if (r0 == 0) goto L37
            goto L3d
        L37:
            initAsync(r3)
            java.lang.String r3 = com.kwad.sdk.core.f.a.aqh
            return r3
        L3d:
            java.lang.String r3 = com.kwad.sdk.core.f.a.aqh
            return r3
    }

    private static void bb(android.content.Context r5) {
            java.lang.String r0 = com.kwad.sdk.core.f.a.aqh
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L167
            if (r5 != 0) goto Lc
            goto L167
        Lc:
            boolean r0 = com.kwad.sdk.core.f.a.aqi
            if (r0 == 0) goto L11
            return
        L11:
            r0 = 1
            com.kwad.sdk.core.f.a.aqi = r0
            boolean r1 = com.kwad.sdk.core.f.a.sGetOaidFail
            if (r1 == 0) goto L19
            return
        L19:
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r1 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r1.toUpperCase()     // Catch: java.lang.Throwable -> L163
            r2 = -1
            int r3 = r1.hashCode()     // Catch: java.lang.Throwable -> L163
            r4 = 0
            switch(r3) {
                case -2053026509: goto Lc6;
                case -1712043046: goto Lbb;
                case -1706170181: goto Lb1;
                case -1134767290: goto La7;
                case -602397472: goto L9d;
                case 89163: goto L92;
                case 2018896: goto L87;
                case 2432928: goto L7d;
                case 2555124: goto L72;
                case 2634924: goto L68;
                case 73239724: goto L5c;
                case 74632627: goto L50;
                case 630905871: goto L45;
                case 976565563: goto L39;
                case 2141820391: goto L2e;
                default: goto L2c;
            }     // Catch: java.lang.Throwable -> L163
        L2c:
            goto Lcf
        L2e:
            java.lang.String r3 = "HUAWEI"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = r4
            goto Lcf
        L39:
            java.lang.String r3 = "FERRMEOS"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 13
            goto Lcf
        L45:
            java.lang.String r3 = "MOTOLORA"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 7
            goto Lcf
        L50:
            java.lang.String r3 = "NUBIA"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 9
            goto Lcf
        L5c:
            java.lang.String r3 = "MEIZU"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 8
            goto Lcf
        L68:
            java.lang.String r3 = "VIVO"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 5
            goto Lcf
        L72:
            java.lang.String r3 = "SSUI"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 14
            goto Lcf
        L7d:
            java.lang.String r3 = "OPPO"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 3
            goto Lcf
        L87:
            java.lang.String r3 = "ASUS"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 11
            goto Lcf
        L92:
            java.lang.String r3 = "ZTE"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 12
            goto Lcf
        L9d:
            java.lang.String r3 = "ONEPLUS"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 4
            goto Lcf
        La7:
            java.lang.String r3 = "BLACKSHARK"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 2
            goto Lcf
        Lb1:
            java.lang.String r3 = "XIAOMI"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = r0
            goto Lcf
        Lbb:
            java.lang.String r3 = "SAMSUNG"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 10
            goto Lcf
        Lc6:
            java.lang.String r3 = "LENOVO"
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Throwable -> L163
            if (r3 == 0) goto Lcf
            r2 = 6
        Lcf:
            switch(r2) {
                case 0: goto L12f;
                case 1: goto L125;
                case 2: goto L125;
                case 3: goto L11b;
                case 4: goto L11b;
                case 5: goto L111;
                case 6: goto L107;
                case 7: goto L107;
                case 8: goto Lfd;
                case 9: goto Lf3;
                case 10: goto Le9;
                case 11: goto Ldf;
                case 12: goto Ld3;
                case 13: goto Ld3;
                case 14: goto Ld3;
                default: goto Ld2;
            }     // Catch: java.lang.Throwable -> L163
        Ld2:
            goto L139
        Ld3:
            com.kwad.sdk.core.f.a.j r2 = new com.kwad.sdk.core.f.a.j     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
        Ldc:
            com.kwad.sdk.core.f.a.aqh = r5     // Catch: java.lang.Throwable -> L163
            goto L139
        Ldf:
            com.kwad.sdk.core.f.a.a r2 = new com.kwad.sdk.core.f.a.a     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        Le9:
            com.kwad.sdk.core.f.a.g r2 = new com.kwad.sdk.core.f.a.g     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        Lf3:
            com.kwad.sdk.core.f.a.e r2 = new com.kwad.sdk.core.f.a.e     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        Lfd:
            com.kwad.sdk.core.f.a.d r2 = new com.kwad.sdk.core.f.a.d     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L107:
            com.kwad.sdk.core.f.a.c r2 = new com.kwad.sdk.core.f.a.c     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L111:
            com.kwad.sdk.core.f.a.h r2 = new com.kwad.sdk.core.f.a.h     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L11b:
            com.kwad.sdk.core.f.a.f r2 = new com.kwad.sdk.core.f.a.f     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L125:
            com.kwad.sdk.core.f.a.i r2 = new com.kwad.sdk.core.f.a.i     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L12f:
            com.kwad.sdk.core.f.a.b r2 = new com.kwad.sdk.core.f.a.b     // Catch: java.lang.Throwable -> L163
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = r2.getOAID()     // Catch: java.lang.Throwable -> L163
            goto Ldc
        L139:
            java.lang.String r5 = "OAIDHelper"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L163
            java.lang.String r3 = "manufacturer:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L163
            r2.append(r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = "--OAID:"
            r2.append(r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = com.kwad.sdk.core.f.a.aqh     // Catch: java.lang.Throwable -> L163
            r2.append(r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L163
            com.kwad.sdk.core.e.c.i(r5, r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = com.kwad.sdk.core.f.a.aqh     // Catch: java.lang.Throwable -> L163
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L163
            if (r5 == 0) goto L160
            com.kwad.sdk.core.f.a.sGetOaidFail = r0     // Catch: java.lang.Throwable -> L163
        L160:
            com.kwad.sdk.core.f.a.aqi = r4     // Catch: java.lang.Throwable -> L163
            return
        L163:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r5)
        L167:
            return
    }

    static void bc(android.content.Context r0) {
            bb(r0)
            return
    }

    public static void initAsync(android.content.Context r1) {
            java.lang.String r0 = com.kwad.sdk.core.f.a.aqh
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            if (r1 != 0) goto Lb
            goto L13
        Lb:
            com.kwad.sdk.core.f.a$1 r0 = new com.kwad.sdk.core.f.a$1
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
        L13:
            return
    }

    static void mI() {
            return
    }
}
