package com.mbridge.msdk.reward.b;

public class a {
    private static final java.lang.String a = null;
    private static java.lang.String b;




    static {
            java.lang.Class<com.mbridge.msdk.reward.b.a> r0 = com.mbridge.msdk.reward.b.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.reward.b.a.a = r0
            java.lang.String r0 = ""
            com.mbridge.msdk.reward.b.a.b = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.reward.b.a.a
            return r0
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6) {
            if (r4 == 0) goto Le2
            if (r5 == 0) goto Le2
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lde
            if (r0 != 0) goto Le2
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lde
            r0.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "key=2000048&"
            r0.append(r1)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r1 = "&"
            if (r5 == 0) goto L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> Lde
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            r2.append(r1)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
        L33:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> Lde
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            r2.append(r1)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            r2.append(r6)     // Catch: java.lang.Throwable -> Lde
            r2.append(r1)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            boolean r2 = r5.isBidCampaign()     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L71
            java.lang.String r2 = "hb=1&"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            goto L76
        L71:
            java.lang.String r2 = "hb=0&"
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
        L76:
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.b(r5)     // Catch: java.lang.Throwable -> Lde
            if (r2 == 0) goto L8b
            java.lang.String r2 = "rtins_type="
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            int r2 = r5.getRtinsType()     // Catch: java.lang.Throwable -> Lde
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            r0.append(r1)     // Catch: java.lang.Throwable -> Lde
        L8b:
            if (r5 == 0) goto Lc0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "rid="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = r5.getRequestId()     // Catch: java.lang.Throwable -> Lde
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            r0.append(r2)     // Catch: java.lang.Throwable -> Lde
            r0.append(r1)     // Catch: java.lang.Throwable -> Lde
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r1.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = "rid_n="
            r1.append(r2)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r5 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> Lde
            r1.append(r5)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lde
            r0.append(r5)     // Catch: java.lang.Throwable -> Lde
        Lc0:
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lde
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> Lde
            if (r5 == 0) goto Ld6
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> Lde
            r4.a(r5)     // Catch: java.lang.Throwable -> Lde
            goto Le2
        Ld6:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> Lde
            a(r4, r5, r6)     // Catch: java.lang.Throwable -> Lde
            goto Le2
        Lde:
            r4 = move-exception
            r4.printStackTrace()
        Le2:
            return
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, boolean r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L12e
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L12a
            if (r1 != 0) goto L12e
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12a
            if (r1 != 0) goto L12e
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L12a
            r1.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = "key=2000047&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r2.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12a
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L12a
            r2.append(r3)     // Catch: java.lang.Throwable -> L12a
            r2.append(r0)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r2)     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r2.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12a
            r2.append(r7)     // Catch: java.lang.Throwable -> L12a
            r2.append(r0)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r2)     // Catch: java.lang.Throwable -> L12a
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12a
            if (r2 != 0) goto L76
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L12a
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r2.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r3 = "u_stid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L12a
            if (r7 == 0) goto L67
            goto L69
        L67:
            java.lang.String r7 = ""
        L69:
            r2.append(r7)     // Catch: java.lang.Throwable -> L12a
            r2.append(r0)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
        L76:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L12a
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12a
            if (r7 != 0) goto L97
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r7.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = "b="
            r7.append(r2)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L12a
            r7.append(r2)     // Catch: java.lang.Throwable -> L12a
            r7.append(r0)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
        L97:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L12a
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12a
            if (r7 != 0) goto Lb8
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r7.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = "c="
            r7.append(r2)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L12a
            r7.append(r2)     // Catch: java.lang.Throwable -> L12a
            r7.append(r0)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
        Lb8:
            if (r8 == 0) goto Lc0
            java.lang.String r7 = "hb=1&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
            goto Lc5
        Lc0:
            java.lang.String r7 = "hb=0&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
        Lc5:
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L12a
            if (r7 != 0) goto Ld6
            java.lang.String r7 = "rid="
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
            r1.append(r9)     // Catch: java.lang.Throwable -> L12a
            r1.append(r0)     // Catch: java.lang.Throwable -> L12a
        Ld6:
            boolean r7 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L12a
            if (r7 != 0) goto Le7
            java.lang.String r7 = "rid_n="
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
            r1.append(r10)     // Catch: java.lang.Throwable -> L12a
            r1.append(r0)     // Catch: java.lang.Throwable -> L12a
        Le7:
            if (r5 == 0) goto Lf8
            java.lang.String r7 = "adspace_t="
            r1.append(r7)     // Catch: java.lang.Throwable -> L12a
            int r5 = r5.getAdSpaceT()     // Catch: java.lang.Throwable -> L12a
            r1.append(r5)     // Catch: java.lang.Throwable -> L12a
            r1.append(r0)     // Catch: java.lang.Throwable -> L12a
        Lf8:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r5.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r7 = "reason="
            r5.append(r7)     // Catch: java.lang.Throwable -> L12a
            r5.append(r6)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L12a
            r1.append(r5)     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12a
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L12a
            if (r5 == 0) goto L122
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L12a
            r4.a(r5)     // Catch: java.lang.Throwable -> L12a
            goto L12e
        L122:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L12a
            b(r4, r5)     // Catch: java.lang.Throwable -> L12a
            goto L12e
        L12a:
            r4 = move-exception
            r4.printStackTrace()
        L12e:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9) {
            if (r8 == 0) goto Lfd
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r8)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> Lf9
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto Lfd
            if (r0 == 0) goto Lfd
            int r1 = r0.a()     // Catch: java.lang.Exception -> Lf9
            if (r1 <= 0) goto Lfd
            java.lang.String r1 = "2000022"
            java.util.List r1 = r0.a(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = "2000021"
            java.util.List r2 = r0.a(r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r3 = "2000039"
            java.util.List r3 = r0.a(r3)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = "2000043"
            java.util.List r4 = r0.a(r4)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r5 = "2000045"
            java.util.List r5 = r0.a(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r6 = "2000044"
            java.util.List r0 = r0.a(r6)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = com.mbridge.msdk.foundation.entity.p.a(r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.b(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r3 = com.mbridge.msdk.foundation.entity.p.f(r3)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = com.mbridge.msdk.foundation.entity.p.c(r4)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r5 = com.mbridge.msdk.foundation.entity.p.d(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.p.e(r0)     // Catch: java.lang.Exception -> Lf9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf9
            r6.<init>()     // Catch: java.lang.Exception -> Lf9
            boolean r7 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf9
            if (r7 != 0) goto L62
            r6.append(r2)     // Catch: java.lang.Exception -> Lf9
        L62:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lf9
            if (r2 != 0) goto L6b
            r6.append(r1)     // Catch: java.lang.Exception -> Lf9
        L6b:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto L74
            r6.append(r3)     // Catch: java.lang.Exception -> Lf9
        L74:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto L7d
            r6.append(r4)     // Catch: java.lang.Exception -> Lf9
        L7d:
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto L86
            r6.append(r5)     // Catch: java.lang.Exception -> Lf9
        L86:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto L8f
            r6.append(r0)     // Catch: java.lang.Exception -> Lf9
        L8f:
            java.lang.String r0 = com.mbridge.msdk.reward.b.a.a     // Catch: java.lang.Exception -> Lf9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf9
            r1.<init>()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = "reward 批量上报："
            r1.append(r2)     // Catch: java.lang.Exception -> Lf9
            r1.append(r6)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Exception -> Lf9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lf9
            if (r0 != 0) goto Lfd
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Exception -> Lf9
            if (r8 == 0) goto Lfd
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto Lfd
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto Lfd
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Leb
            r1.<init>(r8)     // Catch: java.lang.Exception -> Leb
            com.mbridge.msdk.foundation.same.net.g.d r8 = com.mbridge.msdk.foundation.same.report.e.a(r0, r8, r9)     // Catch: java.lang.Exception -> Leb
            com.mbridge.msdk.videocommon.d.b r9 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> Leb
            com.mbridge.msdk.videocommon.d.a r9 = r9.b()     // Catch: java.lang.Exception -> Leb
            java.lang.String r9 = r9.b()     // Catch: java.lang.Exception -> Leb
            java.lang.String r0 = "r_stid"
            r8.a(r0, r9)     // Catch: java.lang.Exception -> Leb
            r9 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Leb
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> Leb
            com.mbridge.msdk.reward.b.a$1 r2 = new com.mbridge.msdk.reward.b.a$1     // Catch: java.lang.Exception -> Leb
            r2.<init>()     // Catch: java.lang.Exception -> Leb
            r1.post(r9, r0, r8, r2)     // Catch: java.lang.Exception -> Leb
            goto Lfd
        Leb:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r9 = com.mbridge.msdk.reward.b.a.a     // Catch: java.lang.Exception -> Lf9
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)     // Catch: java.lang.Exception -> Lf9
            goto Lfd
        Lf9:
            r8 = move-exception
            r8.printStackTrace()
        Lfd:
            return
    }

    private static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            if (r4 == 0) goto L45
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L45
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L45
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L38
            r0.<init>(r4)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r5, r4, r6)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = "r_stid"
            r6.a(r2, r1)     // Catch: java.lang.Exception -> L38
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.reward.b.a$2 r3 = new com.mbridge.msdk.reward.b.a$2     // Catch: java.lang.Exception -> L38
            r3.<init>(r5, r4)     // Catch: java.lang.Exception -> L38
            r0.post(r1, r2, r6, r3)     // Catch: java.lang.Exception -> L38
            goto L45
        L38:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r5 = com.mbridge.msdk.reward.b.a.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L45:
            return
    }

    public static void a(android.content.Context r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.lang.String r8, long r9) {
            java.lang.String r0 = "&"
            if (r6 == 0) goto L185
            if (r7 == 0) goto L185
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L17d
            if (r1 == 0) goto Le
            goto L185
        Le:
            int r1 = r7.size()     // Catch: java.lang.Exception -> L17d
            r2 = 0
            if (r1 <= 0) goto L32
            java.lang.Object r1 = r7.get(r2)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L17d
            java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = com.mbridge.msdk.reward.b.a.b     // Catch: java.lang.Exception -> L17d
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L17d
            if (r3 != 0) goto L30
            java.lang.String r3 = com.mbridge.msdk.reward.b.a.b     // Catch: java.lang.Exception -> L17d
            boolean r3 = r1.equals(r3)     // Catch: java.lang.Exception -> L17d
            if (r3 == 0) goto L30
            return
        L30:
            com.mbridge.msdk.reward.b.a.b = r1     // Catch: java.lang.Exception -> L17d
        L32:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L17d
            r1.<init>()     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = "key="
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = "2000048"
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = "network_type="
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Exception -> L17d
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = "unit_id="
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            r1.append(r8)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
            java.lang.String r3 = "load_time="
            r1.append(r3)     // Catch: java.lang.Exception -> L17d
            r1.append(r9)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
            if (r7 == 0) goto L185
            int r9 = r7.size()     // Catch: java.lang.Exception -> L17d
            if (r9 <= 0) goto L185
            java.lang.String r9 = "cid="
            r1.append(r9)     // Catch: java.lang.Exception -> L17d
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17d
            java.lang.String r10 = "rtins_type="
            r9.<init>(r10)     // Catch: java.lang.Exception -> L17d
            r10 = r2
        L7e:
            int r3 = r7.size()     // Catch: java.lang.Exception -> L17d
            java.lang.String r4 = ","
            if (r10 >= r3) goto Ld1
            java.lang.Object r3 = r7.get(r10)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Exception -> L17d
            int r5 = r7.size()     // Catch: java.lang.Exception -> L17d
            int r5 = r5 + (-1)
            if (r10 >= r5) goto La9
            java.lang.String r5 = r3.getId()     // Catch: java.lang.Exception -> L17d
            r1.append(r5)     // Catch: java.lang.Exception -> L17d
            r1.append(r4)     // Catch: java.lang.Exception -> L17d
            int r3 = r3.getRtinsType()     // Catch: java.lang.Exception -> L17d
            r9.append(r3)     // Catch: java.lang.Exception -> L17d
            r9.append(r4)     // Catch: java.lang.Exception -> L17d
            goto Lce
        La9:
            java.lang.String r4 = r3.getId()     // Catch: java.lang.Exception -> L17d
            r1.append(r4)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
            boolean r4 = r3.isBidCampaign()     // Catch: java.lang.Exception -> L17d
            if (r4 == 0) goto Lbf
            java.lang.String r4 = "hb=1&"
            r1.append(r4)     // Catch: java.lang.Exception -> L17d
            goto Lc4
        Lbf:
            java.lang.String r4 = "hb=0&"
            r1.append(r4)     // Catch: java.lang.Exception -> L17d
        Lc4:
            int r3 = r3.getRtinsType()     // Catch: java.lang.Exception -> L17d
            r9.append(r3)     // Catch: java.lang.Exception -> L17d
            r9.append(r0)     // Catch: java.lang.Exception -> L17d
        Lce:
            int r10 = r10 + 1
            goto L7e
        Ld1:
            r1.append(r9)     // Catch: java.lang.Exception -> L17d
            java.lang.Object r9 = r7.get(r2)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L17d
            if (r9 == 0) goto Leb
            java.lang.String r10 = "rid="
            r1.append(r10)     // Catch: java.lang.Exception -> L17d
            java.lang.String r9 = r9.getRequestId()     // Catch: java.lang.Exception -> L17d
            r1.append(r9)     // Catch: java.lang.Exception -> L17d
            r1.append(r0)     // Catch: java.lang.Exception -> L17d
        Leb:
            java.lang.String r9 = ""
            r10 = r9
        Lee:
            int r0 = r7.size()     // Catch: java.lang.Exception -> L17d
            if (r2 >= r0) goto L14f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17d
            r0.<init>()     // Catch: java.lang.Exception -> L17d
            r0.append(r9)     // Catch: java.lang.Exception -> L17d
            java.lang.Object r9 = r7.get(r2)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L17d
            java.lang.String r9 = r9.getRequestIdNotice()     // Catch: java.lang.Exception -> L17d
            r0.append(r9)     // Catch: java.lang.Exception -> L17d
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L17d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17d
            r0.<init>()     // Catch: java.lang.Exception -> L17d
            r0.append(r10)     // Catch: java.lang.Exception -> L17d
            java.lang.Object r10 = r7.get(r2)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10     // Catch: java.lang.Exception -> L17d
            int r10 = r10.getAdSpaceT()     // Catch: java.lang.Exception -> L17d
            r0.append(r10)     // Catch: java.lang.Exception -> L17d
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Exception -> L17d
            int r0 = r7.size()     // Catch: java.lang.Exception -> L17d
            int r0 = r0 + (-1)
            if (r2 >= r0) goto L14c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17d
            r0.<init>()     // Catch: java.lang.Exception -> L17d
            r0.append(r9)     // Catch: java.lang.Exception -> L17d
            r0.append(r4)     // Catch: java.lang.Exception -> L17d
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L17d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17d
            r0.<init>()     // Catch: java.lang.Exception -> L17d
            r0.append(r10)     // Catch: java.lang.Exception -> L17d
            r0.append(r4)     // Catch: java.lang.Exception -> L17d
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Exception -> L17d
        L14c:
            int r2 = r2 + 1
            goto Lee
        L14f:
            java.lang.String r7 = "&rid_n="
            r1.append(r7)     // Catch: java.lang.Exception -> L17d
            r1.append(r9)     // Catch: java.lang.Exception -> L17d
            java.lang.String r7 = "&adspace_t="
            r1.append(r7)     // Catch: java.lang.Exception -> L17d
            r1.append(r10)     // Catch: java.lang.Exception -> L17d
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L17d
            boolean r7 = r7.c()     // Catch: java.lang.Exception -> L17d
            if (r7 == 0) goto L175
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L17d
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L17d
            r6.a(r7)     // Catch: java.lang.Exception -> L17d
            goto L185
        L175:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L17d
            a(r6, r7, r8)     // Catch: java.lang.Exception -> L17d
            goto L185
        L17d:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto L185
            r6.printStackTrace()
        L185:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r4, android.content.Context r5, java.lang.String r6, java.lang.String r7, boolean r8, java.lang.String r9, java.lang.String r10, long r11) {
            java.lang.String r0 = "&"
            if (r5 == 0) goto L159
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L155
            if (r1 != 0) goto L159
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r1 != 0) goto L159
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L155
            r1.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = "key=2000078&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L155
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r2.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L155
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Throwable -> L155
            r2.append(r3)     // Catch: java.lang.Throwable -> L155
            r2.append(r0)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r2)     // Catch: java.lang.Throwable -> L155
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r2.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L155
            r2.append(r7)     // Catch: java.lang.Throwable -> L155
            r2.append(r0)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r2)     // Catch: java.lang.Throwable -> L155
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r2 != 0) goto L76
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L155
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L155
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r2.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r3 = "u_stid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L155
            if (r7 == 0) goto L67
            goto L69
        L67:
            java.lang.String r7 = ""
        L69:
            r2.append(r7)     // Catch: java.lang.Throwable -> L155
            r2.append(r0)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
        L76:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L155
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r7 != 0) goto L97
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r7.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = "b="
            r7.append(r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L155
            r7.append(r2)     // Catch: java.lang.Throwable -> L155
            r7.append(r0)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
        L97:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L155
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r7 != 0) goto Lb8
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r7.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = "c="
            r7.append(r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L155
            r7.append(r2)     // Catch: java.lang.Throwable -> L155
            r7.append(r0)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
        Lb8:
            if (r8 == 0) goto Lc0
            java.lang.String r7 = "hb=1&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
            goto Lc5
        Lc0:
            java.lang.String r7 = "hb=0&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
        Lc5:
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L155
            java.lang.String r8 = "rid="
            if (r7 != 0) goto Ld7
            r1.append(r8)     // Catch: java.lang.Throwable -> L155
            r1.append(r9)     // Catch: java.lang.Throwable -> L155
            r1.append(r0)     // Catch: java.lang.Throwable -> L155
            goto Lf0
        Ld7:
            if (r4 == 0) goto Lf0
            java.lang.String r7 = r4.getRequestId()     // Catch: java.lang.Throwable -> L155
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r7 != 0) goto Lf0
            r1.append(r8)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = r4.getRequestId()     // Catch: java.lang.Throwable -> L155
            r1.append(r7)     // Catch: java.lang.Throwable -> L155
            r1.append(r0)     // Catch: java.lang.Throwable -> L155
        Lf0:
            boolean r7 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L155
            java.lang.String r8 = "rid_n="
            if (r7 != 0) goto L102
            r1.append(r8)     // Catch: java.lang.Throwable -> L155
            r1.append(r10)     // Catch: java.lang.Throwable -> L155
            r1.append(r0)     // Catch: java.lang.Throwable -> L155
            goto L11b
        L102:
            if (r4 == 0) goto L11b
            java.lang.String r7 = r4.getRequestIdNotice()     // Catch: java.lang.Throwable -> L155
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L155
            if (r7 != 0) goto L11b
            r1.append(r8)     // Catch: java.lang.Throwable -> L155
            java.lang.String r4 = r4.getRequestIdNotice()     // Catch: java.lang.Throwable -> L155
            r1.append(r4)     // Catch: java.lang.Throwable -> L155
            r1.append(r0)     // Catch: java.lang.Throwable -> L155
        L11b:
            java.lang.String r4 = "during="
            r1.append(r4)     // Catch: java.lang.Throwable -> L155
            r1.append(r11)     // Catch: java.lang.Throwable -> L155
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L155
            r4.<init>()     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = "&reason="
            r4.append(r7)     // Catch: java.lang.Throwable -> L155
            r4.append(r6)     // Catch: java.lang.Throwable -> L155
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L155
            r1.append(r4)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L155
            boolean r4 = r4.c()     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto L14d
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L155
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L155
            r4.a(r5)     // Catch: java.lang.Throwable -> L155
            goto L159
        L14d:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L155
            b(r5, r4)     // Catch: java.lang.Throwable -> L155
            goto L159
        L155:
            r4 = move-exception
            r4.printStackTrace()
        L159:
            return
    }

    public static void b(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, boolean r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L13c
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L138
            if (r1 != 0) goto L13c
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L138
            if (r1 != 0) goto L13c
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L138
            r1.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = "key=2000047&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r2.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L138
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            r2.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r2.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            r2.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r2)     // Catch: java.lang.Throwable -> L138
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L138
            if (r2 != 0) goto L76
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L138
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r2.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = "u_stid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L138
            if (r7 == 0) goto L67
            goto L69
        L67:
            java.lang.String r7 = ""
        L69:
            r2.append(r7)     // Catch: java.lang.Throwable -> L138
            r2.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
        L76:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L138
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L138
            if (r7 != 0) goto L97
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = "b="
            r7.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L138
            r7.append(r2)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
        L97:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L138
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L138
            if (r7 != 0) goto Lb8
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = "c="
            r7.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L138
            r7.append(r2)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
        Lb8:
            if (r8 == 0) goto Lc0
            java.lang.String r7 = "hb=1&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
            goto Lc5
        Lc0:
            java.lang.String r7 = "hb=0&"
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
        Lc5:
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L138
            if (r7 != 0) goto Ld6
            java.lang.String r7 = "rid="
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
            r1.append(r9)     // Catch: java.lang.Throwable -> L138
            r1.append(r0)     // Catch: java.lang.Throwable -> L138
        Ld6:
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L138
            if (r7 != 0) goto Le7
            java.lang.String r7 = "rid_n="
            r1.append(r7)     // Catch: java.lang.Throwable -> L138
            r1.append(r10)     // Catch: java.lang.Throwable -> L138
            r1.append(r0)     // Catch: java.lang.Throwable -> L138
        Le7:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r7.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r8 = "reason="
            r7.append(r8)     // Catch: java.lang.Throwable -> L138
            r7.append(r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r1.append(r6)     // Catch: java.lang.Throwable -> L138
            if (r5 == 0) goto L11a
            com.mbridge.msdk.foundation.entity.CampaignEx$c r6 = r5.getRewardTemplateMode()     // Catch: java.lang.Throwable -> L138
            if (r6 == 0) goto L11a
            com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r5.getRewardTemplateMode()     // Catch: java.lang.Exception -> L11a java.lang.Throwable -> L138
            java.lang.String r5 = r5.e()     // Catch: java.lang.Exception -> L11a java.lang.Throwable -> L138
            int r5 = com.mbridge.msdk.foundation.tools.ae.l(r5)     // Catch: java.lang.Exception -> L11a java.lang.Throwable -> L138
            r6 = -1
            if (r5 == r6) goto L11a
            java.lang.String r6 = "&view="
            r1.append(r6)     // Catch: java.lang.Exception -> L11a java.lang.Throwable -> L138
            r1.append(r5)     // Catch: java.lang.Exception -> L11a java.lang.Throwable -> L138
        L11a:
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L138
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L138
            if (r5 == 0) goto L130
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L138
            r4.a(r5)     // Catch: java.lang.Throwable -> L138
            goto L13c
        L130:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L138
            b(r4, r5)     // Catch: java.lang.Throwable -> L138
            goto L13c
        L138:
            r4 = move-exception
            r4.printStackTrace()
        L13c:
            return
    }

    private static void b(android.content.Context r5, java.lang.String r6) {
            if (r5 == 0) goto L3f
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L3f
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L32
            r0.<init>(r5)     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.foundation.same.net.g.d r1 = com.mbridge.msdk.foundation.same.report.e.a(r6, r5)     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.videocommon.d.a r2 = r2.b()     // Catch: java.lang.Exception -> L32
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = "r_stid"
            r1.a(r3, r2)     // Catch: java.lang.Exception -> L32
            r2 = 0
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.reward.b.a$3 r4 = new com.mbridge.msdk.reward.b.a$3     // Catch: java.lang.Exception -> L32
            r4.<init>(r6, r5)     // Catch: java.lang.Exception -> L32
            r0.post(r2, r3, r1, r4)     // Catch: java.lang.Exception -> L32
            goto L3f
        L32:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r6 = com.mbridge.msdk.reward.b.a.a
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L3f:
            return
    }
}
