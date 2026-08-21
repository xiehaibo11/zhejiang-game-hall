package com.bianfeng.netlibsdk;

public class HurlStack implements com.bianfeng.netlibsdk.HttpStack {
    private static final int HTTP_CONTINUE = 100;
    private final javax.net.ssl.SSLSocketFactory mSslSocketFactory;

    static class UrlConnectionInputStream extends java.io.FilterInputStream {
        private final java.net.HttpURLConnection mConnection;

        UrlConnectionInputStream(java.net.HttpURLConnection r2) {
                r1 = this;
                java.io.InputStream r0 = com.bianfeng.netlibsdk.HurlStack.access$000(r2)
                r1.<init>(r0)
                r1.mConnection = r2
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                super.close()
                java.net.HttpURLConnection r0 = r1.mConnection
                r0.disconnect()
                return
        }
    }

    public HurlStack() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public HurlStack(javax.net.ssl.SSLSocketFactory r1) {
            r0 = this;
            r0.<init>()
            r0.mSslSocketFactory = r1
            return
    }

    static java.io.InputStream access$000(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = inputStreamFromConnection(r0)
            return r0
    }

    private void addBody(java.net.HttpURLConnection r3, com.bianfeng.netlibsdk.Request<?> r4, byte[] r5) throws java.io.IOException {
            r2 = this;
            r0 = 1
            r3.setDoOutput(r0)
            java.io.DataOutputStream r0 = new java.io.DataOutputStream
            int r1 = r5.length
            java.io.OutputStream r3 = r2.createOutputStream(r4, r3, r1)
            r0.<init>(r3)
            r0.write(r5)
            r0.close()
            return
    }

    private void addBodyIfExists(java.net.HttpURLConnection r2, com.bianfeng.netlibsdk.Request<?> r3) throws java.io.IOException {
            r1 = this;
            byte[] r0 = r3.getBody()
            if (r0 == 0) goto L9
            r1.addBody(r2, r3, r0)
        L9:
            return
    }

    static java.util.List<com.bianfeng.netlibsdk.Header> convertHeaders(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.size()
            r0.<init>(r1)
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L11:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L48
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            if (r2 == 0) goto L11
            java.lang.Object r2 = r1.getValue()
            java.util.List r2 = (java.util.List) r2
            java.util.Iterator r2 = r2.iterator()
        L2d:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L11
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            com.bianfeng.netlibsdk.Header r4 = new com.bianfeng.netlibsdk.Header
            java.lang.Object r5 = r1.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.<init>(r5, r3)
            r0.add(r4)
            goto L2d
        L48:
            return r0
    }

