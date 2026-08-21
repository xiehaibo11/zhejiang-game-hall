package com.qq.e.comm.managers;

class a implements java.lang.Runnable {
    final com.qq.e.comm.managers.b a;

    a(com.qq.e.comm.managers.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.qq.e.comm.managers.b r0 = r2.a     // Catch: com.qq.e.comm.managers.plugin.e -> L10
            com.qq.e.comm.managers.plugin.PM r0 = com.qq.e.comm.managers.b.a(r0)     // Catch: com.qq.e.comm.managers.plugin.e -> L10
            r0.getPOFactory()     // Catch: com.qq.e.comm.managers.plugin.e -> L10
            com.qq.e.comm.managers.b r0 = r2.a     // Catch: com.qq.e.comm.managers.plugin.e -> L10
            r1 = 1
            com.qq.e.comm.managers.b.a(r0, r1)     // Catch: com.qq.e.comm.managers.plugin.e -> L10
            goto L18
        L10:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            com.qq.e.comm.util.GDTLogger.e(r1, r0)
        L18:
            return
    }
}
