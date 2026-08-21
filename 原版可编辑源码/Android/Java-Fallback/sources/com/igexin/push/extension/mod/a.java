package com.igexin.push.extension.mod;

final class a implements com.igexin.a.g {
    a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.mod.SecurityUtils.a
            r0.append(r1)
            java.lang.String r1 = "|load so by new success ^_^"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            r0 = 1
            com.igexin.push.extension.mod.SecurityUtils.b = r0
            java.lang.String r0 = ""
            com.igexin.push.extension.mod.SecurityUtils.c = r0
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.String r1 = "load so by relinker success"
            r0.a(r1)
            return
    }

    @Override
    public void a(java.lang.Throwable r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "load so error = "
            r0.append(r1)
            java.lang.String r2 = r5.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "clientid"
            android.util.Log.e(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.extension.mod.SecurityUtils.a
            r0.append(r2)
            java.lang.String r2 = "|load so by new error = "
            r0.append(r2)
            java.lang.String r2 = r5.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r3)
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = r5.getMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.a(r1)
            com.igexin.push.extension.mod.SecurityUtils.b = r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.mod.SecurityUtils.c
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r1 = " + "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.igexin.push.extension.mod.SecurityUtils.c = r5
            return
    }
}
