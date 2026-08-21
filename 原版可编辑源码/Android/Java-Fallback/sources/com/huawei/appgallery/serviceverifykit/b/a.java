package com.huawei.appgallery.serviceverifykit.b;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.util.List<com.huawei.appgallery.serviceverifykit.a.a> b(java.util.List<com.huawei.appgallery.serviceverifykit.a.a> r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r7.iterator()
            r2 = 0
        La:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L38
            java.lang.Object r3 = r1.next()
            com.huawei.appgallery.serviceverifykit.a.a r3 = (com.huawei.appgallery.serviceverifykit.a.a) r3
            int r4 = r3.b()
            if (r4 <= r2) goto L27
            r0.clear()
            int r2 = r3.b()
        L23:
            r0.add(r3)
            goto La
        L27:
            int r4 = r3.b()
            if (r4 != r2) goto L2e
            goto L23
        L2e:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r4 = "OptimizationCenter"
            java.lang.String r5 = "condition Low level"
            r3.b(r4, r5)
            goto La
        L38:
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L3f
            return r0
        L3f:
            return r7
    }

    private java.util.List<com.huawei.appgallery.serviceverifykit.a.a> c(java.util.List<com.huawei.appgallery.serviceverifykit.a.a> r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r5.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            com.huawei.appgallery.serviceverifykit.a.a r2 = (com.huawei.appgallery.serviceverifykit.a.a) r2
            int r3 = r2.a()
            if (r3 != 0) goto L9
            r0.add(r2)
            goto L9
        L1f:
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L26
            return r0
        L26:
            return r5
    }

    private java.util.List<com.huawei.appgallery.serviceverifykit.a.a> d(java.util.List<com.huawei.appgallery.serviceverifykit.a.a> r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r6.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()
            com.huawei.appgallery.serviceverifykit.a.a r2 = (com.huawei.appgallery.serviceverifykit.a.a) r2
            int r3 = r2.c()
            r4 = 1
            if (r3 != r4) goto L9
            r0.add(r2)
            goto L9
        L20:
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L27
            return r0
        L27:
            return r6
    }

    private java.util.List<com.huawei.appgallery.serviceverifykit.a.a> e(java.util.List<com.huawei.appgallery.serviceverifykit.a.a> r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r1 = r6.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()
            com.huawei.appgallery.serviceverifykit.a.a r2 = (com.huawei.appgallery.serviceverifykit.a.a) r2
            int r3 = r2.d()
            r4 = -1
            if (r3 <= r4) goto L9
            r0.add(r2)
            goto L9
        L20:
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L27
            return r0
        L27:
            return r6
    }

    public java.lang.String a(java.util.List<com.huawei.appgallery.serviceverifykit.a.a> r5) {
            r4 = this;
            java.util.List r5 = r4.e(r5)
            java.util.List r5 = r4.d(r5)
            java.util.List r5 = r4.c(r5)
            java.util.List r5 = r4.b(r5)
            int r0 = r5.size()
            java.lang.String r1 = ""
            if (r0 <= 0) goto L38
            java.util.Iterator r5 = r5.iterator()
            r0 = 0
        L1d:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L38
            java.lang.Object r2 = r5.next()
            com.huawei.appgallery.serviceverifykit.a.a r2 = (com.huawei.appgallery.serviceverifykit.a.a) r2
            int r3 = r2.f()
            if (r3 < r0) goto L1d
            int r0 = r2.f()
            java.lang.String r1 = r2.e()
            goto L1d
        L38:
            return r1
    }
}