    private static boolean hasResponseBody(int r0, int r1) {
            r0 = 100
            if (r0 > r1) goto L8
            r0 = 200(0xc8, float:2.8E-43)
            if (r1 < r0) goto L12
        L8:
            r0 = 204(0xcc, float:2.86E-43)
            if (r1 == r0) goto L12
            r0 = 304(0x130, float:4.26E-43)
            if (r1 == r0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    private static java.io.InputStream inputStreamFromConnection(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L5
            goto L9
        L5:
            java.io.InputStream r0 = r0.getErrorStream()
        L9:
            return r0
    }

    private java.net.HttpURLConnection openConnection(java.net.URL r2, com.bianfeng.netlibsdk.Request<?> r3) throws java.io.IOException {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.createConnection(r2)
            int r3 = r3.getTimeoutMs()
            r0.setConnectTimeout(r3)
            r0.setReadTimeout(r3)
            r3 = 0
            r0.setUseCaches(r3)
            r3 = 1
            r0.setDoInput(r3)
            java.lang.String r2 = r2.getProtocol()
            java.lang.String r3 = "https"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L2c
            javax.net.ssl.SSLSocketFactory r2 = r1.mSslSocketFactory
            if (r2 == 0) goto L2c
            r3 = r0
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            r3.setSSLSocketFactory(r2)
        L2c:
            return r0
    }

    protected java.net.HttpURLConnection createConnection(java.net.URL r2) throws java.io.IOException {
            r1 = this;
            java.net.URLConnection r2 = r2.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            boolean r0 = java.net.HttpURLConnection.getFollowRedirects()
            r2.setInstanceFollowRedirects(r0)
            return r2
    }

    protected java.io.InputStream createInputStream(com.bianfeng.netlibsdk.Request<?> r1, java.net.HttpURLConnection r2) {
            r0 = this;
            com.bianfeng.netlibsdk.HurlStack$UrlConnectionInputStream r1 = new com.bianfeng.netlibsdk.HurlStack$UrlConnectionInputStream
            r1.<init>(r2)
            return r1
    }

    protected java.io.OutputStream createOutputStream(com.bianfeng.netlibsdk.Request<?> r1, java.net.HttpURLConnection r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.OutputStream r1 = r2.getOutputStream()
            return r1
    }

    @Override
    public com.bianfeng.netlibsdk.HttpResponse executeRequest(com.bianfeng.netlibsdk.Request<?> r7) throws java.io.IOException {
            r6 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r1 = r7.getHeaders()
            r0.putAll(r1)
            java.lang.String r1 = r7.getUrl()
            r2 = 0
            r3 = 0
            java.net.URL r4 = new java.net.URL     // Catch: java.lang.Throwable -> L85
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L85
            java.net.HttpURLConnection r3 = r6.openConnection(r4, r7)     // Catch: java.lang.Throwable -> L85
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L85
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L85
        L23:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L85
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L85
            java.lang.Object r4 = r1.getKey()     // Catch: java.lang.Throwable -> L85
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L85
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L85
            r3.setRequestProperty(r4, r1)     // Catch: java.lang.Throwable -> L85
            goto L23
        L3f:
            r6.setConnectionParametersForRequest(r3, r7)     // Catch: java.lang.Throwable -> L85
            int r0 = r3.getResponseCode()     // Catch: java.lang.Throwable -> L85
            r1 = -1
            if (r0 == r1) goto L7d
            int r1 = r7.getMethod()     // Catch: java.lang.Throwable -> L85
            boolean r1 = hasResponseBody(r1, r0)     // Catch: java.lang.Throwable -> L85
            if (r1 != 0) goto L66
            com.bianfeng.netlibsdk.HttpResponse r7 = new com.bianfeng.netlibsdk.HttpResponse     // Catch: java.lang.Throwable -> L85
            java.util.Map r1 = r3.getHeaderFields()     // Catch: java.lang.Throwable -> L85
            java.util.List r1 = convertHeaders(r1)     // Catch: java.lang.Throwable -> L85
            r7.<init>(r0, r1)     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L65
            r3.disconnect()     // Catch: java.lang.Exception -> L65
        L65:
            return r7
        L66:
            r2 = 1
            com.bianfeng.netlibsdk.HttpResponse r1 = new com.bianfeng.netlibsdk.HttpResponse     // Catch: java.lang.Throwable -> L85
            java.util.Map r4 = r3.getHeaderFields()     // Catch: java.lang.Throwable -> L85
            java.util.List r4 = convertHeaders(r4)     // Catch: java.lang.Throwable -> L85
            int r5 = r3.getContentLength()     // Catch: java.lang.Throwable -> L85
            java.io.InputStream r7 = r6.createInputStream(r7, r3)     // Catch: java.lang.Throwable -> L85
            r1.<init>(r0, r4, r5, r7)     // Catch: java.lang.Throwable -> L85
            return r1
        L7d:
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = "Could not retrieve response code from HttpUrlConnection."
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L85
            throw r7     // Catch: java.lang.Throwable -> L85
        L85:
            r7 = move-exception
            if (r2 != 0) goto L8d
            if (r3 == 0) goto L8d
            r3.disconnect()     // Catch: java.lang.Exception -> L8d
        L8d:
            throw r7
    }

    void setConnectionParametersForRequest(java.net.HttpURLConnection r3, com.bianfeng.netlibsdk.Request<?> r4) throws java.io.IOException {
            r2 = this;
            int r0 = r4.getMethod()
            if (r0 == 0) goto L1a
            r1 = 1
            if (r0 != r1) goto L12
            java.lang.String r0 = "POST"
            r3.setRequestMethod(r0)
            r2.addBodyIfExists(r3, r4)
            goto L1f
        L12:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Unknown method type."
            r3.<init>(r4)
            throw r3
        L1a:
            java.lang.String r4 = "GET"
            r3.setRequestMethod(r4)
        L1f:
            return
    }
}
