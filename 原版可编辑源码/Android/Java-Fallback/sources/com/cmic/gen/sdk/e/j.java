package com.cmic.gen.sdk.e;

public class j {
    private static com.cmic.gen.sdk.e.j b;
    private final android.content.Context a;

    private j(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.cmic.gen.sdk.e.j a() {
            com.cmic.gen.sdk.e.j r0 = com.cmic.gen.sdk.e.j.b
            return r0
    }

    public static void a(android.content.Context r1) {
            com.cmic.gen.sdk.e.j r0 = new com.cmic.gen.sdk.e.j
            r0.<init>(r1)
            com.cmic.gen.sdk.e.j.b = r0
            return
    }

    private java.lang.String b(java.lang.String r3) {
            r2 = this;
            int r0 = r3.hashCode()
            r1 = 49679479(0x2f60c77, float:3.6153606E-37)
            if (r0 == r1) goto L6f
            r1 = 49679502(0x2f60c8e, float:3.6153657E-37)
            if (r0 == r1) goto L64
            switch(r0) {
                case 49679470: goto L5a;
                case 49679471: goto L50;
                case 49679472: goto L46;
                case 49679473: goto L3c;
                case 49679474: goto L32;
                case 49679475: goto L27;
                case 49679476: goto L1d;
                case 49679477: goto L13;
                default: goto L11;
            }
        L11:
            goto L79
        L13:
            java.lang.String r0 = "46007"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 2
            goto L7a
        L1d:
            java.lang.String r0 = "46006"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 5
            goto L7a
        L27:
            java.lang.String r0 = "46005"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 8
            goto L7a
        L32:
            java.lang.String r0 = "46004"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 3
            goto L7a
        L3c:
            java.lang.String r0 = "46003"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 7
            goto L7a
        L46:
            java.lang.String r0 = "46002"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 1
            goto L7a
        L50:
            java.lang.String r0 = "46001"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 4
            goto L7a
        L5a:
            java.lang.String r0 = "46000"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 0
            goto L7a
        L64:
            java.lang.String r0 = "46011"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 9
            goto L7a
        L6f:
            java.lang.String r0 = "46009"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L79
            r3 = 6
            goto L7a
        L79:
            r3 = -1
        L7a:
            java.lang.String r0 = "SIMUtils"
            switch(r3) {
                case 0: goto L92;
                case 1: goto L92;
                case 2: goto L92;
                case 3: goto L92;
                case 4: goto L8a;
                case 5: goto L8a;
                case 6: goto L8a;
                case 7: goto L82;
                case 8: goto L82;
                case 9: goto L82;
                default: goto L7f;
            }
        L7f:
            java.lang.String r3 = "0"
            return r3
        L82:
            java.lang.String r3 = "中国电信"
            com.cmic.gen.sdk.e.c.a(r0, r3)
            java.lang.String r3 = "3"
            return r3
        L8a:
            java.lang.String r3 = "中国联通"
            com.cmic.gen.sdk.e.c.a(r0, r3)
            java.lang.String r3 = "2"
            return r3
        L92:
            java.lang.String r3 = "中国移动"
            com.cmic.gen.sdk.e.c.a(r0, r3)
            java.lang.String r3 = "1"
            return r3
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto La
            java.lang.String r2 = r1.c()
        La:
            java.lang.String r2 = r1.b(r2)
            return r2
    }

    public java.lang.String b() {
            r1 = this;
            com.cmic.gen.sdk.b.a r0 = com.cmic.gen.sdk.b.a.a()     // Catch: java.lang.Exception -> L13
            com.cmic.gen.sdk.b.a$a r0 = r0.b()     // Catch: java.lang.Exception -> L13
            int r0 = r0.a()     // Catch: java.lang.Exception -> L13
            if (r0 < 0) goto L17
            java.lang.String r0 = java.lang.Integer.toString(r0)     // Catch: java.lang.Exception -> L13
            return r0
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String c() {
            r3 = this;
            android.content.Context r0 = r3.a
            java.lang.String r1 = "phone"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            if (r0 == 0) goto L27
            java.lang.String r0 = r0.getSimOperator()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "SysOperator= "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "SIMUtils"
            com.cmic.gen.sdk.e.c.b(r2, r1)
            return r0
        L27:
            java.lang.String r0 = ""
            return r0
    }
}
