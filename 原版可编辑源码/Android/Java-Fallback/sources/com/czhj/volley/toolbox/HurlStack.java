package com.czhj.volley.toolbox;

public class HurlStack extends com.czhj.volley.toolbox.BaseHttpStack {
    private static final int a = 100;
    private final com.czhj.volley.toolbox.HurlStack.UrlRewriter b;
    private final javax.net.ssl.SSLSocketFactory c;

    static class UrlConnectionInputStream extends java.io.FilterInputStream {
        private final java.net.HttpURLConnection a;

        UrlConnectionInputStream(java.net.HttpURLConnection r2) {
                r1 = this;
                java.io.InputStream r0 = com.czhj.volley.toolbox.HurlStack.a(r2)
                r1.<init>(r0)
                r1.a = r2
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                super.close()
                java.net.HttpURLConnection r0 = r1.a
                r0.disconnect()
                return
        }
    }

    public interface UrlRewriter {
        java.lang.String rewriteUrl(java.lang.String r1);
    }

    public HurlStack() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public HurlStack(com.czhj.volley.toolbox.HurlStack.UrlRewriter r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public HurlStack(com.czhj.volley.toolbox.HurlStack.UrlRewriter r1, javax.net.ssl.SSLSocketFactory r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    static java.io.InputStream a(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = b(r0)
            return r0
    }

    private java.net.HttpURLConnection a(java.net.URL r2, com.czhj.volley.Request<?> r3) throws java.io.IOException {
            r1 = this;
            java.net.HttpURLConnection r2 = r1.createConnection(r2)
            int r0 = r3.getTimeoutMs()
            int r3 = r3.getConnectTimeoutMs()
            r2.setConnectTimeout(r3)
            r2.setReadTimeout(r0)
            r3 = 0
            r2.setUseCaches(r3)
            r3 = 1
            r2.setDoInput(r3)
            return r2
    }

    static java.util.List<com.czhj.volley.Header> a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r6) {
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
            com.czhj.volley.Header r4 = new com.czhj.volley.Header
            java.lang.Object r5 = r1.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.<init>(r5, r3)
            r0.add(r4)
            goto L2d
        L48:
            return r0
    }

    static void a(java.net.HttpURLConnection r2, com.czhj.volley.Request<?> r3) throws java.io.IOException, com.czhj.volley.AuthFailureError {
            int r0 = r3.getMethod()
            java.lang.String r1 = "POST"
            switch(r0) {
                case -1: goto L33;
                case 0: goto L2d;
                case 1: goto L26;
                case 2: goto L20;
                case 3: goto L1d;
                case 4: goto L1a;
                case 5: goto L17;
                case 6: goto L14;
                case 7: goto L11;
                default: goto L9;
            }
        L9:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Unknown method type."
            r2.<init>(r3)
            throw r2
        L11:
            java.lang.String r0 = "PATCH"
            goto L22
        L14:
            java.lang.String r3 = "TRACE"
            goto L2f
        L17:
            java.lang.String r3 = "OPTIONS"
            goto L2f
        L1a:
            java.lang.String r3 = "HEAD"
            goto L2f
        L1d:
            java.lang.String r3 = "DELETE"
            goto L2f
        L20:
            java.lang.String r0 = "PUT"
        L22:
            r2.setRequestMethod(r0)
            goto L29
        L26:
            r2.setRequestMethod(r1)
        L29:
            b(r2, r3)
            goto L3f
        L2d:
            java.lang.String r3 = "GET"
        L2f:
            r2.setRequestMethod(r3)
            goto L3f
        L33:
            byte[] r0 = r3.getBody()
            if (r0 == 0) goto L3f
            r2.setRequestMethod(r1)
            a(r2, r3, r0)
        L3f:
            return
    }

    private static void a(java.net.HttpURLConnection r1, com.czhj.volley.Request<?> r2, byte[] r3) throws java.io.IOException {
            r0 = 1
            r1.setDoOutput(r0)
            java.lang.String r2 = r2.getBodyContentType()
            java.lang.String r0 = "Content-Type"
            r1.setRequestProperty(r0, r2)
            java.io.DataOutputStream r2 = new java.io.DataOutputStream
            java.io.OutputStream r1 = r1.getOutputStream()
            r2.<init>(r1)
            r2.write(r3)
            r2.close()
            return
    }

    private static boolean a(int r1, int r2) {
            r0 = 4
            if (r1 == r0) goto L15
            r1 = 100
            if (r1 > r2) goto Lb
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 < r1) goto L15
        Lb:
            r1 = 204(0xcc, float:2.86E-43)
            if (r2 == r1) goto L15
            r1 = 304(0x130, float:4.26E-43)
            if (r2 == r1) goto L15
            r1 = 1
            goto L16
        L15:
            r1 = 0
        L16:
            return r1
    }

