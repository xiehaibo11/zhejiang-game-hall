package com.ss.android.socialbase.downloader.network;

public enum NetworkQuality extends java.lang.Enum<com.ss.android.socialbase.downloader.network.NetworkQuality> {
    private static final com.ss.android.socialbase.downloader.network.NetworkQuality[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.network.NetworkQuality EXCELLENT = null;
    public static final com.ss.android.socialbase.downloader.network.NetworkQuality GOOD = null;
    public static final com.ss.android.socialbase.downloader.network.NetworkQuality MODERATE = null;
    public static final com.ss.android.socialbase.downloader.network.NetworkQuality POOR = null;
    public static final com.ss.android.socialbase.downloader.network.NetworkQuality UNKNOWN = null;

    static {
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = new com.ss.android.socialbase.downloader.network.NetworkQuality
            r1 = 0
            java.lang.String r2 = "POOR"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.network.NetworkQuality.POOR = r0
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = new com.ss.android.socialbase.downloader.network.NetworkQuality
            r2 = 1
            java.lang.String r3 = "MODERATE"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.network.NetworkQuality.MODERATE = r0
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = new com.ss.android.socialbase.downloader.network.NetworkQuality
            r3 = 2
            java.lang.String r4 = "GOOD"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.network.NetworkQuality.GOOD = r0
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = new com.ss.android.socialbase.downloader.network.NetworkQuality
            r4 = 3
            java.lang.String r5 = "EXCELLENT"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.network.NetworkQuality.EXCELLENT = r0
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = new com.ss.android.socialbase.downloader.network.NetworkQuality
            r5 = 4
            java.lang.String r6 = "UNKNOWN"
            r0.<init>(r6, r5)
            com.ss.android.socialbase.downloader.network.NetworkQuality.UNKNOWN = r0
            r6 = 5
            com.ss.android.socialbase.downloader.network.NetworkQuality[] r6 = new com.ss.android.socialbase.downloader.network.NetworkQuality[r6]
            com.ss.android.socialbase.downloader.network.NetworkQuality r7 = com.ss.android.socialbase.downloader.network.NetworkQuality.POOR
            r6[r1] = r7
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.MODERATE
            r6[r2] = r1
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.GOOD
            r6[r3] = r1
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = com.ss.android.socialbase.downloader.network.NetworkQuality.EXCELLENT
            r6[r4] = r1
            r6[r5] = r0
            com.ss.android.socialbase.downloader.network.NetworkQuality.$VALUES = r6
            return
    }

    NetworkQuality(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.network.NetworkQuality valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.network.NetworkQuality> r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.network.NetworkQuality r1 = (com.ss.android.socialbase.downloader.network.NetworkQuality) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.network.NetworkQuality[] values() {
            com.ss.android.socialbase.downloader.network.NetworkQuality[] r0 = com.ss.android.socialbase.downloader.network.NetworkQuality.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.network.NetworkQuality[] r0 = (com.ss.android.socialbase.downloader.network.NetworkQuality[]) r0
            return r0
    }
}
