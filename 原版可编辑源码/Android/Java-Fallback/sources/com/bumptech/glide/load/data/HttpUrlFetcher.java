package com.bumptech.glide.load.data;

public class HttpUrlFetcher implements com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> {
    private static final com.bumptech.glide.load.data.HttpUrlFetcher.HttpUrlConnectionFactory DEFAULT_CONNECTION_FACTORY = null;
    private static final int MAXIMUM_REDIRECTS = 5;
    private static final java.lang.String TAG = "HttpUrlFetcher";
    private final com.bumptech.glide.load.data.HttpUrlFetcher.HttpUrlConnectionFactory connectionFactory;
    private final com.bumptech.glide.load.model.GlideUrl glideUrl;
    private volatile boolean isCancelled;
    private java.io.InputStream stream;
    private java.net.HttpURLConnection urlConnection;

    static class 1 {
    }

    private static class DefaultHttpUrlConnectionFactory implements com.bumptech.glide.load.data.HttpUrlFetcher.HttpUrlConnectionFactory {
        private DefaultHttpUrlConnectionFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        DefaultHttpUrlConnectionFactory(com.bumptech.glide.load.data.HttpUrlFetcher.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.net.HttpURLConnection build(java.net.URL r1) throws java.io.IOException {
                r0 = this;
                java.net.URLConnection r1 = r1.openConnection()
                java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1
                return r1
        }
    }

    interface HttpUrlConnectionFactory {
        java.net.HttpURLConnection build(java.net.URL r1) throws java.io.IOException;
    }

    static {
            com.bumptech.glide.load.data.HttpUrlFetcher$DefaultHttpUrlConnectionFactory r0 = new com.bumptech.glide.load.data.HttpUrlFetcher$DefaultHttpUrlConnectionFactory
            r1 = 0
            r0.<init>(r1)
            com.bumptech.glide.load.data.HttpUrlFetcher.DEFAULT_CONNECTION_FACTORY = r0
            return
    }

    public HttpUrlFetcher(com.bumptech.glide.load.model.GlideUrl r2) {
            r1 = this;
            com.bumptech.glide.load.data.HttpUrlFetcher$HttpUrlConnectionFactory r0 = com.bumptech.glide.load.data.HttpUrlFetcher.DEFAULT_CONNECTION_FACTORY
            r1.<init>(r2, r0)
            return
    }

    HttpUrlFetcher(com.bumptech.glide.load.model.GlideUrl r1, com.bumptech.glide.load.data.HttpUrlFetcher.HttpUrlConnectionFactory r2) {
            r0 = this;
            r0.<init>()
            r0.glideUrl = r1
            r0.connectionFactory = r2
            return
    }

    private java.io.InputStream getStreamForSuccessfulRequest(java.net.HttpURLConnection r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = r4.getContentEncoding()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1a
            int r0 = r4.getContentLength()
            java.io.InputStream r4 = r4.getInputStream()
            long r0 = (long) r0
            java.io.InputStream r4 = com.bumptech.glide.util.ContentLengthInputStream.obtain(r4, r0)
            r3.stream = r4
            goto L41
        L1a:
            r0 = 3
            java.lang.String r1 = "HttpUrlFetcher"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Got non empty content encoding: "
            r0.append(r2)
            java.lang.String r2 = r4.getContentEncoding()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r1, r0)
        L3b:
            java.io.InputStream r4 = r4.getInputStream()
            r3.stream = r4
        L41:
            java.io.InputStream r4 = r3.stream
            return r4
    }

