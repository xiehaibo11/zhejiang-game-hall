package com.ss.android.socialbase.appdownloader.c.rg;

public class df {
    public static final void rg(com.ss.android.socialbase.appdownloader.c.rg.pt r3, int r4) throws java.io.IOException {
            int r3 = r3.df()
            if (r3 != r4) goto L7
            return
        L7:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected chunk of type 0x"
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = ", read 0x"
            r1.append(r4)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
