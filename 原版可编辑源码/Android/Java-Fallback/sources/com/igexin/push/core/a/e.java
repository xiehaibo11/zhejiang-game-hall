package com.igexin.push.core.a;

public class e extends com.igexin.push.core.a.a {
    private static android.util.SparseArray<com.igexin.push.core.a.a> b;
    private static com.igexin.push.core.a.e c;
    private java.util.concurrent.ExecutorService a;

    private e() {
            r8 = this;
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            r1 = 0
            r2 = 1
            r3 = 30
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            r8.a = r7
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            com.igexin.push.core.a.e.b = r0
            com.igexin.push.core.a.j r1 = new com.igexin.push.core.a.j
            r1.<init>()
            r2 = 0
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.l r1 = new com.igexin.push.core.a.l
            r1.<init>()
            r2 = 5
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.n r1 = new com.igexin.push.core.a.n
            r1.<init>()
            r2 = 37
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.s r1 = new com.igexin.push.core.a.s
            r1.<init>()
            r2 = 9
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.r r1 = new com.igexin.push.core.a.r
            r1.<init>()
            r2 = 20
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.i r1 = new com.igexin.push.core.a.i
            r1.<init>()
            r2 = 26
            r0.put(r2, r1)
            android.util.SparseArray<com.igexin.push.core.a.a> r0 = com.igexin.push.core.a.e.b
            com.igexin.push.core.a.k r1 = new com.igexin.push.core.a.k
            r1.<init>()
            r2 = 97
            r0.put(r2, r1)
            return
    }

    public static com.igexin.push.core.a.e a() {
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.c
            if (r0 != 0) goto Lb
            com.igexin.push.core.a.e r0 = new com.igexin.push.core.a.e
            r0.<init>()
            com.igexin.push.core.a.e.c = r0
        Lb:
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.c
            return r0
    }

    public static boolean a(long r0) {
            boolean r0 = com.igexin.push.util.a.a(r0)
            return r0
    }

    private void m() {
            r2 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            r0.i()
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L24
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "CoreAction|network changed check condition status"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            r0.d()
        L24:
            return
    }

