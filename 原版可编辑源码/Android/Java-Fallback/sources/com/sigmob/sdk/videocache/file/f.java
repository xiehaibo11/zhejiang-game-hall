package com.sigmob.sdk.videocache.file;

public class f implements com.sigmob.sdk.videocache.file.c {
    private static final int a = 4;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String b(java.lang.String r4) {
            r3 = this;
            r0 = 46
            int r0 = r4.lastIndexOf(r0)
            r1 = 47
            int r1 = r4.lastIndexOf(r1)
            r2 = -1
            if (r0 == r2) goto L26
            if (r0 <= r1) goto L26
            int r1 = r0 + 2
            int r1 = r1 + 4
            int r2 = r4.length()
            if (r1 <= r2) goto L26
            int r0 = r0 + 1
            int r1 = r4.length()
            java.lang.String r4 = r4.substring(r0, r1)
            goto L28
        L26:
            java.lang.String r4 = ""
        L28:
            return r4
    }

    @Override
    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.b(r3)
            java.lang.String r3 = com.sigmob.sdk.videocache.q.d(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lf
            goto L23
        Lf:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
        L23:
            return r3
    }
}
