package com.czhj.volley.toolbox;

public class DownloadItem {
    public com.czhj.volley.VolleyError error;
    public java.lang.String filePath;
    public java.lang.String md5;
    public java.lang.String message;
    public long networkMs;
    public long size;
    public int status;
    public com.czhj.volley.toolbox.DownloadItem.FileType type;
    public java.lang.String url;
    public boolean userRange;

    public enum FileType extends java.lang.Enum<com.czhj.volley.toolbox.DownloadItem.FileType> {
        private static final com.czhj.volley.toolbox.DownloadItem.FileType[] $VALUES = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType APK = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType FILE = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType MRAID_VIDEO = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType OTHER = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType PICTURE = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType VIDEO = null;
        public static final com.czhj.volley.toolbox.DownloadItem.FileType ZIP_FILE = null;
        private int mType;

        static {
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r1 = 0
                r2 = 1
                java.lang.String r3 = "VIDEO"
                r0.<init>(r3, r1, r2)
                com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r3 = 2
                java.lang.String r4 = "PICTURE"
                r0.<init>(r4, r2, r3)
                com.czhj.volley.toolbox.DownloadItem.FileType.PICTURE = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r4 = 3
                java.lang.String r5 = "FILE"
                r0.<init>(r5, r3, r4)
                com.czhj.volley.toolbox.DownloadItem.FileType.FILE = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                java.lang.String r5 = "APK"
                r6 = 8
                r0.<init>(r5, r4, r6)
                com.czhj.volley.toolbox.DownloadItem.FileType.APK = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r5 = 4
                java.lang.String r6 = "OTHER"
                r7 = 9
                r0.<init>(r6, r5, r7)
                com.czhj.volley.toolbox.DownloadItem.FileType.OTHER = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r6 = 5
                java.lang.String r7 = "ZIP_FILE"
                r8 = 10
                r0.<init>(r7, r6, r8)
                com.czhj.volley.toolbox.DownloadItem.FileType.ZIP_FILE = r0
                com.czhj.volley.toolbox.DownloadItem$FileType r0 = new com.czhj.volley.toolbox.DownloadItem$FileType
                r7 = 6
                java.lang.String r8 = "MRAID_VIDEO"
                r9 = 11
                r0.<init>(r8, r7, r9)
                com.czhj.volley.toolbox.DownloadItem.FileType.MRAID_VIDEO = r0
                r8 = 7
                com.czhj.volley.toolbox.DownloadItem$FileType[] r8 = new com.czhj.volley.toolbox.DownloadItem.FileType[r8]
                com.czhj.volley.toolbox.DownloadItem$FileType r9 = com.czhj.volley.toolbox.DownloadItem.FileType.VIDEO
                r8[r1] = r9
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.PICTURE
                r8[r2] = r1
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.FILE
                r8[r3] = r1
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.APK
                r8[r4] = r1
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.OTHER
                r8[r5] = r1
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = com.czhj.volley.toolbox.DownloadItem.FileType.ZIP_FILE
                r8[r6] = r1
                r8[r7] = r0
                com.czhj.volley.toolbox.DownloadItem.FileType.$VALUES = r8
                return
        }

        FileType(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mType = r3
                return
        }

        public static com.czhj.volley.toolbox.DownloadItem.FileType valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.volley.toolbox.DownloadItem$FileType> r0 = com.czhj.volley.toolbox.DownloadItem.FileType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.volley.toolbox.DownloadItem$FileType r1 = (com.czhj.volley.toolbox.DownloadItem.FileType) r1
                return r1
        }

        public static com.czhj.volley.toolbox.DownloadItem.FileType[] values() {
                com.czhj.volley.toolbox.DownloadItem$FileType[] r0 = com.czhj.volley.toolbox.DownloadItem.FileType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.volley.toolbox.DownloadItem$FileType[] r0 = (com.czhj.volley.toolbox.DownloadItem.FileType[]) r0
                return r0
        }

        public int getType() {
                r1 = this;
                int r0 = r1.mType
                return r0
        }
    }

    public DownloadItem() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.userRange = r0
            return
    }
}
