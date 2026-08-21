package com.xiaomi.clientreport.processor;

public class b implements com.xiaomi.clientreport.processor.IPerfProcessor {
    protected android.content.Context a;
    private java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> a;

    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static java.lang.String a(com.xiaomi.clientreport.data.a r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.production
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = r2.clientInterfaceId
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private java.lang.String b(com.xiaomi.clientreport.data.a r3) {
            r2 = this;
            int r0 = r3.production
            java.lang.String r3 = r3.clientInterfaceId
            if (r0 <= 0) goto L25
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.append(r0)
            java.lang.String r0 = "#"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            goto L27
        L25:
            java.lang.String r3 = ""
        L27:
            android.content.Context r0 = r2.a
            java.lang.String r1 = "perf"
            java.io.File r0 = r0.getExternalFilesDir(r1)
            if (r0 != 0) goto L38
            java.lang.String r3 = "cannot get folder when to write perf"
            com.xiaomi.channel.commonutils.logger.b.d(r3)
            r3 = 0
            goto L4a
        L38:
            boolean r1 = r0.exists()
            if (r1 != 0) goto L41
            r0.mkdirs()
        L41:
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            java.lang.String r3 = r1.getAbsolutePath()
        L4a:
            return r3
    }

    private java.lang.String c(com.xiaomi.clientreport.data.a r5) {
            r4 = this;
            java.lang.String r5 = r4.b(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto Lc
            return r1
        Lc:
            r0 = 0
        Ld:
            r2 = 20
            if (r0 >= r2) goto L2d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            android.content.Context r3 = r4.a
            boolean r3 = com.xiaomi.push.bt.a(r3, r2)
            if (r3 == 0) goto L2a
            r1 = r2
            goto L2d
        L2a:
            int r0 = r0 + 1
            goto Ld
        L2d:
            return r1
    }

    @Override
    public void a() {
            r6 = this;
            android.content.Context r0 = r6.a
            java.lang.String r1 = "perfUploading"
            java.lang.String r2 = "perf"
            com.xiaomi.push.bt.a(r0, r2, r1)
            android.content.Context r0 = r6.a
            java.io.File[] r0 = com.xiaomi.push.bt.a(r0, r1)
            if (r0 == 0) goto L31
            int r1 = r0.length
            if (r1 > 0) goto L15
            goto L31
        L15:
            int r1 = r0.length
            r2 = 0
        L17:
            if (r2 >= r1) goto L31
            r3 = r0[r2]
            if (r3 != 0) goto L1e
            goto L2e
        L1e:
            android.content.Context r4 = r6.a
            java.lang.String r5 = r3.getAbsolutePath()
            java.util.List r4 = com.xiaomi.clientreport.processor.e.a(r4, r5)
            r3.delete()
            r6.a(r4)
        L2e:
            int r2 = r2 + 1
            goto L17
        L31:
            return
    }

    @Override
    public void a(com.xiaomi.clientreport.data.a r9) {
            r8 = this;
            boolean r0 = r9 instanceof com.xiaomi.clientreport.data.PerfClientReport
            if (r0 != 0) goto L5
            return
        L5:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r0 = r8.a
            if (r0 != 0) goto La
            return
        La:
            com.xiaomi.clientreport.data.PerfClientReport r9 = (com.xiaomi.clientreport.data.PerfClientReport) r9
            java.lang.String r0 = a(r9)
            java.lang.String r1 = com.xiaomi.clientreport.processor.e.a(r9)
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r2 = r8.a
            java.lang.Object r2 = r2.get(r0)
            java.util.HashMap r2 = (java.util.HashMap) r2
            if (r2 != 0) goto L23
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
        L23:
            java.lang.Object r3 = r2.get(r1)
            com.xiaomi.clientreport.data.PerfClientReport r3 = (com.xiaomi.clientreport.data.PerfClientReport) r3
            if (r3 == 0) goto L39
            long r4 = r9.perfCounts
            long r6 = r3.perfCounts
            long r4 = r4 + r6
            r9.perfCounts = r4
            long r4 = r9.perfLatencies
            long r6 = r3.perfLatencies
            long r4 = r4 + r6
            r9.perfLatencies = r4
        L39:
            r2.put(r1, r9)
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r9 = r8.a
            r9.put(r0, r2)
            return
    }

    public void a(java.util.List<java.lang.String> r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.push.bt.a(r0, r2)
            return
    }

    public void a(com.xiaomi.clientreport.data.a[] r3) {
            r2 = this;
            r0 = 0
            r0 = r3[r0]
            java.lang.String r0 = r2.c(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            return
        Le:
            com.xiaomi.clientreport.processor.e.a(r0, r3)
            return
    }

    @Override
    public void b() {
            r3 = this;
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r0.size()
            if (r0 <= 0) goto L42
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r0 = r3.a
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r2 = r3.a
            java.lang.Object r1 = r2.get(r1)
            java.util.HashMap r1 = (java.util.HashMap) r1
            if (r1 == 0) goto L15
            int r2 = r1.size()
            if (r2 <= 0) goto L15
            int r2 = r1.size()
            com.xiaomi.clientreport.data.a[] r2 = new com.xiaomi.clientreport.data.a[r2]
            java.util.Collection r1 = r1.values()
            r1.toArray(r2)
            r3.a(r2)
            goto L15
        L42:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r0 = r3.a
            r0.clear()
            return
    }

    @Override
    public void setPerfMap(java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.clientreport.data.a>> r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