    private static java.io.InputStream b(java.net.HttpURLConnection r0) {
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L5
            goto L9
        L5:
            java.io.InputStream r0 = r0.getErrorStream()
        L9:
            return r0
    }

    private static void b(java.net.HttpURLConnection r1, com.czhj.volley.Request<?> r2) throws java.io.IOException, com.czhj.volley.AuthFailureError {
            byte[] r0 = r2.getBody()
            if (r0 == 0) goto L9
            a(r1, r2, r0)
        L9:
            return
    }

    protected java.net.HttpURLConnection createConnection(java.net.URL r2) throws java.io.IOException {
            r1 = this;
            java.net.URLConnection r2 = r2.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            boolean r0 = java.net.HttpURLConnection.getFollowRedirects()
            r2.setInstanceFollowRedirects(r0)
            return r2
    }

    @Override
    public com.czhj.volley.toolbox.HttpResponse executeRequest(com.czhj.volley.Request<?> r6, java.util.Map<java.lang.String, java.lang.String> r7) throws java.io.IOException, com.czhj.volley.AuthFailureError {
            r5 = this;
            java.lang.String r0 = r6.getUrl()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r1.putAll(r7)
            java.util.Map r7 = r6.getHeaders()
            r1.putAll(r7)
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r7 = r5.b
            if (r7 == 0) goto L36
            java.lang.String r7 = r7.rewriteUrl(r0)
            if (r7 == 0) goto L1f
            r0 = r7
            goto L36
        L1f:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "URL blocked by rewriter: "
            r7.append(r1)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L36:
            java.net.URL r7 = new java.net.URL
            r7.<init>(r0)
            java.net.HttpURLConnection r7 = r5.a(r7, r6)
            r0 = 0
            java.util.Set r2 = r1.keySet()     // Catch: java.lang.Throwable -> La3
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> La3
        L48:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> La3
            if (r3 == 0) goto L5e
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> La3
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Throwable -> La3
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> La3
            r7.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> La3
            goto L48
        L5e:
            a(r7, r6)     // Catch: java.lang.Throwable -> La3
            int r1 = r7.getResponseCode()     // Catch: java.lang.Throwable -> La3
            r2 = -1
            if (r1 == r2) goto L9b
            int r6 = r6.getMethod()     // Catch: java.lang.Throwable -> La3
            boolean r6 = a(r6, r1)     // Catch: java.lang.Throwable -> La3
            if (r6 != 0) goto L83
            com.czhj.volley.toolbox.HttpResponse r6 = new com.czhj.volley.toolbox.HttpResponse     // Catch: java.lang.Throwable -> La3
            java.util.Map r2 = r7.getHeaderFields()     // Catch: java.lang.Throwable -> La3
            java.util.List r2 = a(r2)     // Catch: java.lang.Throwable -> La3
            r6.<init>(r1, r2)     // Catch: java.lang.Throwable -> La3
            r7.disconnect()
            return r6
        L83:
            r0 = 1
            com.czhj.volley.toolbox.HttpResponse r6 = new com.czhj.volley.toolbox.HttpResponse     // Catch: java.lang.Throwable -> La3
            java.util.Map r2 = r7.getHeaderFields()     // Catch: java.lang.Throwable -> La3
            java.util.List r2 = a(r2)     // Catch: java.lang.Throwable -> La3
            int r3 = r7.getContentLength()     // Catch: java.lang.Throwable -> La3
            com.czhj.volley.toolbox.HurlStack$UrlConnectionInputStream r4 = new com.czhj.volley.toolbox.HurlStack$UrlConnectionInputStream     // Catch: java.lang.Throwable -> La3
            r4.<init>(r7)     // Catch: java.lang.Throwable -> La3
            r6.<init>(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> La3
            return r6
        L9b:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Throwable -> La3
            java.lang.String r1 = "Could not retrieve response code from HttpUrlConnection."
            r6.<init>(r1)     // Catch: java.lang.Throwable -> La3
            throw r6     // Catch: java.lang.Throwable -> La3
        La3:
            r6 = move-exception
            if (r0 != 0) goto La9
            r7.disconnect()
        La9:
            throw r6
    }
}
