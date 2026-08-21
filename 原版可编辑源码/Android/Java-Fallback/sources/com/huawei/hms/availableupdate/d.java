package com.huawei.hms.availableupdate;

public class d implements com.huawei.hms.availableupdate.f {
    public static final java.util.concurrent.Executor b = null;
    public final com.huawei.hms.availableupdate.f a;

    public static class a implements com.huawei.hms.availableupdate.g {
        public final com.huawei.hms.availableupdate.g a;

        public class a implements java.lang.Runnable {
            public final int a;
            public final com.huawei.hms.availableupdate.h b;
            public final com.huawei.hms.availableupdate.d.a c;

            public a(com.huawei.hms.availableupdate.d.a r1, int r2, com.huawei.hms.availableupdate.h r3) {
                    r0 = this;
                    r0.c = r1
                    r0.a = r2
                    r0.b = r3
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r3 = this;
                    com.huawei.hms.availableupdate.d$a r0 = r3.c
                    com.huawei.hms.availableupdate.g r0 = r0.a
                    int r1 = r3.a
                    com.huawei.hms.availableupdate.h r2 = r3.b
                    r0.a(r1, r2)
                    return
            }
        }

        public class b implements java.lang.Runnable {
            public final int a;
            public final int b;
            public final int c;
            public final java.io.File d;
            public final com.huawei.hms.availableupdate.d.a e;

            public b(com.huawei.hms.availableupdate.d.a r1, int r2, int r3, int r4, java.io.File r5) {
                    r0 = this;
                    r0.e = r1
                    r0.a = r2
                    r0.b = r3
                    r0.c = r4
                    r0.d = r5
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r5 = this;
                    com.huawei.hms.availableupdate.d$a r0 = r5.e
                    com.huawei.hms.availableupdate.g r0 = r0.a
                    int r1 = r5.a
                    int r2 = r5.b
                    int r3 = r5.c
                    java.io.File r4 = r5.d
                    r0.a(r1, r2, r3, r4)
                    return
            }
        }

        public a(com.huawei.hms.availableupdate.g r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a(int r9, int r10, int r11, java.io.File r12) {
                r8 = this;
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                r0.<init>(r1)
                com.huawei.hms.availableupdate.d$a$b r1 = new com.huawei.hms.availableupdate.d$a$b
                r2 = r1
                r3 = r8
                r4 = r9
                r5 = r10
                r6 = r11
                r7 = r12
                r2.<init>(r3, r4, r5, r6, r7)
                r0.post(r1)
                return
        }

        @Override
        public void a(int r3, com.huawei.hms.availableupdate.h r4) {
                r2 = this;
                android.os.Handler r0 = new android.os.Handler
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                r0.<init>(r1)
                com.huawei.hms.availableupdate.d$a$a r1 = new com.huawei.hms.availableupdate.d$a$a
                r1.<init>(r2, r3, r4)
                r0.post(r1)
                return
        }
    }

    public class b implements java.lang.Runnable {
        public final com.huawei.hms.availableupdate.g a;
        public final com.huawei.hms.availableupdate.h b;
        public final com.huawei.hms.availableupdate.d c;

        public b(com.huawei.hms.availableupdate.d r1, com.huawei.hms.availableupdate.g r2, com.huawei.hms.availableupdate.h r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.huawei.hms.availableupdate.d r0 = r3.c
                com.huawei.hms.availableupdate.f r0 = com.huawei.hms.availableupdate.d.a(r0)
                com.huawei.hms.availableupdate.g r1 = r3.a
                com.huawei.hms.availableupdate.g r1 = com.huawei.hms.availableupdate.d.a(r1)
                com.huawei.hms.availableupdate.h r2 = r3.b
                r0.a(r1, r2)
                return
        }
    }

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.huawei.hms.availableupdate.d.b = r0
            return
    }

    public d(com.huawei.hms.availableupdate.f r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "update must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            r1.a = r2
            return
    }

    public static com.huawei.hms.availableupdate.f a(com.huawei.hms.availableupdate.d r0) {
            com.huawei.hms.availableupdate.f r0 = r0.a
            return r0
    }

    public static com.huawei.hms.availableupdate.g a(com.huawei.hms.availableupdate.g r0) {
            com.huawei.hms.availableupdate.g r0 = b(r0)
            return r0
    }

    public static com.huawei.hms.availableupdate.g b(com.huawei.hms.availableupdate.g r1) {
            com.huawei.hms.availableupdate.d$a r0 = new com.huawei.hms.availableupdate.d$a
            r0.<init>(r1)
            return r0
    }

    @Override
    public void a() {
            r1 = this;
            com.huawei.hms.availableupdate.f r0 = r1.a
            r0.a()
            return
    }

    @Override
    public void a(com.huawei.hms.availableupdate.g r3, com.huawei.hms.availableupdate.h r4) {
            r2 = this;
            java.util.concurrent.Executor r0 = com.huawei.hms.availableupdate.d.b
            com.huawei.hms.availableupdate.d$b r1 = new com.huawei.hms.availableupdate.d$b
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            return
    }
}
