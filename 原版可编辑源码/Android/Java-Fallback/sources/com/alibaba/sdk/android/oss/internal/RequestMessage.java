package com.alibaba.sdk.android.oss.internal;

public class RequestMessage extends com.alibaba.sdk.android.oss.internal.HttpMessage {
    private java.lang.String bucketName;
    private boolean checkCRC64;
    private com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider credentialProvider;
    private boolean customPathPrefixEnable;
    private java.net.URI endpoint;
    private boolean httpDnsEnable;
    private java.lang.String ipWithHeader;
    private boolean isAuthorizationRequired;
    private boolean isInCustomCnameExcludeList;
    private com.alibaba.sdk.android.oss.common.HttpMethod method;
    private java.lang.String objectKey;
    private java.util.Map<java.lang.String, java.lang.String> parameters;
    private boolean pathStyleAccessEnable;
    private java.net.URI service;
    private byte[] uploadData;
    private java.lang.String uploadFilePath;
    private android.net.Uri uploadUri;

    public RequestMessage() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.isAuthorizationRequired = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.parameters = r0
            r0 = 0
            r1.httpDnsEnable = r0
            r1.pathStyleAccessEnable = r0
            r1.customPathPrefixEnable = r0
            r1.isInCustomCnameExcludeList = r0
            return
    }

    @Override
    public void addHeader(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            super.addHeader(r1, r2)
            return
    }

    public java.lang.String buildCanonicalURL() throws java.lang.Exception {
            r11 = this;
            java.net.URI r0 = r11.endpoint
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            java.lang.String r3 = "Endpoint haven't been set!"
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.assertTrue(r0, r3)
            java.net.URI r0 = r11.endpoint
            java.lang.String r0 = r0.getScheme()
            java.net.URI r3 = r11.endpoint
            java.lang.String r3 = r3.getHost()
            java.net.URI r4 = r11.endpoint
            java.lang.String r4 = r4.getPath()
            java.net.URI r5 = r11.endpoint
            int r5 = r5.getPort()
            r6 = -1
            r7 = 0
            if (r5 == r6) goto L2f
            java.lang.String r5 = java.lang.String.valueOf(r5)
            goto L30
        L2f:
            r5 = r7
        L30:
            boolean r6 = android.text.TextUtils.isEmpty(r3)
            if (r6 == 0) goto L50
            java.net.URI r6 = r11.endpoint
            java.lang.String r6 = r6.toString()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "endpoint url : "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)
        L50:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = " scheme : "
            r6.append(r8)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = " originHost : "
            r6.append(r8)
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = " port : "
            r6.append(r8)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r8 = "://"
            r6.append(r8)
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            boolean r9 = android.text.TextUtils.isEmpty(r5)
            if (r9 != 0) goto Lba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r6)
            java.lang.String r6 = ":"
            r9.append(r6)
            r9.append(r5)
            java.lang.String r6 = r9.toString()
        Lba:
            java.lang.String r5 = r11.bucketName
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L15f
            boolean r5 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isOssOriginHost(r3)
            java.lang.String r9 = "Host"
            java.lang.String r10 = "."
            if (r5 == 0) goto L124
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = r11.bucketName
            r2.append(r5)
            r2.append(r10)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            boolean r3 = r11.isHttpDnsEnable()
            if (r3 == 0) goto Lef
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r3 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.getInstance()
            java.lang.String r7 = r3.getIpByHostAsync(r2)
            goto Lf4
        Lef:
            java.lang.String r3 = "[buildCannonicalURL], disable httpdns"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)
        Lf4:
            r11.addHeader(r9, r2)
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto L110
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r8)
            r2.append(r7)
            java.lang.String r0 = r2.toString()
            goto L122
        L110:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r8)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
        L122:
            r6 = r0
            goto L15f
        L124:
            boolean r5 = r11.isInCustomCnameExcludeList
            if (r5 == 0) goto L149
            boolean r5 = r11.pathStyleAccessEnable
            if (r5 == 0) goto L12e
        L12c:
            r1 = 1
            goto L15f
        L12e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r8)
            java.lang.String r0 = r11.bucketName
            r2.append(r0)
            r2.append(r10)
            r2.append(r3)
            java.lang.String r6 = r2.toString()
            goto L15f
        L149:
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isValidateIP(r3)
            if (r0 == 0) goto L15f
            java.lang.String r0 = r11.ipWithHeader
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r0 == 0) goto L158
            goto L12c
        L158:
            java.lang.String r0 = r11.getIpWithHeader()
            r11.addHeader(r9, r0)
        L15f:
            boolean r0 = r11.customPathPrefixEnable
            if (r0 == 0) goto L174
            if (r4 == 0) goto L174
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r4)
            java.lang.String r6 = r0.toString()
        L174:
            java.lang.String r0 = "/"
            if (r1 == 0) goto L18c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r0)
            java.lang.String r2 = r11.bucketName
            r1.append(r2)
            java.lang.String r6 = r1.toString()
        L18c:
            java.lang.String r1 = r11.objectKey
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = "utf-8"
            if (r1 != 0) goto L1ae
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r0)
            java.lang.String r0 = r11.objectKey
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r0, r2)
            r1.append(r0)
            java.lang.String r6 = r1.toString()
        L1ae:
            java.util.Map<java.lang.String, java.lang.String> r0 = r11.parameters
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.paramToQueryString(r0, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "request---------------------\n"
            r1.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "request url="
            r2.append(r3)
            r2.append(r6)
            java.lang.String r3 = "\n"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "request params="
            r2.append(r4)
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.util.Map r2 = r11.getHeaders()
            java.util.Set r2 = r2.keySet()
            java.util.Iterator r2 = r2.iterator()
        L1fa:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L23c
            java.lang.Object r4 = r2.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "requestHeader ["
            r5.append(r7)
            r5.append(r4)
            java.lang.String r7 = "]: "
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.util.Map r7 = r11.getHeaders()
            java.lang.Object r4 = r7.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            r5.append(r4)
            r5.append(r3)
            java.lang.String r4 = r5.toString()
            r1.append(r4)
            goto L1fa
        L23c:
            java.lang.String r1 = r1.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            boolean r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r0)
            if (r1 == 0) goto L24a
            return r6
        L24a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r2 = "?"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    public java.lang.String buildOSSServiceURL() {
            r5 = this;
            java.net.URI r0 = r5.service
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            java.lang.String r1 = "Service haven't been set!"
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.assertTrue(r0, r1)
            java.net.URI r0 = r5.service
            java.lang.String r0 = r0.getHost()
            java.net.URI r1 = r5.service
            java.lang.String r1 = r1.getScheme()
            r2 = 0
            boolean r3 = r5.isHttpDnsEnable()
            if (r3 == 0) goto L30
            java.lang.String r3 = "http"
            boolean r3 = r1.equalsIgnoreCase(r3)
            if (r3 == 0) goto L30
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r2 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.getInstance()
            java.lang.String r2 = r2.getIpByHostAsync(r0)
            goto L35
        L30:
            java.lang.String r3 = "[buildOSSServiceURL], disable httpdns or http is not need httpdns"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)
        L35:
            if (r2 != 0) goto L38
            r2 = r0
        L38:
            java.util.Map r3 = r5.getHeaders()
            java.lang.String r4 = "Host"
            r3.put(r4, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "://"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.parameters
            java.lang.String r2 = "utf-8"
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.paramToQueryString(r1, r2)
            boolean r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r1)
            if (r2 == 0) goto L64
            return r0
        L64:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "?"
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r0 = this;
            super.close()
            return
    }

    public void createBucketRequestBodyMarshall(java.util.Map<java.lang.String, java.lang.String> r6) throws java.io.UnsupportedEncodingException {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            if (r6 == 0) goto L76
            java.lang.String r1 = "<CreateBucketConfiguration>"
            r0.append(r1)
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L14:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L5a
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<"
            r2.append(r3)
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r2.append(r3)
            java.lang.String r3 = ">"
            r2.append(r3)
            java.lang.Object r4 = r1.getValue()
            java.lang.String r4 = (java.lang.String) r4
            r2.append(r4)
            java.lang.String r4 = "</"
            r2.append(r4)
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r2.append(r1)
            r2.append(r3)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L14
        L5a:
            java.lang.String r6 = "</CreateBucketConfiguration>"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "utf-8"
            byte[] r6 = r6.getBytes(r0)
            int r0 = r6.length
            long r0 = (long) r0
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r6)
            r5.setContent(r2)
            r5.setContentLength(r0)
        L76:
            return
    }

    public byte[] deleteMultipleObjectRequestBodyMarshall(java.util.List<java.lang.String> r3, boolean r4) throws java.io.UnsupportedEncodingException {
            r2 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "<Delete>"
            r0.append(r1)
            if (r4 == 0) goto L12
            java.lang.String r4 = "<Quiet>true</Quiet>"
            r0.append(r4)
            goto L17
        L12:
            java.lang.String r4 = "<Quiet>false</Quiet>"
            r0.append(r4)
        L17:
            java.util.Iterator r3 = r3.iterator()
        L1b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3f
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r1 = "<Object>"
            r0.append(r1)
            java.lang.String r1 = "<Key>"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "</Key>"
            r0.append(r4)
            java.lang.String r4 = "</Object>"
            r0.append(r4)
            goto L1b
        L3f:
            java.lang.String r3 = "</Delete>"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "utf-8"
            byte[] r3 = r3.getBytes(r4)
            int r4 = r3.length
            long r0 = (long) r4
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream
            r4.<init>(r3)
            r2.setContent(r4)
            r2.setContentLength(r0)
            return r3
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    @Override
    public java.io.InputStream getContent() {
            r1 = this;
            java.io.InputStream r0 = super.getContent()
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            long r0 = super.getContentLength()
            return r0
    }

    public com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider getCredentialProvider() {
            r1 = this;
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r0 = r1.credentialProvider
            return r0
    }

    public java.net.URI getEndpoint() {
            r1 = this;
            java.net.URI r0 = r1.endpoint
            return r0
    }

    @Override
    public java.util.Map getHeaders() {
            r1 = this;
            java.util.Map r0 = super.getHeaders()
            return r0
    }

    public java.lang.String getIpWithHeader() {
            r1 = this;
            java.lang.String r0 = r1.ipWithHeader
            return r0
    }

    public com.alibaba.sdk.android.oss.common.HttpMethod getMethod() {
            r1 = this;
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = r1.method
            return r0
    }

    public java.lang.String getObjectKey() {
            r1 = this;
            java.lang.String r0 = r1.objectKey
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getParameters() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.parameters
            return r0
    }

    public java.net.URI getService() {
            r1 = this;
            java.net.URI r0 = r1.service
            return r0
    }

    @Override
    public java.lang.String getStringBody() {
            r1 = this;
            java.lang.String r0 = super.getStringBody()
            return r0
    }

    public byte[] getUploadData() {
            r1 = this;
            byte[] r0 = r1.uploadData
            return r0
    }

    public java.lang.String getUploadFilePath() {
            r1 = this;
            java.lang.String r0 = r1.uploadFilePath
            return r0
    }

    public android.net.Uri getUploadUri() {
            r1 = this;
            android.net.Uri r0 = r1.uploadUri
            return r0
    }

    public boolean isAuthorizationRequired() {
            r1 = this;
            boolean r0 = r1.isAuthorizationRequired
            return r0
    }

    public boolean isCheckCRC64() {
            r1 = this;
            boolean r0 = r1.checkCRC64
            return r0
    }

    public boolean isCustomPathPrefixEnable() {
            r1 = this;
            boolean r0 = r1.customPathPrefixEnable
            return r0
    }

    public boolean isHttpDnsEnable() {
            r1 = this;
            boolean r0 = r1.httpDnsEnable
            return r0
    }

    public boolean isInCustomCnameExcludeList() {
            r1 = this;
            boolean r0 = r1.isInCustomCnameExcludeList
            return r0
    }

    public boolean isPathStyleAccessEnable() {
            r1 = this;
            boolean r0 = r1.pathStyleAccessEnable
            return r0
    }

    public void putBucketLifecycleRequestBodyMarshall(java.util.ArrayList<com.alibaba.sdk.android.oss.model.BucketLifecycleRule> r6) throws java.io.UnsupportedEncodingException {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "<LifecycleConfiguration>"
            r0.append(r1)
            java.util.Iterator r6 = r6.iterator()
        Le:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L1a9
            java.lang.Object r1 = r6.next()
            com.alibaba.sdk.android.oss.model.BucketLifecycleRule r1 = (com.alibaba.sdk.android.oss.model.BucketLifecycleRule) r1
            java.lang.String r2 = "<Rule>"
            r0.append(r2)
            java.lang.String r2 = r1.getIdentifier()
            if (r2 == 0) goto L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<ID>"
            r2.append(r3)
            java.lang.String r3 = r1.getIdentifier()
            r2.append(r3)
            java.lang.String r3 = "</ID>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
        L42:
            java.lang.String r2 = r1.getPrefix()
            if (r2 == 0) goto L65
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<Prefix>"
            r2.append(r3)
            java.lang.String r3 = r1.getPrefix()
            r2.append(r3)
            java.lang.String r3 = "</Prefix>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
        L65:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<Status>"
            r2.append(r3)
            boolean r3 = r1.getStatus()
            if (r3 == 0) goto L78
            java.lang.String r3 = "Enabled"
            goto L7a
        L78:
            java.lang.String r3 = "Disabled"
        L7a:
            r2.append(r3)
            java.lang.String r3 = "</Status>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.String r2 = r1.getDays()
            if (r2 == 0) goto Lad
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<Days>"
            r2.append(r3)
            java.lang.String r3 = r1.getDays()
            r2.append(r3)
            java.lang.String r3 = "</Days>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            goto Ld0
        Lad:
            java.lang.String r2 = r1.getExpireDate()
            if (r2 == 0) goto Ld0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<Date>"
            r2.append(r3)
            java.lang.String r3 = r1.getExpireDate()
            r2.append(r3)
            java.lang.String r3 = "</Date>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
        Ld0:
            java.lang.String r2 = r1.getMultipartDays()
            if (r2 == 0) goto Lf4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<AbortMultipartUpload><Days>"
            r2.append(r3)
            java.lang.String r3 = r1.getMultipartDays()
            r2.append(r3)
            java.lang.String r3 = "</Days></AbortMultipartUpload>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            goto L117
        Lf4:
            java.lang.String r2 = r1.getMultipartExpireDate()
            if (r2 == 0) goto L117
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<AbortMultipartUpload><Date>"
            r2.append(r3)
            java.lang.String r3 = r1.getMultipartDays()
            r2.append(r3)
            java.lang.String r3 = "</Date></AbortMultipartUpload>"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
        L117:
            java.lang.String r2 = r1.getIADays()
            java.lang.String r3 = "<Transition><Days>"
            if (r2 == 0) goto L13b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r1 = r1.getIADays()
            r2.append(r1)
            java.lang.String r1 = "</Days><StorageClass>IA</StorageClass></Transition>"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L1a2
        L13b:
            java.lang.String r2 = r1.getIAExpireDate()
            java.lang.String r4 = "<Transition><Date>"
            if (r2 == 0) goto L15f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.getIAExpireDate()
            r2.append(r1)
            java.lang.String r1 = "</Date><StorageClass>IA</StorageClass></Transition>"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L1a2
        L15f:
            java.lang.String r2 = r1.getArchiveDays()
            if (r2 == 0) goto L181
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r1 = r1.getArchiveDays()
            r2.append(r1)
            java.lang.String r1 = "</Days><StorageClass>Archive</StorageClass></Transition>"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            goto L1a2
        L181:
            java.lang.String r2 = r1.getArchiveExpireDate()
            if (r2 == 0) goto L1a2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r1 = r1.getArchiveExpireDate()
            r2.append(r1)
            java.lang.String r1 = "</Date><StorageClass>Archive</StorageClass></Transition>"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.append(r1)
        L1a2:
            java.lang.String r1 = "</Rule>"
            r0.append(r1)
            goto Le
        L1a9:
            java.lang.String r6 = "</LifecycleConfiguration>"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "utf-8"
            byte[] r6 = r6.getBytes(r0)
            int r0 = r6.length
            long r0 = (long) r0
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r6)
            r5.setContent(r2)
            r5.setContentLength(r0)
            return
    }

    public void putBucketLoggingRequestBodyMarshall(java.lang.String r4, java.lang.String r5) throws java.io.UnsupportedEncodingException {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "<BucketLoggingStatus>"
            r0.append(r1)
            if (r4 == 0) goto L45
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "<LoggingEnabled><TargetBucket>"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "</TargetBucket>"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            if (r5 == 0) goto L40
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "<TargetPrefix>"
            r4.append(r1)
            r4.append(r5)
            java.lang.String r5 = "</TargetPrefix>"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
        L40:
            java.lang.String r4 = "</LoggingEnabled>"
            r0.append(r4)
        L45:
            java.lang.String r4 = "</BucketLoggingStatus>"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = "utf-8"
            byte[] r4 = r4.getBytes(r5)
            int r5 = r4.length
            long r0 = (long) r5
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream
            r5.<init>(r4)
            r3.setContent(r5)
            r3.setContentLength(r0)
            return
    }

    public void putBucketRefererRequestBodyMarshall(java.util.ArrayList<java.lang.String> r4, boolean r5) throws java.io.UnsupportedEncodingException {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "<RefererConfiguration>"
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "<AllowEmptyReferer>"
            r1.append(r2)
            if (r5 == 0) goto L19
            java.lang.String r5 = "true"
            goto L1b
        L19:
            java.lang.String r5 = "false"
        L1b:
            r1.append(r5)
            java.lang.String r5 = "</AllowEmptyReferer>"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            if (r4 == 0) goto L66
            int r5 = r4.size()
            if (r5 <= 0) goto L66
            java.lang.String r5 = "<RefererList>"
            r0.append(r5)
            java.util.Iterator r4 = r4.iterator()
        L3b:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L61
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "<Referer>"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = "</Referer>"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            goto L3b
        L61:
            java.lang.String r4 = "</RefererList>"
            r0.append(r4)
        L66:
            java.lang.String r4 = "</RefererConfiguration>"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = "utf-8"
            byte[] r4 = r4.getBytes(r5)
            int r5 = r4.length
            long r0 = (long) r5
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream
            r5.<init>(r4)
            r3.setContent(r5)
            r3.setContentLength(r0)
            return
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setCheckCRC64(boolean r1) {
            r0 = this;
            r0.checkCRC64 = r1
            return
    }

    @Override
    public void setContent(java.io.InputStream r1) {
            r0 = this;
            super.setContent(r1)
            return
    }

    @Override
    public void setContentLength(long r1) {
            r0 = this;
            super.setContentLength(r1)
            return
    }

    public void setCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r1) {
            r0 = this;
            r0.credentialProvider = r1
            return
    }

    public void setCustomPathPrefixEnable(boolean r1) {
            r0 = this;
            r0.customPathPrefixEnable = r1
            return
    }

    public void setEndpoint(java.net.URI r1) {
            r0 = this;
            r0.endpoint = r1
            return
    }

    @Override
    public void setHeaders(java.util.Map r1) {
            r0 = this;
            super.setHeaders(r1)
            return
    }

    public void setHttpDnsEnable(boolean r1) {
            r0 = this;
            r0.httpDnsEnable = r1
            return
    }

    public void setIpWithHeader(java.lang.String r1) {
            r0 = this;
            r0.ipWithHeader = r1
            return
    }

    public void setIsAuthorizationRequired(boolean r1) {
            r0 = this;
            r0.isAuthorizationRequired = r1
            return
    }

    public void setIsInCustomCnameExcludeList(boolean r1) {
            r0 = this;
            r0.isInCustomCnameExcludeList = r1
            return
    }

    public void setMethod(com.alibaba.sdk.android.oss.common.HttpMethod r1) {
            r0 = this;
            r0.method = r1
            return
    }

    public void setObjectKey(java.lang.String r1) {
            r0 = this;
            r0.objectKey = r1
            return
    }

    public void setParameters(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.parameters = r1
            return
    }

    public void setPathStyleAccessEnable(boolean r1) {
            r0 = this;
            r0.pathStyleAccessEnable = r1
            return
    }

    public void setService(java.net.URI r1) {
            r0 = this;
            r0.service = r1
            return
    }

    @Override
    public void setStringBody(java.lang.String r1) {
            r0 = this;
            super.setStringBody(r1)
            return
    }

    public void setUploadData(byte[] r1) {
            r0 = this;
            r0.uploadData = r1
            return
    }

    public void setUploadFilePath(java.lang.String r1) {
            r0 = this;
            r0.uploadFilePath = r1
            return
    }

    public void setUploadUri(android.net.Uri r1) {
            r0 = this;
            r0.uploadUri = r1
            return
    }
}
