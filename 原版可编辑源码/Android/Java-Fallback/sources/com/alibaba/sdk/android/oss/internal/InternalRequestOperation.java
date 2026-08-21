package com.alibaba.sdk.android.oss.internal;

public class InternalRequestOperation {
    private static final int LIST_PART_MAX_RETURNS = 1000;
    private static final int MAX_PART_NUMBER = 10000;
    private static java.util.concurrent.ExecutorService executorService;
    private android.content.Context applicationContext;
    private com.alibaba.sdk.android.oss.ClientConfiguration conf;
    private com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider credentialProvider;
    private volatile java.net.URI endpoint;
    private okhttp3.OkHttpClient innerClient;
    private int maxRetryCount;
    private java.net.URI service;








    static {
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$1 r0 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$1
            r0.<init>()
            r1 = 5
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r1, r0)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService = r0
            return
    }

    public InternalRequestOperation(android.content.Context r5, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r6, com.alibaba.sdk.android.oss.ClientConfiguration r7) {
            r4 = this;
            r4.<init>()
            r0 = 2
            r4.maxRetryCount = r0
            java.net.URI r0 = new java.net.URI     // Catch: java.lang.Exception -> La0
            java.lang.String r1 = "http://oss.aliyuncs.com"
            r0.<init>(r1)     // Catch: java.lang.Exception -> La0
            r4.service = r0     // Catch: java.lang.Exception -> La0
            java.net.URI r0 = new java.net.URI     // Catch: java.lang.Exception -> La0
            java.lang.String r1 = "http://127.0.0.1"
            r0.<init>(r1)     // Catch: java.lang.Exception -> La0
            r4.endpoint = r0     // Catch: java.lang.Exception -> La0
            r4.applicationContext = r5
            r4.credentialProvider = r6
            r4.conf = r7
            okhttp3.OkHttpClient$Builder r5 = new okhttp3.OkHttpClient$Builder
            r5.<init>()
            r6 = 0
            okhttp3.OkHttpClient$Builder r5 = r5.followRedirects(r6)
            okhttp3.OkHttpClient$Builder r5 = r5.followSslRedirects(r6)
            okhttp3.OkHttpClient$Builder r5 = r5.retryOnConnectionFailure(r6)
            r6 = 0
            okhttp3.OkHttpClient$Builder r5 = r5.cache(r6)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$3 r6 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$3
            r6.<init>(r4)
            okhttp3.OkHttpClient$Builder r5 = r5.hostnameVerifier(r6)
            if (r7 == 0) goto L99
            okhttp3.Dispatcher r6 = new okhttp3.Dispatcher
            r6.<init>()
            int r0 = r7.getMaxConcurrentRequest()
            r6.setMaxRequests(r0)
            int r0 = r7.getConnectionTimeout()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r0 = r5.connectTimeout(r0, r2)
            int r1 = r7.getSocketTimeout()
            long r1 = (long) r1
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r0 = r0.readTimeout(r1, r3)
            int r1 = r7.getSocketTimeout()
            long r1 = (long) r1
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r0 = r0.writeTimeout(r1, r3)
            r0.dispatcher(r6)
            java.lang.String r6 = r7.getProxyHost()
            if (r6 == 0) goto L93
            int r6 = r7.getProxyPort()
            if (r6 == 0) goto L93
            java.net.Proxy r6 = new java.net.Proxy
            java.net.Proxy$Type r0 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress
            java.lang.String r2 = r7.getProxyHost()
            int r3 = r7.getProxyPort()
            r1.<init>(r2, r3)
            r6.<init>(r0, r1)
            r5.proxy(r6)
        L93:
            int r6 = r7.getMaxErrorRetry()
            r4.maxRetryCount = r6
        L99:
            okhttp3.OkHttpClient r5 = r5.build()
            r4.innerClient = r5
            return
        La0:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Endpoint must be a string like 'http://oss-cn-****.aliyuncs.com',or your cname like 'http://image.cnamedomain.com'!"
            r5.<init>(r6)
            throw r5
    }

    public InternalRequestOperation(android.content.Context r4, java.net.URI r5, com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r6, com.alibaba.sdk.android.oss.ClientConfiguration r7) {
            r3 = this;
            r3.<init>()
            r0 = 2
            r3.maxRetryCount = r0
            r3.applicationContext = r4
            r3.endpoint = r5
            r3.credentialProvider = r6
            r3.conf = r7
            okhttp3.OkHttpClient$Builder r4 = new okhttp3.OkHttpClient$Builder
            r4.<init>()
            r6 = 0
            okhttp3.OkHttpClient$Builder r4 = r4.followRedirects(r6)
            okhttp3.OkHttpClient$Builder r4 = r4.followSslRedirects(r6)
            okhttp3.OkHttpClient$Builder r4 = r4.retryOnConnectionFailure(r6)
            r6 = 0
            okhttp3.OkHttpClient$Builder r4 = r4.cache(r6)
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$2 r6 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$2
            r6.<init>(r3, r5)
            okhttp3.OkHttpClient$Builder r4 = r4.hostnameVerifier(r6)
            if (r7 == 0) goto L89
            okhttp3.Dispatcher r5 = new okhttp3.Dispatcher
            r5.<init>()
            int r6 = r7.getMaxConcurrentRequest()
            r5.setMaxRequests(r6)
            int r6 = r7.getConnectionTimeout()
            long r0 = (long) r6
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r6 = r4.connectTimeout(r0, r6)
            int r0 = r7.getSocketTimeout()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r6 = r6.readTimeout(r0, r2)
            int r0 = r7.getSocketTimeout()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r6 = r6.writeTimeout(r0, r2)
            r6.dispatcher(r5)
            java.lang.String r5 = r7.getProxyHost()
            if (r5 == 0) goto L83
            int r5 = r7.getProxyPort()
            if (r5 == 0) goto L83
            java.net.Proxy r5 = new java.net.Proxy
            java.net.Proxy$Type r6 = java.net.Proxy.Type.HTTP
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress
            java.lang.String r1 = r7.getProxyHost()
            int r2 = r7.getProxyPort()
            r0.<init>(r1, r2)
            r5.<init>(r6, r0)
            r4.proxy(r5)
        L83:
            int r5 = r7.getMaxErrorRetry()
            r3.maxRetryCount = r5
        L89:
            okhttp3.OkHttpClient r4 = r4.build()
            r3.innerClient = r4
            return
    }

    static java.net.URI access$000(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0) {
            java.net.URI r0 = r0.service
            return r0
    }

    static void access$100(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0, com.alibaba.sdk.android.oss.model.OSSRequest r1, com.alibaba.sdk.android.oss.model.OSSResult r2, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r3) {
            r0.checkCRC64(r1, r2, r3)
            return
    }

    static long access$200(com.alibaba.sdk.android.oss.internal.InternalRequestOperation r0, java.util.List r1) {
            long r0 = r0.calcObjectCRCFromParts(r1)
            return r0
    }

    private long calcObjectCRCFromParts(java.util.List<com.alibaba.sdk.android.oss.model.PartETag> r10) {
            r9 = this;
            java.util.Iterator r10 = r10.iterator()
            r0 = 0
            r2 = r0
        L7:
            boolean r4 = r10.hasNext()
            if (r4 == 0) goto L34
            java.lang.Object r4 = r10.next()
            com.alibaba.sdk.android.oss.model.PartETag r4 = (com.alibaba.sdk.android.oss.model.PartETag) r4
            long r5 = r4.getCRC64()
            int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r7 == 0) goto L33
            long r5 = r4.getPartSize()
            int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r7 > 0) goto L24
            goto L33
        L24:
            long r5 = r4.getCRC64()
            long r7 = r4.getPartSize()
            r4 = r5
            r6 = r7
            long r2 = com.alibaba.sdk.android.oss.common.utils.CRC64.combine(r2, r4, r6)
            goto L7
        L33:
            return r0
        L34:
            return r2
    }

    private void canonicalizeRequestMessage(com.alibaba.sdk.android.oss.internal.RequestMessage r6, com.alibaba.sdk.android.oss.model.OSSRequest r7) {
            r5 = this;
            java.util.Map r0 = r6.getHeaders()
            java.lang.String r1 = "Date"
            java.lang.Object r2 = r0.get(r1)
            if (r2 != 0) goto L13
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.DateUtil.currentFixedSkewedTimeInRFC822Format()
            r0.put(r1, r2)
        L13:
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = r6.getMethod()
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            if (r1 == r2) goto L23
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = r6.getMethod()
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            if (r1 != r2) goto L41
        L23:
            java.lang.String r1 = "Content-Type"
            java.lang.Object r2 = r0.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r2)
            if (r2 == 0) goto L41
            r2 = 0
            java.lang.String r3 = r6.getUploadFilePath()
            java.lang.String r4 = r6.getObjectKey()
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.determineContentType(r2, r3, r4)
            r0.put(r1, r2)
        L41:
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r5.conf
            boolean r0 = r0.isHttpDnsEnable()
            boolean r0 = r5.checkIfHttpDnsAvailable(r0)
            r6.setHttpDnsEnable(r0)
            com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r0 = r5.credentialProvider
            r6.setCredentialProvider(r0)
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r5.conf
            boolean r0 = r0.isPathStyleAccessEnable()
            r6.setPathStyleAccessEnable(r0)
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r5.conf
            boolean r0 = r0.isCustomPathPrefixEnable()
            r6.setCustomPathPrefixEnable(r0)
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r5.conf
            java.lang.String r0 = r0.getIpWithHeader()
            r6.setIpWithHeader(r0)
            java.util.Map r0 = r6.getHeaders()
            com.alibaba.sdk.android.oss.ClientConfiguration r1 = r5.conf
            java.lang.String r1 = r1.getCustomUserMark()
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.VersionInfoUtils.getUserAgent(r1)
            java.lang.String r2 = "User-Agent"
            r0.put(r2, r1)
            java.util.Map r0 = r6.getHeaders()
            java.lang.String r1 = "Range"
            boolean r0 = r0.containsKey(r1)
            r1 = 0
            if (r0 != 0) goto L9a
            java.util.Map r0 = r6.getParameters()
            java.lang.String r2 = "x-oss-process"
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L9d
        L9a:
            r6.setCheckCRC64(r1)
        L9d:
            java.net.URI r0 = r5.endpoint
            java.lang.String r0 = r0.getHost()
            com.alibaba.sdk.android.oss.ClientConfiguration r2 = r5.conf
            java.util.List r2 = r2.getCustomCnameExcludeList()
            boolean r0 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isInCustomCnameExcludeList(r0, r2)
            r6.setIsInCustomCnameExcludeList(r0)
            java.lang.Enum r0 = r7.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r2 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NULL
            if (r0 == r2) goto Lc2
            java.lang.Enum r0 = r7.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r2 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            if (r0 != r2) goto Lc8
            r1 = 1
            goto Lc8
        Lc2:
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r5.conf
            boolean r1 = r0.isCheckCRC64()
        Lc8:
            r6.setCheckCRC64(r1)
            if (r1 == 0) goto Ld0
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r6 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            goto Ld2
        Ld0:
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r6 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NO
        Ld2:
            r7.setCRC64(r6)
            return
    }

    private <Request extends com.alibaba.sdk.android.oss.model.OSSRequest, Result extends com.alibaba.sdk.android.oss.model.OSSResult> void checkCRC64(Request r2, Result r3) throws com.alibaba.sdk.android.oss.ClientException {
            r1 = this;
            java.lang.Enum r2 = r2.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            if (r2 != r0) goto L23
            java.lang.Long r2 = r3.getClientCRC()     // Catch: com.alibaba.sdk.android.oss.exception.InconsistentException -> L18
            java.lang.Long r0 = r3.getServerCRC()     // Catch: com.alibaba.sdk.android.oss.exception.InconsistentException -> L18
            java.lang.String r3 = r3.getRequestId()     // Catch: com.alibaba.sdk.android.oss.exception.InconsistentException -> L18
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.checkChecksum(r2, r0, r3)     // Catch: com.alibaba.sdk.android.oss.exception.InconsistentException -> L18
            goto L23
        L18:
            r2 = move-exception
            com.alibaba.sdk.android.oss.ClientException r3 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r0 = r2.getMessage()
            r3.<init>(r0, r2)
            throw r3
        L23:
            return
    }

    private <Request extends com.alibaba.sdk.android.oss.model.OSSRequest, Result extends com.alibaba.sdk.android.oss.model.OSSResult> void checkCRC64(Request r2, Result r3, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request, Result> r4) {
            r1 = this;
            r1.checkCRC64(r2, r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L9
            if (r4 == 0) goto L10
            r4.onSuccess(r2, r3)     // Catch: com.alibaba.sdk.android.oss.ClientException -> L9
            goto L10
        L9:
            r3 = move-exception
            if (r4 == 0) goto L10
            r0 = 0
            r4.onFailure(r2, r3, r0)
        L10:
            return
    }

    private boolean checkIfHttpDnsAvailable(boolean r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L30
            android.content.Context r3 = r2.applicationContext
            if (r3 != 0) goto L8
            return r0
        L8:
            int r3 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r3 < r1) goto Lf
            r0 = 1
        Lf:
            if (r0 == 0) goto L18
            java.lang.String r3 = "http.proxyHost"
            java.lang.String r3 = java.lang.System.getProperty(r3)
            goto L1e
        L18:
            android.content.Context r3 = r2.applicationContext
            java.lang.String r3 = android.net.Proxy.getHost(r3)
        L1e:
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r2.conf
            java.lang.String r0 = r0.getProxyHost()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2b
            r3 = r0
        L2b:
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            return r3
        L30:
            return r0
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> abortMultipartUpload(com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AbortMultipartUploadRequest, com.alibaba.sdk.android.oss.model.AbortMultipartUploadResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = r5.getUploadId()
            java.lang.String r3 = "uploadId"
            r1.put(r3, r2)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L44
            r1.setCompletedCallback(r6)
        L44:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$AbortMultipartUploadResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$AbortMultipartUploadResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.AppendObjectResult> appendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.AppendObjectRequest, com.alibaba.sdk.android.oss.model.AppendObjectResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            byte[] r1 = r5.getUploadData()
            if (r1 == 0) goto L31
            byte[] r1 = r5.getUploadData()
            r0.setUploadData(r1)
        L31:
            java.lang.String r1 = r5.getUploadFilePath()
            if (r1 == 0) goto L3e
            java.lang.String r1 = r5.getUploadFilePath()
            r0.setUploadFilePath(r1)
        L3e:
            android.net.Uri r1 = r5.getUploadUri()
            if (r1 == 0) goto L4b
            android.net.Uri r1 = r5.getUploadUri()
            r0.setUploadUri(r1)
        L4b:
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = "append"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.util.Map r1 = r0.getParameters()
            long r2 = r5.getPosition()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "position"
            r1.put(r3, r2)
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r5.getMetadata()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateRequestMetadata(r1, r2)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L8a
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$5 r2 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$5
            r2.<init>(r4, r6)
            r1.setCompletedCallback(r2)
        L8a:
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r5 = r5.getProgressCallback()
            r1.setProgressCallback(r5)
            com.alibaba.sdk.android.oss.internal.ResponseParsers$AppendObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$AppendObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.model.TriggerCallbackResult asyncTriggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r1.triggerCallback(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r2 = r2.getResult()
            com.alibaba.sdk.android.oss.model.TriggerCallbackResult r2 = (com.alibaba.sdk.android.oss.model.TriggerCallbackResult) r2
            return r2
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> completeMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest, com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            java.util.List r1 = r5.getPartETags()
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.buildXMLFromPartEtagList(r1)
            r0.setStringBody(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = r5.getUploadId()
            java.lang.String r3 = "uploadId"
            r1.put(r3, r2)
            java.util.Map r1 = r5.getCallbackParam()
            if (r1 == 0) goto L53
            java.util.Map r1 = r0.getHeaders()
            java.util.Map r2 = r5.getCallbackParam()
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateMapToBase64JsonString(r2)
            java.lang.String r3 = "x-oss-callback"
            r1.put(r3, r2)
        L53:
            java.util.Map r1 = r5.getCallbackVars()
            if (r1 == 0) goto L6a
            java.util.Map r1 = r0.getHeaders()
            java.util.Map r2 = r5.getCallbackVars()
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateMapToBase64JsonString(r2)
            java.lang.String r3 = "x-oss-callback-var"
            r1.put(r3, r2)
        L6a:
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r5.getMetadata()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateRequestMetadata(r1, r2)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L8d
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$7 r5 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$7
            r5.<init>(r4, r6)
            r1.setCompletedCallback(r5)
        L8d:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$CompleteMultipartUploadResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$CompleteMultipartUploadResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CopyObjectResult> copyObject(com.alibaba.sdk.android.oss.model.CopyObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CopyObjectRequest, com.alibaba.sdk.android.oss.model.CopyObjectResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r1)
            java.lang.String r1 = r5.getDestinationBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getDestinationKey()
            r0.setObjectKey(r1)
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateCopyObjectHeaders(r5, r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3e
            r1.setCompletedCallback(r6)
        L3e:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$CopyObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$CopyObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.CreateBucketResult> createBucket(com.alibaba.sdk.android.oss.model.CreateBucketRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.CreateBucketRequest, com.alibaba.sdk.android.oss.model.CreateBucketResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = r5.getBucketACL()
            if (r1 == 0) goto L34
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r2 = r5.getBucketACL()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "x-oss-acl"
            r1.put(r3, r2)
        L34:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.io.UnsupportedEncodingException -> L82
            r1.<init>()     // Catch: java.io.UnsupportedEncodingException -> L82
            java.lang.String r2 = r5.getLocationConstraint()     // Catch: java.io.UnsupportedEncodingException -> L82
            if (r2 == 0) goto L48
            java.lang.String r2 = "LocationConstraint"
            java.lang.String r3 = r5.getLocationConstraint()     // Catch: java.io.UnsupportedEncodingException -> L82
            r1.put(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L82
        L48:
            java.lang.String r2 = "StorageClass"
            com.alibaba.sdk.android.oss.model.StorageClass r3 = r5.getBucketStorageClass()     // Catch: java.io.UnsupportedEncodingException -> L82
            java.lang.String r3 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L82
            r1.put(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L82
            r0.createBucketRequestBodyMarshall(r1)     // Catch: java.io.UnsupportedEncodingException -> L82
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L6b
            r1.setCompletedCallback(r6)
        L6b:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$CreateBucketResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$CreateBucketResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
        L82:
            r5 = move-exception
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketResult> deleteBucket(com.alibaba.sdk.android.oss.model.DeleteBucketRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketRequest, com.alibaba.sdk.android.oss.model.DeleteBucketResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L30
            r1.setCompletedCallback(r6)
        L30:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> deleteBucketLifecycle(com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLifecycleResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "lifecycle"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketLifecycleResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketLifecycleResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> deleteBucketLogging(com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteBucketLoggingRequest, com.alibaba.sdk.android.oss.model.DeleteBucketLoggingResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "logging"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketLoggingResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteBucketLoggingResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> deleteMultipleObject(com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest r6, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteMultipleObjectRequest, com.alibaba.sdk.android.oss.model.DeleteMultipleObjectResult> r7) {
            r5 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "delete"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r6.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r5.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r2)
            java.lang.String r2 = r6.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            java.util.List r1 = r6.getObjectKeys()     // Catch: java.io.UnsupportedEncodingException -> L86
            java.lang.Boolean r2 = r6.getQuiet()     // Catch: java.io.UnsupportedEncodingException -> L86
            boolean r2 = r2.booleanValue()     // Catch: java.io.UnsupportedEncodingException -> L86
            byte[] r1 = r0.deleteMultipleObjectRequestBodyMarshall(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L86
            if (r1 == 0) goto L5c
            int r2 = r1.length     // Catch: java.io.UnsupportedEncodingException -> L86
            if (r2 <= 0) goto L5c
            java.util.Map r2 = r0.getHeaders()     // Catch: java.io.UnsupportedEncodingException -> L86
            java.lang.String r3 = "Content-MD5"
            java.lang.String r4 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateBase64Md5(r1)     // Catch: java.io.UnsupportedEncodingException -> L86
            r2.put(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L86
            java.util.Map r2 = r0.getHeaders()     // Catch: java.io.UnsupportedEncodingException -> L86
            java.lang.String r3 = "Content-Length"
            int r1 = r1.length     // Catch: java.io.UnsupportedEncodingException -> L86
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.io.UnsupportedEncodingException -> L86
            r2.put(r3, r1)     // Catch: java.io.UnsupportedEncodingException -> L86
        L5c:
            r5.canonicalizeRequestMessage(r0, r6)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r5.getInnerClient()
            android.content.Context r3 = r5.applicationContext
            r1.<init>(r2, r6, r3)
            if (r7 == 0) goto L6f
            r1.setCompletedCallback(r7)
        L6f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteMultipleObjectResponseParser r6 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteMultipleObjectResponseParser
            r6.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r7 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r5.maxRetryCount
            r7.<init>(r0, r6, r1, r2)
            java.util.concurrent.ExecutorService r6 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r6 = r6.submit(r7)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r6 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r6, r1)
            return r6
        L86:
            r6 = move-exception
            r6.printStackTrace()
            r6 = 0
            return r6
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.DeleteObjectResult> deleteObject(com.alibaba.sdk.android.oss.model.DeleteObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.DeleteObjectRequest, com.alibaba.sdk.android.oss.model.DeleteObjectResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L37
            r1.setCompletedCallback(r6)
        L37:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$DeleteObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public android.content.Context getApplicationContext() {
            r1 = this;
            android.content.Context r0 = r1.applicationContext
            return r0
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketACLResult> getBucketACL(com.alibaba.sdk.android.oss.model.GetBucketACLRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketACLRequest, com.alibaba.sdk.android.oss.model.GetBucketACLResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "acl"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketACLResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketACLResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketInfoResult> getBucketInfo(com.alibaba.sdk.android.oss.model.GetBucketInfoRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketInfoRequest, com.alibaba.sdk.android.oss.model.GetBucketInfoResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "bucketInfo"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketInfoResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketInfoResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> getBucketLifecycle(com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.GetBucketLifecycleResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "lifecycle"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketLifecycleResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketLifecycleResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> getBucketLogging(com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketLoggingRequest, com.alibaba.sdk.android.oss.model.GetBucketLoggingResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "logging"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketLoggingResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketLoggingResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetBucketRefererResult> getBucketReferer(com.alibaba.sdk.android.oss.model.GetBucketRefererRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetBucketRefererRequest, com.alibaba.sdk.android.oss.model.GetBucketRefererResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "referer"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketRefererResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetBucketRefererResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.ClientConfiguration getConf() {
            r1 = this;
            com.alibaba.sdk.android.oss.ClientConfiguration r0 = r1.conf
            return r0
    }

    public okhttp3.OkHttpClient getInnerClient() {
            r1 = this;
            okhttp3.OkHttpClient r0 = r1.innerClient
            return r0
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectResult> getObject(com.alibaba.sdk.android.oss.model.GetObjectRequest r6, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectRequest, com.alibaba.sdk.android.oss.model.GetObjectResult> r7) {
            r5 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r6.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r5.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r1)
            java.lang.String r1 = r6.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r6.getObjectKey()
            r0.setObjectKey(r1)
            com.alibaba.sdk.android.oss.model.Range r1 = r6.getRange()
            if (r1 == 0) goto L3b
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.Range r2 = r6.getRange()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Range"
            r1.put(r3, r2)
        L3b:
            java.lang.String r1 = r6.getxOssProcess()
            if (r1 == 0) goto L4e
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = r6.getxOssProcess()
            java.lang.String r3 = "x-oss-process"
            r1.put(r3, r2)
        L4e:
            r5.canonicalizeRequestMessage(r0, r6)
            java.util.Map r1 = r6.getRequestHeaders()
            if (r1 == 0) goto L7f
            java.util.Map r1 = r6.getRequestHeaders()
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L63:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7f
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.util.Map r3 = r0.getHeaders()
            java.lang.Object r4 = r2.getKey()
            java.lang.Object r2 = r2.getValue()
            r3.put(r4, r2)
            goto L63
        L7f:
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r5.getInnerClient()
            android.content.Context r3 = r5.applicationContext
            r1.<init>(r2, r6, r3)
            if (r7 == 0) goto L8f
            r1.setCompletedCallback(r7)
        L8f:
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r6 = r6.getProgressListener()
            r1.setProgressCallback(r6)
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetObjectResponseParser r6 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetObjectResponseParser
            r6.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r7 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r5.maxRetryCount
            r7.<init>(r0, r6, r1, r2)
            java.util.concurrent.ExecutorService r6 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r6 = r6.submit(r7)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r6 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r6, r1)
            return r6
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetObjectACLResult> getObjectACL(com.alibaba.sdk.android.oss.model.GetObjectACLRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetObjectACLRequest, com.alibaba.sdk.android.oss.model.GetObjectACLResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "acl"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            r0.setParameters(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L46
            r1.setCompletedCallback(r6)
        L46:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetObjectACLResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetObjectACLResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.GetSymlinkResult> getSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.GetSymlinkRequest, com.alibaba.sdk.android.oss.model.GetSymlinkResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "symlink"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            java.lang.String r2 = r5.getObjectKey()
            r0.setObjectKey(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$GetSymlinkResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$GetSymlinkResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.HeadObjectResult> headObject(com.alibaba.sdk.android.oss.model.HeadObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.HeadObjectRequest, com.alibaba.sdk.android.oss.model.HeadObjectResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.HEAD
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L37
            r1.setCompletedCallback(r6)
        L37:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$HeadObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$HeadObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ImagePersistResult> imageActionPersist(com.alibaba.sdk.android.oss.model.ImagePersistRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ImagePersistRequest, com.alibaba.sdk.android.oss.model.ImagePersistResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "x-oss-process"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r2)
            java.lang.String r2 = r5.mFromBucket
            r0.setBucketName(r2)
            java.lang.String r2 = r5.mFromObjectkey
            r0.setObjectKey(r2)
            r0.setParameters(r1)
            java.lang.String r1 = r5.mToBucketName
            java.lang.String r2 = r5.mToObjectKey
            java.lang.String r3 = r5.mAction
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.buildImagePersistentBody(r1, r2, r3)
            r0.setStringBody(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L48
            r1.setCompletedCallback(r6)
        L48:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$ImagePersistResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$ImagePersistResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> initMultipartUpload(com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.InitiateMultipartUploadRequest, com.alibaba.sdk.android.oss.model.InitiateMultipartUploadResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = ""
            java.lang.String r3 = "uploads"
            r1.put(r3, r2)
            boolean r1 = r5.isSequential
            if (r1 == 0) goto L3c
            java.util.Map r1 = r0.getParameters()
            java.lang.String r3 = "sequential"
            r1.put(r3, r2)
        L3c:
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r5.getMetadata()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateRequestMetadata(r1, r2)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L5a
            r1.setCompletedCallback(r6)
        L5a:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$InitMultipartResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$InitMultipartResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListBucketsResult> listBuckets(com.alibaba.sdk.android.oss.model.ListBucketsRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListBucketsRequest, com.alibaba.sdk.android.oss.model.ListBucketsResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r1)
            java.net.URI r1 = r4.service
            r0.setService(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            java.util.Map r1 = r0.getParameters()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateListBucketRequestParameters(r5, r1)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L35
            r1.setCompletedCallback(r6)
        L35:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$ListBucketResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$ListBucketResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> listMultipartUploads(com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListMultipartUploadsRequest, com.alibaba.sdk.android.oss.model.ListMultipartUploadsResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = "uploads"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.util.Map r1 = r0.getParameters()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateListMultipartUploadsRequestParameters(r5, r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L42
            r1.setCompletedCallback(r6)
        L42:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$ListMultipartUploadsResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$ListMultipartUploadsResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListObjectsResult> listObjects(com.alibaba.sdk.android.oss.model.ListObjectsRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListObjectsRequest, com.alibaba.sdk.android.oss.model.ListObjectsResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            java.util.Map r1 = r0.getParameters()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateListObjectsRequestParameters(r5, r1)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L37
            r1.setCompletedCallback(r6)
        L37:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$ListObjectsResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$ListObjectsResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.ListPartsResult> listParts(com.alibaba.sdk.android.oss.model.ListPartsRequest r12, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.ListPartsRequest, com.alibaba.sdk.android.oss.model.ListPartsResult> r13) {
            r11 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r12.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r11.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r0.setMethod(r1)
            java.lang.String r1 = r12.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r12.getObjectKey()
            r0.setObjectKey(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = r12.getUploadId()
            java.lang.String r3 = "uploadId"
            r1.put(r3, r2)
            java.lang.Integer r1 = r12.getMaxParts()
            if (r1 == 0) goto L5e
            int r2 = r1.intValue()
            long r3 = (long) r2
            r5 = 0
            r7 = 1
            r8 = 1000(0x3e8, double:4.94E-321)
            r10 = 1
            boolean r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.checkParamRange(r3, r5, r7, r8, r10)
            if (r2 == 0) goto L56
            java.util.Map r2 = r0.getParameters()
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "max-parts"
            r2.put(r3, r1)
            goto L5e
        L56:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "MaxPartsOutOfRange: 1000"
            r12.<init>(r13)
            throw r12
        L5e:
            java.lang.Integer r1 = r12.getPartNumberMarker()
            if (r1 == 0) goto L8b
            int r2 = r1.intValue()
            long r3 = (long) r2
            r5 = 0
            r7 = 0
            r8 = 10000(0x2710, double:4.9407E-320)
            r10 = 1
            boolean r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.checkParamRange(r3, r5, r7, r8, r10)
            if (r2 == 0) goto L83
            java.util.Map r2 = r0.getParameters()
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "part-number-marker"
            r2.put(r3, r1)
            goto L8b
        L83:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "PartNumberMarkerOutOfRange: 10000"
            r12.<init>(r13)
            throw r12
        L8b:
            r11.canonicalizeRequestMessage(r0, r12)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r11.getInnerClient()
            android.content.Context r3 = r11.applicationContext
            r1.<init>(r2, r12, r3)
            if (r13 == 0) goto L9e
            r1.setCompletedCallback(r13)
        L9e:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$ListPartsResponseParser r12 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$ListPartsResponseParser
            r12.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r13 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r11.maxRetryCount
            r13.<init>(r0, r12, r1, r2)
            java.util.concurrent.ExecutorService r12 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r12 = r12.submit(r13)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r12 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r12, r1)
            return r12
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> putBucketLifecycle(com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLifecycleRequest, com.alibaba.sdk.android.oss.model.PutBucketLifecycleResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "lifecycle"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            java.util.ArrayList r1 = r5.getLifecycleRules()     // Catch: java.io.UnsupportedEncodingException -> L5d
            r0.putBucketLifecycleRequestBodyMarshall(r1)     // Catch: java.io.UnsupportedEncodingException -> L5d
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L46
            r1.setCompletedCallback(r6)
        L46:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketLifecycleResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketLifecycleResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
        L5d:
            r5 = move-exception
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> putBucketLogging(com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketLoggingRequest, com.alibaba.sdk.android.oss.model.PutBucketLoggingResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "logging"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            java.lang.String r1 = r5.getTargetBucketName()     // Catch: java.io.UnsupportedEncodingException -> L61
            java.lang.String r2 = r5.getTargetPrefix()     // Catch: java.io.UnsupportedEncodingException -> L61
            r0.putBucketLoggingRequestBodyMarshall(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L61
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L4a
            r1.setCompletedCallback(r6)
        L4a:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketLoggingResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketLoggingResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
        L61:
            r5 = move-exception
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutBucketRefererResult> putBucketReferer(com.alibaba.sdk.android.oss.model.PutBucketRefererRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutBucketRefererRequest, com.alibaba.sdk.android.oss.model.PutBucketRefererResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "referer"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            boolean r2 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r2)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            r0.setParameters(r1)
            java.util.ArrayList r1 = r5.getReferers()     // Catch: java.io.UnsupportedEncodingException -> L61
            boolean r2 = r5.isAllowEmpty()     // Catch: java.io.UnsupportedEncodingException -> L61
            r0.putBucketRefererRequestBodyMarshall(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L61
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L4a
            r1.setCompletedCallback(r6)
        L4a:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketRefererResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$PutBucketRefererResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
        L61:
            r5 = move-exception
            r5.printStackTrace()
            r5 = 0
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutObjectResult> putObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutObjectRequest, com.alibaba.sdk.android.oss.model.PutObjectResult> r6) {
            r4 = this;
            java.lang.String r0 = " Internal putObject Start "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            byte[] r1 = r5.getUploadData()
            if (r1 == 0) goto L36
            byte[] r1 = r5.getUploadData()
            r0.setUploadData(r1)
        L36:
            java.lang.String r1 = r5.getUploadFilePath()
            if (r1 == 0) goto L43
            java.lang.String r1 = r5.getUploadFilePath()
            r0.setUploadFilePath(r1)
        L43:
            android.net.Uri r1 = r5.getUploadUri()
            if (r1 == 0) goto L50
            android.net.Uri r1 = r5.getUploadUri()
            r0.setUploadUri(r1)
        L50:
            java.util.Map r1 = r5.getCallbackParam()
            if (r1 == 0) goto L67
            java.util.Map r1 = r0.getHeaders()
            java.util.Map r2 = r5.getCallbackParam()
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateMapToBase64JsonString(r2)
            java.lang.String r3 = "x-oss-callback"
            r1.put(r3, r2)
        L67:
            java.util.Map r1 = r5.getCallbackVars()
            if (r1 == 0) goto L7e
            java.util.Map r1 = r0.getHeaders()
            java.util.Map r2 = r5.getCallbackVars()
            java.lang.String r2 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateMapToBase64JsonString(r2)
            java.lang.String r3 = "x-oss-callback-var"
            r1.put(r3, r2)
        L7e:
            java.lang.String r1 = " populateRequestMetadata "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r5.getMetadata()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateRequestMetadata(r1, r2)
            java.lang.String r1 = " canonicalizeRequestMessage "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            java.lang.String r1 = " ExecutionContext "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto Lb0
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$4 r2 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$4
            r2.<init>(r4, r6)
            r1.setCompletedCallback(r2)
        Lb0:
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r6 = r5.getRetryCallback()
            if (r6 == 0) goto Lbd
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r6 = r5.getRetryCallback()
            r1.setRetryCallback(r6)
        Lbd:
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r5 = r5.getProgressCallback()
            r1.setProgressCallback(r5)
            com.alibaba.sdk.android.oss.internal.ResponseParsers$PutObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$PutObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.lang.String r5 = " call OSSRequestTask "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r5)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.PutSymlinkResult> putSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.PutSymlinkRequest, com.alibaba.sdk.android.oss.model.PutSymlinkResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "symlink"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            java.lang.String r2 = r5.getObjectKey()
            r0.setObjectKey(r2)
            r0.setParameters(r1)
            java.lang.String r1 = r5.getTargetObjectName()
            boolean r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.isEmptyString(r1)
            if (r1 != 0) goto L49
            java.lang.String r1 = r5.getTargetObjectName()
            java.lang.String r2 = "utf-8"
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.HttpUtil.urlEncode(r1, r2)
            java.util.Map r2 = r0.getHeaders()
            java.lang.String r3 = "x-oss-symlink-target"
            r2.put(r3, r1)
        L49:
            java.util.Map r1 = r0.getHeaders()
            com.alibaba.sdk.android.oss.model.ObjectMetadata r2 = r5.getMetadata()
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.populateRequestMetadata(r1, r2)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L67
            r1.setCompletedCallback(r6)
        L67:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$PutSymlinkResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$PutSymlinkResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.RestoreObjectResult> restoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.RestoreObjectRequest, com.alibaba.sdk.android.oss.model.RestoreObjectResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "restore"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            java.lang.String r2 = r5.getObjectKey()
            r0.setObjectKey(r2)
            r0.setParameters(r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L3f
            r1.setCompletedCallback(r6)
        L3f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$RestoreObjectResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$RestoreObjectResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public void setCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider r1) {
            r0 = this;
            r0.credentialProvider = r1
            return
    }

    public com.alibaba.sdk.android.oss.model.AppendObjectResult syncAppendObject(com.alibaba.sdk.android.oss.model.AppendObjectRequest r11) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r10 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r10.appendObject(r11, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.AppendObjectResult r0 = (com.alibaba.sdk.android.oss.model.AppendObjectResult) r0
            java.lang.Enum r1 = r11.getCRC64()
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r2 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
            if (r1 != r2) goto L15
            r1 = 1
            goto L16
        L15:
            r1 = 0
        L16:
            java.lang.Long r2 = r11.getInitCRC64()
            if (r2 == 0) goto L42
            if (r1 == 0) goto L42
            java.lang.Long r1 = r11.getInitCRC64()
            long r2 = r1.longValue()
            java.lang.Long r1 = r0.getClientCRC()
            long r4 = r1.longValue()
            long r6 = r0.getNextPosition()
            long r8 = r11.getPosition()
            long r6 = r6 - r8
            long r1 = com.alibaba.sdk.android.oss.common.utils.CRC64.combine(r2, r4, r6)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.setClientCRC(r1)
        L42:
            r10.checkCRC64(r11, r0)
            return r0
    }

    public com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult syncCompleteMultipartUpload(com.alibaba.sdk.android.oss.model.CompleteMultipartUploadRequest r4) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r3 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r3.completeMultipartUpload(r4, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult r0 = (com.alibaba.sdk.android.oss.model.CompleteMultipartUploadResult) r0
            java.lang.Long r1 = r0.getServerCRC()
            if (r1 == 0) goto L20
            java.util.List r1 = r4.getPartETags()
            long r1 = r3.calcObjectCRCFromParts(r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.setClientCRC(r1)
        L20:
            r3.checkCRC64(r4, r0)
            return r0
    }

    public com.alibaba.sdk.android.oss.model.GetSymlinkResult syncGetSymlink(com.alibaba.sdk.android.oss.model.GetSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r1.getSymlink(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r2 = r2.getResult()
            com.alibaba.sdk.android.oss.model.GetSymlinkResult r2 = (com.alibaba.sdk.android.oss.model.GetSymlinkResult) r2
            return r2
    }

    public com.alibaba.sdk.android.oss.model.PutObjectResult syncPutObject(com.alibaba.sdk.android.oss.model.PutObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r1.putObject(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.PutObjectResult r0 = (com.alibaba.sdk.android.oss.model.PutObjectResult) r0
            r1.checkCRC64(r2, r0)
            return r0
    }

    public com.alibaba.sdk.android.oss.model.PutSymlinkResult syncPutSymlink(com.alibaba.sdk.android.oss.model.PutSymlinkRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r1.putSymlink(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r2 = r2.getResult()
            com.alibaba.sdk.android.oss.model.PutSymlinkResult r2 = (com.alibaba.sdk.android.oss.model.PutSymlinkResult) r2
            return r2
    }

    public com.alibaba.sdk.android.oss.model.RestoreObjectResult syncRestoreObject(com.alibaba.sdk.android.oss.model.RestoreObjectRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r2 = r1.restoreObject(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r2 = r2.getResult()
            com.alibaba.sdk.android.oss.model.RestoreObjectResult r2 = (com.alibaba.sdk.android.oss.model.RestoreObjectResult) r2
            return r2
    }

    public com.alibaba.sdk.android.oss.model.UploadPartResult syncUploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r2) throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r1 = this;
            r0 = 0
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = r1.uploadPart(r2, r0)
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r0.getResult()
            com.alibaba.sdk.android.oss.model.UploadPartResult r0 = (com.alibaba.sdk.android.oss.model.UploadPartResult) r0
            r1.checkCRC64(r2, r0)
            return r0
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.TriggerCallbackResult> triggerCallback(com.alibaba.sdk.android.oss.model.TriggerCallbackRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.TriggerCallbackRequest, com.alibaba.sdk.android.oss.model.TriggerCallbackResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "x-oss-process"
            java.lang.String r3 = ""
            r1.put(r2, r3)
            java.net.URI r2 = r4.endpoint
            r0.setEndpoint(r2)
            com.alibaba.sdk.android.oss.common.HttpMethod r2 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r0.setMethod(r2)
            java.lang.String r2 = r5.getBucketName()
            r0.setBucketName(r2)
            java.lang.String r2 = r5.getObjectKey()
            r0.setObjectKey(r2)
            r0.setParameters(r1)
            java.util.Map r1 = r5.getCallbackParam()
            java.util.Map r2 = r5.getCallbackVars()
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.buildTriggerCallbackBody(r1, r2)
            r0.setStringBody(r1)
            byte[] r1 = r1.getBytes()
            java.lang.String r1 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.calculateBase64Md5(r1)
            java.util.Map r2 = r0.getHeaders()
            java.lang.String r3 = "Content-MD5"
            r2.put(r3, r1)
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L5f
            r1.setCompletedCallback(r6)
        L5f:
            com.alibaba.sdk.android.oss.internal.ResponseParsers$TriggerCallbackResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$TriggerCallbackResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }

    public com.alibaba.sdk.android.oss.internal.OSSAsyncTask<com.alibaba.sdk.android.oss.model.UploadPartResult> uploadPart(com.alibaba.sdk.android.oss.model.UploadPartRequest r5, com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<com.alibaba.sdk.android.oss.model.UploadPartRequest, com.alibaba.sdk.android.oss.model.UploadPartResult> r6) {
            r4 = this;
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = new com.alibaba.sdk.android.oss.internal.RequestMessage
            r0.<init>()
            boolean r1 = r5.isAuthorizationRequired()
            r0.setIsAuthorizationRequired(r1)
            java.net.URI r1 = r4.endpoint
            r0.setEndpoint(r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r0.setMethod(r1)
            java.lang.String r1 = r5.getBucketName()
            r0.setBucketName(r1)
            java.lang.String r1 = r5.getObjectKey()
            r0.setObjectKey(r1)
            java.util.Map r1 = r0.getParameters()
            java.lang.String r2 = r5.getUploadId()
            java.lang.String r3 = "uploadId"
            r1.put(r3, r2)
            java.util.Map r1 = r0.getParameters()
            int r2 = r5.getPartNumber()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "partNumber"
            r1.put(r3, r2)
            byte[] r1 = r5.getPartContent()
            r0.setUploadData(r1)
            java.lang.String r1 = r5.getMd5Digest()
            if (r1 == 0) goto L5c
            java.util.Map r1 = r0.getHeaders()
            java.lang.String r2 = r5.getMd5Digest()
            java.lang.String r3 = "Content-MD5"
            r1.put(r3, r2)
        L5c:
            r4.canonicalizeRequestMessage(r0, r5)
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = new com.alibaba.sdk.android.oss.network.ExecutionContext
            okhttp3.OkHttpClient r2 = r4.getInnerClient()
            android.content.Context r3 = r4.applicationContext
            r1.<init>(r2, r5, r3)
            if (r6 == 0) goto L74
            com.alibaba.sdk.android.oss.internal.InternalRequestOperation$6 r2 = new com.alibaba.sdk.android.oss.internal.InternalRequestOperation$6
            r2.<init>(r4, r6)
            r1.setCompletedCallback(r2)
        L74:
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r5 = r5.getProgressCallback()
            r1.setProgressCallback(r5)
            com.alibaba.sdk.android.oss.internal.ResponseParsers$UploadPartResponseParser r5 = new com.alibaba.sdk.android.oss.internal.ResponseParsers$UploadPartResponseParser
            r5.<init>()
            com.alibaba.sdk.android.oss.network.OSSRequestTask r6 = new com.alibaba.sdk.android.oss.network.OSSRequestTask
            int r2 = r4.maxRetryCount
            r6.<init>(r0, r5, r1, r2)
            java.util.concurrent.ExecutorService r5 = com.alibaba.sdk.android.oss.internal.InternalRequestOperation.executorService
            java.util.concurrent.Future r5 = r5.submit(r6)
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r5 = com.alibaba.sdk.android.oss.internal.OSSAsyncTask.wrapRequestTask(r5, r1)
            return r5
    }
}
