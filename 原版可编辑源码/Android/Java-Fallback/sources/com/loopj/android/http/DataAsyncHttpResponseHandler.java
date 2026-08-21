package com.loopj.android.http;

public abstract class DataAsyncHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "DataAsyncHttpRH";
    protected static final int PROGRESS_DATA_MESSAGE = 7;

    public DataAsyncHttpResponseHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] copyOfRange(byte[] r2, int r3, int r4) throws java.lang.ArrayIndexOutOfBoundsException, java.lang.IllegalArgumentException, java.lang.NullPointerException {
            if (r3 > r4) goto L1a
            int r0 = r2.length
            if (r3 < 0) goto L14
            if (r3 > r0) goto L14
            int r4 = r4 - r3
            int r0 = r0 - r3
            int r0 = java.lang.Math.min(r4, r0)
            byte[] r4 = new byte[r4]
            r1 = 0
            java.lang.System.arraycopy(r2, r3, r4, r1, r0)
            return r4
        L14:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>()
            throw r2
        L1a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    @Override
    byte[] getResponseData(cz.msebera.android.httpclient.HttpEntity r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L66
            java.io.InputStream r0 = r7.getContent()
            if (r0 == 0) goto L66
            long r1 = r7.getContentLength()
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 > 0) goto L5e
            r3 = 0
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 >= 0) goto L1b
            r1 = 4096(0x1000, double:2.0237E-320)
        L1b:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r7 = new cz.msebera.android.httpclient.util.ByteArrayBuffer     // Catch: java.lang.OutOfMemoryError -> L53
            int r3 = (int) r1     // Catch: java.lang.OutOfMemoryError -> L53
            r7.<init>(r3)     // Catch: java.lang.OutOfMemoryError -> L53
            r3 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L4e
        L25:
            int r4 = r0.read(r3)     // Catch: java.lang.Throwable -> L4e
            r5 = -1
            if (r4 == r5) goto L46
            java.lang.Thread r5 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L4e
            boolean r5 = r5.isInterrupted()     // Catch: java.lang.Throwable -> L4e
            if (r5 != 0) goto L46
            r5 = 0
            r7.append(r3, r5, r4)     // Catch: java.lang.Throwable -> L4e
            byte[] r4 = copyOfRange(r3, r5, r4)     // Catch: java.lang.Throwable -> L4e
            r6.sendProgressDataMessage(r4)     // Catch: java.lang.Throwable -> L4e
            long r4 = (long) r5     // Catch: java.lang.Throwable -> L4e
            r6.sendProgressMessage(r4, r1)     // Catch: java.lang.Throwable -> L4e
            goto L25
        L46:
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)     // Catch: java.lang.OutOfMemoryError -> L53
            byte[] r7 = r7.toByteArray()     // Catch: java.lang.OutOfMemoryError -> L53
            goto L67
        L4e:
            r7 = move-exception
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)     // Catch: java.lang.OutOfMemoryError -> L53
            throw r7     // Catch: java.lang.OutOfMemoryError -> L53
        L53:
            java.lang.System.gc()
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r0 = "File too large to fit into available memory"
            r7.<init>(r0)
            throw r7
        L5e:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "HTTP entity too large to be buffered in memory"
            r7.<init>(r0)
            throw r7
        L66:
            r7 = 0
        L67:
            return r7
    }

    @Override
    protected void handleMessage(android.os.Message r4) {
            r3 = this;
            super.handleMessage(r4)
            int r0 = r4.what
            r1 = 7
            if (r0 == r1) goto L9
            goto L32
        L9:
            java.lang.Object r4 = r4.obj
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            java.lang.String r0 = "DataAsyncHttpRH"
            if (r4 == 0) goto L2b
            int r1 = r4.length
            r2 = 1
            if (r1 < r2) goto L2b
            r1 = 0
            r4 = r4[r1]     // Catch: java.lang.Throwable -> L22
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Throwable -> L22
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Throwable -> L22
            r3.onProgressData(r4)     // Catch: java.lang.Throwable -> L22
            goto L32
        L22:
            r4 = move-exception
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "custom onProgressData contains an error"
            r1.e(r0, r2, r4)
            goto L32
        L2b:
            com.loopj.android.http.LogInterface r4 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "PROGRESS_DATA_MESSAGE didn't got enough params"
            r4.e(r0, r1)
        L32:
            return
    }

    public void onProgressData(byte[] r3) {
            r2 = this;
            com.loopj.android.http.LogInterface r3 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r0 = "DataAsyncHttpRH"
            java.lang.String r1 = "onProgressData(byte[]) was not overriden, but callback was received"
            r3.d(r0, r1)
            return
    }

    public final void sendProgressDataMessage(byte[] r3) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 7
            android.os.Message r3 = r2.obtainMessage(r3, r0)
            r2.sendMessage(r3)
            return
    }
}
