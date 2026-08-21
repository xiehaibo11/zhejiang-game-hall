package com.alipay.sdk.m.x;

public class f {
    public java.util.Stack<com.alipay.sdk.m.x.e> a;

    public f() {
            r1 = this;
            r1.<init>()
            java.util.Stack r0 = new java.util.Stack
            r0.<init>()
            r1.a = r0
            return
    }

    public void a() {
            r2 = this;
            boolean r0 = r2.b()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Stack<com.alipay.sdk.m.x.e> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.alipay.sdk.m.x.e r1 = (com.alipay.sdk.m.x.e) r1
            r1.a()
            goto Ld
        L1d:
            java.util.Stack<com.alipay.sdk.m.x.e> r0 = r2.a
            r0.clear()
            return
    }

    public void a(com.alipay.sdk.m.x.e r2) {
            r1 = this;
            java.util.Stack<com.alipay.sdk.m.x.e> r0 = r1.a
            r0.push(r2)
            return
    }

    public boolean b() {
            r1 = this;
            java.util.Stack<com.alipay.sdk.m.x.e> r0 = r1.a
            boolean r0 = r0.isEmpty()
            return r0
    }

    public com.alipay.sdk.m.x.e c() {
            r1 = this;
            java.util.Stack<com.alipay.sdk.m.x.e> r0 = r1.a
            java.lang.Object r0 = r0.pop()
            com.alipay.sdk.m.x.e r0 = (com.alipay.sdk.m.x.e) r0
            return r0
    }
}
