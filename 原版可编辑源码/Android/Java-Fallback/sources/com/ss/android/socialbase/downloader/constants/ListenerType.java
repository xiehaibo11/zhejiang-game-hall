package com.ss.android.socialbase.downloader.constants;

public enum ListenerType extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.ListenerType> {
    private static final com.ss.android.socialbase.downloader.constants.ListenerType[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.ListenerType MAIN = null;
    public static final com.ss.android.socialbase.downloader.constants.ListenerType NOTIFICATION = null;
    public static final com.ss.android.socialbase.downloader.constants.ListenerType SUB = null;

    static {
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = new com.ss.android.socialbase.downloader.constants.ListenerType
            r1 = 0
            java.lang.String r2 = "MAIN"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.ListenerType.MAIN = r0
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = new com.ss.android.socialbase.downloader.constants.ListenerType
            r2 = 1
            java.lang.String r3 = "SUB"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.ListenerType.SUB = r0
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = new com.ss.android.socialbase.downloader.constants.ListenerType
            r3 = 2
            java.lang.String r4 = "NOTIFICATION"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.ListenerType.NOTIFICATION = r0
            r4 = 3
            com.ss.android.socialbase.downloader.constants.ListenerType[] r4 = new com.ss.android.socialbase.downloader.constants.ListenerType[r4]
            com.ss.android.socialbase.downloader.constants.ListenerType r5 = com.ss.android.socialbase.downloader.constants.ListenerType.MAIN
            r4[r1] = r5
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB
            r4[r2] = r1
            r4[r3] = r0
            com.ss.android.socialbase.downloader.constants.ListenerType.$VALUES = r4
            return
    }

    ListenerType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.ListenerType valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.ListenerType> r0 = com.ss.android.socialbase.downloader.constants.ListenerType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.ListenerType r1 = (com.ss.android.socialbase.downloader.constants.ListenerType) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.ListenerType[] values() {
            com.ss.android.socialbase.downloader.constants.ListenerType[] r0 = com.ss.android.socialbase.downloader.constants.ListenerType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.ListenerType[] r0 = (com.ss.android.socialbase.downloader.constants.ListenerType[]) r0
            return r0
    }
}