    public java.lang.Class a(android.content.Context r2) {
            r1 = this;
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            java.lang.Class r2 = r0.c(r2)
            return r2
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ":"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public void a(android.content.Intent r4) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "CoreAction|onServiceInitialize ##"
            com.igexin.b.a.c.b.a(r2, r1)
            if (r4 == 0) goto L81
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()
            r4.a(r0)
            com.igexin.push.core.d.o = r0
            boolean r4 = com.igexin.push.core.d.n
            if (r4 == 0) goto L21
            com.igexin.push.core.r r4 = com.igexin.push.core.r.a()
            r4.c()
            r4 = 1
            com.igexin.push.core.d.o = r4
        L21:
            com.igexin.push.core.x r4 = com.igexin.push.core.x.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            boolean r4 = r4.b(r1)
            if (r4 == 0) goto L81
            java.lang.String r4 = com.igexin.push.core.d.U
            if (r4 == 0) goto L81
            com.igexin.push.core.x r4 = com.igexin.push.core.x.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.Class r4 = r4.c(r1)
            java.lang.String r4 = r4.getName()
            java.lang.String r1 = com.igexin.push.core.CoreConsts.n
            boolean r1 = r4.equals(r1)
            if (r1 != 0) goto L57
            byte[] r4 = r4.getBytes()
            byte[] r4 = com.igexin.b.b.a.b(r4)
            if (r4 == 0) goto L81
            java.lang.String r1 = com.igexin.push.core.d.U
            com.igexin.push.util.c.a(r4, r1, r0)
            goto L81
        L57:
            java.io.File r4 = new java.io.File
            java.lang.String r1 = com.igexin.push.core.d.U
            r4.<init>(r1)
            boolean r4 = r4.delete()
            if (r4 == 0) goto L81
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "del "
            r4.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.U
            r4.append(r1)
            java.lang.String r1 = " success ~~~"
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r0)
        L81:
            return
    }

    public void a(android.os.Bundle r2) {
            r1 = this;
            com.igexin.push.core.v r0 = com.igexin.push.core.v.a()
            r0.a(r2)
            return
    }

    public void a(com.igexin.push.core.bean.PushTaskBean r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "405"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "ok"
            r2.a(r3, r4, r0)
            return
    }

    public void a(com.igexin.push.core.bean.PushTaskBean r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            long r1 = java.lang.System.currentTimeMillis()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r3 = "action"
            java.lang.String r4 = "pushmessage_feedback"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "appid"
            java.lang.String r4 = r10.getAppid()     // Catch: java.lang.Exception -> L54
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "id"
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L54
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "appkey"
            java.lang.String r4 = r10.getAppKey()     // Catch: java.lang.Exception -> L54
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "messageid"
            java.lang.String r4 = r10.getMessageId()     // Catch: java.lang.Exception -> L54
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "taskid"
            java.lang.String r4 = r10.getTaskId()     // Catch: java.lang.Exception -> L54
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "actionid"
            r0.put(r3, r11)     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "result"
            r0.put(r3, r12)     // Catch: java.lang.Exception -> L54
            java.lang.String r12 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L54
            r0.put(r12, r3)     // Catch: java.lang.Exception -> L54
        L54:
            java.lang.String r3 = r0.toString()
            com.igexin.push.d.c.b r12 = new com.igexin.push.d.c.b
            r12.<init>()
            r12.b()
            int r0 = (int) r1
            r12.a = r0
            java.lang.String r0 = "17258000"
            r12.d = r0
            r12.e = r3
            java.lang.String r0 = com.igexin.push.core.d.u
            r12.g = r0
            boolean r0 = com.igexin.push.core.d.n
            if (r0 == 0) goto L73
            r5 = r1
            goto L76
        L73:
            r4 = 0
            r5 = r4
        L76:
            com.igexin.push.core.b.e r7 = com.igexin.push.core.b.e.a()
            com.igexin.push.core.bean.h r8 = new com.igexin.push.core.bean.h
            r4 = 3
            r0 = r8
            r0.<init>(r1, r3, r4, r5)
            r7.a(r8)
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            if (r0 == 0) goto Lac
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "C-"
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1, r12)
        Lac:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "feedback|"
            r12.append(r0)
            java.lang.String r0 = r10.getTaskId()
            r12.append(r0)
            java.lang.String r0 = "|"
            r12.append(r0)
            java.lang.String r10 = r10.getMessageId()
            r12.append(r10)
            r12.append(r0)
            r12.append(r11)
            java.lang.String r10 = r12.toString()
            r11 = 0
            java.lang.Object[] r11 = new java.lang.Object[r11]
            com.igexin.b.a.c.b.a(r10, r11)
            return
    }

    void a(java.lang.String r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.a
            com.igexin.push.core.a.f r1 = new com.igexin.push.core.a.f
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    void a(org.json.JSONObject r2, java.lang.String r3) {
            r1 = this;
            com.igexin.push.core.bean.PushTaskBean r0 = new com.igexin.push.core.bean.PushTaskBean     // Catch: java.lang.Exception -> Lc
            r0.<init>()     // Catch: java.lang.Exception -> Lc
            r0.parse(r2)     // Catch: java.lang.Exception -> Lc
            r1.a(r0, r3)     // Catch: java.lang.Exception -> Lc
            goto L28
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "CoreAction "
            r3.append(r0)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r3)
        L28:
            return
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean a(com.igexin.push.d.c.c r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L80
            android.util.SparseArray<com.igexin.push.core.a.a> r1 = com.igexin.push.core.a.e.b
            int r2 = r5.i
            java.lang.Object r1 = r1.get(r2)
            com.igexin.push.core.a.a r1 = (com.igexin.push.core.a.a) r1
            boolean r2 = r5 instanceof com.igexin.push.d.c.h
            if (r2 != 0) goto L25
            boolean r2 = r5 instanceof com.igexin.push.d.c.k
            if (r2 != 0) goto L25
            boolean r2 = r5 instanceof com.igexin.push.d.c.l
            if (r2 != 0) goto L25
            boolean r2 = r5 instanceof com.igexin.push.d.c.o
            if (r2 != 0) goto L25
            boolean r2 = r5 instanceof com.igexin.push.d.c.p
            if (r2 != 0) goto L25
            boolean r2 = r5 instanceof com.igexin.push.d.c.f
            if (r2 == 0) goto L57
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreAction|receive : "
            r2.append(r3)
            java.lang.Class r3 = r5.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = " resp ~~~~"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r2, r0)
            com.igexin.b.a.b.a.a.f r0 = com.igexin.b.a.b.a.a.f.a()
            java.lang.Class r2 = r5.getClass()
            java.lang.String r2 = r2.getName()
            r0.a(r2)
        L57:
            boolean r0 = r5 instanceof com.igexin.push.d.c.k
            if (r0 != 0) goto L63
            boolean r0 = r5 instanceof com.igexin.push.d.c.l
            if (r0 != 0) goto L63
            boolean r0 = r5 instanceof com.igexin.push.d.c.o
            if (r0 == 0) goto L72
        L63:
            r2 = 0
            com.igexin.push.core.d.F = r2
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            r0.b()
        L72:
            if (r1 == 0) goto L77
            r1.a(r5)
        L77:
            com.igexin.push.f.b.b r5 = com.igexin.push.f.b.b.i()
            r5.j()
            r5 = 1
            return r5
        L80:
            return r0
    }

    @Override
    public boolean a(java.lang.Object r4) {
            r3 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            boolean r1 = r4 instanceof com.igexin.push.d.c.c
            r2 = 0
            if (r1 == 0) goto L15
            if (r0 == 0) goto L15
            com.igexin.push.d.c.c r4 = (com.igexin.push.d.c.c) r4
            r0.a(r4)
            goto L46
        L15:
            boolean r1 = r4 instanceof com.igexin.push.d.b.b
            if (r1 == 0) goto L24
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r1 = "CoreAction|TcpExceptionNotify###"
            com.igexin.b.a.c.b.a(r1, r4)
            r0.f()
            goto L46
        L24:
            boolean r4 = r4 instanceof com.igexin.push.d.b.a
            if (r4 == 0) goto L46
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r1 = "CoreAction|TcpDisconnectSuccessNotify ###"
            com.igexin.b.a.c.b.a(r1, r4)
            boolean r4 = com.igexin.push.core.d.n
            if (r4 == 0) goto L43
            com.igexin.push.core.d.n = r2
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r1 = "CoreAction|broadcast online state = offline"
            com.igexin.b.a.c.b.a(r1, r4)
            com.igexin.push.core.r r4 = com.igexin.push.core.r.a()
            r4.b()
        L43:
            r0.g()
        L46:
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            boolean r2 = r0.a(r2, r3, r4)
            return r2
    }

    public boolean a(org.json.JSONObject r2, com.igexin.push.core.bean.PushTaskBean r3) {
            r1 = this;
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            boolean r2 = r0.a(r2, r3)
            return r2
    }

    public void b() {
            r4 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "CoreAction|send heart beat data ........"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "H-"
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.igexin.push.d.c.f r2 = new com.igexin.push.d.c.f
            r2.<init>()
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    public void b(android.content.Intent r4) {
            r3 = this;
            if (r4 == 0) goto L3b
            java.lang.String r0 = "isSlave"
            boolean r1 = r4.hasExtra(r0)
            if (r1 == 0) goto L3b
            r1 = 0
            boolean r4 = r4.getBooleanExtra(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "CoreAction|onServiceInitializeForSlave isSlave ="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            if (r4 != 0) goto L28
            return
        L28:
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()
            r0 = 1
            r4.a(r0)
            boolean r4 = com.igexin.push.core.d.n
            if (r4 == 0) goto L3b
            com.igexin.push.core.r r4 = com.igexin.push.core.r.a()
            r4.c()
        L3b:
            return
    }

    public void b(com.igexin.push.core.bean.PushTaskBean r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "ok"
            r1.a(r2, r3, r0)
            return
    }

    void b(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "action"
            java.lang.String r2 = "received"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L11
            java.lang.String r1 = "id"
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L11
        L11:
            java.lang.String r4 = r0.toString()
            com.igexin.push.d.c.n r0 = new com.igexin.push.d.c.n
            r0.<init>()
            r0.b()
            long r1 = java.lang.System.currentTimeMillis()
            int r1 = (int) r1
            r0.a = r1
            java.lang.String r1 = "17258000"
            r0.d = r1
            r0.e = r4
            java.lang.String r4 = com.igexin.push.core.d.u
            r0.g = r4
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r4 = r4.i()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "C-"
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.a(r1, r0)
            return
    }

    public void c() {
            r6 = this;
            boolean r0 = com.igexin.push.core.d.n
            r1 = 0
            if (r0 != 0) goto L31
            double r2 = java.lang.Math.random()
            r4 = 4632233691727265792(0x4049000000000000, double:50.0)
            double r2 = r2 * r4
            r4 = 4641240890982006784(0x4069000000000000, double:200.0)
            double r2 = r2 + r4
            int r0 = (int) r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreAction|screen on or onresume, resetDelay = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r2, r1)
            long r0 = (long) r0
            com.igexin.push.core.d.F = r0
            com.igexin.push.f.b.f r0 = com.igexin.push.f.b.f.i()
            r0.j()
            goto L38
        L31:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "CoreAction|resetDelayTime, ignore ~~~~~"
            com.igexin.b.a.c.b.a(r1, r0)
        L38:
            return
    }

    public void c(android.content.Intent r7) {
            r6 = this;
            java.lang.String r0 = "accesstoken"
            if (r7 == 0) goto L184
            java.lang.String r1 = r7.getAction()
            if (r1 != 0) goto Lc
            goto L184
        Lc:
            r1 = 0
            java.lang.String r2 = r7.getAction()     // Catch: java.lang.Throwable -> L169
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L169
            r3.<init>()     // Catch: java.lang.Throwable -> L169
            java.lang.String r4 = "CoreAction|action = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L169
            r3.append(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L169
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L169
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> L169
            java.lang.String r3 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r3 == 0) goto L3a
            com.igexin.b.a.b.c r7 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L184
            r6.m()     // Catch: java.lang.Throwable -> L169
            goto L184
        L3a:
            java.lang.String r3 = com.igexin.push.core.CoreConsts.b     // Catch: java.lang.Throwable -> L169
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r3 == 0) goto L4b
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L169
            r0.a(r7)     // Catch: java.lang.Throwable -> L169
            goto L184
        L4b:
            java.lang.String r3 = com.igexin.push.core.CoreConsts.a     // Catch: java.lang.Throwable -> L169
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r3 == 0) goto L124
            java.lang.String r2 = "checkpackage"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r3 = r7.getStringExtra(r0)     // Catch: java.lang.Throwable -> L169
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L169
            r4.<init>()     // Catch: java.lang.Throwable -> L169
            java.lang.String r5 = "CoreAction|checkpackage = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L169
            r4.append(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r5 = " , accesstoken = "
            r4.append(r5)     // Catch: java.lang.Throwable -> L169
            r4.append(r3)     // Catch: java.lang.Throwable -> L169
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L169
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L169
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Throwable -> L169
            if (r2 == 0) goto L184
            if (r3 == 0) goto L184
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L169
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L169
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L169
            if (r2 == 0) goto L184
            java.lang.String r2 = com.igexin.push.core.CoreConsts.b     // Catch: java.lang.Throwable -> L169
            r7.setAction(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = com.igexin.push.core.d.ad     // Catch: java.lang.Throwable -> L169
            r7.putExtra(r0, r2)     // Catch: java.lang.Throwable -> L169
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L169
            r0.sendBroadcast(r7)     // Catch: java.lang.Throwable -> L169
            com.igexin.push.core.bean.PushTaskBean r0 = new com.igexin.push.core.bean.PushTaskBean     // Catch: java.lang.Throwable -> L169
            r0.<init>()     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = "appid"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169
            r0.setAppid(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = "messageid"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169
            r0.setMessageId(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = "taskid"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169
            r0.setTaskId(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = "id"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169
            r0.setId(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = com.igexin.push.core.d.b     // Catch: java.lang.Throwable -> L169
            r0.setAppKey(r2)     // Catch: java.lang.Throwable -> L169
            java.lang.String r2 = "feedbackid"
            java.lang.String r2 = r7.getStringExtra(r2)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            int r2 = r2 + 30010
            r0.setCurrentActionid(r2)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r3 = "isFloat"
            boolean r3 = r7.getBooleanExtra(r3, r1)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            if (r3 == 0) goto Lf7
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r3.<init>()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r4 = "notifyFloat:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r4 = "bigStyle"
            java.lang.String r7 = r7.getStringExtra(r4)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r3.append(r7)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
        Lf2:
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            goto L10b
        Lf7:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r3.<init>()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r4 = "notifyStyle:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r4 = "notifyStyle"
            java.lang.String r7 = r7.getStringExtra(r4)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r3.append(r7)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            goto Lf2
        L10b:
            com.igexin.push.core.a.e r3 = a()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r4.<init>()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r4.append(r2)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r2 = ""
            r4.append(r2)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            r3.a(r0, r2, r7)     // Catch: java.lang.Throwable -> L169 java.lang.Exception -> L184
            goto L184
        L124:
            java.lang.String r7 = "android.intent.action.TIME_SET"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L138
            int r7 = com.igexin.push.config.j.b     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L184
            com.igexin.push.a.a.c r7 = com.igexin.push.a.a.c.c()     // Catch: java.lang.Throwable -> L169
            r7.d()     // Catch: java.lang.Throwable -> L169
            goto L184
        L138:
            java.lang.String r7 = "android.intent.action.SCREEN_ON"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L15e
            r7 = 1
            com.igexin.push.core.d.s = r7     // Catch: java.lang.Throwable -> L169
            com.igexin.push.core.w r7 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L169
            boolean r7 = r7.b()     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L154
            com.igexin.push.core.w r7 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L169
            r7.d()     // Catch: java.lang.Throwable -> L169
        L154:
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L169
            r0 = 26
            if (r7 < r0) goto L184
            r6.c()     // Catch: java.lang.Throwable -> L169
            goto L184
        L15e:
            java.lang.String r7 = "android.intent.action.SCREEN_OFF"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L169
            if (r7 == 0) goto L184
            com.igexin.push.core.d.s = r1     // Catch: java.lang.Throwable -> L169
            goto L184
        L169:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "CoreAction"
            r0.append(r2)
            java.lang.String r7 = r7.toString()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r7, r0)
        L184:
            return
    }

    public void c(com.igexin.push.core.bean.PushTaskBean r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.a
            com.igexin.push.core.a.h r1 = new com.igexin.push.core.a.h
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            return
    }

    void d() {
            r10 = this;
            java.lang.String r0 = "extraData"
            r1 = 0
            com.igexin.push.core.b.e r2 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Throwable -> Lb1
            java.util.List r2 = r2.b()     // Catch: java.lang.Throwable -> Lb1
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Lb1
        Lf:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> Lb1
            if (r3 == 0) goto Lcc
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> Lb1
            com.igexin.push.core.bean.h r3 = (com.igexin.push.core.bean.h) r3     // Catch: java.lang.Throwable -> Lb1
            long r4 = r3.d()     // Catch: java.lang.Throwable -> Lb1
            r6 = 10000(0x2710, double:4.9407E-320)
            long r4 = r4 + r6
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb1
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 <= 0) goto L2b
            goto Lf
        L2b:
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r2 = r3.b()     // Catch: java.lang.Throwable -> Lb1
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lb1
            r8.<init>(r2)     // Catch: java.lang.Throwable -> Lb1
            com.igexin.push.d.c.b r2 = new com.igexin.push.d.c.b     // Catch: java.lang.Throwable -> Lb1
            r2.<init>()     // Catch: java.lang.Throwable -> Lb1
            r2.b()     // Catch: java.lang.Throwable -> Lb1
            int r4 = (int) r4     // Catch: java.lang.Throwable -> Lb1
            r2.a = r4     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = "17258000"
            r2.d = r4     // Catch: java.lang.Throwable -> Lb1
            boolean r4 = r8.has(r0)     // Catch: java.lang.Throwable -> Lb1
            if (r4 == 0) goto L5e
            java.lang.String r4 = r8.optString(r0)     // Catch: java.lang.Throwable -> Lb1
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> Lb1
            byte[] r4 = com.igexin.push.util.d.a(r4, r1)     // Catch: java.lang.Throwable -> Lb1
            r2.f = r4     // Catch: java.lang.Throwable -> Lb1
            r8.remove(r0)     // Catch: java.lang.Throwable -> Lb1
        L5e:
            java.lang.String r0 = r3.b()     // Catch: java.lang.Throwable -> Lb1
            r2.e = r0     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r0 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> Lb1
            r2.g = r0     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            r0.<init>()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = "freshral|"
            r0.append(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = r3.b()     // Catch: java.lang.Throwable -> Lb1
            r0.append(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb1
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb1
            com.igexin.b.a.c.b.a(r0, r4)     // Catch: java.lang.Throwable -> Lb1
            com.igexin.push.core.b.e r0 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Throwable -> Lb1
            long r3 = r3.a()     // Catch: java.lang.Throwable -> Lb1
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb1
            long r8 = r8 + r6
            r0.a(r3, r8)     // Catch: java.lang.Throwable -> Lb1
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> Lb1
            com.igexin.push.e.a r0 = r0.i()     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            r3.<init>()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = "C-"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> Lb1
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lb1
            r0.a(r3, r2)     // Catch: java.lang.Throwable -> Lb1
            goto Lcc
        Lb1:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreActionfreshRAL error :"
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        Lcc:
            return
    }

    void e() {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "action"
            java.lang.String r4 = "request_deviceid"
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L19
            java.lang.String r3 = "id"
            java.lang.String r4 = java.lang.String.valueOf(r0)     // Catch: org.json.JSONException -> L19
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L19
        L19:
            java.lang.String r2 = r2.toString()
            com.igexin.push.d.c.b r3 = new com.igexin.push.d.c.b
            r3.<init>()
            r3.b()
            int r0 = (int) r0
            r3.a = r0
            java.lang.String r0 = "17258000"
            r3.d = r0
            r3.e = r2
            java.lang.String r0 = com.igexin.push.core.d.u
            r3.g = r0
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "C-"
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1, r3)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "CoreAction|deviceidReq"
            com.igexin.b.a.c.b.a(r1, r0)
            return
    }

    public void f() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3d
            long r2 = com.igexin.push.core.d.H     // Catch: java.lang.Throwable -> L3d
            long r0 = r0 - r2
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 <= 0) goto L21
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L3d
            r0.b(r1)     // Catch: java.lang.Throwable -> L3d
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L3d
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3d
            r0.d(r2)     // Catch: java.lang.Throwable -> L3d
        L21:
            int r0 = com.igexin.push.core.d.am     // Catch: java.lang.Throwable -> L3d
            r2 = 5
            if (r0 > r2) goto L3d
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L3d
            int r2 = com.igexin.push.core.d.am     // Catch: java.lang.Throwable -> L3d
            r3 = 1
            int r2 = r2 + r3
            r0.b(r2)     // Catch: java.lang.Throwable -> L3d
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> L3d
            com.igexin.push.core.a.g r2 = new com.igexin.push.core.a.g     // Catch: java.lang.Throwable -> L3d
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L3d
            r0.a(r2, r1, r3)     // Catch: java.lang.Throwable -> L3d
        L3d:
            return
    }

    public boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void h() {
            r13 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r2 = "yyyy-MM-dd"
            r0.<init>(r2, r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r1 = r0.format(r1)
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "/sdcard/libs//"
            r2.<init>(r3)
            java.lang.String r4 = com.igexin.push.core.d.e
            if (r4 != 0) goto L21
            java.lang.String r4 = "unknowPacageName"
        L21:
            boolean r5 = r2.exists()
            if (r5 != 0) goto L28
            return
        L28:
            java.lang.String[] r2 = r2.list()
            if (r2 != 0) goto L2f
            return
        L2f:
            int r5 = r2.length
            r6 = 0
            r7 = r6
        L32:
            if (r7 >= r5) goto Lb2
            r8 = r2[r7]
            int r8 = r8.length()
            r9 = r2[r7]
            boolean r9 = r9.startsWith(r4)
            if (r9 == 0) goto Laf
            r9 = r2[r7]
            java.lang.String r10 = ".log"
            boolean r9 = r9.endsWith(r10)
            if (r9 == 0) goto Laf
            int r9 = r4.length()
            int r9 = r9 + 14
            if (r8 <= r9) goto Laf
            r9 = r2[r7]
            int r10 = r8 + (-15)
            java.lang.String r9 = r9.substring(r6, r10)
            boolean r9 = r4.equals(r9)
            if (r9 != 0) goto L63
            goto Laf
        L63:
            r9 = r2[r7]
            int r10 = r4.length()
            int r10 = r10 + 1
            int r8 = r8 + (-4)
            java.lang.String r8 = r9.substring(r10, r8)
            java.util.Date r8 = r0.parse(r8)     // Catch: java.lang.Exception -> Laf
            java.util.Date r9 = r0.parse(r1)     // Catch: java.lang.Exception -> Laf
            long r9 = r9.getTime()     // Catch: java.lang.Exception -> Laf
            long r11 = r8.getTime()     // Catch: java.lang.Exception -> Laf
            long r9 = r9 - r11
            r11 = 86400000(0x5265c00, double:4.2687272E-316)
            long r9 = r9 / r11
            long r8 = java.lang.Math.abs(r9)     // Catch: java.lang.Exception -> Laf
            r10 = 6
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 <= 0) goto Laf
            java.io.File r8 = new java.io.File     // Catch: java.lang.Exception -> Laf
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
            r9.<init>()     // Catch: java.lang.Exception -> Laf
            r9.append(r3)     // Catch: java.lang.Exception -> Laf
            r10 = r2[r7]     // Catch: java.lang.Exception -> Laf
            r9.append(r10)     // Catch: java.lang.Exception -> Laf
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Laf
            r8.<init>(r9)     // Catch: java.lang.Exception -> Laf
            boolean r9 = r8.exists()     // Catch: java.lang.Exception -> Laf
            if (r9 == 0) goto Laf
            r8.delete()     // Catch: java.lang.Exception -> Laf
        Laf:
            int r7 = r7 + 1
            goto L32
        Lb2:
            return
    }

    public void i() {
            r0 = this;
            com.igexin.push.util.a.d()
            return
    }

    public void j() {
            r7 = this;
            int r0 = com.igexin.push.core.d.ac
            int r0 = r0 + (-100)
            if (r0 >= 0) goto L7
            r0 = 0
        L7:
            com.igexin.push.core.d.ac = r0
            long r0 = java.lang.System.currentTimeMillis()
            java.util.HashMap<java.lang.String, java.lang.Long> r2 = com.igexin.push.core.d.ab
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L17:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L40
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r3 = r3.getValue()
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            long r3 = r0 - r3
            r5 = 3600000(0x36ee80, double:1.7786363E-317)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L17
            r2.remove()
            goto L17
        L40:
            return
    }

    public void k() {
            r4 = this;
            long r0 = com.igexin.push.core.d.L
            long r2 = java.lang.System.currentTimeMillis()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L12
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r1 = 0
            r0.a(r1)
        L12:
            return
    }

    public void l() {
            r4 = this;
            boolean r0 = com.igexin.push.core.d.W
            r1 = 1
            if (r0 != 0) goto L14
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.f.b.b r2 = com.igexin.push.f.b.b.i()
            r3 = 0
            boolean r0 = r0.a(r2, r3, r1)
            com.igexin.push.core.d.W = r0
        L14:
            boolean r0 = com.igexin.push.core.d.X
            if (r0 != 0) goto L26
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.f.b.f r2 = com.igexin.push.f.b.f.i()
            boolean r0 = r0.a(r2, r1, r1)
            com.igexin.push.core.d.X = r0
        L26:
            boolean r0 = com.igexin.push.core.d.Y
            if (r0 != 0) goto L31
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            r0.d()
        L31:
            return
    }
}
