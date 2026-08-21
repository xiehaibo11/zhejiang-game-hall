package com.qq.e.ads.dfa;

public class GDTApkManager {
    private com.qq.e.comm.pi.DFA a;
    private boolean b;
    private boolean c;
    private java.util.concurrent.atomic.AtomicInteger d;
    private android.content.Context e;


    public GDTApkManager(android.content.Context r3, com.qq.e.ads.dfa.IGDTApkListener r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r2.c = r0
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
            r1.<init>(r0)
            r2.d = r1
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()
            boolean r0 = r0.d()
            if (r0 == 0) goto L24
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()
            java.lang.String r0 = r0.a()
            r2.a(r3, r0, r4)
        L24:
            return
    }

    static com.qq.e.comm.pi.DFA a(com.qq.e.ads.dfa.GDTApkManager r0, com.qq.e.comm.pi.DFA r1) {
            r0.a = r1
            return r1
    }

    static java.util.concurrent.atomic.AtomicInteger a(com.qq.e.ads.dfa.GDTApkManager r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.d
            return r0
    }

    private void a(android.content.Context r1, java.lang.String r2, com.qq.e.ads.dfa.IGDTApkListener r3) {
            r0 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L25
            if (r1 != 0) goto L9
            goto L25
        L9:
            boolean r2 = com.qq.e.comm.a.a(r1)
            if (r2 != 0) goto L15
            java.lang.String r1 = "初始化错误：必需的 Activity/Service/Permission 没有在AndroidManifest.xml中声明"
            com.qq.e.comm.util.GDTLogger.e(r1)
            return
        L15:
            r2 = 1
            r0.b = r2
            r0.e = r1
            java.util.concurrent.ExecutorService r1 = com.qq.e.comm.managers.b.g
            com.qq.e.ads.dfa.GDTApkManager$1 r2 = new com.qq.e.ads.dfa.GDTApkManager$1
            r2.<init>(r0, r3)
            r1.execute(r2)
            return
        L25:
            java.lang.String r1 = "初始化错误：GDTApkManager 构造失败，Context和appID不能为空"
            com.qq.e.comm.util.GDTLogger.e(r1)
            return
    }

    static boolean a(com.qq.e.ads.dfa.GDTApkManager r0, boolean r1) {
            r0.c = r1
            return r1
    }

    public final void loadGDTApk() {
            r1 = this;
            boolean r0 = r1.b
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r1.c
            if (r0 != 0) goto Lf
            java.util.concurrent.atomic.AtomicInteger r0 = r1.d
            r0.incrementAndGet()
            goto L1c
        Lf:
            com.qq.e.comm.pi.DFA r0 = r1.a
            if (r0 == 0) goto L17
            r0.loadGDTApk()
            goto L1c
        L17:
            java.lang.String r0 = "调用loadGDTApk失败，实例未被正常初始化"
            com.qq.e.comm.util.GDTLogger.e(r0)
        L1c:
            return
    }

    public final void startInstall(com.qq.e.ads.dfa.GDTApk r3) {
            r2 = this;
            com.qq.e.comm.pi.DFA r0 = r2.a
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.e
            r0.startInstall(r1, r3)
        L9:
            return
    }
}
