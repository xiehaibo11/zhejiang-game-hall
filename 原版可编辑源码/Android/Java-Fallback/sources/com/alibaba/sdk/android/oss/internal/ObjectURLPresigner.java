package com.alibaba.sdk.android.oss.internal;

public class ObjectURLPresigner {
    private com.alibaba.sdk.android.oss.ClientConfiguration conf;
    private com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider credentialProvider;
    private java.net.URI endpoint;

    public ObjectURLPresigner(java.net.URI r1, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r2, com.alibaba.sdk.android.oss.ClientConfiguration r3) {
            r0 = this;
            r0.<init>()
            r0.endpoint = r1
            r0.credentialProvider = r2
            r0.conf = r3
            return
    }

    private java.lang.String buildCanonicalHost(java.net.URI r6, java.lang.String r7, com.alibaba.sdk.android.oss.ClientConfiguration r8) {
            r5 = this;
            java.lang.String r0 = r6.getHost()
            java.lang.String r1 = r6.getPath()
            int r6 = r6.getPort()
            r2 = -1
            if (r6 == r2) goto L14
            java.lang.String r6 = java.lang.String.valueOf(r6)
            goto L15
        L14:
            r6 = 0
        L15:
            r2 = 0
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L31
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            goto L32
        L31:
            r6 = r0
        L32:
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto L81
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isOssOriginHost(r0)
            java.lang.String r4 = "."
            if (r3 == 0) goto L53
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            r6.append(r4)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            goto L81
        L53:
            java.util.List r3 = r8.getCustomCnameExcludeList()
            boolean r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isInCustomCnameExcludeList(r0, r3)
            if (r3 == 0) goto L78
            boolean r3 = r8.isPathStyleAccessEnable()
            if (r3 == 0) goto L65
            r2 = 1
            goto L81
        L65:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            r6.append(r4)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            goto L81
        L78:
            boolean r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isValidateIP(r0)     // Catch: java.lang.Exception -> L7d
            goto L81
        L7d:
            r0 = move-exception
            r0.printStackTrace()
        L81:
            boolean r8 = r8.isCustomPathPrefixEnable()
            if (r8 == 0) goto L98
            if (r1 == 0) goto L98
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r6)
            r8.append(r1)
            java.lang.String r6 = r8.toString()
        L98:
            if (r2 == 0) goto Lae
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r6)
            java.lang.String r6 = "/"
            r8.append(r6)
            r8.append(r7)
            java.lang.String r6 = r8.toString()
        Lae:
            return r6
    }

    public java.lang.String presignConstrainedURL(com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest r10) throws com.alibaba.sdk.android.oss.ClientException {
            r9 = this;
            java.lang.String r0 = r10.getBucketName()
            java.lang.String r1 = r10.getKey()
            long r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.getFixedSkewedTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r4 = r10.getExpiration()
            long r2 = r2 + r4
            java.lang.String r2 = java.lang.String.valueOf(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r3 = r10.getMethod()
            if (r3 == 0) goto L23
            com.alibaba.sdk.android.oss.common.HttpMethod r3 = r10.getMethod()
            goto L25
        L23:
            com.alibaba.sdk.android.oss.common.HttpMethod r3 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
        L25:
            com.alibaba.sdk.android.oss.internal.RequestMessage r4 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r4.<init>()
            java.net.URI r5 = r9.endpoint
            r4.setEndpoint(r5)
            r4.setMethod(r3)
            r4.setBucketName(r0)
            r4.setObjectKey(r1)
            java.util.Map r3 = r4.getHeaders()
            java.lang.String r5 = "Date"
            r3.put(r5, r2)
            java.lang.String r3 = r10.getContentType()
            java.lang.String r5 = ""
            if (r3 == 0) goto L64
            java.lang.String r3 = r10.getContentType()
            java.lang.String r3 = r3.trim()
            boolean r3 = r3.equals(r5)
            if (r3 != 0) goto L64
            java.util.Map r3 = r4.getHeaders()
            java.lang.String r6 = r10.getContentType()
            java.lang.String r7 = "Content-Type"
            r3.put(r7, r6)
        L64:
            java.lang.String r3 = r10.getContentMD5()
            if (r3 == 0) goto L85
            java.lang.String r3 = r10.getContentMD5()
            java.lang.String r3 = r3.trim()
            boolean r3 = r3.equals(r5)
            if (r3 != 0) goto L85
            java.util.Map r3 = r4.getHeaders()
            java.lang.String r6 = r10.getContentMD5()
            java.lang.String r7 = "Content-MD5"
            r3.put(r7, r6)
        L85:
            java.util.Map r3 = r10.getQueryParameter()
            if (r3 == 0) goto Lbd
            java.util.Map r3 = r10.getQueryParameter()
            int r3 = r3.size()
            if (r3 <= 0) goto Lbd
            java.util.Map r3 = r10.getQueryParameter()
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        La1:
            boolean r6 = r3.hasNext()
            if (r6 == 0) goto Lbd
            java.lang.Object r6 = r3.next()
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6
            java.util.Map r7 = r4.getParameters()
            java.lang.Object r8 = r6.getKey()
            java.lang.Object r6 = r6.getValue()
            r7.put(r8, r6)
            goto La1
        Lbd:
            java.lang.String r3 = r10.getProcess()
            if (r3 == 0) goto Lde
            java.lang.String r3 = r10.getProcess()
            java.lang.String r3 = r3.trim()
            boolean r3 = r3.equals(r5)
            if (r3 != 0) goto Lde
            java.util.Map r3 = r4.getParameters()
            java.lang.String r10 = r10.getProcess()
            java.lang.String r5 = "x-oss-process"
            r3.put(r5, r10)
        Lde:
            r10 = 0
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r3 = r9.credentialProvider
            boolean r5 = r3 instanceof com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider
            java.lang.String r6 = "security-token"
            if (r5 == 0) goto L103
            com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider r3 = (com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider) r3
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r10 = r3.getValidFederationToken()
            java.util.Map r3 = r4.getParameters()
            java.lang.String r5 = r10.getSecurityToken()
            r3.put(r6, r5)
            if (r10 == 0) goto Lfb
            goto L118
        Lfb:
            com.alibaba.sdk.android.oss.ClientException r10 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r0 = "Can not get a federation token!"
            r10.<init>(r0)
            throw r10
        L103:
            boolean r5 = r3 instanceof com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider
            if (r5 == 0) goto L118
            com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider r3 = (com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider) r3
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r10 = r3.getFederationToken()
            java.util.Map r3 = r4.getParameters()
            java.lang.String r5 = r10.getSecurityToken()
            r3.put(r6, r5)
        L118:
            java.lang.String r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.buildCanonicalString(r4)
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r5 = r9.credentialProvider
            boolean r6 = r5 instanceof com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider
            if (r6 != 0) goto L151
            boolean r6 = r5 instanceof com.alibaba.sdk.android.oss.common.auth.OSSStsTokenCredentialProvider
            if (r6 == 0) goto L127
            goto L151
        L127:
            boolean r10 = r5 instanceof com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider
            if (r10 == 0) goto L13e
            com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider r5 = (com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider) r5
            java.lang.String r10 = r5.getAccessKeyId()
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r5 = r9.credentialProvider
            com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider r5 = (com.alibaba.sdk.android.oss.common.auth.OSSPlainTextAKSKCredentialProvider) r5
            java.lang.String r5 = r5.getAccessKeySecret()
            java.lang.String r10 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.sign(r10, r5, r3)
            goto L15d
        L13e:
            boolean r10 = r5 instanceof com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider
            if (r10 == 0) goto L149
            com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider r5 = (com.alibaba.sdk.android.oss.common.auth.OSSCustomSignerCredentialProvider) r5
            java.lang.String r10 = r5.signContent(r3)
            goto L15d
        L149:
            com.alibaba.sdk.android.oss.ClientException r10 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r0 = "Unknown credentialProvider!"
            r10.<init>(r0)
            throw r10
        L151:
            java.lang.String r5 = r10.getTempAK()
            java.lang.String r10 = r10.getTempSK()
            java.lang.String r10 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.sign(r5, r10, r3)
        L15d:
            java.lang.String r3 = ":"
            java.lang.String[] r5 = r10.split(r3)
            r6 = 0
            r5 = r5[r6]
            r6 = 4
            java.lang.String r5 = r5.substring(r6)
            java.lang.String[] r10 = r10.split(r3)
            r3 = 1
            r10 = r10[r3]
            java.net.URI r3 = r9.endpoint
            com.alibaba.sdk.android.oss.ClientConfiguration r6 = r9.conf
            java.lang.String r0 = r9.buildCanonicalHost(r3, r0, r6)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>()
            java.lang.String r6 = "Expires"
            r3.put(r6, r2)
            java.lang.String r2 = "OSSAccessKeyId"
            r3.put(r2, r5)
            java.lang.String r2 = "Signature"
            r3.put(r2, r10)
            java.util.Map r10 = r4.getParameters()
            r3.putAll(r10)
            java.lang.String r10 = "utf-8"
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.paramToQueryString(r3, r10)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.net.URI r4 = r9.endpoint
            java.lang.String r4 = r4.getScheme()
            r3.append(r4)
            java.lang.String r4 = "://"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "/"
            r3.append(r0)
            java.lang.String r10 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r1, r10)
            r3.append(r10)
            java.lang.String r10 = "?"
            r3.append(r10)
            r3.append(r2)
            java.lang.String r10 = r3.toString()
            return r10
    }

    public java.lang.String presignConstrainedURL(java.lang.String r2, java.lang.String r3, long r4) throws com.alibaba.sdk.android.oss.ClientException {
            r1 = this;
            com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest r0 = new com.alibaba.sdk.android.oss.model.GeneratePresignedUrlRequest
            r0.<init>(r2, r3)
            r0.setExpiration(r4)
            java.lang.String r2 = r1.presignConstrainedURL(r0)
            return r2
    }

    public java.lang.String presignPublicURL(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.net.URI r0 = r2.endpoint
            com.alibaba.sdk.android.oss.ClientConfiguration r1 = r2.conf
            java.lang.String r3 = r2.buildCanonicalHost(r0, r3, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.net.URI r1 = r2.endpoint
            java.lang.String r1 = r1.getScheme()
            r0.append(r1)
            java.lang.String r1 = "://"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "/"
            r0.append(r3)
            java.lang.String r3 = "utf-8"
            java.lang.String r3 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r4, r3)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }
}
