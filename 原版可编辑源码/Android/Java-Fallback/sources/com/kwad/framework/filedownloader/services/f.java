package com.kwad.framework.filedownloader.services;

public final class f {
    public static void f(com.kwad.framework.filedownloader.d.c r2) {
            if (r2 == 0) goto L23
            byte r0 = r2.sX()
            r1 = -3
            if (r0 != r1) goto L1d
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "filedownloader.intent.action.completed"
            r0.<init>(r1)
            java.lang.String r1 = "model"
            r0.putExtra(r1, r2)
            android.content.Context r2 = com.kwad.framework.filedownloader.f.c.vM()
            r2.sendBroadcast(r0)
            return
        L1d:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
        L23:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }
}
