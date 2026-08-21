package com.huawei.hms.hatool;

public class k0 implements com.huawei.hms.hatool.m0 {
    public android.content.Context a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;

    public k0(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            r1.a = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            return
    }

    public final void a(java.lang.String r4, java.util.List<com.huawei.hms.hatool.q> r5) {
            r3 = this;
            android.util.Pair r4 = com.huawei.hms.hatool.s0.a(r4)
            java.lang.Object r0 = r4.first
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r4 = r4.second
            java.lang.String r4 = (java.lang.String) r4
            com.huawei.hms.hatool.t r1 = new com.huawei.hms.hatool.t
            java.lang.String r2 = r3.d
            r1.<init>(r5, r0, r4, r2)
            r1.a()
            return
    }

    @Override
    public void run() {
            r10 = this;
            java.lang.String r0 = "cached_v2_1"
            java.lang.String r1 = "stat_v2_1"
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "eventReportTask is running"
            com.huawei.hms.hatool.y.c(r2, r3)
            android.content.Context r3 = r10.a
            boolean r3 = com.huawei.hms.hatool.p0.a(r3)
            java.lang.String r4 = "alltype"
            if (r3 == 0) goto L1c
            java.lang.String r5 = "workKey is refresh,begin report all data"
            com.huawei.hms.hatool.y.c(r2, r5)
            r10.c = r4
        L1c:
            r5 = 1
            r6 = 0
            android.content.Context r7 = r10.a     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r8 = r10.b     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r9 = r10.c     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.util.Map r7 = com.huawei.hms.hatool.w.a(r7, r8, r9)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            int r8 = r7.size()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            if (r8 != 0) goto L70
            java.lang.String r7 = "no have events to report: tag:%s : type:%s"
            r8 = 2
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r9 = r10.b     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            r8[r6] = r9     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r9 = r10.c     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            r8[r5] = r9     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            com.huawei.hms.hatool.y.b(r2, r7, r8)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r2 = r10.c
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L55
            android.content.Context r2 = r10.a
            java.lang.String[] r3 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r2, r1, r3)
            android.content.Context r1 = r10.a
            java.lang.String[] r2 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r1, r0, r2)
            goto L6f
        L55:
            java.lang.String r2 = r10.b
            java.lang.String r3 = r10.c
            java.lang.String r2 = com.huawei.hms.hatool.s0.a(r2, r3)
            android.content.Context r3 = r10.a
            java.lang.String[] r4 = new java.lang.String[r5]
            r4[r6] = r2
            com.huawei.hms.hatool.g0.a(r3, r1, r4)
            android.content.Context r1 = r10.a
            java.lang.String[] r3 = new java.lang.String[r5]
            r3[r6] = r2
            com.huawei.hms.hatool.g0.a(r1, r0, r3)
        L6f:
            return
        L70:
            java.util.Set r7 = r7.entrySet()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
        L78:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            if (r8 == 0) goto L94
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.util.Map$Entry r8 = (java.util.Map.Entry) r8     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.Object r9 = r8.getKey()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.lang.Object r8 = r8.getValue()     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            java.util.List r8 = (java.util.List) r8     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            r10.a(r9, r8)     // Catch: java.lang.Throwable -> Lc8 java.lang.Exception -> Lcb java.lang.IllegalArgumentException -> L116
            goto L78
        L94:
            java.lang.String r7 = r10.c
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto Lac
            android.content.Context r4 = r10.a
            java.lang.String[] r5 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r4, r1, r5)
            android.content.Context r1 = r10.a
            java.lang.String[] r4 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r1, r0, r4)
            goto L160
        Lac:
            java.lang.String r4 = r10.b
            java.lang.String r7 = r10.c
            java.lang.String r4 = com.huawei.hms.hatool.s0.a(r4, r7)
            android.content.Context r7 = r10.a
            java.lang.String[] r8 = new java.lang.String[r5]
            r8[r6] = r4
            com.huawei.hms.hatool.g0.a(r7, r1, r8)
            android.content.Context r1 = r10.a
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r6] = r4
            com.huawei.hms.hatool.g0.a(r1, r0, r5)
            goto L160
        Lc8:
            r2 = move-exception
            goto L16f
        Lcb:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8
            r8.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = "readEventRecords handData Exception:"
            r8.append(r9)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> Lc8
            r8.append(r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> Lc8
            com.huawei.hms.hatool.y.e(r2, r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r10.c
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto Lfb
            android.content.Context r4 = r10.a
            java.lang.String[] r5 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r4, r1, r5)
            android.content.Context r1 = r10.a
            java.lang.String[] r4 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r1, r0, r4)
            goto L160
        Lfb:
            java.lang.String r4 = r10.b
            java.lang.String r7 = r10.c
            java.lang.String r4 = com.huawei.hms.hatool.s0.a(r4, r7)
            android.content.Context r7 = r10.a
            java.lang.String[] r8 = new java.lang.String[r5]
            r8[r6] = r4
            com.huawei.hms.hatool.g0.a(r7, r1, r8)
            android.content.Context r1 = r10.a
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r6] = r4
            com.huawei.hms.hatool.g0.a(r1, r0, r5)
            goto L160
        L116:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8
            r8.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = "readEventRecords handData IllegalArgumentException:"
            r8.append(r9)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> Lc8
            r8.append(r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> Lc8
            com.huawei.hms.hatool.y.e(r2, r7)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r10.c
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L146
            android.content.Context r4 = r10.a
            java.lang.String[] r5 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r4, r1, r5)
            android.content.Context r1 = r10.a
            java.lang.String[] r4 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r1, r0, r4)
            goto L160
        L146:
            java.lang.String r4 = r10.b
            java.lang.String r7 = r10.c
            java.lang.String r4 = com.huawei.hms.hatool.s0.a(r4, r7)
            android.content.Context r7 = r10.a
            java.lang.String[] r8 = new java.lang.String[r5]
            r8[r6] = r4
            com.huawei.hms.hatool.g0.a(r7, r1, r8)
            android.content.Context r1 = r10.a
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r6] = r4
            com.huawei.hms.hatool.g0.a(r1, r0, r5)
        L160:
            if (r3 == 0) goto L16e
            java.lang.String r0 = "refresh local key"
            com.huawei.hms.hatool.y.c(r2, r0)
            com.huawei.hms.hatool.d0 r0 = com.huawei.hms.hatool.d0.f()
            r0.b()
        L16e:
            return
        L16f:
            java.lang.String r3 = r10.c
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L186
            android.content.Context r3 = r10.a
            java.lang.String[] r4 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r3, r1, r4)
            android.content.Context r1 = r10.a
            java.lang.String[] r3 = new java.lang.String[r6]
            com.huawei.hms.hatool.g0.a(r1, r0, r3)
            goto L1a0
        L186:
            java.lang.String r3 = r10.b
            java.lang.String r4 = r10.c
            java.lang.String r3 = com.huawei.hms.hatool.s0.a(r3, r4)
            android.content.Context r4 = r10.a
            java.lang.String[] r7 = new java.lang.String[r5]
            r7[r6] = r3
            com.huawei.hms.hatool.g0.a(r4, r1, r7)
            android.content.Context r1 = r10.a
            java.lang.String[] r4 = new java.lang.String[r5]
            r4[r6] = r3
            com.huawei.hms.hatool.g0.a(r1, r0, r4)
        L1a0:
            throw r2
    }
}
