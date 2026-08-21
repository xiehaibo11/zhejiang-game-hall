package com.igexin.push.core.a;

public class q extends com.igexin.push.core.a.b {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.config.i.a
            r0.append(r1)
            java.lang.String r1 = "_RedirectServerAction"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.a.q.a = r0
            return
    }

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(java.lang.String r5, org.json.JSONArray r6) {
            r4 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f
            r1.<init>()     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L2f
            r1.append(r2)     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "|start fetch idc config, url : "
            r1.append(r2)     // Catch: java.lang.Exception -> L2f
            r1.append(r5)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2f
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L2f
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Exception -> L2f
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Exception -> L2f
            com.igexin.push.f.a.e r2 = new com.igexin.push.f.a.e     // Catch: java.lang.Exception -> L2f
            com.igexin.push.core.c.a r3 = new com.igexin.push.core.c.a     // Catch: java.lang.Exception -> L2f
            r3.<init>(r5, r6)     // Catch: java.lang.Exception -> L2f
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2f
            r5 = 1
            r1.a(r2, r0, r5)     // Catch: java.lang.Exception -> L2f
            goto L4a
        L2f:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = com.igexin.push.core.a.q.a
            r6.append(r1)
            java.lang.String r5 = r5.toString()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.Object[] r6 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r6)
        L4a:
            return
    }

    public static java.lang.String[] a(org.json.JSONArray r5) {
            r0 = 0
            r1 = 0
            int r2 = r5.length()     // Catch: java.lang.Exception -> L29
            java.lang.String[] r1 = new java.lang.String[r2]     // Catch: java.lang.Exception -> L29
            r2 = r0
        L9:
            int r3 = r5.length()     // Catch: java.lang.Exception -> L29
            if (r2 >= r3) goto L49
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L29
            r3.<init>()     // Catch: java.lang.Exception -> L29
            java.lang.String r4 = "http://"
            r3.append(r4)     // Catch: java.lang.Exception -> L29
            java.lang.String r4 = r5.getString(r2)     // Catch: java.lang.Exception -> L29
            r3.append(r4)     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L29
            r1[r2] = r3     // Catch: java.lang.Exception -> L29
            int r2 = r2 + 1
            goto L9
        L29:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.core.a.q.a
            r2.append(r3)
            java.lang.String r3 = "|parseIDCConfigURL exception"
            r2.append(r3)
            java.lang.String r5 = r5.toString()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L49:
            return r1
    }

    @Override
    public boolean a(java.lang.Object r19, org.json.JSONObject r20) {
            r18 = this;
            r1 = r18
            r0 = r20
            java.lang.String r2 = "conf"
            java.lang.String r3 = "loc"
            java.lang.String r4 = "action"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = com.igexin.push.core.a.q.a
            r5.append(r6)
            java.lang.String r6 = "|redirect server resp data : "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            r6 = 0
            java.lang.Object[] r7 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r5, r7)
            boolean r5 = r0.has(r4)     // Catch: java.lang.Exception -> L1c1
            if (r5 == 0) goto L1dd
            java.lang.String r4 = r0.getString(r4)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r5 = "redirect_server"
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L1c1
            if (r4 == 0) goto L1dd
            java.lang.String r4 = "delay"
            r7 = 0
            long r4 = r0.optLong(r4, r7)     // Catch: java.lang.Exception -> L1c1
            r9 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r9
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1c1
            r11.<init>()     // Catch: java.lang.Exception -> L1c1
            java.lang.String r12 = "address_list"
            org.json.JSONArray r12 = r0.getJSONArray(r12)     // Catch: java.lang.Exception -> L1c1
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1c1
            r13.<init>()     // Catch: java.lang.Exception -> L1c1
            java.lang.String r14 = "redirect|"
            r13.append(r14)     // Catch: java.lang.Exception -> L1c1
            r13.append(r4)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r14 = "|"
            r13.append(r14)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r14 = r12.toString()     // Catch: java.lang.Exception -> L1c1
            r13.append(r14)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Exception -> L1c1
            java.lang.Object[] r14 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L1c1
            com.igexin.b.a.c.b.a(r13, r14)     // Catch: java.lang.Exception -> L1c1
            r13 = r6
        L71:
            int r14 = r12.length()     // Catch: java.lang.Exception -> L1c1
            if (r13 >= r14) goto Lc4
            java.lang.String r14 = r12.getString(r13)     // Catch: java.lang.Exception -> L1c1
            r15 = 44
            int r15 = r14.indexOf(r15)     // Catch: java.lang.Exception -> L1c1
            if (r15 <= 0) goto Lbc
            java.lang.String r7 = r14.substring(r6, r15)     // Catch: java.lang.Exception -> L1c1
            int r15 = r15 + 1
            java.lang.String r8 = r14.substring(r15)     // Catch: java.lang.Exception -> L1c1
            long r14 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1c1
            long r16 = java.lang.Long.parseLong(r8)     // Catch: java.lang.NumberFormatException -> Lbc java.lang.Exception -> L1c1
            com.igexin.push.c.e r8 = new com.igexin.push.c.e     // Catch: java.lang.NumberFormatException -> Lbc java.lang.Exception -> L1c1
            r8.<init>()     // Catch: java.lang.NumberFormatException -> Lbc java.lang.Exception -> L1c1
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> Lbc java.lang.Exception -> L1c1
            r6.<init>()     // Catch: java.lang.NumberFormatException -> Lbc java.lang.Exception -> L1c1
            java.lang.String r9 = "socket://"
            r6.append(r9)     // Catch: java.lang.NumberFormatException -> Lb9 java.lang.Exception -> L1c1
            r6.append(r7)     // Catch: java.lang.NumberFormatException -> Lb9 java.lang.Exception -> L1c1
            java.lang.String r6 = r6.toString()     // Catch: java.lang.NumberFormatException -> Lb9 java.lang.Exception -> L1c1
            r8.a = r6     // Catch: java.lang.NumberFormatException -> Lb9 java.lang.Exception -> L1c1
            r6 = 1000(0x3e8, double:4.94E-321)
            long r16 = r16 * r6
            long r14 = r14 + r16
            r8.b = r14     // Catch: java.lang.NumberFormatException -> Lbd java.lang.Exception -> L1c1
            r11.add(r8)     // Catch: java.lang.NumberFormatException -> Lbd java.lang.Exception -> L1c1
            goto Lbd
        Lb9:
            r6 = 1000(0x3e8, double:4.94E-321)
            goto Lbd
        Lbc:
            r6 = r9
        Lbd:
            int r13 = r13 + 1
            r9 = r6
            r6 = 0
            r7 = 0
            goto L71
        Lc4:
            r6 = r7
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 < 0) goto Lcb
            com.igexin.push.core.d.F = r4     // Catch: java.lang.Exception -> L1c1
        Lcb:
            boolean r4 = r0.has(r3)     // Catch: java.lang.Exception -> L1c1
            if (r4 == 0) goto L18c
            boolean r4 = r0.has(r2)     // Catch: java.lang.Exception -> L1c1
            if (r4 == 0) goto L18c
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L170
            com.igexin.push.config.SDKUrlConfig.setLocation(r3)     // Catch: java.lang.Exception -> L170
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L170
            r3.<init>()     // Catch: java.lang.Exception -> L170
            java.lang.String r4 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L170
            r3.append(r4)     // Catch: java.lang.Exception -> L170
            java.lang.String r4 = " set group id : "
            r3.append(r4)     // Catch: java.lang.Exception -> L170
            java.lang.String r4 = com.igexin.push.core.d.d     // Catch: java.lang.Exception -> L170
            r3.append(r4)     // Catch: java.lang.Exception -> L170
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L170
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L170
            com.igexin.b.a.c.b.a(r3, r5)     // Catch: java.lang.Exception -> L170
            org.json.JSONArray r0 = r0.getJSONArray(r2)     // Catch: java.lang.Exception -> L170
            java.lang.String[] r2 = a(r0)     // Catch: java.lang.Exception -> L170
            if (r2 == 0) goto L18c
            int r3 = r2.length     // Catch: java.lang.Exception -> L170
            if (r3 <= 0) goto L18c
            java.lang.String[] r3 = com.igexin.push.config.SDKUrlConfig.getIdcConfigUrl()     // Catch: java.lang.Exception -> L170
            if (r3 == 0) goto L135
            r4 = 0
            r5 = r2[r4]     // Catch: java.lang.Exception -> L170
            r3 = r3[r4]     // Catch: java.lang.Exception -> L170
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Exception -> L170
            if (r3 != 0) goto L11b
            goto L135
        L11b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L170
            r0.<init>()     // Catch: java.lang.Exception -> L170
            java.lang.String r2 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L170
            r0.append(r2)     // Catch: java.lang.Exception -> L170
            java.lang.String r2 = "|current idc config url == new idc config url, return"
            r0.append(r2)     // Catch: java.lang.Exception -> L170
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L170
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L170
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L170
            goto L18c
        L135:
            long r3 = com.igexin.push.core.d.ae     // Catch: java.lang.Exception -> L170
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L144
            r3 = 0
            r2 = r2[r3]     // Catch: java.lang.Exception -> L170
        L140:
            r1.a(r2, r0)     // Catch: java.lang.Exception -> L170
            goto L18c
        L144:
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L170
            long r5 = com.igexin.push.core.d.ae     // Catch: java.lang.Exception -> L170
            long r3 = r3 - r5
            r5 = 7200000(0x6ddd00, double:3.5572727E-317)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L156
            r3 = 0
            r2 = r2[r3]     // Catch: java.lang.Exception -> L170
            goto L140
        L156:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L170
            r0.<init>()     // Catch: java.lang.Exception -> L170
            java.lang.String r2 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L170
            r0.append(r2)     // Catch: java.lang.Exception -> L170
            java.lang.String r2 = "|get idc cfg last time less than 2 hours return"
            r0.append(r2)     // Catch: java.lang.Exception -> L170
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L170
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L170
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L170
            goto L18c
        L170:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1c1
            r2.<init>()     // Catch: java.lang.Exception -> L1c1
            java.lang.String r3 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L1c1
            r2.append(r3)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1c1
            r2.append(r0)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L1c1
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1c1
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L1c1
        L18c:
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()     // Catch: java.lang.Exception -> L1c1
            com.igexin.push.c.a r0 = r0.d()     // Catch: java.lang.Exception -> L1c1
            r0.a(r11)     // Catch: java.lang.Exception -> L1c1
            com.igexin.b.a.b.a.a.f r0 = com.igexin.b.a.b.a.a.f.a()     // Catch: java.lang.Exception -> L1c1
            r0.c()     // Catch: java.lang.Exception -> L1c1
            boolean r0 = com.igexin.push.util.EncryptUtils.isLoadSuccess()     // Catch: java.lang.Exception -> L1c1
            if (r0 == 0) goto L1dd
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1c1
            r0.<init>()     // Catch: java.lang.Exception -> L1c1
            java.lang.String r2 = com.igexin.push.core.a.q.a     // Catch: java.lang.Exception -> L1c1
            r0.append(r2)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r2 = "|redirect reInit so ~~~~~"
            r0.append(r2)     // Catch: java.lang.Exception -> L1c1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1c1
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1c1
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L1c1
            com.igexin.push.util.EncryptUtils.reset()     // Catch: java.lang.Exception -> L1c1
            goto L1dd
        L1c1:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.core.a.q.a
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r2)
        L1dd:
            r0 = 1
            return r0
    }
}
