package com.mbridge.msdk.foundation.download;

public enum DownloadResourceType extends java.lang.Enum<com.mbridge.msdk.foundation.download.DownloadResourceType> {
    private static final com.mbridge.msdk.foundation.download.DownloadResourceType[] $VALUES = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_APK = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_HTML = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_IMAGE = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_OTHER = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_VIDEO = null;
    public static final com.mbridge.msdk.foundation.download.DownloadResourceType DOWNLOAD_RESOURCE_TYPE_ZIP = null;
    public int resourceType;

    static {
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r1 = 0
            java.lang.String r2 = "DOWNLOAD_RESOURCE_TYPE_VIDEO"
            r0.<init>(r2, r1, r1)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r2 = 1
            java.lang.String r3 = "DOWNLOAD_RESOURCE_TYPE_ZIP"
            r0.<init>(r3, r2, r2)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_ZIP = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r3 = 2
            java.lang.String r4 = "DOWNLOAD_RESOURCE_TYPE_IMAGE"
            r0.<init>(r4, r3, r3)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_IMAGE = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r4 = 3
            java.lang.String r5 = "DOWNLOAD_RESOURCE_TYPE_HTML"
            r0.<init>(r5, r4, r4)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_HTML = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r5 = 4
            java.lang.String r6 = "DOWNLOAD_RESOURCE_TYPE_OTHER"
            r0.<init>(r6, r5, r5)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = new com.mbridge.msdk.foundation.download.DownloadResourceType
            r6 = 5
            java.lang.String r7 = "DOWNLOAD_RESOURCE_TYPE_APK"
            r0.<init>(r7, r6, r6)
            com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_APK = r0
            r7 = 6
            com.mbridge.msdk.foundation.download.DownloadResourceType[] r7 = new com.mbridge.msdk.foundation.download.DownloadResourceType[r7]
            com.mbridge.msdk.foundation.download.DownloadResourceType r8 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO
            r7[r1] = r8
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_ZIP
            r7[r2] = r1
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_IMAGE
            r7[r3] = r1
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_HTML
            r7[r4] = r1
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER
            r7[r5] = r1
            r7[r6] = r0
            com.mbridge.msdk.foundation.download.DownloadResourceType.$VALUES = r7
            return
    }

    DownloadResourceType(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.resourceType = r3
            return
    }

    public static com.mbridge.msdk.foundation.download.DownloadResourceType getDownloadResourceType(int r1) {
            if (r1 == 0) goto L22
            r0 = 1
            if (r1 == r0) goto L1f
            r0 = 2
            if (r1 == r0) goto L1c
            r0 = 3
            if (r1 == r0) goto L19
            r0 = 4
            if (r1 == r0) goto L16
            r0 = 5
            if (r1 == r0) goto L13
            r1 = 0
            return r1
        L13:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_APK
            return r1
        L16:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER
            return r1
        L19:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_HTML
            return r1
        L1c:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_IMAGE
            return r1
        L1f:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_ZIP
            return r1
        L22:
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO
            return r1
    }

    public static com.mbridge.msdk.foundation.download.DownloadResourceType valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.foundation.download.DownloadResourceType> r0 = com.mbridge.msdk.foundation.download.DownloadResourceType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = (com.mbridge.msdk.foundation.download.DownloadResourceType) r1
            return r1
    }

    public static com.mbridge.msdk.foundation.download.DownloadResourceType[] values() {
            com.mbridge.msdk.foundation.download.DownloadResourceType[] r0 = com.mbridge.msdk.foundation.download.DownloadResourceType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.foundation.download.DownloadResourceType[] r0 = (com.mbridge.msdk.foundation.download.DownloadResourceType[]) r0
            return r0
    }
}
