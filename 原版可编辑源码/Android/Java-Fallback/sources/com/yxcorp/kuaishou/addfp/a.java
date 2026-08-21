package com.yxcorp.kuaishou.addfp;

class a implements java.lang.Runnable {
    final com.yxcorp.kuaishou.addfp.KWEGIDDFP a;

    a(com.yxcorp.kuaishou.addfp.KWEGIDDFP r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = r3.a     // Catch: java.lang.Throwable -> L49
            android.content.Context r0 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$100(r0)     // Catch: java.lang.Throwable -> L49
            if (r0 != 0) goto L15
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = r3.a     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.ResponseDfpCallback r0 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$200(r0)     // Catch: java.lang.Throwable -> L49
            r1 = -3
            java.lang.String r2 = "parameter error"
            r0.onFailed(r1, r2)     // Catch: java.lang.Throwable -> L49
            return
        L15:
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = r3.a     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$100(r0)     // Catch: java.lang.Throwable -> L49
            int r0 = com.yxcorp.kuaishou.addfp.android.b.f.c     // Catch: java.lang.Throwable -> L49
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L49
            r1 = 28
            if (r0 < r1) goto L25
            com.yxcorp.kuaishou.addfp.android.b.f.a()     // Catch: java.lang.Throwable -> L49
        L25:
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = r3.a     // Catch: java.lang.Throwable -> L49
            android.content.Context r1 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$100(r0)     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$302(r0, r1)     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.android.a.c r0 = com.yxcorp.kuaishou.addfp.android.a.c.c()     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r1 = r3.a     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$300(r1)     // Catch: java.lang.Throwable -> L49
            r0.b(r1)     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = r3.a     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.ResponseDfpCallback r1 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$200(r0)     // Catch: java.lang.Throwable -> L49
            com.yxcorp.kuaishou.addfp.KWEGIDDFP.access$400(r0, r1)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
