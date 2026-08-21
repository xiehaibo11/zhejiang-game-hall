package com.ss.android.socialbase.downloader.impls;

public class RetryDelayTimeParamCalculator implements com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator {
    private final long[] mTimeArray;

    public RetryDelayTimeParamCalculator(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            long[] r1 = r0.parseTimeArray(r1)
            r0.mTimeArray = r1
            return
    }

    private long[] parseTimeArray(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = ","
            java.lang.String[] r6 = r6.split(r0)     // Catch: java.lang.Throwable -> L25
            int r0 = r6.length     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L12
            return r1
        L12:
            int r0 = r6.length     // Catch: java.lang.Throwable -> L25
            long[] r0 = new long[r0]     // Catch: java.lang.Throwable -> L25
            r2 = 0
        L16:
            int r3 = r6.length     // Catch: java.lang.Throwable -> L25
            if (r2 >= r3) goto L24
            r3 = r6[r2]     // Catch: java.lang.Throwable -> L25
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Throwable -> L25
            r0[r2] = r3     // Catch: java.lang.Throwable -> L25
            int r2 = r2 + 1
            goto L16
        L24:
            return r0
        L25:
            r6 = move-exception
            r6.printStackTrace()
            return r1
    }

    @Override
    public long calculateRetryDelayTime(int r2, int r3) {
            r1 = this;
            long[] r3 = r1.mTimeArray
            if (r3 == 0) goto L1b
            int r3 = r3.length
            if (r3 <= 0) goto L1b
            int r2 = r2 + (-1)
            if (r2 >= 0) goto Lc
            r2 = 0
        Lc:
            long[] r3 = r1.mTimeArray
            int r0 = r3.length
            int r0 = r0 + (-1)
            if (r2 <= r0) goto L16
            int r2 = r3.length
            int r2 = r2 + (-1)
        L16:
            long[] r3 = r1.mTimeArray
            r2 = r3[r2]
            return r2
        L1b:
            r2 = 0
            return r2
    }
}
