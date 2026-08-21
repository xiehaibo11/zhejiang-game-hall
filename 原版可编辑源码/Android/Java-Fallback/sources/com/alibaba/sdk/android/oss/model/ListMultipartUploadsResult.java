package com.alibaba.sdk.android.oss.model;

public class ListMultipartUploadsResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String bucketName;
    private java.util.List<java.lang.String> commonPrefixes;
    private java.lang.String delimiter;
    private boolean isTruncated;
    private java.lang.String keyMarker;
    private int maxUploads;
    private java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> multipartUploads;
    private java.lang.String nextKeyMarker;
    private java.lang.String nextUploadIdMarker;
    private java.lang.String prefix;
    private java.lang.String uploadIdMarker;

    public ListMultipartUploadsResult() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.multipartUploads = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.commonPrefixes = r0
            return
    }

    public void addCommonPrefix(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            r0.add(r2)
            return
    }

    public void addMultipartUpload(com.alibaba.sdk.android.oss.model.MultipartUpload r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> r0 = r1.multipartUploads
            r0.add(r2)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.util.List<java.lang.String> getCommonPrefixes() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            return r0
    }

    public java.lang.String getDelimiter() {
            r1 = this;
            java.lang.String r0 = r1.delimiter
            return r0
    }

    public java.lang.String getKeyMarker() {
            r1 = this;
            java.lang.String r0 = r1.keyMarker
            return r0
    }

    public int getMaxUploads() {
            r1 = this;
            int r0 = r1.maxUploads
            return r0
    }

    public java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> getMultipartUploads() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> r0 = r1.multipartUploads
            return r0
    }

    public java.lang.String getNextKeyMarker() {
            r1 = this;
            java.lang.String r0 = r1.nextKeyMarker
            return r0
    }

    public java.lang.String getNextUploadIdMarker() {
            r1 = this;
            java.lang.String r0 = r1.nextUploadIdMarker
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public java.lang.String getUploadIdMarker() {
            r1 = this;
            java.lang.String r0 = r1.uploadIdMarker
            return r0
    }

    public boolean isTruncated() {
            r1 = this;
            boolean r0 = r1.isTruncated
            return r0
    }

    public com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult parseData(com.alibaba.sdk.android.oss.internal.ResponseMessage r10) throws java.lang.Exception {
            r9 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.xmlpull.v1.XmlPullParser r1 = android.util.Xml.newPullParser()
            java.io.InputStream r10 = r10.getContent()
            java.lang.String r2 = "utf-8"
            r1.setInput(r10, r2)
            int r10 = r1.getEventType()
            r2 = 0
            r3 = 0
            r4 = 0
        L19:
            r5 = 1
            if (r10 == r5) goto L172
            r6 = 2
            java.lang.String r7 = "CommonPrefixes"
            java.lang.String r8 = "Upload"
            if (r10 == r6) goto L44
            r5 = 3
            if (r10 == r5) goto L28
            goto L165
        L28:
            java.lang.String r10 = r1.getName()
            boolean r10 = r8.equals(r10)
            if (r10 == 0) goto L37
            r0.add(r3)
            goto L165
        L37:
            java.lang.String r10 = r1.getName()
            boolean r10 = r7.equals(r10)
            if (r10 == 0) goto L165
            r4 = 0
            goto L165
        L44:
            java.lang.String r10 = r1.getName()
            java.lang.String r6 = "Bucket"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L59
            java.lang.String r10 = r1.nextText()
            r9.setBucketName(r10)
            goto L165
        L59:
            java.lang.String r6 = "Delimiter"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L6a
            java.lang.String r10 = r1.nextText()
            r9.setDelimiter(r10)
            goto L165
        L6a:
            java.lang.String r6 = "Prefix"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L8c
            if (r4 == 0) goto L83
            java.lang.String r10 = r1.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L165
            r9.addCommonPrefix(r10)
            goto L165
        L83:
            java.lang.String r10 = r1.nextText()
            r9.setPrefix(r10)
            goto L165
        L8c:
            java.lang.String r6 = "MaxUploads"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lab
            java.lang.String r10 = r1.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L165
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            int r10 = r10.intValue()
            r9.setMaxUploads(r10)
            goto L165
        Lab:
            java.lang.String r6 = "IsTruncated"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lca
            java.lang.String r10 = r1.nextText()
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r10)
            if (r5 != 0) goto L165
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)
            boolean r10 = r10.booleanValue()
            r9.setTruncated(r10)
            goto L165
        Lca:
            java.lang.String r6 = "KeyMarker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Ldb
            java.lang.String r10 = r1.nextText()
            r9.setKeyMarker(r10)
            goto L165
        Ldb:
            java.lang.String r6 = "UploadIdMarker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lec
            java.lang.String r10 = r1.nextText()
            r9.setUploadIdMarker(r10)
            goto L165
        Lec:
            java.lang.String r6 = "NextKeyMarker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto Lfd
            java.lang.String r10 = r1.nextText()
            r9.setNextKeyMarker(r10)
            goto L165
        Lfd:
            java.lang.String r6 = "NextUploadIdMarker"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L10d
            java.lang.String r10 = r1.nextText()
            r9.setNextUploadIdMarker(r10)
            goto L165
        L10d:
            boolean r6 = r8.equals(r10)
            if (r6 == 0) goto L11a
            com.alibaba.sdk.android.oss.model.MultipartUpload r10 = new com.alibaba.sdk.android.oss.model.MultipartUpload
            r10.<init>()
            r3 = r10
            goto L165
        L11a:
            java.lang.String r6 = "Key"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L12a
            java.lang.String r10 = r1.nextText()
            r3.setKey(r10)
            goto L165
        L12a:
            java.lang.String r6 = "UploadId"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L13a
            java.lang.String r10 = r1.nextText()
            r3.setUploadId(r10)
            goto L165
        L13a:
            java.lang.String r6 = "Initiated"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L14e
            java.lang.String r10 = r1.nextText()
            java.util.Date r10 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseIso8601Date(r10)
            r3.setInitiated(r10)
            goto L165
        L14e:
            java.lang.String r6 = "StorageClass"
            boolean r6 = r6.equals(r10)
            if (r6 == 0) goto L15e
            java.lang.String r10 = r1.nextText()
            r3.setStorageClass(r10)
            goto L165
        L15e:
            boolean r10 = r7.equals(r10)
            if (r10 == 0) goto L165
            r4 = 1
        L165:
            int r10 = r1.next()
            r5 = 4
            if (r10 != r5) goto L19
            int r10 = r1.next()
            goto L19
        L172:
            int r10 = r0.size()
            if (r10 <= 0) goto L17b
            r9.setMultipartUploads(r0)
        L17b:
            return r9
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setCommonPrefixes(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            r0.addAll(r2)
        L12:
            return
    }

    public void setDelimiter(java.lang.String r1) {
            r0 = this;
            r0.delimiter = r1
            return
    }

    public void setKeyMarker(java.lang.String r1) {
            r0 = this;
            r0.keyMarker = r1
            return
    }

    public void setMaxUploads(int r1) {
            r0 = this;
            r0.maxUploads = r1
            return
    }

    public void setMultipartUploads(java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> r0 = r1.multipartUploads
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.List<com.alibaba.sdk.android.oss.model.MultipartUpload> r0 = r1.multipartUploads
            r0.addAll(r2)
        L12:
            return
    }

    public void setNextKeyMarker(java.lang.String r1) {
            r0 = this;
            r0.nextKeyMarker = r1
            return
    }

    public void setNextUploadIdMarker(java.lang.String r1) {
            r0 = this;
            r0.nextUploadIdMarker = r1
            return
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }

    public void setTruncated(boolean r1) {
            r0 = this;
            r0.isTruncated = r1
            return
    }

    public void setUploadIdMarker(java.lang.String r1) {
            r0 = this;
            r0.uploadIdMarker = r1
            return
    }
}
