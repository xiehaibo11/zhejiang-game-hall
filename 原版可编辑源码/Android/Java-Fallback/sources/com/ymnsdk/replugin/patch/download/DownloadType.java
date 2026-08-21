package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public enum DownloadType extends java.lang.Enum<com.ymnsdk.replugin.patch.download.DownloadType> {
    private static final com.ymnsdk.replugin.patch.download.DownloadType[] $VALUES = null;
    public static final com.ymnsdk.replugin.patch.download.DownloadType HOST_APK = null;
    public static final com.ymnsdk.replugin.patch.download.DownloadType PLUGIN_PATCH = null;

    static {
            com.ymnsdk.replugin.patch.download.DownloadType r0 = new com.ymnsdk.replugin.patch.download.DownloadType
            r1 = 0
            java.lang.String r2 = "HOST_APK"
            r0.<init>(r2, r1)
            com.ymnsdk.replugin.patch.download.DownloadType.HOST_APK = r0
            com.ymnsdk.replugin.patch.download.DownloadType r0 = new com.ymnsdk.replugin.patch.download.DownloadType
            r2 = 1
            java.lang.String r3 = "PLUGIN_PATCH"
            r0.<init>(r3, r2)
            com.ymnsdk.replugin.patch.download.DownloadType.PLUGIN_PATCH = r0
            r3 = 2
            com.ymnsdk.replugin.patch.download.DownloadType[] r3 = new com.ymnsdk.replugin.patch.download.DownloadType[r3]
            com.ymnsdk.replugin.patch.download.DownloadType r4 = com.ymnsdk.replugin.patch.download.DownloadType.HOST_APK
            r3[r1] = r4
            r3[r2] = r0
            com.ymnsdk.replugin.patch.download.DownloadType.$VALUES = r3
            return
    }

    DownloadType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ymnsdk.replugin.patch.download.DownloadType valueOf(java.lang.String r1) {
            java.lang.Class<com.ymnsdk.replugin.patch.download.DownloadType> r0 = com.ymnsdk.replugin.patch.download.DownloadType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ymnsdk.replugin.patch.download.DownloadType r1 = (com.ymnsdk.replugin.patch.download.DownloadType) r1
            return r1
    }

    public static com.ymnsdk.replugin.patch.download.DownloadType[] values() {
            com.ymnsdk.replugin.patch.download.DownloadType[] r0 = com.ymnsdk.replugin.patch.download.DownloadType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ymnsdk.replugin.patch.download.DownloadType[] r0 = (com.ymnsdk.replugin.patch.download.DownloadType[]) r0
            return r0
    }
}
