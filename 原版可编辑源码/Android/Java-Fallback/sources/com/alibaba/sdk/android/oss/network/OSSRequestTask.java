package com.alibaba.sdk.android.oss.network;

import com.alibaba.sdk.android.oss.model.OSSResult;

public class OSSRequestTask<T extends com.alibaba.sdk.android.oss.model.OSSResult> implements java.util.concurrent.Callable<T> {
    private okhttp3.OkHttpClient client;
    private com.alibaba.sdk.android.oss.network.ExecutionContext context;
    private int currentRetryCount;
    private com.alibaba.sdk.android.oss.internal.RequestMessage message;
    private com.alibaba.sdk.android.oss.internal.ResponseParser<T> responseParser;
    private com.alibaba.sdk.android.oss.internal.OSSRetryHandler retryHandler;

    static class 1 {
        static final int[] $SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod = null;

        static {
                com.alibaba.sdk.android.oss.common.HttpMethod[] r0 = com.alibaba.sdk.android.oss.common.HttpMethod.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod = r0
                com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.POST     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod     // Catch: java.lang.NoSuchFieldError -> L1d
                com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod     // Catch: java.lang.NoSuchFieldError -> L28
                com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod     // Catch: java.lang.NoSuchFieldError -> L33
                com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.HEAD     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod     // Catch: java.lang.NoSuchFieldError -> L3e
                com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public OSSRequestTask(com.alibaba.sdk.android.oss.internal.RequestMessage r2, com.alibaba.sdk.android.oss.internal.ResponseParser r3, com.alibaba.sdk.android.oss.network.ExecutionContext r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.currentRetryCount = r0
            r1.responseParser = r3
            r1.message = r2
            r1.context = r4
            okhttp3.OkHttpClient r2 = r4.getClient()
            r1.client = r2
            com.alibaba.sdk.android.oss.internal.OSSRetryHandler r2 = new com.alibaba.sdk.android.oss.internal.OSSRetryHandler
            r2.<init>(r5)
            r1.retryHandler = r2
            return
    }

    private com.alibaba.sdk.android.oss.internal.ResponseMessage buildResponseMessage(com.alibaba.sdk.android.oss.internal.RequestMessage r6, okhttp3.Response r7) {
            r5 = this;
            com.alibaba.sdk.android.oss.internal.ResponseMessage r0 = new com.alibaba.sdk.android.oss.internal.ResponseMessage
            r0.<init>()
            r0.setRequest(r6)
            r0.setResponse(r7)
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            okhttp3.Headers r1 = r7.headers()
            r2 = 0
        L15:
            int r3 = r1.size()
            if (r2 >= r3) goto L29
            java.lang.String r3 = r1.name(r2)
            java.lang.String r4 = r1.value(r2)
            r6.put(r3, r4)
            int r2 = r2 + 1
            goto L15
        L29:
            r0.setHeaders(r6)
            int r6 = r7.code()
            r0.setStatusCode(r6)
            okhttp3.ResponseBody r6 = r7.body()
            long r1 = r6.contentLength()
            r0.setContentLength(r1)
            okhttp3.ResponseBody r6 = r7.body()
            java.io.InputStream r6 = r6.byteStream()
            r0.setContent(r6)
            return r0
    }

    @Override
    public T call() throws java.lang.Exception {
            r13 = this;
            java.lang.String r0 = "\n"
            r1 = 1
            r2 = 0
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r13.context     // Catch: java.lang.Exception -> L2cd
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Exception -> L2cd
            if (r3 == 0) goto L19
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r13.context     // Catch: java.lang.Exception -> L2cd
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r3 = com.alibaba.sdk.android.oss.common.utils.OSSUtils.buildBaseLogInfo(r3)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.OSSLog.logInfo(r3)     // Catch: java.lang.Exception -> L2cd
        L19:
            java.lang.String r3 = "[call] - "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r13.context     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.model.OSSRequest r3 = r3.getRequest()     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r4 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.ensureRequestValid(r3, r4)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r4 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.signRequest(r4)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.ExecutionContext r4 = r13.context     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.CancellationHandler r4 = r4.getCancellationHandler()     // Catch: java.lang.Exception -> L2cd
            boolean r4 = r4.isCancelled()     // Catch: java.lang.Exception -> L2cd
            if (r4 != 0) goto L2c5
            okhttp3.Request$Builder r4 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L2cd
            r4.<init>()     // Catch: java.lang.Exception -> L2cd
            boolean r5 = r3 instanceof com.alibaba.sdk.android.oss.model.ListBucketsRequest     // Catch: java.lang.Exception -> L2cd
            if (r5 == 0) goto L4a
            com.alibaba.sdk.android.oss.internal.RequestMessage r5 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.lang.String r5 = r5.buildOSSServiceURL()     // Catch: java.lang.Exception -> L2cd
            goto L50
        L4a:
            com.alibaba.sdk.android.oss.internal.RequestMessage r5 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.lang.String r5 = r5.buildCanonicalURL()     // Catch: java.lang.Exception -> L2cd
        L50:
            okhttp3.Request$Builder r4 = r4.url(r5)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r5 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.util.Map r5 = r5.getHeaders()     // Catch: java.lang.Exception -> L2cd
            java.util.Set r5 = r5.keySet()     // Catch: java.lang.Exception -> L2cd
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L2cd
        L62:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Exception -> L2cd
            if (r6 == 0) goto L7f
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r7 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.util.Map r7 = r7.getHeaders()     // Catch: java.lang.Exception -> L2cd
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Exception -> L2cd
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L2cd
            okhttp3.Request$Builder r4 = r4.addHeader(r6, r7)     // Catch: java.lang.Exception -> L2cd
            goto L62
        L7f:
            com.alibaba.sdk.android.oss.internal.RequestMessage r5 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.util.Map r5 = r5.getHeaders()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = "Content-Type"
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Exception -> L2cd
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L2cd
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2cd
            r6.<init>()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r7 = "request method = "
            r6.append(r7)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r7 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.HttpMethod r7 = r7.getMethod()     // Catch: java.lang.Exception -> L2cd
            r6.append(r7)     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)     // Catch: java.lang.Exception -> L2cd
            int[] r6 = com.alibaba.sdk.android.oss.network.OSSRequestTask.1.$SwitchMap$com$alibaba$sdk$android$oss$common$HttpMethod     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r7 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.HttpMethod r7 = r7.getMethod()     // Catch: java.lang.Exception -> L2cd
            int r7 = r7.ordinal()     // Catch: java.lang.Exception -> L2cd
            r6 = r6[r7]     // Catch: java.lang.Exception -> L2cd
            r7 = 0
            if (r6 == r1) goto Ld8
            r8 = 2
            if (r6 == r8) goto Ld8
            r5 = 3
            if (r6 == r5) goto Ld2
            r5 = 4
            if (r6 == r5) goto Lcc
            r5 = 5
            if (r6 == r5) goto Lc6
            goto L1fc
        Lc6:
            okhttp3.Request$Builder r4 = r4.delete()     // Catch: java.lang.Exception -> L2cd
            goto L1fc
        Lcc:
            okhttp3.Request$Builder r4 = r4.head()     // Catch: java.lang.Exception -> L2cd
            goto L1fc
        Ld2:
            okhttp3.Request$Builder r4 = r4.get()     // Catch: java.lang.Exception -> L2cd
            goto L1fc
        Ld8:
            if (r5 == 0) goto Ldc
            r6 = 1
            goto Ldd
        Ldc:
            r6 = 0
        Ldd:
            java.lang.String r8 = "Content type can't be null when upload!"
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.assertTrue(r6, r8)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            byte[] r6 = r6.getUploadData()     // Catch: java.lang.Exception -> L2cd
            r8 = 0
            if (r6 == 0) goto L103
            java.io.ByteArrayInputStream r6 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            byte[] r8 = r8.getUploadData()     // Catch: java.lang.Exception -> L2cd
            r6.<init>(r8)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            byte[] r8 = r8.getUploadData()     // Catch: java.lang.Exception -> L2cd
            int r8 = r8.length     // Catch: java.lang.Exception -> L2cd
            long r8 = (long) r8     // Catch: java.lang.Exception -> L2cd
        Lff:
            r9 = r8
        L100:
            r8 = r2
            goto L195
        L103:
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = r6.getUploadFilePath()     // Catch: java.lang.Exception -> L2cd
            if (r6 == 0) goto L130
            java.io.File r6 = new java.io.File     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r10 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.lang.String r10 = r10.getUploadFilePath()     // Catch: java.lang.Exception -> L2cd
            r6.<init>(r10)     // Catch: java.lang.Exception -> L2cd
            java.io.FileInputStream r10 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L2cd
            r10.<init>(r6)     // Catch: java.lang.Exception -> L2cd
            long r11 = r6.length()     // Catch: java.lang.Exception -> L2cd
            int r6 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r6 <= 0) goto L128
            r8 = r2
            r6 = r10
            r9 = r11
            goto L195
        L128:
            com.alibaba.sdk.android.oss.ClientException r0 = new com.alibaba.sdk.android.oss.ClientException     // Catch: java.lang.Exception -> L2cd
            java.lang.String r3 = "the length of file is 0!"
            r0.<init>(r3)     // Catch: java.lang.Exception -> L2cd
            throw r0     // Catch: java.lang.Exception -> L2cd
        L130:
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            android.net.Uri r6 = r6.getUploadUri()     // Catch: java.lang.Exception -> L2cd
            if (r6 == 0) goto L176
            com.alibaba.sdk.android.oss.network.ExecutionContext r6 = r13.context     // Catch: java.lang.Exception -> L2cd
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Exception -> L2cd
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            android.net.Uri r8 = r8.getUploadUri()     // Catch: java.lang.Exception -> L2cd
            java.io.InputStream r6 = r6.openInputStream(r8)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.ExecutionContext r8 = r13.context     // Catch: java.lang.Throwable -> L16e
            android.content.Context r8 = r8.getApplicationContext()     // Catch: java.lang.Throwable -> L16e
            android.content.ContentResolver r8 = r8.getContentResolver()     // Catch: java.lang.Throwable -> L16e
            com.alibaba.sdk.android.oss.internal.RequestMessage r9 = r13.message     // Catch: java.lang.Throwable -> L16e
            android.net.Uri r9 = r9.getUploadUri()     // Catch: java.lang.Throwable -> L16e
            java.lang.String r10 = "r"
            android.os.ParcelFileDescriptor r8 = r8.openFileDescriptor(r9, r10)     // Catch: java.lang.Throwable -> L16e
            long r9 = r8.getStatSize()     // Catch: java.lang.Throwable -> L16c
            if (r8 == 0) goto L100
            r8.close()     // Catch: java.lang.Exception -> L2cd
            goto L100
        L16c:
            r0 = move-exception
            goto L170
        L16e:
            r0 = move-exception
            r8 = r2
        L170:
            if (r8 == 0) goto L175
            r8.close()     // Catch: java.lang.Exception -> L2cd
        L175:
            throw r0     // Catch: java.lang.Exception -> L2cd
        L176:
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.io.InputStream r6 = r6.getContent()     // Catch: java.lang.Exception -> L2cd
            if (r6 == 0) goto L18c
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.io.InputStream r6 = r6.getContent()     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            long r8 = r8.getContentLength()     // Catch: java.lang.Exception -> L2cd
            goto Lff
        L18c:
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = r6.getStringBody()     // Catch: java.lang.Exception -> L2cd
            r9 = r8
            r8 = r6
            r6 = r2
        L195:
            if (r6 == 0) goto L1c9
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            boolean r8 = r8.isCheckCRC64()     // Catch: java.lang.Exception -> L2cd
            if (r8 == 0) goto L1aa
            java.util.zip.CheckedInputStream r8 = new java.util.zip.CheckedInputStream     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.utils.CRC64 r11 = new com.alibaba.sdk.android.oss.common.utils.CRC64     // Catch: java.lang.Exception -> L2cd
            r11.<init>()     // Catch: java.lang.Exception -> L2cd
            r8.<init>(r6, r11)     // Catch: java.lang.Exception -> L2cd
            r6 = r8
        L1aa:
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            r8.setContent(r6)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            r8.setContentLength(r9)     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.internal.RequestMessage r8 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.HttpMethod r8 = r8.getMethod()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.ExecutionContext r11 = r13.context     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.network.ProgressTouchableRequestBody r5 = com.alibaba.sdk.android.oss.network.NetworkProgressHelper.addProgressRequestBody(r6, r9, r5, r11)     // Catch: java.lang.Exception -> L2cd
            okhttp3.Request$Builder r4 = r4.method(r8, r5)     // Catch: java.lang.Exception -> L2cd
            goto L1fc
        L1c9:
            if (r8 == 0) goto L1e8
            com.alibaba.sdk.android.oss.internal.RequestMessage r6 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.HttpMethod r6 = r6.getMethod()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L2cd
            okhttp3.MediaType r5 = okhttp3.MediaType.parse(r5)     // Catch: java.lang.Exception -> L2cd
            java.lang.String r9 = "UTF-8"
            byte[] r8 = r8.getBytes(r9)     // Catch: java.lang.Exception -> L2cd
            okhttp3.RequestBody r5 = okhttp3.RequestBody.create(r5, r8)     // Catch: java.lang.Exception -> L2cd
            okhttp3.Request$Builder r4 = r4.method(r6, r5)     // Catch: java.lang.Exception -> L2cd
            goto L1fc
        L1e8:
            com.alibaba.sdk.android.oss.internal.RequestMessage r5 = r13.message     // Catch: java.lang.Exception -> L2cd
            com.alibaba.sdk.android.oss.common.HttpMethod r5 = r5.getMethod()     // Catch: java.lang.Exception -> L2cd
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L2cd
            byte[] r6 = new byte[r7]     // Catch: java.lang.Exception -> L2cd
            okhttp3.RequestBody r6 = okhttp3.RequestBody.create(r2, r6)     // Catch: java.lang.Exception -> L2cd
            okhttp3.Request$Builder r4 = r4.method(r5, r6)     // Catch: java.lang.Exception -> L2cd
        L1fc:
            okhttp3.Request r4 = r4.build()     // Catch: java.lang.Exception -> L2cd
            boolean r3 = r3 instanceof com.alibaba.sdk.android.oss.model.GetObjectRequest     // Catch: java.lang.Exception -> L2c2
            if (r3 == 0) goto L213
            okhttp3.OkHttpClient r3 = r13.client     // Catch: java.lang.Exception -> L2c2
            com.alibaba.sdk.android.oss.network.ExecutionContext r5 = r13.context     // Catch: java.lang.Exception -> L2c2
            okhttp3.OkHttpClient r3 = com.alibaba.sdk.android.oss.network.NetworkProgressHelper.addProgressResponseListener(r3, r5)     // Catch: java.lang.Exception -> L2c2
            r13.client = r3     // Catch: java.lang.Exception -> L2c2
            java.lang.String r3 = "getObject"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)     // Catch: java.lang.Exception -> L2c2
        L213:
            okhttp3.OkHttpClient r3 = r13.client     // Catch: java.lang.Exception -> L2c2
            okhttp3.Call r3 = r3.newCall(r4)     // Catch: java.lang.Exception -> L2c2
            com.alibaba.sdk.android.oss.network.ExecutionContext r5 = r13.context     // Catch: java.lang.Exception -> L2c0
            com.alibaba.sdk.android.oss.network.CancellationHandler r5 = r5.getCancellationHandler()     // Catch: java.lang.Exception -> L2c0
            r5.setCall(r3)     // Catch: java.lang.Exception -> L2c0
            okhttp3.Response r5 = r3.execute()     // Catch: java.lang.Exception -> L2c0
            boolean r6 = com.alibaba.sdk.android.oss.common.OSSLog.isEnableLog()     // Catch: java.lang.Exception -> L2c0
            if (r6 == 0) goto L2b8
            okhttp3.Headers r6 = r5.headers()     // Catch: java.lang.Exception -> L2c0
            java.util.Map r6 = r6.toMultimap()     // Catch: java.lang.Exception -> L2c0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c0
            r8.<init>()     // Catch: java.lang.Exception -> L2c0
            java.lang.String r9 = "response:---------------------\n"
            r8.append(r9)     // Catch: java.lang.Exception -> L2c0
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c0
            r9.<init>()     // Catch: java.lang.Exception -> L2c0
            java.lang.String r10 = "response code: "
            r9.append(r10)     // Catch: java.lang.Exception -> L2c0
            int r10 = r5.code()     // Catch: java.lang.Exception -> L2c0
            r9.append(r10)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r10 = " for url: "
            r9.append(r10)     // Catch: java.lang.Exception -> L2c0
            okhttp3.HttpUrl r10 = r4.url()     // Catch: java.lang.Exception -> L2c0
            r9.append(r10)     // Catch: java.lang.Exception -> L2c0
            r9.append(r0)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2c0
            r8.append(r9)     // Catch: java.lang.Exception -> L2c0
            java.util.Set r9 = r6.keySet()     // Catch: java.lang.Exception -> L2c0
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Exception -> L2c0
        L26d:
            boolean r10 = r9.hasNext()     // Catch: java.lang.Exception -> L2c0
            if (r10 == 0) goto L2b1
            java.lang.Object r10 = r9.next()     // Catch: java.lang.Exception -> L2c0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L2c0
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c0
            r11.<init>()     // Catch: java.lang.Exception -> L2c0
            java.lang.String r12 = "responseHeader ["
            r11.append(r12)     // Catch: java.lang.Exception -> L2c0
            r11.append(r10)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r12 = "]: "
            r11.append(r12)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L2c0
            r8.append(r11)     // Catch: java.lang.Exception -> L2c0
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c0
            r11.<init>()     // Catch: java.lang.Exception -> L2c0
            java.lang.Object r10 = r6.get(r10)     // Catch: java.lang.Exception -> L2c0
            java.util.List r10 = (java.util.List) r10     // Catch: java.lang.Exception -> L2c0
            java.lang.Object r10 = r10.get(r7)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L2c0
            r11.append(r10)     // Catch: java.lang.Exception -> L2c0
            r11.append(r0)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r10 = r11.toString()     // Catch: java.lang.Exception -> L2c0
            r8.append(r10)     // Catch: java.lang.Exception -> L2c0
            goto L26d
        L2b1:
            java.lang.String r0 = r8.toString()     // Catch: java.lang.Exception -> L2c0
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)     // Catch: java.lang.Exception -> L2c0
        L2b8:
            com.alibaba.sdk.android.oss.internal.RequestMessage r0 = r13.message     // Catch: java.lang.Exception -> L2c0
            com.alibaba.sdk.android.oss.internal.ResponseMessage r0 = r13.buildResponseMessage(r0, r5)     // Catch: java.lang.Exception -> L2c0
            r5 = r2
            goto L2fb
        L2c0:
            r0 = move-exception
            goto L2d0
        L2c2:
            r0 = move-exception
            r3 = r2
            goto L2d0
        L2c5:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException     // Catch: java.lang.Exception -> L2cd
            java.lang.String r3 = "This task is cancelled!"
            r0.<init>(r3)     // Catch: java.lang.Exception -> L2cd
            throw r0     // Catch: java.lang.Exception -> L2cd
        L2cd:
            r0 = move-exception
            r3 = r2
            r4 = r3
        L2d0:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Encounter local execpiton: "
            r5.append(r6)
            java.lang.String r6 = r0.toString()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r5)
            boolean r5 = com.alibaba.sdk.android.oss.common.OSSLog.isEnableLog()
            if (r5 == 0) goto L2f1
            r0.printStackTrace()
        L2f1:
            com.alibaba.sdk.android.oss.ClientException r5 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r6 = r0.getMessage()
            r5.<init>(r6, r0)
            r0 = r2
        L2fb:
            if (r5 != 0) goto L31c
            int r6 = r0.getStatusCode()
            r7 = 203(0xcb, float:2.84E-43)
            if (r6 == r7) goto L30d
            int r6 = r0.getStatusCode()
            r7 = 300(0x12c, float:4.2E-43)
            if (r6 < r7) goto L31c
        L30d:
            java.lang.String r4 = r4.method()
            java.lang.String r5 = "HEAD"
            boolean r4 = r4.equals(r5)
            com.alibaba.sdk.android.oss.ServiceException r5 = com.alibaba.sdk.android.oss.internal.ResponseParsers.parseResponseErrorXML(r0, r4)
            goto L346
        L31c:
            if (r5 != 0) goto L346
            com.alibaba.sdk.android.oss.internal.ResponseParser<T extends com.alibaba.sdk.android.oss.model.OSSResult> r4 = r13.responseParser     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.model.OSSResult r4 = r4.parse(r0)     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.network.ExecutionContext r5 = r13.context     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r5 = r5.getCompletedCallback()     // Catch: java.io.IOException -> L33c
            if (r5 == 0) goto L33b
            com.alibaba.sdk.android.oss.network.ExecutionContext r5 = r13.context     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r5 = r5.getCompletedCallback()     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.network.ExecutionContext r6 = r13.context     // Catch: java.io.IOException -> L33c
            com.alibaba.sdk.android.oss.model.OSSRequest r6 = r6.getRequest()     // Catch: java.io.IOException -> L33c
            r5.onSuccess(r6, r4)     // Catch: java.io.IOException -> L33c
        L33b:
            return r4
        L33c:
            r4 = move-exception
            com.alibaba.sdk.android.oss.ClientException r5 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.String r6 = r4.getMessage()
            r5.<init>(r6, r4)
        L346:
            if (r3 == 0) goto L34e
            boolean r3 = r3.isCanceled()
            if (r3 != 0) goto L35a
        L34e:
            com.alibaba.sdk.android.oss.network.ExecutionContext r3 = r13.context
            com.alibaba.sdk.android.oss.network.CancellationHandler r3 = r3.getCancellationHandler()
            boolean r3 = r3.isCancelled()
            if (r3 == 0) goto L36a
        L35a:
            com.alibaba.sdk.android.oss.ClientException r3 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.Throwable r4 = r5.getCause()
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r1)
            java.lang.String r6 = "Task is cancelled!"
            r3.<init>(r6, r4, r5)
            r5 = r3
        L36a:
            com.alibaba.sdk.android.oss.internal.OSSRetryHandler r3 = r13.retryHandler
            int r4 = r13.currentRetryCount
            com.alibaba.sdk.android.oss.internal.OSSRetryType r3 = r3.shouldRetry(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "[run] - retry, retry type: "
            r4.append(r6)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r4)
            com.alibaba.sdk.android.oss.internal.OSSRetryType r4 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldRetry
            if (r3 != r4) goto L3bc
            int r0 = r13.currentRetryCount
            int r0 = r0 + r1
            r13.currentRetryCount = r0
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r0 = r0.getRetryCallback()
            if (r0 == 0) goto L3a0
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r0 = r0.getRetryCallback()
            r0.onRetryCallback()
        L3a0:
            com.alibaba.sdk.android.oss.internal.OSSRetryHandler r0 = r13.retryHandler     // Catch: java.lang.InterruptedException -> L3ac
            int r1 = r13.currentRetryCount     // Catch: java.lang.InterruptedException -> L3ac
            long r0 = r0.timeInterval(r1, r3)     // Catch: java.lang.InterruptedException -> L3ac
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L3ac
            goto L3b7
        L3ac:
            r0 = move-exception
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r1.interrupt()
            r0.printStackTrace()
        L3b7:
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r13.call()
            return r0
        L3bc:
            com.alibaba.sdk.android.oss.internal.OSSRetryType r4 = com.alibaba.sdk.android.oss.internal.OSSRetryType.OSSRetryTypeShouldFixedTimeSkewedAndRetry
            if (r3 != r4) goto L412
            if (r0 == 0) goto L3f7
            java.util.Map r0 = r0.getHeaders()
            java.lang.String r2 = "Date"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Date r3 = com.alibaba.sdk.android.oss.common.utils.DateUtil.parseRfc822Date(r0)     // Catch: java.lang.Exception -> L3e3
            long r3 = r3.getTime()     // Catch: java.lang.Exception -> L3e3
            com.alibaba.sdk.android.oss.common.utils.DateUtil.setCurrentServerTime(r3)     // Catch: java.lang.Exception -> L3e3
            com.alibaba.sdk.android.oss.internal.RequestMessage r3 = r13.message     // Catch: java.lang.Exception -> L3e3
            java.util.Map r3 = r3.getHeaders()     // Catch: java.lang.Exception -> L3e3
            r3.put(r2, r0)     // Catch: java.lang.Exception -> L3e3
            goto L3f7
        L3e3:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[error] - synchronize time, reponseDate:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r0)
        L3f7:
            int r0 = r13.currentRetryCount
            int r0 = r0 + r1
            r13.currentRetryCount = r0
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r0 = r0.getRetryCallback()
            if (r0 == 0) goto L40d
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r0 = r0.getRetryCallback()
            r0.onRetryCallback()
        L40d:
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r13.call()
            return r0
        L412:
            boolean r0 = r5 instanceof com.alibaba.sdk.android.oss.ClientException
            if (r0 == 0) goto L431
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r0 = r0.getCompletedCallback()
            if (r0 == 0) goto L44b
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r0 = r0.getCompletedCallback()
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = r13.context
            com.alibaba.sdk.android.oss.model.OSSRequest r1 = r1.getRequest()
            r3 = r5
            com.alibaba.sdk.android.oss.ClientException r3 = (com.alibaba.sdk.android.oss.ClientException) r3
            r0.onFailure(r1, r3, r2)
            goto L44b
        L431:
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r0 = r0.getCompletedCallback()
            if (r0 == 0) goto L44b
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r13.context
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r0 = r0.getCompletedCallback()
            com.alibaba.sdk.android.oss.network.ExecutionContext r1 = r13.context
            com.alibaba.sdk.android.oss.model.OSSRequest r1 = r1.getRequest()
            r3 = r5
            com.alibaba.sdk.android.oss.ServiceException r3 = (com.alibaba.sdk.android.oss.ServiceException) r3
            r0.onFailure(r1, r2, r3)
        L44b:
            goto L44d
        L44c:
            throw r5
        L44d:
            goto L44c
    }

    @Override
    public java.lang.Object call() throws java.lang.Exception {
            r1 = this;
            com.alibaba.sdk.android.oss.model.OSSResult r0 = r1.call()
            return r0
    }
}
