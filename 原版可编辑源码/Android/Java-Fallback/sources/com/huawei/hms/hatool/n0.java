package com.huawei.hms.hatool;

public class n0 {
    public static com.huawei.hms.hatool.n0 b;
    public static com.huawei.hms.hatool.n0 c;
    public java.util.concurrent.ThreadPoolExecutor a;

    public static class a implements java.lang.Runnable {
        public java.lang.Runnable a;

        public a(java.lang.Runnable r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public void run() {
                r2 = this;
                java.lang.Runnable r0 = r2.a
                if (r0 == 0) goto Lf
                r0.run()     // Catch: java.lang.Exception -> L8
                goto Lf
            L8:
                java.lang.String r0 = "hmsSdk"
                java.lang.String r1 = "InnerTask : Exception has happened,From internal operations!"
                com.huawei.hms.hatool.y.e(r0, r1)
            Lf:
                return
        }
    }

    static {
            com.huawei.hms.hatool.n0 r0 = new com.huawei.hms.hatool.n0
            r0.<init>()
            com.huawei.hms.hatool.n0 r0 = new com.huawei.hms.hatool.n0
            r0.<init>()
            com.huawei.hms.hatool.n0 r0 = new com.huawei.hms.hatool.n0
            r0.<init>()
            com.huawei.hms.hatool.n0.b = r0
            com.huawei.hms.hatool.n0 r0 = new com.huawei.hms.hatool.n0
            r0.<init>()
            com.huawei.hms.hatool.n0.c = r0
            return
    }

    public n0() {
            r8 = this;
            r8.<init>()
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r0 = 5000(0x1388, float:7.006E-42)
            r6.<init>(r0)
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1 = 0
            r2 = 1
            r3 = 60000(0xea60, double:2.9644E-319)
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            r8.a = r7
            return
    }

    public static com.huawei.hms.hatool.n0 a() {
            com.huawei.hms.hatool.n0 r0 = com.huawei.hms.hatool.n0.c
            return r0
    }

    public static com.huawei.hms.hatool.n0 b() {
            com.huawei.hms.hatool.n0 r0 = com.huawei.hms.hatool.n0.b
            return r0
    }

    public void a(com.huawei.hms.hatool.m0 r3) {
            r2 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = r2.a     // Catch: java.util.concurrent.RejectedExecutionException -> Lb
            com.huawei.hms.hatool.n0$a r1 = new com.huawei.hms.hatool.n0$a     // Catch: java.util.concurrent.RejectedExecutionException -> Lb
            r1.<init>(r3)     // Catch: java.util.concurrent.RejectedExecutionException -> Lb
            r0.execute(r1)     // Catch: java.util.concurrent.RejectedExecutionException -> Lb
            goto L12
        Lb:
            java.lang.String r3 = "hmsSdk"
            java.lang.String r0 = "addToQueue() Exception has happened!Form rejected execution"
            com.huawei.hms.hatool.y.e(r3, r0)
        L12:
            return
    }
}
