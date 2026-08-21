package com.ss.android.download.api.model;

public class DownloadShortInfo {
    public long currentBytes;
    public int failStatus;
    public java.lang.String fileName;
    public long id;
    public boolean onlyWifi;
    public int status;
    public long totalBytes;

    public DownloadShortInfo() {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.id = r0
            r2 = -1
            r3.status = r2
            r3.totalBytes = r0
            r3.currentBytes = r0
            r0 = 0
            r3.failStatus = r0
            return
    }

    public boolean equals(java.lang.Object r9) {
            r8 = this;
            boolean r0 = r9 instanceof com.ss.android.download.api.model.DownloadShortInfo
            if (r0 == 0) goto L61
            if (r9 == 0) goto L61
            com.ss.android.download.api.model.DownloadShortInfo r9 = (com.ss.android.download.api.model.DownloadShortInfo) r9
            long r0 = r8.id
            long r2 = r9.id
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L14
            r0 = r1
            goto L15
        L14:
            r0 = r2
        L15:
            int r3 = r8.status
            int r4 = r9.status
            if (r3 != r4) goto L1d
            r3 = r1
            goto L1e
        L1d:
            r3 = r2
        L1e:
            long r4 = r8.totalBytes
            long r6 = r9.totalBytes
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L28
            r4 = r1
            goto L29
        L28:
            r4 = r2
        L29:
            java.lang.String r5 = r8.fileName
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L39
            java.lang.String r5 = r9.fileName
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L53
        L39:
            java.lang.String r5 = r8.fileName
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L55
            java.lang.String r5 = r9.fileName
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L55
            java.lang.String r5 = r8.fileName
            java.lang.String r9 = r9.fileName
            boolean r9 = r5.equals(r9)
            if (r9 == 0) goto L55
        L53:
            r9 = r1
            goto L56
        L55:
            r9 = r2
        L56:
            if (r0 == 0) goto L5f
            if (r3 == 0) goto L5f
            if (r4 == 0) goto L5f
            if (r9 == 0) goto L5f
            goto L60
        L5f:
            r1 = r2
        L60:
            return r1
        L61:
            boolean r9 = super.equals(r9)
            return r9
    }

    public int hashCode() {
            r3 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            long r1 = r3.id
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r1 = r3.status
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            long r1 = r3.totalBytes
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = r3.fileName
            r2 = 3
            r0[r2] = r1
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public void updateFromNewDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.getId()
            long r0 = (long) r0
            r2.id = r0
            int r0 = r3.getStatus()
            r2.status = r0
            long r0 = r3.getCurBytes()
            r2.currentBytes = r0
            long r0 = r3.getTotalBytes()
            r2.totalBytes = r0
            java.lang.String r0 = r3.getTargetFilePath()
            r2.fileName = r0
            com.ss.android.socialbase.downloader.exception.BaseException r0 = r3.getFailedException()
            if (r0 == 0) goto L2f
            int r0 = r0.getErrorCode()
            r2.failStatus = r0
            goto L32
        L2f:
            r0 = 0
            r2.failStatus = r0
        L32:
            boolean r3 = r3.isOnlyWifi()
            r2.onlyWifi = r3
            return
    }
}
