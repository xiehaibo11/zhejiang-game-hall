package com.igexin.sdk.a;

public class a {
    private static com.igexin.sdk.a.a b;
    private com.igexin.sdk.IPushCore a;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.sdk.a.a a() {
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.b
            if (r0 != 0) goto Lb
            com.igexin.sdk.a.a r0 = new com.igexin.sdk.a.a
            r0.<init>()
            com.igexin.sdk.a.a.b = r0
        Lb:
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.b
            return r0
    }

    public void b() {
            r1 = this;
            com.igexin.push.core.stub.PushCore r0 = new com.igexin.push.core.stub.PushCore
            r0.<init>()
            r1.a = r0
            return
    }

    public com.igexin.sdk.IPushCore c() {
            r1 = this;
            com.igexin.sdk.IPushCore r0 = r1.a
            return r0
    }
}
