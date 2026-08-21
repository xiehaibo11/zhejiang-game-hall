package com.czhj.sdk.common.models;

public enum AdStatus extends java.lang.Enum<com.czhj.sdk.common.models.AdStatus> {
    private static final com.czhj.sdk.common.models.AdStatus[] $VALUES = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusClick = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusClose = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusLoading = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusNone = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusPlaying = null;
    public static final com.czhj.sdk.common.models.AdStatus AdStatusReady = null;

    static {
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r1 = 0
            java.lang.String r2 = "AdStatusNone"
            r0.<init>(r2, r1)
            com.czhj.sdk.common.models.AdStatus.AdStatusNone = r0
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r2 = 1
            java.lang.String r3 = "AdStatusLoading"
            r0.<init>(r3, r2)
            com.czhj.sdk.common.models.AdStatus.AdStatusLoading = r0
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r3 = 2
            java.lang.String r4 = "AdStatusReady"
            r0.<init>(r4, r3)
            com.czhj.sdk.common.models.AdStatus.AdStatusReady = r0
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r4 = 3
            java.lang.String r5 = "AdStatusPlaying"
            r0.<init>(r5, r4)
            com.czhj.sdk.common.models.AdStatus.AdStatusPlaying = r0
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r5 = 4
            java.lang.String r6 = "AdStatusClick"
            r0.<init>(r6, r5)
            com.czhj.sdk.common.models.AdStatus.AdStatusClick = r0
            com.czhj.sdk.common.models.AdStatus r0 = new com.czhj.sdk.common.models.AdStatus
            r6 = 5
            java.lang.String r7 = "AdStatusClose"
            r0.<init>(r7, r6)
            com.czhj.sdk.common.models.AdStatus.AdStatusClose = r0
            r7 = 6
            com.czhj.sdk.common.models.AdStatus[] r7 = new com.czhj.sdk.common.models.AdStatus[r7]
            com.czhj.sdk.common.models.AdStatus r8 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r7[r1] = r8
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            r7[r2] = r1
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            r7[r3] = r1
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
            r7[r4] = r1
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusClick
            r7[r5] = r1
            r7[r6] = r0
            com.czhj.sdk.common.models.AdStatus.$VALUES = r7
            return
    }

    AdStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.czhj.sdk.common.models.AdStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.czhj.sdk.common.models.AdStatus> r0 = com.czhj.sdk.common.models.AdStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.czhj.sdk.common.models.AdStatus r1 = (com.czhj.sdk.common.models.AdStatus) r1
            return r1
    }

    public static com.czhj.sdk.common.models.AdStatus[] values() {
            com.czhj.sdk.common.models.AdStatus[] r0 = com.czhj.sdk.common.models.AdStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.czhj.sdk.common.models.AdStatus[] r0 = (com.czhj.sdk.common.models.AdStatus[]) r0
            return r0
    }
}
