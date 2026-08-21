package com.mbridge.msdk.foundation.download.core;

class OkHTTPFileDownloadTask implements com.mbridge.msdk.foundation.download.core.IDownloadTask {
    private static final java.lang.String CLOSE = "close";
    private static final java.lang.String CONNECTION = "Connection";
    private static final java.lang.String FORMAT_RANGE = "bytes=%d-";
    private static final java.lang.String RESPONSE_BODY_IS_NULL = "response body is null";
    private static final java.lang.String RESPONSE_CODE = "responseCode ";
    private static final java.lang.String RESPONSE_CONTENT_LENGTH_IS_NULL = "response content length is null";
    private static final java.lang.String RESPONSE_INPUTSTREAM_IS_NULL = "response inputStream is null";
    private static final java.lang.String RESPONSE_IS_NULL = "response is null";
    private final com.mbridge.msdk.foundation.download.database.IDatabaseHelper _databaseHelper;
    private volatile com.mbridge.msdk.foundation.download.DownloadMessage _downloadMessage;
    private com.mbridge.msdk.foundation.download.database.DownloadModel _downloadModel;
    private final com.mbridge.msdk.foundation.download.core.DownloadRequest _downloadRequest;
    private com.mbridge.msdk.foundation.download.DownloadResponse _downloadResponse;
    private com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder _downloaderReporter;
    private java.lang.String _etag;
    private java.io.InputStream _inputStream;
    private com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream _outputStream;
    private com.mbridge.msdk.thrid.okhttp.ResponseBody _responseBody;

    private OkHTTPFileDownloadTask(com.mbridge.msdk.foundation.download.core.DownloadRequest r2, com.mbridge.msdk.foundation.download.database.DownloadModel r3, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r4, com.mbridge.msdk.foundation.download.DownloadMessage r5, com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1._etag = r0
            r1._downloadRequest = r2
            r1._downloadModel = r3
            r1._databaseHelper = r4
            r1._downloadMessage = r5
            r1._downloaderReporter = r6
            return
    }

