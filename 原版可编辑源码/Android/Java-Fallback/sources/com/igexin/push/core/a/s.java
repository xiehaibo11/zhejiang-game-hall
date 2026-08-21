package com.igexin.push.core.a;

public class s extends com.igexin.push.core.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.config.i.a
            r0.append(r1)
            java.lang.String r1 = "_RegisterResultAction"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.a.s.a = r0
            return
    }

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean a(java.lang.Object r10) {
            r9 = this;
            boolean r0 = r10 instanceof com.igexin.push.d.c.o
            r1 = 1
            if (r0 == 0) goto L129
            com.igexin.push.d.c.o r10 = (com.igexin.push.d.c.o) r10
            r2 = 0
            com.igexin.push.core.d.F = r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "register resp |"
            r0.append(r4)
            long r4 = r10.a
            r0.append(r4)
            java.lang.String r4 = "|"
            r0.append(r4)
            long r4 = com.igexin.push.core.d.t
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "register resp cid = "
            r0.append(r5)
            java.lang.String r5 = r10.c
            r0.append(r5)
            java.lang.String r5 = " device id = "
            r0.append(r5)
            java.lang.String r5 = r10.d
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r5 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r5)
            long r5 = r10.a
            long r7 = com.igexin.push.core.d.t
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 == 0) goto Ld7
            com.igexin.push.core.d.o = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = com.igexin.push.core.a.s.a
            r0.append(r5)
            java.lang.String r5 = " change session : from ["
            r0.append(r5)
            long r5 = com.igexin.push.core.d.t
            r0.append(r5)
            java.lang.String r5 = "] to ["
            r0.append(r5)
            long r6 = r10.a
            r0.append(r6)
            java.lang.String r6 = "]"
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r7 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r7)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r7 = com.igexin.push.core.a.s.a
            r0.append(r7)
            java.lang.String r7 = " change cid : from ["
            r0.append(r7)
            java.lang.String r7 = com.igexin.push.core.d.u
            r0.append(r7)
            r0.append(r5)
            java.lang.String r5 = r10.c
            r0.append(r5)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r5 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r5)
            java.lang.String r0 = r10.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lcc
            java.lang.String r0 = r10.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lcc
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            java.lang.String r5 = r10.c
            java.lang.String r6 = r10.d
            long r7 = r10.a
            r0.a(r5, r6, r7)
            goto Ld5
        Lcc:
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            long r5 = r10.a
            r0.a(r5)
        Ld5:
            com.igexin.push.core.d.H = r2
        Ld7:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "loginReqAfterRegister|new session:"
            r10.append(r0)
            long r2 = com.igexin.push.core.d.t
            r10.append(r2)
            java.lang.String r0 = ", cid :"
            r10.append(r0)
            java.lang.String r0 = com.igexin.push.core.d.u
            r10.append(r0)
            java.lang.String r0 = ", devId :"
            r10.append(r0)
            java.lang.String r0 = com.igexin.push.core.d.A
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            java.lang.Object[] r0 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r10, r0)
            com.igexin.push.core.m r10 = com.igexin.push.core.m.a()
            com.igexin.push.d.c.i r10 = r10.d()
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "S-"
            r2.append(r3)
            long r3 = r10.a
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.a(r2, r10, r1)
        L129:
            return r1
    }
}
