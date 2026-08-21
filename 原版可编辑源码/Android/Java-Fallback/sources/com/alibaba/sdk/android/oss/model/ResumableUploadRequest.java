package com.alibaba.sdk.android.oss.model;

public class ResumableUploadRequest extends com.alibaba.sdk.android.oss.model.MultipartUploadRequest {
    private java.lang.Boolean deleteUploadOnCancelling;
    private java.lang.String recordDirectory;

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, android.net.Uri r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, android.net.Uri r9, com.alibaba.sdk.android.oss.model.ObjectMetadata r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r1, java.lang.String r2, android.net.Uri r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.deleteUploadOnCancelling = r1
            r0.setRecordDirectory(r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, android.net.Uri r9, java.lang.String r10) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, java.lang.String r9, com.alibaba.sdk.android.oss.model.ObjectMetadata r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.alibaba.sdk.android.oss.model.ObjectMetadata r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.deleteUploadOnCancelling = r1
            r0.setRecordDirectory(r5)
            return
    }

    public ResumableUploadRequest(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public java.lang.Boolean deleteUploadOnCancelling() {
            r1 = this;
            java.lang.Boolean r0 = r1.deleteUploadOnCancelling
            return r0
    }

    public java.lang.String getRecordDirectory() {
            r1 = this;
            java.lang.String r0 = r1.recordDirectory
            return r0
    }

    public void setDeleteUploadOnCancelling(java.lang.Boolean r1) {
            r0 = this;
            r0.deleteUploadOnCancelling = r1
            return
    }

    public void setRecordDirectory(java.lang.String r3) {
            r2 = this;
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r3)
            if (r0 != 0) goto L20
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L18
            boolean r0 = r0.isDirectory()
            if (r0 == 0) goto L18
            goto L20
        L18:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Record directory must exist, and it should be a directory!"
            r3.<init>(r0)
            throw r3
        L20:
            r2.recordDirectory = r3
            return
    }
}
