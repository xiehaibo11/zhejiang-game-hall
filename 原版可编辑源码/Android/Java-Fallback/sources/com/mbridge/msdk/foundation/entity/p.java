package com.mbridge.msdk.foundation.entity;

public final class p {
    public static int a = 1;
    public static int b;
    private java.lang.String A;
    private java.lang.String B;
    private java.lang.String C;
    private java.lang.String D;
    private java.lang.String E;
    private java.lang.String F;
    private java.lang.String G;
    private int H;
    private int I;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private java.lang.String h;
    private int i;
    private int j;
    private int k;
    private java.lang.String l;
    private java.lang.String m;
    private int n;
    private int o;
    private java.lang.String p;
    private long q;
    private int r;
    private java.lang.String s;
    private java.lang.String t;
    private java.lang.String u;
    private java.lang.String v;
    private java.lang.String w;
    private java.lang.String x;
    private java.lang.String y;
    private java.lang.String z;

    static {
            return
    }

    public p() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            return
    }

    public p(android.content.Context r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5, java.lang.String r6, long r7, int r9) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.r = r0
            r2.H = r0
            r0 = 1
            java.lang.String r1 = "2000022"
            if (r9 == r0) goto L22
            r0 = 287(0x11f, float:4.02E-43)
            if (r9 == r0) goto L1f
            r0 = 94
            if (r9 == r0) goto L1f
            r0 = 95
            if (r9 == r0) goto L1a
            goto L24
        L1a:
            java.lang.String r9 = "2000025"
            r2.f = r9
            goto L24
        L1f:
            r2.f = r1
            goto L24
        L22:
            r2.f = r1
        L24:
            int r9 = com.mbridge.msdk.foundation.tools.v.D(r3)
            r2.g = r9
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.a(r3, r9)
            r2.h = r3
            int r3 = r4.getVideoLength()
            r2.k = r3
            java.lang.String r3 = r4.getRequestId()
            r2.s = r3
            java.lang.String r3 = r4.getRequestIdNotice()
            r2.t = r3
            java.lang.String r3 = r2.l
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L66
            java.lang.String r3 = r4.getNoticeUrl()     // Catch: java.io.UnsupportedEncodingException -> L62
            if (r3 != 0) goto L55
            java.lang.String r3 = r4.getClickURL()     // Catch: java.io.UnsupportedEncodingException -> L62
            goto L59
        L55:
            java.lang.String r3 = r4.getNoticeUrl()     // Catch: java.io.UnsupportedEncodingException -> L62
        L59:
            java.lang.String r9 = "utf-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r9)     // Catch: java.io.UnsupportedEncodingException -> L62
            r2.l = r3     // Catch: java.io.UnsupportedEncodingException -> L62
            goto L66
        L62:
            r3 = move-exception
            r3.printStackTrace()
        L66:
            r2.o = r5
            r2.p = r6
            r5 = 0
            int r3 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r3 != 0) goto L75
            int r3 = r4.getVideoSize()
            long r7 = (long) r3
        L75:
            r2.q = r7
            return
    }

    public p(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.B = r2
            return
    }

    public p(java.lang.String r2, int r3, int r4, int r5, int r6, java.lang.String r7, java.lang.String r8, int r9, java.lang.String r10, int r11, java.lang.String r12) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.g = r3
            r1.h = r12
            r1.i = r4
            r1.j = r5
            r1.k = r6
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.io.UnsupportedEncodingException -> L23
            if (r2 != 0) goto L27
            java.lang.String r2 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r7, r2)     // Catch: java.io.UnsupportedEncodingException -> L23
            r1.l = r2     // Catch: java.io.UnsupportedEncodingException -> L23
            goto L27
        L23:
            r2 = move-exception
            r2.printStackTrace()
        L27:
            r1.m = r8
            r1.o = r9
            r1.p = r10
            long r2 = (long) r11
            r1.q = r2
            return
    }

    public p(java.lang.String r2, int r3, int r4, java.lang.String r5, int r6, java.lang.String r7, int r8, java.lang.String r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.g = r3
            r1.h = r9
            r1.k = r4
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L23
            java.lang.String r2 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r5, r2)     // Catch: java.io.UnsupportedEncodingException -> L1f
            r1.l = r2     // Catch: java.io.UnsupportedEncodingException -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            r1.o = r6
            r1.p = r7
            long r2 = (long) r8
            r1.q = r2
            return
    }

    public p(java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.h = r6
            r1.g = r3
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L21
            java.lang.String r2 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r4, r2)     // Catch: java.io.UnsupportedEncodingException -> L1d
            r1.l = r2     // Catch: java.io.UnsupportedEncodingException -> L1d
            goto L21
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            r1.m = r5
            return
    }

    public p(java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.o = r3
            r1.p = r4
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.io.UnsupportedEncodingException -> L1d
            if (r2 != 0) goto L21
            java.lang.String r2 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r5, r2)     // Catch: java.io.UnsupportedEncodingException -> L1d
            r1.D = r2     // Catch: java.io.UnsupportedEncodingException -> L1d
            goto L21
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            r1.v = r6
            r1.u = r7
            r1.m = r8
            r1.C = r9
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)
            int r2 = r2.intValue()
            int r3 = com.mbridge.msdk.foundation.same.a.v
            if (r2 <= r3) goto L38
            r2 = 2
            r1.o = r2
        L38:
            return
    }

    public p(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.v = r3
            r1.s = r4
            r1.t = r5
            r1.u = r6
            r1.g = r7
            return
    }

    public p(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7, int r8, java.lang.String r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.v = r3
            r1.s = r4
            r1.t = r5
            r1.u = r6
            r1.g = r7
            r1.m = r9
            r1.n = r8
            return
    }

    public p(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, int r8, java.lang.String r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.r = r0
            r1.H = r0
            r1.f = r2
            r1.z = r3
            r1.x = r4
            r1.A = r5
            r1.u = r6
            r1.v = r7
            r1.g = r8
            r1.h = r9
            return
    }

    public static java.lang.String a(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto Lc1
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network_type="
            r1.append(r3)
            int r3 = r4.g
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid="
            r1.append(r3)
            java.lang.String r3 = r4.s
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "reason="
            r1.append(r2)
            java.lang.String r4 = r4.s()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = "\n"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        Lc1:
            r4 = 0
            return r4
    }

    public static java.lang.String a(java.util.List<com.mbridge.msdk.foundation.entity.p> r13) {
            if (r13 == 0) goto L1ec
            int r0 = r13.size()
            if (r0 <= 0) goto L1ec
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r13 = r13.iterator()
        L11:
            boolean r1 = r13.hasNext()
            if (r1 == 0) goto L1e7
            java.lang.Object r1 = r13.next()
            com.mbridge.msdk.foundation.entity.p r1 = (com.mbridge.msdk.foundation.entity.p) r1
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)
            java.lang.String r3 = "\n"
            java.lang.String r4 = "offer_url="
            java.lang.String r5 = "unit_id="
            java.lang.String r6 = "rid_n="
            java.lang.String r7 = "rid="
            java.lang.String r8 = "video_url="
            java.lang.String r9 = "cid="
            java.lang.String r10 = "reason="
            java.lang.String r11 = "key="
            java.lang.String r12 = "&"
            if (r2 == 0) goto L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r11 = r1.f
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r11 = "network_type="
            r2.append(r11)
            int r11 = r1.g
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r11 = "network_str="
            r2.append(r11)
            java.lang.String r11 = r1.h
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            java.lang.String r10 = r1.s()
            r2.append(r10)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.E
            r2.append(r8)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s
            r2.append(r7)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.t
            r2.append(r6)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.u
            r2.append(r5)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.l
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        L12b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r11 = r1.f
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            java.lang.String r10 = r1.s()
            r2.append(r10)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.E
            r2.append(r8)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s
            r2.append(r7)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.t
            r2.append(r6)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.u
            r2.append(r5)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.l
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        L1e7:
            java.lang.String r13 = r0.toString()
            return r13
        L1ec:
            r13 = 0
            return r13
    }

    public static java.lang.String b(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto Lbf
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network_type="
            r1.append(r3)
            int r3 = r4.g
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "mraid_type="
            r1.append(r3)
            int r3 = r4.H
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "rid="
            r1.append(r2)
            java.lang.String r4 = r4.s
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = "\n"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        Lbf:
            r4 = 0
            return r4
    }

    public static java.lang.String b(java.util.List<com.mbridge.msdk.foundation.entity.p> r16) {
            if (r16 == 0) goto L2ed
            int r0 = r16.size()
            if (r0 <= 0) goto L2ed
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r1 = r16.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2e8
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.foundation.entity.p r2 = (com.mbridge.msdk.foundation.entity.p) r2
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r3 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r4 = "authority_general_data"
            boolean r3 = r3.a(r4)
            java.lang.String r4 = "offer_url="
            java.lang.String r5 = "unit_id="
            java.lang.String r6 = "rid_n="
            java.lang.String r7 = "rid="
            java.lang.String r8 = "video_url="
            java.lang.String r9 = "cid="
            java.lang.String r10 = "reason="
            java.lang.String r11 = "video_length="
            java.lang.String r12 = "video_size="
            java.lang.String r13 = "duration="
            java.lang.String r14 = "result="
            java.lang.String r15 = "key="
            r16 = r1
            java.lang.String r1 = "&"
            if (r3 == 0) goto L18f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r15)
            java.lang.String r15 = r2.f
            r3.append(r15)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r15 = "network_type="
            r3.append(r15)
            int r15 = r2.g
            r3.append(r15)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r15 = "network_str="
            r3.append(r15)
            java.lang.String r15 = r2.h
            r3.append(r15)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r14)
            int r14 = r2.o
            r3.append(r14)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r13)
            java.lang.String r13 = r2.p
            r3.append(r13)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            long r12 = r2.q
            r3.append(r12)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            int r11 = r2.k
            r3.append(r11)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r10)
            java.lang.String r10 = r2.s()
            r3.append(r10)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r9)
            java.lang.String r9 = r2.v
            r3.append(r9)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r8)
            java.lang.String r8 = r2.E
            r3.append(r8)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r7)
            java.lang.String r7 = r2.s
            r3.append(r7)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r6 = r2.t
            r3.append(r6)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = r2.u
            r3.append(r5)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r4)
            java.lang.String r4 = r2.l
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            goto L2a5
        L18f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r15)
            java.lang.String r15 = r2.f
            r3.append(r15)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r14)
            int r14 = r2.o
            r3.append(r14)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r13)
            java.lang.String r13 = r2.p
            r3.append(r13)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r12)
            long r12 = r2.q
            r3.append(r12)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r11)
            int r11 = r2.k
            r3.append(r11)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r10)
            java.lang.String r10 = r2.s()
            r3.append(r10)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r9)
            java.lang.String r9 = r2.v
            r3.append(r9)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r8)
            java.lang.String r8 = r2.E
            r3.append(r8)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r7)
            java.lang.String r7 = r2.s
            r3.append(r7)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r6 = r2.t
            r3.append(r6)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = r2.u
            r3.append(r5)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r4)
            java.lang.String r4 = r2.l
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
        L2a5:
            java.lang.String r3 = r2.c
            if (r3 == 0) goto L2c2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "resource_type="
            r3.append(r4)
            java.lang.String r4 = r2.c
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
        L2c2:
            java.lang.String r3 = r2.e
            if (r3 == 0) goto L2df
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "creative="
            r3.append(r4)
            java.lang.String r2 = r2.e
            r3.append(r2)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.append(r1)
        L2df:
            java.lang.String r1 = "\n"
            r0.append(r1)
            r1 = r16
            goto L11
        L2e8:
            java.lang.String r0 = r0.toString()
            return r0
        L2ed:
            r0 = 0
            return r0
    }

    public static java.lang.String c(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto L19d
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "result="
            r1.append(r3)
            int r3 = r4.o
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "duration="
            r1.append(r3)
            java.lang.String r3 = r4.p
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "reason="
            r1.append(r3)
            java.lang.String r3 = r4.s()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "ad_type="
            r1.append(r3)
            java.lang.String r3 = r4.G
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "devid="
            r1.append(r3)
            java.lang.String r3 = r4.d
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "mraid_type="
            r1.append(r3)
            int r3 = r4.H
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network_type="
            r1.append(r3)
            int r3 = r4.g
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = r4.D
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L126
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "endcard_url="
            r1.append(r3)
            java.lang.String r3 = r4.D
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L126:
            java.lang.String r1 = r4.C
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L147
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "type="
            r1.append(r3)
            java.lang.String r3 = r4.C
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L147:
            java.lang.String r1 = r4.c
            if (r1 == 0) goto L164
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "resource_type="
            r1.append(r3)
            java.lang.String r3 = r4.c
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L164:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "rid="
            r1.append(r2)
            java.lang.String r4 = r4.s
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = "\n"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        L19d:
            r4 = 0
            return r4
    }

    public static java.lang.String c(java.util.List<com.mbridge.msdk.foundation.entity.p> r5) {
            if (r5 == 0) goto L156
            int r0 = r5.size()
            if (r0 <= 0) goto L156
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L151
            java.lang.Object r1 = r5.next()
            com.mbridge.msdk.foundation.entity.p r1 = (com.mbridge.msdk.foundation.entity.p) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "key="
            r2.append(r3)
            java.lang.String r3 = r1.f
            r2.append(r3)
            java.lang.String r3 = "&"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "result="
            r2.append(r4)
            int r4 = r1.o
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "duration="
            r2.append(r4)
            java.lang.String r4 = r1.p
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "endcard_url="
            r2.append(r4)
            java.lang.String r4 = r1.D
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "cid="
            r2.append(r4)
            java.lang.String r4 = r1.v
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "unit_id="
            r2.append(r4)
            java.lang.String r4 = r1.u
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "reason="
            r2.append(r4)
            java.lang.String r4 = r1.s()
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "ad_type="
            r2.append(r4)
            java.lang.String r4 = r1.G
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "rid="
            r2.append(r4)
            java.lang.String r4 = r1.s
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "rid_n="
            r2.append(r4)
            java.lang.String r4 = r1.t
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "type="
            r2.append(r4)
            java.lang.String r4 = r1.C
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "adspace_t="
            r2.append(r3)
            int r1 = r1.I
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            goto L11
        L151:
            java.lang.String r5 = r0.toString()
            return r5
        L156:
            r5 = 0
            return r5
    }

    public static java.lang.String d(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto L190
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "result="
            r1.append(r3)
            int r3 = r4.o
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "duration="
            r1.append(r3)
            java.lang.String r3 = r4.p
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "reason="
            r1.append(r3)
            java.lang.String r3 = r4.s()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "ad_type="
            r1.append(r3)
            java.lang.String r3 = r4.G
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid="
            r1.append(r3)
            java.lang.String r3 = r4.s
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network_type="
            r1.append(r3)
            int r3 = r4.g
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "mraid_type="
            r1.append(r3)
            int r3 = r4.H
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "devid="
            r1.append(r3)
            java.lang.String r3 = r4.d
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = r4.c
            if (r1 == 0) goto L154
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "resource_type="
            r1.append(r3)
            java.lang.String r3 = r4.c
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L154:
            java.lang.String r1 = r4.D
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L175
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "endcard_url="
            r1.append(r3)
            java.lang.String r3 = r4.D
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L175:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "type="
            r1.append(r2)
            java.lang.String r4 = r4.C
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        L190:
            r4 = 0
            return r4
    }

    public static java.lang.String d(java.util.List<com.mbridge.msdk.foundation.entity.p> r13) {
            if (r13 == 0) goto L1d9
            int r0 = r13.size()
            if (r0 <= 0) goto L1d9
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r13 = r13.iterator()
        L11:
            boolean r1 = r13.hasNext()
            if (r1 == 0) goto L1d4
            java.lang.Object r1 = r13.next()
            com.mbridge.msdk.foundation.entity.p r1 = (com.mbridge.msdk.foundation.entity.p) r1
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)
            java.lang.String r3 = "\n"
            java.lang.String r4 = "unit_id="
            java.lang.String r5 = "rid_n="
            java.lang.String r6 = "rid="
            java.lang.String r7 = "reason="
            java.lang.String r8 = "template_url="
            java.lang.String r9 = "cid="
            java.lang.String r10 = "result="
            java.lang.String r11 = "key="
            java.lang.String r12 = "&"
            if (r2 == 0) goto L115
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r11 = r1.f
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r11 = "network_type="
            r2.append(r11)
            int r11 = r1.g
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            int r10 = r1.o
            r2.append(r10)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.w
            r2.append(r8)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s()
            r2.append(r7)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.s
            r2.append(r6)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.t
            r2.append(r5)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.u
            r2.append(r1)
            r2.append(r12)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        L115:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r11 = r1.f
            r2.append(r11)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            int r10 = r1.o
            r2.append(r10)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.w
            r2.append(r8)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s()
            r2.append(r7)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.s
            r2.append(r6)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.t
            r2.append(r5)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.u
            r2.append(r1)
            r2.append(r12)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        L1d4:
            java.lang.String r13 = r0.toString()
            return r13
        L1d9:
            r13 = 0
            return r13
    }

    public static java.lang.String e(com.mbridge.msdk.foundation.entity.p r8) {
            if (r8 == 0) goto L15f
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L15b
            r0.<init>()     // Catch: java.lang.Exception -> L15b
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = "cid="
            java.lang.String r3 = "unit_id="
            java.lang.String r4 = "template_url="
            java.lang.String r5 = "error="
            java.lang.String r6 = "key="
            java.lang.String r7 = "&"
            if (r1 == 0) goto Ld3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r6)     // Catch: java.lang.Exception -> L15b
            java.lang.String r6 = r8.f     // Catch: java.lang.Exception -> L15b
            r1.append(r6)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r5)     // Catch: java.lang.Exception -> L15b
            java.lang.String r5 = r8.y     // Catch: java.lang.Exception -> L15b
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.c(r5)     // Catch: java.lang.Exception -> L15b
            r1.append(r5)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r4)     // Catch: java.lang.Exception -> L15b
            java.lang.String r4 = r8.w     // Catch: java.lang.Exception -> L15b
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.c(r4)     // Catch: java.lang.Exception -> L15b
            r1.append(r4)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r3)     // Catch: java.lang.Exception -> L15b
            java.lang.String r3 = r8.u     // Catch: java.lang.Exception -> L15b
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.c(r3)     // Catch: java.lang.Exception -> L15b
            r1.append(r3)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = r8.v     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ae.c(r2)     // Catch: java.lang.Exception -> L15b
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = "network_str="
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = r8.h     // Catch: java.lang.Exception -> L15b
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            java.lang.String r2 = "network_type="
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            int r8 = r8.g     // Catch: java.lang.Exception -> L15b
            r1.append(r8)     // Catch: java.lang.Exception -> L15b
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r8)     // Catch: java.lang.Exception -> L15b
            goto L156
        Ld3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r6)     // Catch: java.lang.Exception -> L15b
            java.lang.String r6 = r8.f     // Catch: java.lang.Exception -> L15b
            r1.append(r6)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r5)     // Catch: java.lang.Exception -> L15b
            java.lang.String r5 = r8.y     // Catch: java.lang.Exception -> L15b
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.c(r5)     // Catch: java.lang.Exception -> L15b
            r1.append(r5)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r4)     // Catch: java.lang.Exception -> L15b
            java.lang.String r4 = r8.w     // Catch: java.lang.Exception -> L15b
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.c(r4)     // Catch: java.lang.Exception -> L15b
            r1.append(r4)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r3)     // Catch: java.lang.Exception -> L15b
            java.lang.String r3 = r8.u     // Catch: java.lang.Exception -> L15b
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.c(r3)     // Catch: java.lang.Exception -> L15b
            r1.append(r3)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r1)     // Catch: java.lang.Exception -> L15b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L15b
            r1.<init>()     // Catch: java.lang.Exception -> L15b
            r1.append(r2)     // Catch: java.lang.Exception -> L15b
            java.lang.String r8 = r8.v     // Catch: java.lang.Exception -> L15b
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.ae.c(r8)     // Catch: java.lang.Exception -> L15b
            r1.append(r8)     // Catch: java.lang.Exception -> L15b
            r1.append(r7)     // Catch: java.lang.Exception -> L15b
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L15b
            r0.append(r8)     // Catch: java.lang.Exception -> L15b
        L156:
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Exception -> L15b
            return r8
        L15b:
            r8 = move-exception
            r8.printStackTrace()
        L15f:
            r8 = 0
            return r8
    }

    public static java.lang.String e(java.util.List<com.mbridge.msdk.foundation.entity.p> r12) {
            if (r12 == 0) goto L1a9
            int r0 = r12.size()
            if (r0 <= 0) goto L1a9
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Iterator r12 = r12.iterator()
        L11:
            boolean r1 = r12.hasNext()
            if (r1 == 0) goto L1a4
            java.lang.Object r1 = r12.next()
            com.mbridge.msdk.foundation.entity.p r1 = (com.mbridge.msdk.foundation.entity.p) r1
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)
            java.lang.String r3 = "\n"
            java.lang.String r4 = "unit_id="
            java.lang.String r5 = "rid_n="
            java.lang.String r6 = "rid="
            java.lang.String r7 = "reason="
            java.lang.String r8 = "image_url="
            java.lang.String r9 = "cid="
            java.lang.String r10 = "key="
            java.lang.String r11 = "&"
            if (r2 == 0) goto Lfc
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            java.lang.String r10 = r1.f
            r2.append(r10)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r10 = "network_type="
            r2.append(r10)
            int r10 = r1.g
            r2.append(r10)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.F
            r2.append(r8)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s()
            r2.append(r7)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.s
            r2.append(r6)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.t
            r2.append(r5)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.u
            r2.append(r1)
            r2.append(r11)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        Lfc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            java.lang.String r10 = r1.f
            r2.append(r10)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r9)
            java.lang.String r9 = r1.v
            r2.append(r9)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r8 = r1.F
            r2.append(r8)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = r1.s()
            r2.append(r7)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r6 = r1.s
            r2.append(r6)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = r1.t
            r2.append(r5)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.u
            r2.append(r1)
            r2.append(r11)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r0.append(r3)
            goto L11
        L1a4:
            java.lang.String r12 = r0.toString()
            return r12
        L1a9:
            r12 = 0
            return r12
    }

    public static java.lang.String f(com.mbridge.msdk.foundation.entity.p r9) {
            if (r9 == 0) goto L197
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L193
            r0.<init>()     // Catch: java.lang.Exception -> L193
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = "cid="
            java.lang.String r3 = "unit_id="
            java.lang.String r4 = "layout="
            java.lang.String r5 = "template="
            java.lang.String r6 = "event="
            java.lang.String r7 = "key="
            java.lang.String r8 = "&"
            if (r1 == 0) goto Lf0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r7)     // Catch: java.lang.Exception -> L193
            java.lang.String r7 = r9.f     // Catch: java.lang.Exception -> L193
            r1.append(r7)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r6)     // Catch: java.lang.Exception -> L193
            java.lang.String r6 = r9.z     // Catch: java.lang.Exception -> L193
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ae.c(r6)     // Catch: java.lang.Exception -> L193
            r1.append(r6)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r5)     // Catch: java.lang.Exception -> L193
            java.lang.String r5 = r9.x     // Catch: java.lang.Exception -> L193
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.c(r5)     // Catch: java.lang.Exception -> L193
            r1.append(r5)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r4)     // Catch: java.lang.Exception -> L193
            java.lang.String r4 = r9.A     // Catch: java.lang.Exception -> L193
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.c(r4)     // Catch: java.lang.Exception -> L193
            r1.append(r4)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r3)     // Catch: java.lang.Exception -> L193
            java.lang.String r3 = r9.u     // Catch: java.lang.Exception -> L193
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.c(r3)     // Catch: java.lang.Exception -> L193
            r1.append(r3)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = r9.v     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ae.c(r2)     // Catch: java.lang.Exception -> L193
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = "network_str="
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = r9.h     // Catch: java.lang.Exception -> L193
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            java.lang.String r2 = "network_type="
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            int r9 = r9.g     // Catch: java.lang.Exception -> L193
            r1.append(r9)     // Catch: java.lang.Exception -> L193
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r9)     // Catch: java.lang.Exception -> L193
            goto L18e
        Lf0:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r7)     // Catch: java.lang.Exception -> L193
            java.lang.String r7 = r9.f     // Catch: java.lang.Exception -> L193
            r1.append(r7)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r6)     // Catch: java.lang.Exception -> L193
            java.lang.String r6 = r9.z     // Catch: java.lang.Exception -> L193
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ae.c(r6)     // Catch: java.lang.Exception -> L193
            r1.append(r6)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r5)     // Catch: java.lang.Exception -> L193
            java.lang.String r5 = r9.x     // Catch: java.lang.Exception -> L193
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.c(r5)     // Catch: java.lang.Exception -> L193
            r1.append(r5)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r4)     // Catch: java.lang.Exception -> L193
            java.lang.String r4 = r9.A     // Catch: java.lang.Exception -> L193
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.ae.c(r4)     // Catch: java.lang.Exception -> L193
            r1.append(r4)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r3)     // Catch: java.lang.Exception -> L193
            java.lang.String r3 = r9.u     // Catch: java.lang.Exception -> L193
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.c(r3)     // Catch: java.lang.Exception -> L193
            r1.append(r3)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r1)     // Catch: java.lang.Exception -> L193
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L193
            r1.<init>()     // Catch: java.lang.Exception -> L193
            r1.append(r2)     // Catch: java.lang.Exception -> L193
            java.lang.String r9 = r9.v     // Catch: java.lang.Exception -> L193
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.ae.c(r9)     // Catch: java.lang.Exception -> L193
            r1.append(r9)     // Catch: java.lang.Exception -> L193
            r1.append(r8)     // Catch: java.lang.Exception -> L193
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Exception -> L193
            r0.append(r9)     // Catch: java.lang.Exception -> L193
        L18e:
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L193
            return r9
        L193:
            r9 = move-exception
            r9.printStackTrace()
        L197:
            r9 = 0
            return r9
    }

    public static java.lang.String f(java.util.List<com.mbridge.msdk.foundation.entity.p> r2) {
            if (r2 == 0) goto L37
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L2d
            if (r0 <= 0) goto L37
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L2d
        L11:
            boolean r1 = r2.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L28
            java.lang.Object r1 = r2.next()     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.foundation.entity.p r1 = (com.mbridge.msdk.foundation.entity.p) r1     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r1.B     // Catch: java.lang.Throwable -> L2d
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "\n"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            goto L11
        L28:
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L2d
            return r2
        L2d:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "VideoReportData"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r2)
        L37:
            r2 = 0
            return r2
    }

    public static java.lang.String g(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto Lc2
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid="
            r1.append(r3)
            java.lang.String r3 = r4.s
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network_type="
            r1.append(r3)
            int r3 = r4.g
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "mraid_type="
            r1.append(r3)
            int r4 = r4.H
            r1.append(r4)
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = "platform=1"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        Lc2:
            java.lang.String r4 = ""
            return r4
    }

    public static java.lang.String h(com.mbridge.msdk.foundation.entity.p r4) {
            if (r4 == 0) goto Ld5
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            java.lang.String r2 = r4.f
            r1.append(r2)
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "cid="
            r1.append(r3)
            java.lang.String r3 = r4.v
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid="
            r1.append(r3)
            java.lang.String r3 = r4.s
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "rid_n="
            r1.append(r3)
            java.lang.String r3 = r4.t
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "unit_id="
            r1.append(r3)
            java.lang.String r3 = r4.u
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "reason="
            r1.append(r3)
            java.lang.String r3 = r4.s()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "case="
            r1.append(r3)
            int r3 = r4.n
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "network_type="
            r1.append(r2)
            int r4 = r4.g
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        Ld5:
            java.lang.String r4 = ""
            return r4
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void c(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lc
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r1.e = r2
        Lc:
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.F
            return r0
    }

    public final void d(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final void d(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L13
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Exception -> Lf
            r1.F = r2     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.E
            return r0
    }

    public final void e(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L13
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Exception -> Lf
            r1.E = r2     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.D
            return r0
    }

    public final void f(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf
            if (r0 != 0) goto L13
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Exception -> Lf
            r1.D = r2     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.C
            return r0
    }

    public final void g(java.lang.String r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.G
            return r0
    }

    public final void h(java.lang.String r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public final java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public final void i(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.io.UnsupportedEncodingException -> Lf
            if (r0 != 0) goto L13
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> Lf
            r1.w = r2     // Catch: java.io.UnsupportedEncodingException -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public final int j() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    public final void j(java.lang.String r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    public final void k(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public final java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.t
            return r0
    }

    public final void l(java.lang.String r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public final java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.u
            return r0
    }

    public final void m(java.lang.String r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public final java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.v
            return r0
    }

    public final void n(java.lang.String r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final void o(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final int p() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final void p(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final int q() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final void q(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public final java.lang.String r() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public final void r(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final java.lang.String s() {
            r1 = this;
            java.lang.String r0 = r1.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto Ld
        Lb:
            java.lang.String r0 = r1.m
        Ld:
            return r0
    }

    public final java.lang.String t() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RewardReportData [key="
            r0.append(r1)
            java.lang.String r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = ", networkType="
            r0.append(r1)
            int r1 = r3.g
            r0.append(r1)
            java.lang.String r1 = ", isCompleteView="
            r0.append(r1)
            int r1 = r3.i
            r0.append(r1)
            java.lang.String r1 = ", watchedMillis="
            r0.append(r1)
            int r1 = r3.j
            r0.append(r1)
            java.lang.String r1 = ", videoLength="
            r0.append(r1)
            int r1 = r3.k
            r0.append(r1)
            java.lang.String r1 = ", offerUrl="
            r0.append(r1)
            java.lang.String r1 = r3.l
            r0.append(r1)
            java.lang.String r1 = ", reason="
            r0.append(r1)
            java.lang.String r1 = r3.m
            r0.append(r1)
            java.lang.String r1 = ", result="
            r0.append(r1)
            int r1 = r3.o
            r0.append(r1)
            java.lang.String r1 = ", duration="
            r0.append(r1)
            java.lang.String r1 = r3.p
            r0.append(r1)
            java.lang.String r1 = ", videoSize="
            r0.append(r1)
            long r1 = r3.q
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final long u() {
            r2 = this;
            long r0 = r2.q
            return r0
    }

    public final int v() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final java.lang.String w() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final int x() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public final int y() {
            r1 = this;
            int r0 = r1.o
            return r0
    }
}