    private java.io.InputStream loadDataWithRedirects(java.net.URL r4, int r5, java.net.URL r6, java.util.Map<java.lang.String, java.lang.String> r7) throws java.io.IOException {
            r3 = this;
            r0 = 5
            if (r5 >= r0) goto Ld3
            if (r6 == 0) goto L1c
            java.net.URI r0 = r4.toURI()     // Catch: java.net.URISyntaxException -> L1c
            java.net.URI r6 = r6.toURI()     // Catch: java.net.URISyntaxException -> L1c
            boolean r6 = r0.equals(r6)     // Catch: java.net.URISyntaxException -> L1c
            if (r6 != 0) goto L14
            goto L1c
        L14:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.net.URISyntaxException -> L1c
            java.lang.String r0 = "In re-direct loop"
            r6.<init>(r0)     // Catch: java.net.URISyntaxException -> L1c
            throw r6     // Catch: java.net.URISyntaxException -> L1c
        L1c:
            com.bumptech.glide.load.data.HttpUrlFetcher$HttpUrlConnectionFactory r6 = r3.connectionFactory
            java.net.HttpURLConnection r6 = r6.build(r4)
            r3.urlConnection = r6
            java.util.Set r6 = r7.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L2c:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r6.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.net.HttpURLConnection r1 = r3.urlConnection
            java.lang.Object r2 = r0.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r1.addRequestProperty(r2, r0)
            goto L2c
        L4a:
            java.net.HttpURLConnection r6 = r3.urlConnection
            r0 = 2500(0x9c4, float:3.503E-42)
            r6.setConnectTimeout(r0)
            java.net.HttpURLConnection r6 = r3.urlConnection
            r6.setReadTimeout(r0)
            java.net.HttpURLConnection r6 = r3.urlConnection
            r0 = 0
            r6.setUseCaches(r0)
            java.net.HttpURLConnection r6 = r3.urlConnection
            r0 = 1
            r6.setDoInput(r0)
            java.net.HttpURLConnection r6 = r3.urlConnection
            r6.connect()
            boolean r6 = r3.isCancelled
            if (r6 == 0) goto L6d
            r4 = 0
            return r4
        L6d:
            java.net.HttpURLConnection r6 = r3.urlConnection
            int r6 = r6.getResponseCode()
            int r1 = r6 / 100
            r2 = 2
            if (r1 != r2) goto L7f
            java.net.HttpURLConnection r4 = r3.urlConnection
            java.io.InputStream r4 = r3.getStreamForSuccessfulRequest(r4)
            return r4
        L7f:
            r2 = 3
            if (r1 != r2) goto La3
            java.net.HttpURLConnection r6 = r3.urlConnection
            java.lang.String r1 = "Location"
            java.lang.String r6 = r6.getHeaderField(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L9b
            java.net.URL r1 = new java.net.URL
            r1.<init>(r4, r6)
            int r5 = r5 + r0
            java.io.InputStream r4 = r3.loadDataWithRedirects(r1, r5, r4, r7)
            return r4
        L9b:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Received empty or null redirect url"
            r4.<init>(r5)
            throw r4
        La3:
            r4 = -1
            if (r6 != r4) goto Lae
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Unable to retrieve response code from HttpUrlConnection."
            r4.<init>(r5)
            throw r4
        Lae:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "Request failed "
            r5.append(r7)
            r5.append(r6)
            java.lang.String r6 = ": "
            r5.append(r6)
            java.net.HttpURLConnection r6 = r3.urlConnection
            java.lang.String r6 = r6.getResponseMessage()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        Ld3:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Too many (> 5) redirects!"
            r4.<init>(r5)
            goto Ldc
        Ldb:
            throw r4
        Ldc:
            goto Ldb
    }

    @Override
    public void cancel() {
            r1 = this;
            r0 = 1
            r1.isCancelled = r0
            return
    }

    @Override
    public void cleanup() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            if (r0 == 0) goto L9
            r0.close()     // Catch: java.io.IOException -> L8
            goto L9
        L8:
        L9:
            java.net.HttpURLConnection r0 = r1.urlConnection
            if (r0 == 0) goto L10
            r0.disconnect()
        L10:
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            com.bumptech.glide.load.model.GlideUrl r0 = r1.glideUrl
            java.lang.String r0 = r0.getCacheKey()
            return r0
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r4) throws java.lang.Exception {
            r3 = this;
            com.bumptech.glide.load.model.GlideUrl r4 = r3.glideUrl
            java.net.URL r4 = r4.toURL()
            com.bumptech.glide.load.model.GlideUrl r0 = r3.glideUrl
            java.util.Map r0 = r0.getHeaders()
            r1 = 0
            r2 = 0
            java.io.InputStream r4 = r3.loadDataWithRedirects(r4, r1, r2, r0)
            return r4
    }

    @Override
    public java.io.InputStream loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception {
            r0 = this;
            java.io.InputStream r1 = r0.loadData(r1)
            return r1
    }
}
