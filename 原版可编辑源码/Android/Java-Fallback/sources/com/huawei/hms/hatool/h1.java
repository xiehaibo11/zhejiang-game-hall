package com.huawei.hms.hatool;

public class h1 {
    public java.lang.String a;
    public com.huawei.hms.hatool.m b;

    public h1(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            com.huawei.hms.hatool.m r0 = new com.huawei.hms.hatool.m
            r0.<init>(r3)
            r2.b = r0
            com.huawei.hms.hatool.i r3 = com.huawei.hms.hatool.i.c()
            java.lang.String r0 = r2.a
            com.huawei.hms.hatool.m r1 = r2.b
            r3.a(r0, r1)
            return
    }

    public void a(int r4) {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.a
            r2 = 0
            r0[r2] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "HiAnalyticsInstance.onReport() is execute.TAG: %s,TYPE: %d"
            com.huawei.hms.hatool.y.a(r1, r2, r0)
            com.huawei.hms.hatool.g1 r0 = com.huawei.hms.hatool.g1.a()
            java.lang.String r1 = r3.a
            r0.a(r1, r4)
            return
    }

    public void a(int r4, java.lang.String r5, java.util.LinkedHashMap<java.lang.String, java.lang.String> r6) {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.a
            r2 = 0
            r0[r2] = r1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "HiAnalyticsInstance.onEvent(int type, String eventId, Map<String, String> mapValue) is execute.TAG: %s,TYPE: %d"
            com.huawei.hms.hatool.y.a(r1, r2, r0)
            boolean r0 = com.huawei.hms.hatool.q0.a(r5)
            java.lang.String r2 = ", TYPE: "
            if (r0 != 0) goto L52
            boolean r0 = r3.c(r4)
            if (r0 != 0) goto L25
            goto L52
        L25:
            boolean r0 = com.huawei.hms.hatool.q0.a(r6)
            if (r0 != 0) goto L48
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "onEvent() parameter mapValue will be cleared.TAG: "
            r6.append(r0)
            java.lang.String r0 = r3.a
            r6.append(r0)
            r6.append(r2)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.hatool.y.e(r1, r6)
            r6 = 0
        L48:
            com.huawei.hms.hatool.g1 r0 = com.huawei.hms.hatool.g1.a()
            java.lang.String r1 = r3.a
            r0.a(r1, r4, r5, r6)
            return
        L52:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "onEvent() parameters check fail. Nothing will be recorded.TAG: "
            r5.append(r6)
            java.lang.String r6 = r3.a
            r5.append(r6)
            r5.append(r2)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.hms.hatool.y.e(r1, r4)
            return
    }

    public void a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HiAnalyticsInstance.onEvent(eventId, mapValue) is execute.TAG : "
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r1, r0)
            if (r4 != 0) goto L20
            java.lang.String r4 = "context is null in onevent "
            com.huawei.hms.hatool.y.e(r1, r4)
            return
        L20:
            boolean r0 = com.huawei.hms.hatool.q0.a(r5)
            if (r0 != 0) goto L5a
            r0 = 0
            boolean r0 = r3.c(r0)
            if (r0 != 0) goto L2e
            goto L5a
        L2e:
            r0 = 65536(0x10000, float:9.1835E-41)
            java.lang.String r2 = "value"
            boolean r0 = com.huawei.hms.hatool.q0.a(r2, r6, r0)
            if (r0 != 0) goto L50
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "onEvent() parameter VALUE is overlong, content will be cleared.TAG: "
            r6.append(r0)
            java.lang.String r0 = r3.a
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.hatool.y.e(r1, r6)
            java.lang.String r6 = ""
        L50:
            com.huawei.hms.hatool.g1 r0 = com.huawei.hms.hatool.g1.a()
            java.lang.String r1 = r3.a
            r0.a(r1, r4, r5, r6)
            return
        L5a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "onEvent() parameters check fail. Nothing will be recorded.TAG: "
            r4.append(r5)
            java.lang.String r5 = r3.a
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.hatool.y.e(r1, r4)
            return
    }

    public void a(com.huawei.hms.hatool.k r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HiAnalyticsInstanceImpl.setMaintConf() is executed.TAG : "
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r1, r0)
            if (r3 != 0) goto L26
            java.lang.String r3 = "HiAnalyticsInstanceImpl.setMaintConf(): config for maint is null!"
            com.huawei.hms.hatool.y.e(r1, r3)
            com.huawei.hms.hatool.m r3 = r2.b
            r0 = 0
            r3.a(r0)
            return
        L26:
            com.huawei.hms.hatool.m r0 = r2.b
            r0.a(r3)
            return
    }

    public final com.huawei.hms.hatool.k b(int r2) {
            r1 = this;
            if (r2 == 0) goto L22
            r0 = 1
            if (r2 == r0) goto L1b
            r0 = 2
            if (r2 == r0) goto L14
            r0 = 3
            if (r2 == r0) goto Ld
            r2 = 0
            return r2
        Ld:
            com.huawei.hms.hatool.m r2 = r1.b
            com.huawei.hms.hatool.k r2 = r2.a()
            return r2
        L14:
            com.huawei.hms.hatool.m r2 = r1.b
            com.huawei.hms.hatool.k r2 = r2.d()
            return r2
        L1b:
            com.huawei.hms.hatool.m r2 = r1.b
            com.huawei.hms.hatool.k r2 = r2.b()
            return r2
        L22:
            com.huawei.hms.hatool.m r2 = r1.b
            com.huawei.hms.hatool.k r2 = r2.c()
            return r2
    }

    public void b(com.huawei.hms.hatool.k r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HiAnalyticsInstanceImpl.setOperConf() is executed.TAG: "
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r1, r0)
            if (r3 != 0) goto L26
            com.huawei.hms.hatool.m r3 = r2.b
            r0 = 0
            r3.b(r0)
            java.lang.String r3 = "HiAnalyticsInstanceImpl.setOperConf(): config for oper is null!"
            com.huawei.hms.hatool.y.e(r1, r3)
            return
        L26:
            com.huawei.hms.hatool.m r0 = r2.b
            r0.b(r3)
            return
    }

    public final boolean c(int r5) {
            r4 = this;
            r0 = 1
            r1 = 0
            java.lang.String r2 = "hmsSdk"
            r3 = 2
            if (r5 != r3) goto L18
            java.lang.String r5 = r4.a
            java.lang.String r3 = "_default_config_tag"
            boolean r5 = r3.equals(r5)
            if (r5 != 0) goto L17
            java.lang.String r5 = "verifyURL(): type: preins. Only default config can report Pre-install data."
        L13:
            com.huawei.hms.hatool.y.e(r2, r5)
            return r1
        L17:
            return r0
        L18:
            com.huawei.hms.hatool.k r3 = r4.b(r5)
            if (r3 == 0) goto L2a
            java.lang.String r3 = r3.h()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L29
            goto L2a
        L29:
            return r0
        L2a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "verifyURL(): URL check failed. type: "
            r0.append(r3)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto L13
    }
}
