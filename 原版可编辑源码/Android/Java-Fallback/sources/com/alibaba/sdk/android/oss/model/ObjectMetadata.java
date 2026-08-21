package com.alibaba.sdk.android.oss.model;

public class ObjectMetadata {
    public static final java.lang.String AES_256_SERVER_SIDE_ENCRYPTION = "AES256";
    private java.util.Map<java.lang.String, java.lang.Object> metadata;
    private java.util.Map<java.lang.String, java.lang.String> userMetadata;

    public ObjectMetadata() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r0 = new com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap
            r0.<init>()
            r1.userMetadata = r0
            com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap r0 = new com.alibaba.sdk.android.oss.common.utils.CaseInsensitiveHashMap
            r0.<init>()
            r1.metadata = r0
            return
    }

    public void addUserMetadata(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.userMetadata
            r0.put(r2, r3)
            return
    }

    public java.lang.String getCacheControl() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Cache-Control"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getContentDisposition() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Disposition"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getContentEncoding() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Encoding"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public long getContentLength() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Length"
            java.lang.Object r0 = r0.get(r1)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 != 0) goto Lf
            r0 = 0
            return r0
        Lf:
            long r0 = r0.longValue()
            return r0
    }

    public java.lang.String getContentMD5() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-MD5"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getContentType() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Type"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getETag() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "ETag"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.util.Date getExpirationTime() throws java.text.ParseException {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Expires"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Date r0 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseRfc822Date(r0)
            return r0
    }

    public java.util.Date getLastModified() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Last-Modified"
            java.lang.Object r0 = r0.get(r1)
            java.util.Date r0 = (java.util.Date) r0
            return r0
    }

    public java.lang.String getObjectType() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "x-oss-object-type"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getRawExpiresValue() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Expires"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Object> getRawMetadata() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.metadata
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            return r0
    }

    public java.lang.String getSHA1() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "x-oss-hash-sha1"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getServerSideEncryption() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "x-oss-server-side-encryption"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getUserMetadata() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.userMetadata
            return r0
    }

    public void setCacheControl(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Cache-Control"
            r0.put(r1, r3)
            return
    }

    public void setContentDisposition(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Disposition"
            r0.put(r1, r3)
            return
    }

    public void setContentEncoding(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Encoding"
            r0.put(r1, r3)
            return
    }

    public void setContentLength(long r4) {
            r3 = this;
            r0 = 5368709120(0x140000000, double:2.6524947387E-314)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 > 0) goto L15
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.metadata
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            java.lang.String r5 = "Content-Length"
            r0.put(r5, r4)
            return
        L15:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "The content length could not be more than 5GB."
            r4.<init>(r5)
            throw r4
    }

    public void setContentMD5(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-MD5"
            r0.put(r1, r3)
            return
    }

    public void setContentType(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Content-Type"
            r0.put(r1, r3)
            return
    }

    public void setExpirationTime(java.util.Date r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r3 = com.alibaba.sdk.android.oss.common.utils.DateUtil.formatRfc822Date(r3)
            java.lang.String r1 = "Expires"
            r0.put(r1, r3)
            return
    }

    public void setHeader(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.metadata
            r0.put(r2, r3)
            return
    }

    public void setLastModified(java.util.Date r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "Last-Modified"
            r0.put(r1, r3)
            return
    }

    public void setSHA1(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "x-oss-hash-sha1"
            r0.put(r1, r3)
            return
    }

    public void setServerSideEncryption(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.metadata
            java.lang.String r1 = "x-oss-server-side-encryption"
            r0.put(r1, r3)
            return
    }

    public void setUserMetadata(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.userMetadata
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.userMetadata
            r0.putAll(r2)
        L12:
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.util.Date r0 = r4.getExpirationTime()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L9
            goto Lb
        L9:
            java.lang.String r0 = ""
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Last-Modified:"
            r1.append(r2)
            java.util.Date r2 = r4.getLastModified()
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.String r3 = "Expires"
            r1.append(r3)
            java.lang.String r3 = ":"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = "\nrawExpires:"
            r1.append(r0)
            java.lang.String r0 = r4.getRawExpiresValue()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "Content-MD5"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getContentMD5()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "x-oss-object-type"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getObjectType()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "x-oss-server-side-encryption"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getServerSideEncryption()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "Content-Disposition"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getContentDisposition()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "Content-Encoding"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getContentEncoding()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "Cache-Control"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getCacheControl()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = "ETag"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r0 = r4.getETag()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
