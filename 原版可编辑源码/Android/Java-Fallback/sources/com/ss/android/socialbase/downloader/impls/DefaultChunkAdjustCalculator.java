package com.ss.android.socialbase.downloader.impls;

public class DefaultChunkAdjustCalculator implements com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator {
    public DefaultChunkAdjustCalculator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int calculateChunkCount(int r3, com.ss.android.socialbase.downloader.network.NetworkQuality r4) {
            r2 = this;
            int r0 = r4.ordinal()
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.MODERATE
            int r1 = r1.ordinal()
            if (r0 > r1) goto Le
            r3 = 1
            goto L14
        Le:
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.GOOD
            if (r4 != r0) goto L14
            int r3 = r3 + (-1)
        L14:
            return r3
    }
}
