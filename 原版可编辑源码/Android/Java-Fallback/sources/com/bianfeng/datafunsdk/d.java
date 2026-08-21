package com.bianfeng.datafunsdk;

public class d extends com.bianfeng.datafunsdk.l<com.bianfeng.datafunsdk.bean.DataFunBean> {
    public static volatile com.bianfeng.datafunsdk.d g;
    public boolean f;

    public d() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.bianfeng.datafunsdk.bean.DataFunBean> r0 = com.bianfeng.datafunsdk.bean.DataFunBean.class
            boolean r0 = r1.a(r0)
            r1.f = r0
            return
    }

    public static com.bianfeng.datafunsdk.d e() {
            com.bianfeng.datafunsdk.d r0 = com.bianfeng.datafunsdk.d.g
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.datafunsdk.d> r0 = com.bianfeng.datafunsdk.d.class
            monitor-enter(r0)
            com.bianfeng.datafunsdk.d r1 = com.bianfeng.datafunsdk.d.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.datafunsdk.d r1 = new com.bianfeng.datafunsdk.d     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.datafunsdk.d.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.datafunsdk.d r0 = com.bianfeng.datafunsdk.d.g
            return r0
    }

    public synchronized void a(com.bianfeng.datafunsdk.bean.DataFunBean r8, com.bianfeng.datafunsdk.e r9) {
            r7 = this;
            monitor-enter(r7)
            java.lang.String r0 = "PostDatalib 开始插入数据--insert"
            com.bianfeng.datafunsdk.x.a(r0)     // Catch: java.lang.Throwable -> L46
            boolean r0 = r7.f     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto Lf
            r9.c(r8)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r7)
            return
        Lf:
            java.lang.Long r0 = r7.b(r8)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L46
            long r0 = r0.longValue()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L46
            int r2 = (int) r0
            r8.setId(r2)     // Catch: java.lang.Throwable -> L46
            double r2 = (double) r0     // Catch: java.lang.Throwable -> L46
            r4 = 4744542207431671808(0x41d7ffffffd00000, double:1.61061273525E9)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L2e
            com.bianfeng.datafunsdk.g r2 = com.bianfeng.datafunsdk.g.b     // Catch: java.lang.Throwable -> L46
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L46
            com.bianfeng.datafunsdk.y.a(r2)     // Catch: java.lang.Throwable -> L46
        L2e:
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L38
            r9.b(r8)     // Catch: java.lang.Throwable -> L46
            goto L3b
        L38:
            r9.c(r8)     // Catch: java.lang.Throwable -> L46
        L3b:
            monitor-exit(r7)
            return
        L3d:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L46
            r9.c(r8)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r7)
            return
        L46:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public void a(com.bianfeng.datafunsdk.e r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 != 0) goto L8
            r2.a()
            return
        L8:
            java.util.List r3 = r1.a(r3, r4)     // Catch: java.lang.Exception -> L1a
            boolean r4 = r3.isEmpty()
            if (r4 == 0) goto L16
            r2.a()
            goto L19
        L16:
            r2.a(r3)
        L19:
            return
        L1a:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public boolean a(com.bianfeng.datafunsdk.bean.DataFunBean r3) {
            r2 = this;
            boolean r0 = r2.f
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = 0
            int r3 = r2.a(r3)     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r3 = "ByteDataTask deleteEvent 异常"
            com.bianfeng.datafunsdk.x.a(r3)
            r3 = 0
        L16:
            if (r3 != 0) goto L19
            return r0
        L19:
            return r1
    }
}
