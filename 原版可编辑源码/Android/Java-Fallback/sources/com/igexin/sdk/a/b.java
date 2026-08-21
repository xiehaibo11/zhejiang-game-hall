package com.igexin.sdk.a;

public class b {
    private java.lang.String a;

    public b(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = "/"
            r0.append(r2)
            java.lang.String r2 = "push_sd.pid"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.a = r2
            return
    }

    public boolean a() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.a
            r0.<init>(r1)
            boolean r0 = r0.exists()
            return r0
    }
}
