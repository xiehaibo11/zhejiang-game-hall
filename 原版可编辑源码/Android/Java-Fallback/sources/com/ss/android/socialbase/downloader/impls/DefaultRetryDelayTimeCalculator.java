package com.ss.android.socialbase.downloader.impls;

public class DefaultRetryDelayTimeCalculator implements com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator {
    public DefaultRetryDelayTimeCalculator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public long calculateRetryDelayTime(int r1, int r2) {
            r0 = this;
            r2 = 1
            if (r1 != r2) goto L6
            r1 = 3000(0xbb8, double:1.482E-320)
            return r1
        L6:
            r2 = 2
            if (r1 != r2) goto Lc
            r1 = 15000(0x3a98, double:7.411E-320)
            return r1
        Lc:
            r2 = 3
            if (r1 != r2) goto L12
            r1 = 30000(0x7530, double:1.4822E-319)
            return r1
        L12:
            if (r1 <= r2) goto L18
            r1 = 300000(0x493e0, double:1.482197E-318)
            return r1
        L18:
            r1 = 0
            return r1
    }
}
