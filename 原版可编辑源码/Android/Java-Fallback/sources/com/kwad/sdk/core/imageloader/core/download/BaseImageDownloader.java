package com.kwad.sdk.core.imageloader.core.download;

public class BaseImageDownloader implements com.kwad.sdk.core.imageloader.core.download.ImageDownloader {
    protected static final java.lang.String ALLOWED_URI_CHARS = "@#&=*+-_.,:!?()/~'%";
    protected static final int BUFFER_SIZE = 32768;
    public static final int DEFAULT_HTTP_CONNECT_TIMEOUT = 5000;
    public static final int DEFAULT_HTTP_READ_TIMEOUT = 20000;
    private static final java.lang.String ERROR_UNSUPPORTED_SCHEME = "UIL doesn't support scheme(protocol) by default [%s]. You should implement this support yourself (BaseImageDownloader.getStreamFromOtherSource(...))";
    protected static final int MAX_REDIRECT_COUNT = 5;
    protected final int connectTimeout;
    protected final android.content.Context context;
    protected final int readTimeout;

    static class 1 {
        static final int[] $SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme = null;

        static {
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r0 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTP     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTPS     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L33
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.CONTENT     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L3e
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ASSETS     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L49
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.DRAWABLE     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L54
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.UNKNOWN     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                return
        }
    }

    public BaseImageDownloader(android.content.Context r3) {
            r2 = this;
            r0 = 5000(0x1388, float:7.006E-42)
            r1 = 20000(0x4e20, float:2.8026E-41)
            r2.<init>(r3, r0, r1)
            return
    }

    public BaseImageDownloader(android.content.Context r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            r0.connectTimeout = r2
            r0.readTimeout = r3
            return
    }

