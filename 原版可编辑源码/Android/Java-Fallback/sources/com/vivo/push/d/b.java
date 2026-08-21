package com.vivo.push.d;

final class b extends com.vivo.push.l {
    b(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r4) {
            r3 = this;
            com.vivo.push.b.d r4 = (com.vivo.push.b.d) r4
            android.content.Context r0 = r3.a
            com.vivo.push.model.b r0 = com.vivo.push.util.t.a(r0)
            boolean r4 = r4.d()
            if (r4 == 0) goto L15
            android.content.Context r4 = r3.a     // Catch: java.lang.Exception -> L6d
            boolean r4 = com.vivo.push.d.f.a(r4)     // Catch: java.lang.Exception -> L6d
            goto L1b
        L15:
            android.content.Context r4 = r3.a     // Catch: java.lang.Exception -> L6d
            boolean r4 = com.vivo.push.d.f.b(r4)     // Catch: java.lang.Exception -> L6d
        L1b:
            if (r4 == 0) goto L6c
            android.content.Context r4 = r3.a     // Catch: java.lang.Exception -> L6d
            com.vivo.push.model.b r4 = com.vivo.push.util.t.a(r4)     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L3c
            if (r4 == 0) goto L3c
            java.lang.String r1 = r4.a()     // Catch: java.lang.Exception -> L6d
            if (r1 == 0) goto L3c
            java.lang.String r1 = r4.a()     // Catch: java.lang.Exception -> L6d
            java.lang.String r2 = r0.a()     // Catch: java.lang.Exception -> L6d
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L6d
            if (r1 == 0) goto L3c
            return
        L3c:
            if (r0 == 0) goto L56
            java.lang.String r1 = r0.a()     // Catch: java.lang.Exception -> L6d
            if (r1 == 0) goto L56
            com.vivo.push.b.y r1 = new com.vivo.push.b.y     // Catch: java.lang.Exception -> L6d
            java.lang.String r2 = r0.a()     // Catch: java.lang.Exception -> L6d
            r1.<init>(r2)     // Catch: java.lang.Exception -> L6d
            android.content.Context r2 = r3.a     // Catch: java.lang.Exception -> L6d
            java.lang.String r0 = r0.a()     // Catch: java.lang.Exception -> L6d
            com.vivo.push.a.a.a(r2, r0, r1)     // Catch: java.lang.Exception -> L6d
        L56:
            if (r4 == 0) goto L6c
            java.lang.String r0 = r4.a()     // Catch: java.lang.Exception -> L6d
            if (r0 == 0) goto L6c
            com.vivo.push.b.f r0 = new com.vivo.push.b.f     // Catch: java.lang.Exception -> L6d
            r0.<init>()     // Catch: java.lang.Exception -> L6d
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L6d
            java.lang.String r4 = r4.a()     // Catch: java.lang.Exception -> L6d
            com.vivo.push.a.a.a(r1, r4, r0)     // Catch: java.lang.Exception -> L6d
        L6c:
            return
        L6d:
            r4 = move-exception
            r4.printStackTrace()
            return
    }
}
