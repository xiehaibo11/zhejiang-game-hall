package com.ss.android.download.api.rg;

public class df implements com.ss.android.download.api.config.rz {
    private com.ss.android.download.api.config.n rg;

    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void rg(android.app.Activity r3, int r4, java.lang.String[] r5, int[] r6) {
            r2 = this;
            int r3 = r6.length
            if (r3 <= 0) goto L1a
            com.ss.android.download.api.config.n r3 = r2.rg
            if (r3 == 0) goto L1a
            r4 = 0
            r0 = r6[r4]
            r1 = -1
            if (r0 != r1) goto L13
            r4 = r5[r4]
            r3.rg(r4)
            goto L1a
        L13:
            r4 = r6[r4]
            if (r4 != 0) goto L1a
            r3.rg()
        L1a:
            return
    }

    @Override
    public void rg(android.app.Activity r3, java.lang.String[] r4, com.ss.android.download.api.config.n r5) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Ld
            r2.rg = r5
            r5 = 1
            r3.requestPermissions(r4, r5)
            goto L12
        Ld:
            if (r5 == 0) goto L12
            r5.rg()
        L12:
            return
    }

    @Override
    public boolean rg(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            if (r2 == 0) goto La
            int r2 = android.support.v4.content.ContextCompat.checkSelfPermission(r2, r3)
            if (r2 != 0) goto La
            r0 = 1
        La:
            return r0
    }
}
