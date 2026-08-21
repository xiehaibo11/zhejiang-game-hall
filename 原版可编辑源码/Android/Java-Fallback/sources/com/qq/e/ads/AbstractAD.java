package com.qq.e.ads;

public abstract class AbstractAD<T> {
    protected T a;
    private final android.os.Handler b;
    private volatile boolean c;
    private volatile boolean d;
    private volatile boolean e;



    public AbstractAD() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r2.d = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.b = r0
            return
    }

    static android.os.Handler a(com.qq.e.ads.AbstractAD r0) {
            android.os.Handler r0 = r0.b
            return r0
    }

    static boolean a(com.qq.e.ads.AbstractAD r0, boolean r1) {
            r0.c = r1
            return r1
    }

    private void b(android.content.Context r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            r0 = 1
            r8.e = r0
            com.qq.e.comm.managers.b r1 = com.qq.e.comm.managers.b.b()
            boolean r1 = r1.d()
            if (r1 == 0) goto L38
            com.qq.e.comm.managers.b r1 = com.qq.e.comm.managers.b.b()
            java.lang.String r5 = r1.a()
            boolean r1 = com.qq.e.comm.a.a(r9)
            if (r1 != 0) goto L26
            java.lang.String r9 = "Manifest文件中Activity/Service/Permission的声明有问题或者Permission权限未授予"
            com.qq.e.comm.util.GDTLogger.e(r9)
            r9 = 4002(0xfa2, float:5.608E-42)
            r8.a(r9)
            goto L3d
        L26:
            r8.d = r0
            java.util.concurrent.ExecutorService r0 = com.qq.e.comm.managers.b.g
            com.qq.e.ads.AbstractAD$1 r1 = new com.qq.e.ads.AbstractAD$1
            r2 = r1
            r3 = r8
            r4 = r9
            r6 = r10
            r7 = r11
            r2.<init>(r3, r4, r5, r6, r7)
            r0.execute(r1)
            goto L3d
        L38:
            r9 = 2003(0x7d3, float:2.807E-42)
            r8.a(r9)
        L3d:
            return
    }

    protected abstract T a(android.content.Context r1, com.qq.e.comm.pi.POFactory r2, java.lang.String r3, java.lang.String r4, java.lang.String r5);

    protected final void a(int r3) {
            r2 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L12
            r2.b(r3)
            goto L1c
        L12:
            android.os.Handler r0 = r2.b
            com.qq.e.ads.AbstractAD$2 r1 = new com.qq.e.ads.AbstractAD$2
            r1.<init>(r2, r3)
            r0.post(r1)
        L1c:
            return
    }

    protected final void a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto Lf
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            goto Lf
        L9:
            java.lang.String r0 = ""
            r1.b(r2, r3, r0)
            return
        Lf:
            java.lang.String r2 = "初始化错误：参数错误context或posId为空"
            com.qq.e.comm.util.GDTLogger.e(r2)
            r2 = 2001(0x7d1, float:2.804E-42)
            r1.a(r2)
            return
    }

    protected final void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L13
        Lf:
            r1.b(r2, r3, r4)
            return
        L13:
            java.lang.String r2 = "初始化错误：参数错误，context、posId、token 不可为空"
            com.qq.e.comm.util.GDTLogger.e(r2)
            r2 = 2001(0x7d1, float:2.804E-42)
            r1.a(r2)
            return
    }

    protected abstract void a(T r1);

    protected final void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = ":调用方法 "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "异常，广告实例还未初始化"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.qq.e.comm.util.GDTLogger.e(r3)
            return
    }

    protected final boolean a() {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto La
            boolean r0 = r1.d
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    protected abstract void b(int r1);

    protected final boolean b() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }
}
