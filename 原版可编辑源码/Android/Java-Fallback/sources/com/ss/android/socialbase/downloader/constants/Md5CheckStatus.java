package com.ss.android.socialbase.downloader.constants;

public enum Md5CheckStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.Md5CheckStatus> {
    private static final com.ss.android.socialbase.downloader.constants.Md5CheckStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.Md5CheckStatus INVALID_FILE_MD5_EMPTY = null;
    public static final com.ss.android.socialbase.downloader.constants.Md5CheckStatus INVALID_FILE_NO_EXIST = null;
    public static final com.ss.android.socialbase.downloader.constants.Md5CheckStatus INVALID_MD5_NOT_EQUALS = null;
    public static final com.ss.android.socialbase.downloader.constants.Md5CheckStatus VALID = null;

    static {
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r0 = new com.ss.android.socialbase.downloader.constants.Md5CheckStatus
            r1 = 0
            java.lang.String r2 = "VALID"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus.VALID = r0
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r0 = new com.ss.android.socialbase.downloader.constants.Md5CheckStatus
            r2 = 1
            java.lang.String r3 = "INVALID_FILE_NO_EXIST"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus.INVALID_FILE_NO_EXIST = r0
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r0 = new com.ss.android.socialbase.downloader.constants.Md5CheckStatus
            r3 = 2
            java.lang.String r4 = "INVALID_FILE_MD5_EMPTY"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus.INVALID_FILE_MD5_EMPTY = r0
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r0 = new com.ss.android.socialbase.downloader.constants.Md5CheckStatus
            r4 = 3
            java.lang.String r5 = "INVALID_MD5_NOT_EQUALS"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus.INVALID_MD5_NOT_EQUALS = r0
            r5 = 4
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus[] r5 = new com.ss.android.socialbase.downloader.constants.Md5CheckStatus[r5]
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r6 = com.ss.android.socialbase.downloader.constants.Md5CheckStatus.VALID
            r5[r1] = r6
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r1 = com.ss.android.socialbase.downloader.constants.Md5CheckStatus.INVALID_FILE_NO_EXIST
            r5[r2] = r1
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r1 = com.ss.android.socialbase.downloader.constants.Md5CheckStatus.INVALID_FILE_MD5_EMPTY
            r5[r3] = r1
            r5[r4] = r0
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus.$VALUES = r5
            return
    }

    Md5CheckStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.Md5CheckStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.Md5CheckStatus> r0 = com.ss.android.socialbase.downloader.constants.Md5CheckStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus r1 = (com.ss.android.socialbase.downloader.constants.Md5CheckStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.Md5CheckStatus[] values() {
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus[] r0 = com.ss.android.socialbase.downloader.constants.Md5CheckStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.Md5CheckStatus[] r0 = (com.ss.android.socialbase.downloader.constants.Md5CheckStatus[]) r0
            return r0
    }
}
