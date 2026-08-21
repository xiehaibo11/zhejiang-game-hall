package com.ss.android.socialbase.downloader.constants;

public enum EnqueueType extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.EnqueueType> {
    private static final com.ss.android.socialbase.downloader.constants.EnqueueType[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.EnqueueType ENQUEUE_HEAD = null;
    public static final com.ss.android.socialbase.downloader.constants.EnqueueType ENQUEUE_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.EnqueueType ENQUEUE_TAIL = null;

    static {
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = new com.ss.android.socialbase.downloader.constants.EnqueueType
            r1 = 0
            java.lang.String r2 = "ENQUEUE_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = new com.ss.android.socialbase.downloader.constants.EnqueueType
            r2 = 1
            java.lang.String r3 = "ENQUEUE_HEAD"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_HEAD = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = new com.ss.android.socialbase.downloader.constants.EnqueueType
            r3 = 2
            java.lang.String r4 = "ENQUEUE_TAIL"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_TAIL = r0
            r4 = 3
            com.ss.android.socialbase.downloader.constants.EnqueueType[] r4 = new com.ss.android.socialbase.downloader.constants.EnqueueType[r4]
            com.ss.android.socialbase.downloader.constants.EnqueueType r5 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r4[r1] = r5
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_HEAD
            r4[r2] = r1
            r4[r3] = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType.$VALUES = r4
            return
    }

    EnqueueType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.EnqueueType valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.EnqueueType> r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = (com.ss.android.socialbase.downloader.constants.EnqueueType) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.EnqueueType[] values() {
            com.ss.android.socialbase.downloader.constants.EnqueueType[] r0 = com.ss.android.socialbase.downloader.constants.EnqueueType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.EnqueueType[] r0 = (com.ss.android.socialbase.downloader.constants.EnqueueType[]) r0
            return r0
    }
}
