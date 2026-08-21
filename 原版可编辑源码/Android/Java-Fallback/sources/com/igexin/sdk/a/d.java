package com.igexin.sdk.a;

public class d {
    private java.lang.String a;

    public d(android.content.Context r2) {
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
            java.lang.String r2 = "push.pid"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.a = r2
            return
    }

    public void a() {
            r2 = this;
            boolean r0 = r2.c()
            if (r0 != 0) goto L10
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> L10
            java.lang.String r1 = r2.a     // Catch: java.io.IOException -> L10
            r0.<init>(r1)     // Catch: java.io.IOException -> L10
            r0.createNewFile()     // Catch: java.io.IOException -> L10
        L10:
            return
    }

    public void b() {
            r2 = this;
            boolean r0 = r2.c()
            if (r0 == 0) goto L10
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.a
            r0.<init>(r1)
            r0.delete()
        L10:
            return
    }

    public boolean c() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.a
            r0.<init>(r1)
            boolean r0 = r0.exists()
            return r0
    }
}
