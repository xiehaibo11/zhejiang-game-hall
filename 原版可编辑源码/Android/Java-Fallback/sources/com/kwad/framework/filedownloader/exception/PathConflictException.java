package com.kwad.framework.filedownloader.exception;

public class PathConflictException extends java.lang.IllegalAccessException {
    private final int mAnotherSamePathTaskId;
    private final java.lang.String mDownloadingConflictPath;
    private final java.lang.String mTargetFilePath;

    public PathConflictException(int r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            r1 = 1
            r0[r1] = r5
            r1 = 2
            r0[r1] = r6
            java.lang.String r1 = "There is an another running task(%d) with the same downloading path(%s), because of they are with the same target-file-path(%s), so if the current task is started, the path of the file is sure to be written by multiple tasks, it is wrong, then you receive this exception to avoid such conflict."
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            r3.<init>(r0)
            r3.mAnotherSamePathTaskId = r4
            r3.mDownloadingConflictPath = r5
            r3.mTargetFilePath = r6
            return
    }

    public int getAnotherSamePathTaskId() {
            r1 = this;
            int r0 = r1.mAnotherSamePathTaskId
            return r0
    }

    public java.lang.String getDownloadingConflictPath() {
            r1 = this;
            java.lang.String r0 = r1.mDownloadingConflictPath
            return r0
    }

    public java.lang.String getTargetFilePath() {
            r1 = this;
            java.lang.String r0 = r1.mTargetFilePath
            return r0
    }
}