    private java.io.InputStream getVideoThumbnailStream(java.lang.String r4) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 8
            if (r0 < r1) goto L22
            r0 = 2
            android.graphics.Bitmap r4 = android.media.ThumbnailUtils.createVideoThumbnail(r4, r0)
            if (r4 == 0) goto L22
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.PNG
            r2 = 0
            r4.compress(r1, r2, r0)
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream
            byte[] r0 = r0.toByteArray()
            r4.<init>(r0)
            return r4
        L22:
            r4 = 0
            return r4
    }

    private boolean isVideoContentUri(android.net.Uri r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r2 = r0.getType(r2)
            if (r2 == 0) goto L16
            java.lang.String r0 = "video/"
            boolean r2 = r2.startsWith(r0)
            if (r2 == 0) goto L16
            r2 = 1
            return r2
        L16:
            r2 = 0
            return r2
    }

    private boolean isVideoFileUri(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = android.webkit.MimeTypeMap.getFileExtensionFromUrl(r2)
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = r0.getMimeTypeFromExtension(r2)
            if (r2 == 0) goto L18
            java.lang.String r0 = "video/"
            boolean r2 = r2.startsWith(r0)
            if (r2 == 0) goto L18
            r2 = 1
            return r2
        L18:
            r2 = 0
            return r2
    }

    protected java.net.HttpURLConnection createConnection(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            java.lang.String r2 = "@#&=*+-_.,:!?()/~'%"
            java.lang.String r1 = android.net.Uri.encode(r1, r2)
            java.net.URL r2 = new java.net.URL
            r2.<init>(r1)
            java.net.URLConnection r1 = r2.openConnection()
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1
            int r2 = r0.connectTimeout
            r1.setConnectTimeout(r2)
            int r2 = r0.readTimeout
            r1.setReadTimeout(r2)
            return r1
    }

    @Override
    public java.io.InputStream getStream(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            int[] r0 = com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ofUri(r3)
            int r1 = r1.ordinal()
            r0 = r0[r1]
            switch(r0) {
                case 1: goto L28;
                case 2: goto L28;
                case 3: goto L23;
                case 4: goto L1e;
                case 5: goto L19;
                case 6: goto L14;
                default: goto Lf;
            }
        Lf:
            java.io.InputStream r3 = r2.getStreamFromOtherSource(r3, r4)
            return r3
        L14:
            java.io.InputStream r3 = r2.getStreamFromDrawable(r3, r4)
            return r3
        L19:
            java.io.InputStream r3 = r2.getStreamFromAssets(r3, r4)
            return r3
        L1e:
            java.io.InputStream r3 = r2.getStreamFromContent(r3, r4)
            return r3
        L23:
            java.io.InputStream r3 = r2.getStreamFromFile(r3, r4)
            return r3
        L28:
            java.io.InputStream r3 = r2.getStreamFromNetwork(r3, r4)
            return r3
    }

    protected java.io.InputStream getStreamFromAssets(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r2 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ASSETS
            java.lang.String r1 = r2.crop(r1)
            android.content.Context r2 = r0.context
            android.content.res.AssetManager r2 = r2.getAssets()
            java.io.InputStream r1 = r2.open(r1)
            return r1
    }

    protected java.io.InputStream getStreamFromContent(java.lang.String r5, java.lang.Object r6) {
            r4 = this;
            android.content.Context r6 = r4.context
            android.content.ContentResolver r6 = r6.getContentResolver()
            android.net.Uri r5 = android.net.Uri.parse(r5)
            boolean r0 = r4.isVideoContentUri(r5)
            if (r0 == 0) goto L39
            java.lang.String r0 = r5.getLastPathSegment()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            long r0 = r0.longValue()
            r2 = 1
            r3 = 0
            android.graphics.Bitmap r0 = android.provider.MediaStore.Video.Thumbnails.getThumbnail(r6, r0, r2, r3)
            if (r0 == 0) goto L39
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream
            r5.<init>()
            android.graphics.Bitmap$CompressFormat r6 = android.graphics.Bitmap.CompressFormat.PNG
            r1 = 0
            r0.compress(r6, r1, r5)
            java.io.ByteArrayInputStream r6 = new java.io.ByteArrayInputStream
            byte[] r5 = r5.toByteArray()
            r6.<init>(r5)
            return r6
        L39:
            java.io.InputStream r5 = r6.openInputStream(r5)
            return r5
    }

    protected java.io.InputStream getStreamFromDrawable(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r2 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.DRAWABLE
            java.lang.String r1 = r2.crop(r1)
            int r1 = java.lang.Integer.parseInt(r1)
            android.content.Context r2 = r0.context
            android.content.res.Resources r2 = r2.getResources()
            java.io.InputStream r1 = r2.openRawResource(r1)
            return r1
    }

    protected java.io.InputStream getStreamFromFile(java.lang.String r4, java.lang.Object r5) {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r5 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE
            java.lang.String r5 = r5.crop(r4)
            boolean r4 = r3.isVideoFileUri(r4)
            if (r4 == 0) goto L11
            java.io.InputStream r4 = r3.getVideoThumbnailStream(r5)
            return r4
        L11:
            java.io.BufferedInputStream r4 = new java.io.BufferedInputStream
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r5)
            r1 = 32768(0x8000, float:4.5918E-41)
            r4.<init>(r0, r1)
            com.kwad.sdk.core.imageloader.core.assist.ContentLengthInputStream r0 = new com.kwad.sdk.core.imageloader.core.assist.ContentLengthInputStream
            java.io.File r1 = new java.io.File
            r1.<init>(r5)
            long r1 = r1.length()
            int r5 = (int) r1
            r0.<init>(r4, r5)
            return r0
    }

    protected java.io.InputStream getStreamFromNetwork(java.lang.String r4, java.lang.Object r5) {
            r3 = this;
            java.net.HttpURLConnection r4 = r3.createConnection(r4, r5)
            r0 = 0
        L5:
            int r1 = r4.getResponseCode()
            int r1 = r1 / 100
            r2 = 3
            if (r1 != r2) goto L1e
            r1 = 5
            if (r0 >= r1) goto L1e
            java.lang.String r1 = "Location"
            java.lang.String r4 = r4.getHeaderField(r1)
            java.net.HttpURLConnection r4 = r3.createConnection(r4, r5)
            int r0 = r0 + 1
            goto L5
        L1e:
            java.io.InputStream r5 = r4.getInputStream()     // Catch: java.io.IOException -> L55
            boolean r0 = r3.shouldBeProcessed(r4)
            if (r0 == 0) goto L3a
            com.kwad.sdk.core.imageloader.core.assist.ContentLengthInputStream r0 = new com.kwad.sdk.core.imageloader.core.assist.ContentLengthInputStream
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            r2 = 32768(0x8000, float:4.5918E-41)
            r1.<init>(r5, r2)
            int r4 = r4.getContentLength()
            r0.<init>(r1, r4)
            return r0
        L3a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Image request failed with response code "
            r0.<init>(r1)
            int r4 = r4.getResponseCode()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L55:
            r5 = move-exception
            java.io.InputStream r4 = r4.getErrorStream()
            com.kwad.sdk.core.imageloader.utils.IoUtils.readAndCloseStream(r4)
            throw r5
    }

    protected java.io.InputStream getStreamFromOtherSource(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "UIL doesn't support scheme(protocol) by default [%s]. You should implement this support yourself (BaseImageDownloader.getStreamFromOtherSource(...))"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r4.<init>(r3)
            throw r4
    }

    protected boolean shouldBeProcessed(java.net.HttpURLConnection r2) {
            r1 = this;
            int r2 = r2.getResponseCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 != r0) goto La
            r2 = 1
            return r2
        La:
            r2 = 0
            return r2
    }
}
