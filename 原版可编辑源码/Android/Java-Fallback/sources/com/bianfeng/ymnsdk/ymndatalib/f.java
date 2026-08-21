package com.bianfeng.ymnsdk.ymndatalib;

public class f {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.f b;
    public static android.os.Handler c;
    public com.bianfeng.datafunsdk.net.ResponseHeaders a;

    public class a implements java.lang.Runnable {
        public final java.lang.String a;
        public final java.lang.String b;
        public final com.bianfeng.ymnsdk.ymndatalib.f c;

        public a(com.bianfeng.ymnsdk.ymndatalib.f r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r9 = this;
                com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()
                com.bianfeng.datafunsdk.bean.DataFunBean r8 = new com.bianfeng.datafunsdk.bean.DataFunBean
                java.lang.String r2 = r9.a
                java.lang.String r3 = r9.b
                com.bianfeng.ymnsdk.ymndatalib.f r1 = r9.c
                com.bianfeng.datafunsdk.net.ResponseHeaders r1 = com.bianfeng.ymnsdk.ymndatalib.f.a(r1)
                java.lang.String r6 = r1.toString()
                r4 = 0
                r5 = 0
                r7 = 0
                r1 = r8
                r1.<init>(r2, r3, r4, r5, r6, r7)
                r0.postByteData(r8)
                return
        }
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.bianfeng.ymnsdk.ymndatalib.f.c = r0
            return
    }

    public f() {
            r3 = this;
            r3.<init>()
            com.bianfeng.datafunsdk.net.ResponseHeaders r0 = new com.bianfeng.datafunsdk.net.ResponseHeaders
            java.lang.String r1 = "X-Error-Code"
            r2 = 0
            r0.<init>(r1, r2)
            r3.a = r0
            return
    }

    public static com.bianfeng.datafunsdk.net.ResponseHeaders a(com.bianfeng.ymnsdk.ymndatalib.f r0) {
            com.bianfeng.datafunsdk.net.ResponseHeaders r0 = r0.a
            return r0
    }

    public static com.bianfeng.ymnsdk.ymndatalib.f a() {
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.b
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.f> r0 = com.bianfeng.ymnsdk.ymndatalib.f.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.f r1 = com.bianfeng.ymnsdk.ymndatalib.f.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.f r1 = new com.bianfeng.ymnsdk.ymndatalib.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.f.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.b
            return r0
    }

    public void a(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PostDatalibUtils-->"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.getInstance()
            java.lang.String r0 = r0.getYmndataPostUrl()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PostDatalibUtils--url-->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r1)
            android.os.Handler r1 = com.bianfeng.ymnsdk.ymndatalib.f.c     // Catch: java.lang.Exception -> L3b
            com.bianfeng.ymnsdk.ymndatalib.f$a r2 = new com.bianfeng.ymnsdk.ymndatalib.f$a     // Catch: java.lang.Exception -> L3b
            r2.<init>(r3, r0, r4)     // Catch: java.lang.Exception -> L3b
            r1.post(r2)     // Catch: java.lang.Exception -> L3b
            goto L54
        L3b:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "调postByteData出错"
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r4)
        L54:
            return
    }

    public void b(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.getInstance()
            r0.setYmndataPostUrl(r2)
            return
    }
}
