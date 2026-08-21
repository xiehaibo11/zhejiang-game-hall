package com.igexin.push.core.e;

public abstract class a {
    protected java.lang.Long a;
    protected android.app.Activity b;
    protected java.lang.String c;

    public a() {
            r2 = this;
            r2.<init>()
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.a = r0
            return
    }

    public java.lang.Long a() {
            r1 = this;
            java.lang.Long r0 = r1.a
            return r0
    }

    public void a(android.app.Activity r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public abstract void a(android.content.Intent r1);

    public abstract void a(android.content.res.Configuration r1);

    public void a(java.lang.Long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public abstract boolean a(int r1, android.view.KeyEvent r2);

    public abstract boolean a(android.view.Menu r1);

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public abstract void c();

    public abstract void d();

    public abstract void e();

    public abstract void f();

    public abstract void g();

    public abstract void h();

    public abstract void i();
}