    public static com.mbridge.msdk.foundation.download.core.IDownloadTask create(com.mbridge.msdk.foundation.download.core.DownloadRequest r7, com.mbridge.msdk.foundation.download.database.DownloadModel r8, com.mbridge.msdk.foundation.download.database.IDatabaseHelper r9, com.mbridge.msdk.foundation.download.DownloadMessage r10, com.mbridge.msdk.foundation.download.core.DownloaderReporter.Builder r11) {
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r11)
            if (r0 == 0) goto Ld
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r11 = new com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder
            java.lang.String r0 = "2000116"
            r11.<init>(r0)
        Ld:
            r6 = r11
            com.mbridge.msdk.foundation.download.core.OkHTTPFileDownloadTask r11 = new com.mbridge.msdk.foundation.download.core.OkHTTPFileDownloadTask
            r1 = r11
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            return r11
    }

    private com.mbridge.msdk.foundation.download.DownloadResponse handleInputStream(java.lang.String r23, java.lang.String r24, java.lang.String r25, java.lang.String r26) throws java.io.IOException, java.lang.IllegalAccessException {
            r22 = this;
            r8 = r22
            r7 = r24
            com.mbridge.msdk.foundation.download.DownloadResponse r5 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r5.<init>()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            r6 = 1
            if (r0 == 0) goto L50
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            java.lang.String r9 = r0.getDownloadId()
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            java.lang.String r10 = r0.getDownloadUrl()
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            java.lang.String r11 = r0.getResourceUrl()
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            java.lang.String r14 = r0.getSaveFileName()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            long r15 = r0.getTotalBytes()
            r17 = 0
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            int r19 = r0.getDownloadRate()
            r20 = 1
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            com.mbridge.msdk.foundation.download.DownloadResourceType r21 = r0.getDownloadResourceType()
            r12 = r26
            r13 = r24
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r9, r10, r11, r12, r13, r14, r15, r17, r19, r20, r21)
            r8._downloadModel = r0
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r1 = r8._databaseHelper
            r1.insert(r0)
            goto L9f
        L50:
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            java.lang.String r9 = r0.getDownloadId()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            java.lang.String r10 = r0.getDownloadUrl()
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            java.lang.String r11 = r0.getResourceUrl()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            java.lang.String r12 = r0.getEtag()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            java.lang.String r13 = r0.getSaveDirectorPath()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            java.lang.String r14 = r0.getSaveFileName()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            long r15 = r0.getTotalBytes()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            long r17 = r0.getDownloadedBytes()
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            int r19 = r0.getDownloadRate()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = r8._downloadModel
            int r0 = r0.getUsageCounter()
            int r20 = r0 + 1
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            com.mbridge.msdk.foundation.download.DownloadResourceType r21 = r0.getDownloadResourceType()
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r9, r10, r11, r12, r13, r14, r15, r17, r19, r20, r21)
            r8._downloadModel = r0
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r1 = r8._databaseHelper
            r1.update(r0, r7)
        L9f:
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            java.io.File r1 = new java.io.File
            r2 = r23
            r1.<init>(r7, r2)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r0 = r0.getDownloadFileOutputStream(r1)
            r8._outputStream = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r8._downloadRequest
            long r1 = r1.getDownloadedBytes()
            r0.seek(r1)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            int r0 = r0.getByteBufferSize()
            byte[] r9 = new byte[r0]
        Lc3:
            java.io.InputStream r0 = r8._inputStream
            int r0 = r0.read(r9)
            r1 = -1
            if (r0 == r1) goto L131
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r1 = r8._outputStream
            r2 = 0
            r1.write(r9, r2, r0)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r8._downloadRequest
            long r2 = r1.getDownloadedBytes()
            long r10 = (long) r0
            long r2 = r2 + r10
            r1.setDownloadedBytes(r2)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r0 = r8._outputStream
            r0.flushAndSync()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            long r0 = r0.getTotalBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r8._downloadRequest
            long r2 = r2.getDownloadedBytes()
            int r10 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r0, r2)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r8._downloadRequest
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r8._downloadMessage
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            long r3 = r0.getDownloadedBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            long r11 = r0.getTotalBytes()
            r0 = r22
            r15 = r5
            r14 = r6
            r5 = r11
            r13 = r7
            r7 = r10
            r0.sendProgress(r1, r2, r3, r5, r7)
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            int r0 = r0.getDownloadRate()
            r1 = 100
            if (r0 == r1) goto L11f
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r8._downloadMessage
            int r0 = r0.getDownloadRate()
            if (r10 < r0) goto L11f
            goto L134
        L11f:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r8._downloadRequest
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r0.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 != r1) goto L12d
            r15.setCancelled(r14)
            goto L134
        L12d:
            r7 = r13
            r6 = r14
            r5 = r15
            goto Lc3
        L131:
            r15 = r5
            r14 = r6
            r13 = r7
        L134:
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r0.getDatabaseHelper()
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r8._downloadMessage
            java.lang.String r10 = r1.getDownloadUrl()
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r8._downloadMessage
            java.lang.String r11 = r1.getResourceUrl()
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = r8._downloadMessage
            java.lang.String r1 = r1.getSaveFileName()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r8._downloadRequest
            long r2 = r2.getTotalBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r4 = r8._downloadRequest
            long r17 = r4.getDownloadedBytes()
            com.mbridge.msdk.foundation.download.DownloadMessage r4 = r8._downloadMessage
            int r19 = r4.getDownloadRate()
            com.mbridge.msdk.foundation.download.database.DownloadModel r4 = r8._downloadModel
            int r20 = r4.getUsageCounter()
            com.mbridge.msdk.foundation.download.DownloadMessage r4 = r8._downloadMessage
            com.mbridge.msdk.foundation.download.DownloadResourceType r21 = r4.getDownloadResourceType()
            r9 = r25
            r12 = r26
            r4 = r13
            r13 = r24
            r5 = r14
            r14 = r1
            r1 = r15
            r15 = r2
            com.mbridge.msdk.foundation.download.database.DownloadModel r2 = com.mbridge.msdk.foundation.download.database.DownloadModel.create(r9, r10, r11, r12, r13, r14, r15, r17, r19, r20, r21)
            r3 = r25
            r0.updateProgress(r3, r4, r2)
            boolean r0 = r1.isCancelled()
            if (r0 != 0) goto L189
            r1.setSuccessful(r5)
        L189:
            return r1
    }

    private void handlerException(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.Exception r6) {
            r2 = this;
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3 = r2._databaseHelper     // Catch: java.lang.Exception -> L56
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.isNotNull(r3)     // Catch: java.lang.Exception -> L56
            if (r3 == 0) goto L68
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r2._downloadRequest     // Catch: java.lang.Exception -> L56
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.isNotNull(r3)     // Catch: java.lang.Exception -> L56
            if (r3 == 0) goto L68
            com.mbridge.msdk.foundation.tools.ab r3 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Exception -> L56
            java.lang.String r0 = "r_f_s_d_e"
            r1 = 1
            boolean r3 = r3.a(r0, r1)     // Catch: java.lang.Exception -> L56
            if (r3 != 0) goto L49
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3 = r2._databaseHelper     // Catch: java.lang.Exception -> L56
            r3.remove(r5, r4)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r3 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()     // Catch: java.lang.Exception -> L56
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L56
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L56
            r5.<init>()     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r2._downloadRequest     // Catch: java.lang.Exception -> L56
            java.lang.String r0 = r0.getCacheDirectoryPath()     // Catch: java.lang.Exception -> L56
            r5.append(r0)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r2._downloadMessage     // Catch: java.lang.Exception -> L56
            java.lang.String r0 = r0.getSaveFileName()     // Catch: java.lang.Exception -> L56
            r5.append(r0)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L56
            r4.<init>(r5)     // Catch: java.lang.Exception -> L56
            r3.deleteFile(r4)     // Catch: java.lang.Exception -> L56
        L49:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r2._downloadRequest     // Catch: java.lang.Exception -> L56
            r4 = 0
            r3.setDownloadedBytes(r4)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r2._downloadRequest     // Catch: java.lang.Exception -> L56
            r3.setTotalBytes(r4)     // Catch: java.lang.Exception -> L56
            goto L68
        L56:
            r3 = move-exception
            com.mbridge.msdk.foundation.download.core.GlobalComponent r4 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r4 = r4.getLogger()
            java.lang.String r3 = r3.getMessage()
            java.lang.String r5 = "DownloadTask"
            r4.log(r5, r3)
        L68:
            com.mbridge.msdk.foundation.download.DownloadResponse r3 = r2._downloadResponse
            r3.setError(r6)
            return
    }

    private com.mbridge.msdk.foundation.download.DownloadResponse handlerRequestSuccessful(java.lang.String r16, java.lang.String r17, java.lang.String r18, com.mbridge.msdk.thrid.okhttp.Response r19, int r20) throws java.io.IOException, java.lang.IllegalAccessException {
            r15 = this;
            r0 = r15
            r1 = r17
            r2 = r18
            r3 = r20
            com.mbridge.msdk.foundation.download.DownloadResponse r4 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r4.<init>()
            com.mbridge.msdk.foundation.download.database.DownloadModel r5 = r0._downloadModel
            boolean r5 = r15.isSupportResume(r3, r5)
            r6 = 1
            r5 = r5 ^ r6
            r7 = 0
            if (r19 == 0) goto L4a
            com.mbridge.msdk.foundation.download.core.DownloadRequest r9 = r0._downloadRequest
            if (r9 == 0) goto L4a
            r9 = 206(0xce, float:2.89E-43)
            if (r3 != r9) goto L4a
            com.mbridge.msdk.thrid.okhttp.ResponseBody r3 = r19.body()
            if (r3 == 0) goto L4a
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            long r9 = r3.getTotalBytes()
            int r3 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r3 <= 0) goto L4a
            com.mbridge.msdk.thrid.okhttp.ResponseBody r3 = r19.body()
            long r9 = r3.contentLength()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            long r11 = r3.getTotalBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            long r13 = r3.getDownloadedBytes()
            long r11 = r11 - r13
            int r3 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r3 == 0) goto L4a
            goto L4b
        L4a:
            r6 = 0
        L4b:
            if (r5 == 0) goto L90
            if (r6 == 0) goto L90
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            r3.setDownloadedBytes(r7)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            r3.setTotalBytes(r7)
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3 = r0._databaseHelper
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.isNotNull(r3)
            if (r3 == 0) goto L66
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r3 = r0._databaseHelper
            r3.remove(r2, r1)
        L66:
            r3 = 0
            r0._downloadModel = r3
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r3 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.getInstance()
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r9 = r0._downloadRequest
            java.lang.String r9 = r9.getCacheDirectoryPath()
            r6.append(r9)
            com.mbridge.msdk.foundation.download.DownloadMessage r9 = r0._downloadMessage
            java.lang.String r9 = r9.getSaveFileName()
            r6.append(r9)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            r3.deleteFile(r5)
        L90:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r3 = r19.body()
            r0._responseBody = r3
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r3)
            if (r3 == 0) goto Lb1
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "response body is null"
            r1.<init>(r2)
            r4.setError(r1)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r0._downloadRequest
            r1.setTotalBytes(r7)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r0._downloadRequest
            r1.setDownloadedBytes(r7)
            return r4
        Lb1:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r3 = r0._responseBody
            long r5 = r3.contentLength()
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 > 0) goto Lc6
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "response content length is null"
            r1.<init>(r2)
            r4.setError(r1)
            return r4
        Lc6:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            long r9 = r3.getTotalBytes()
            int r3 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r3 != 0) goto Ld5
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r0._downloadRequest
            r3.setTotalBytes(r5)
        Ld5:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r3 = r0._responseBody
            java.io.InputStream r3 = r3.byteStream()
            r0._inputStream = r3
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r3)
            if (r3 == 0) goto Lee
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "response inputStream is null"
            r1.<init>(r2)
            r4.setError(r1)
            return r4
        Lee:
            java.lang.String r3 = r0._etag
            r4 = r16
            com.mbridge.msdk.foundation.download.DownloadResponse r1 = r15.handleInputStream(r4, r1, r2, r3)
            return r1
    }

    private boolean isSupportResume(int r2, com.mbridge.msdk.foundation.download.database.DownloadModel r3) {
            r1 = this;
            r0 = 206(0xce, float:2.89E-43)
            if (r2 != r0) goto L1d
            java.lang.String r2 = r1._etag
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1d
            if (r3 != 0) goto Lf
            goto L1b
        Lf:
            java.lang.String r2 = r1._etag
            java.lang.String r3 = r3.getEtag()
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 == 0) goto L1d
        L1b:
            r2 = 1
            goto L1e
        L1d:
            r2 = 0
        L1e:
            return r2
    }

    private void reportDownloadMessage() {
            r6 = this;
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r6._downloadResponse
            boolean r0 = r0.isSuccessful()
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r1 = r6._downloaderReporter
            java.lang.String r2 = java.lang.Boolean.toString(r0)
            java.lang.String r3 = "su"
            r1.add(r3, r2)
            com.mbridge.msdk.foundation.download.DownloadResponse r1 = r6._downloadResponse
            boolean r1 = r1.isCancelled()
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r2 = r6._downloaderReporter
            java.lang.String r3 = java.lang.Boolean.toString(r1)
            java.lang.String r4 = "ca"
            r2.add(r4, r3)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r6._downloadRequest
            long r2 = r2.getTotalBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r4 = r6._downloadRequest
            long r4 = r4.getDownloadedBytes()
            int r2 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r2, r4)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r3 = r6._downloaderReporter
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r4 = "dr"
            r3.add(r4, r2)
            if (r0 != 0) goto L4e
            if (r1 != 0) goto L4e
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r6._downloaderReporter
            com.mbridge.msdk.foundation.download.DownloadResponse r1 = r6._downloadResponse
            java.lang.String r1 = r1.getErrorMessage()
            java.lang.String r2 = "re"
            r0.add(r2, r1)
        L4e:
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r6._downloaderReporter
            com.mbridge.msdk.foundation.download.core.DownloaderReporter r0 = r0.build()
            r0.report()
            return
    }

    private void sendProgress(com.mbridge.msdk.foundation.download.core.DownloadRequest r9, com.mbridge.msdk.foundation.download.DownloadMessage r10, long r11, long r13, int r15) {
            r8 = this;
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r9.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            if (r0 == r1) goto L14
            com.mbridge.msdk.foundation.download.DownloadProgress r0 = new com.mbridge.msdk.foundation.download.DownloadProgress
            r2 = r0
            r3 = r11
            r5 = r13
            r7 = r15
            r2.<init>(r3, r5, r7)
            r9.handlerProcessEvent(r10, r0)
        L14:
            return
    }

    @Override
    public com.mbridge.msdk.foundation.download.DownloadResponse run() {
            r12 = this;
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = new com.mbridge.msdk.foundation.download.DownloadResponse
            r0.<init>()
            r12._downloadResponse = r0
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r12._downloadRequest
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = r0.getStatus()
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            r2 = 1
            if (r0 != r1) goto L1a
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse
            r0.setCancelled(r2)
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse
            return r0
        L1a:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r12._downloadRequest
            long r0 = r0.getTotalBytes()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r12._downloadRequest
            long r3 = r3.getDownloadedBytes()
            int r5 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r0, r3)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r6 = r12._downloaderReporter
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r7 = "dcr"
            r6.add(r7, r5)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r5 = r12._downloaderReporter
            java.lang.String r6 = java.lang.String.valueOf(r3)
            java.lang.String r7 = "ddb"
            r5.add(r7, r6)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r5 = r12._downloaderReporter
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r7 = "dtb"
            r5.add(r7, r6)
            r5 = 0
            int r7 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r7 == 0) goto L73
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 == 0) goto L73
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L73
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r12._downloaderReporter
            java.lang.String r1 = "de"
            java.lang.String r3 = "t=c"
            r0.add(r1, r3)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r0 = r12._downloaderReporter
            com.mbridge.msdk.foundation.download.core.DownloaderReporter r0 = r0.build()
            r0.report()
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse
            r0.setSuccessful(r2)
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse
            return r0
        L73:
            com.mbridge.msdk.foundation.download.DownloadMessage r0 = r12._downloadMessage
            java.lang.String r0 = r0.getSaveFileName()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r12._downloadRequest
            java.lang.String r1 = r1.getCacheDirectoryPath()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r5 = r12._downloadRequest
            java.lang.String r11 = r5.getDownloadId()
            com.mbridge.msdk.foundation.download.DownloadMessage r5 = r12._downloadMessage
            java.lang.String r5 = r5.getDownloadUrl()
            com.mbridge.msdk.foundation.download.core.GlobalComponent r6 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r6 = r6.getOkHttpClient()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.newBuilder()
            com.mbridge.msdk.foundation.download.core.DownloadRequest r7 = r12._downloadRequest
            long r7 = r7.getConnectTimeout()
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.connectTimeout(r7, r9)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r7 = r12._downloadRequest
            long r7 = r7.getReadTimeout()
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.readTimeout(r7, r9)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r7 = r12._downloadRequest
            long r7 = r7.getWriteTimeout()
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.writeTimeout(r7, r9)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r7 = r12._downloadRequest
            long r7 = r7.getTimeout()
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.callTimeout(r7, r9)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r6 = r6.retryOnConnectionFailure(r2)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r6 = r6.build()
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r7 = new com.mbridge.msdk.thrid.okhttp.CacheControl$Builder
            r7.<init>()
            com.mbridge.msdk.thrid.okhttp.CacheControl$Builder r7 = r7.noCache()
            com.mbridge.msdk.thrid.okhttp.CacheControl r7 = r7.build()
            java.util.Locale r8 = java.util.Locale.ENGLISH
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r9 = 0
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r9] = r3
            java.lang.String r3 = "bytes=%d-"
            java.lang.String r2 = java.lang.String.format(r8, r3, r2)
            com.mbridge.msdk.thrid.okhttp.Request$Builder r3 = new com.mbridge.msdk.thrid.okhttp.Request$Builder
            r3.<init>()
            com.mbridge.msdk.thrid.okhttp.Request$Builder r3 = r3.url(r5)
            com.mbridge.msdk.thrid.okhttp.Request$Builder r3 = r3.cacheControl(r7)
            java.lang.String r4 = "Connection"
            java.lang.String r7 = "close"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r3 = r3.addHeader(r4, r7)
            java.lang.String r4 = "Range"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r2 = r3.addHeader(r4, r2)
            java.lang.String r3 = "User-Agent"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r2 = r2.removeHeader(r3)
            java.lang.String r4 = "okhttp/3.12.13/MAL_16.3.67"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r2 = r2.addHeader(r3, r4)
            com.mbridge.msdk.thrid.okhttp.Request r2 = r2.build()
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r3 = r12._downloaderReporter
            com.mbridge.msdk.thrid.okhttp.HttpUrl r4 = r2.url()
            java.lang.String r4 = r4.host()
            java.lang.String r7 = "ht"
            r3.add(r7, r4)
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r3 = r12._downloaderReporter
            java.lang.String r4 = "url"
            r3.add(r4, r5)
            com.mbridge.msdk.thrid.okhttp.Call r2 = r6.newCall(r2)
            r3 = 0
            com.mbridge.msdk.thrid.okhttp.Response r3 = r2.execute()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            boolean r4 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r3)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            if (r4 != 0) goto L1d8
            com.mbridge.msdk.thrid.okhttp.ResponseBody r4 = r3.body()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            boolean r4 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r4)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            if (r4 == 0) goto L149
            goto L1d8
        L149:
            int r10 = r3.code()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            com.mbridge.msdk.foundation.download.core.DownloaderReporter$Builder r4 = r12._downloaderReporter     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r5 = "drc"
            java.lang.String r6 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r4.add(r5, r6)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            boolean r4 = r3.isSuccessful()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            if (r4 != 0) goto L1aa
            com.mbridge.msdk.foundation.download.DownloadResponse r4 = r12._downloadResponse     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.io.IOException r5 = new java.io.IOException     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r6.<init>()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r7 = "responseCode "
            r6.append(r7)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r6.append(r10)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r7 = "\n"
            r6.append(r7)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            com.mbridge.msdk.thrid.okhttp.ResponseBody r7 = r3.body()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r7 = r7.string()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r6.append(r7)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r4.setError(r5)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.io.InputStream r1 = r12._inputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeInputStream(r1)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r1 = r12._outputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeOutputStream(r1)
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponse(r3)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r12._responseBody
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponseBody(r1)
            boolean r1 = r2.isCanceled()
            if (r1 != 0) goto L1a6
            r2.cancel()
        L1a6:
            r12.reportDownloadMessage()
            return r0
        L1aa:
            java.lang.String r4 = "ETag"
            java.lang.String r5 = ""
            java.lang.String r4 = r3.header(r4, r5)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r12._etag = r4     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r5 = r12
            r6 = r0
            r7 = r1
            r8 = r11
            r9 = r3
            com.mbridge.msdk.foundation.download.DownloadResponse r4 = r5.handlerRequestSuccessful(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r12._downloadResponse = r4     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.io.InputStream r0 = r12._inputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeInputStream(r0)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r0 = r12._outputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeOutputStream(r0)
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponse(r3)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r12._responseBody
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponseBody(r0)
            boolean r0 = r2.isCanceled()
            if (r0 != 0) goto L226
            goto L223
        L1d8:
            com.mbridge.msdk.foundation.download.DownloadResponse r4 = r12._downloadResponse     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.io.IOException r5 = new java.io.IOException     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.lang.String r6 = "response is null"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            r4.setError(r5)     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse     // Catch: java.lang.Throwable -> L205 java.lang.Exception -> L207
            java.io.InputStream r1 = r12._inputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeInputStream(r1)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r1 = r12._outputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeOutputStream(r1)
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponse(r3)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r12._responseBody
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponseBody(r1)
            boolean r1 = r2.isCanceled()
            if (r1 != 0) goto L201
            r2.cancel()
        L201:
            r12.reportDownloadMessage()
            return r0
        L205:
            r0 = move-exception
            goto L22c
        L207:
            r4 = move-exception
            r12.handlerException(r0, r1, r11, r4)     // Catch: java.lang.Throwable -> L205
            java.io.InputStream r0 = r12._inputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeInputStream(r0)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r0 = r12._outputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeOutputStream(r0)
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponse(r3)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r12._responseBody
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponseBody(r0)
            boolean r0 = r2.isCanceled()
            if (r0 != 0) goto L226
        L223:
            r2.cancel()
        L226:
            r12.reportDownloadMessage()
            com.mbridge.msdk.foundation.download.DownloadResponse r0 = r12._downloadResponse
            return r0
        L22c:
            java.io.InputStream r1 = r12._inputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeInputStream(r1)
            com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r1 = r12._outputStream
            com.mbridge.msdk.foundation.download.utils.Objects.closeOutputStream(r1)
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponse(r3)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r12._responseBody
            com.mbridge.msdk.foundation.download.utils.Objects.closeResponseBody(r1)
            boolean r1 = r2.isCanceled()
            if (r1 != 0) goto L247
            r2.cancel()
        L247:
            r12.reportDownloadMessage()
            throw r0
    }
}
