package com.ss.android.socialbase.downloader.model;

public class HttpResponse {
    public final com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection connection;
    private long contentLength;
    public final int responseCode;
    private long totalLength;
    public final java.lang.String url;

    public HttpResponse(java.lang.String r1, com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r2) throws java.io.IOException {
            r0 = this;
            r0.<init>()
            r0.url = r1
            int r1 = r2.getResponseCode()
            r0.responseCode = r1
            r0.connection = r2
            return
    }

    public boolean acceptPartial() {
            r3 = this;
            int r0 = r3.responseCode
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r1 = r3.connection
            java.lang.String r2 = "Accept-Ranges"
            java.lang.String r1 = r1.getResponseHeaderField(r2)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.canAcceptPartial(r0, r1)
            return r0
    }

    public java.lang.String getCacheControl() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "Cache-Control"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getRespHeadFieldIgnoreCase(r0, r1)
            return r0
    }

    public long getContentLength() {
            r4 = this;
            long r0 = r4.contentLength
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L10
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r4.connection
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getContentLength(r0)
            r4.contentLength = r0
        L10:
            long r0 = r4.contentLength
            return r0
    }

    public java.lang.String getContentRange() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "Content-Range"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getRespHeadFieldIgnoreCase(r0, r1)
            return r0
    }

    public java.lang.String getContentType() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "Content-Type"
            java.lang.String r0 = r0.getResponseHeaderField(r1)
            return r0
    }

    public java.lang.String getEtag() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "Etag"
            java.lang.String r0 = r0.getResponseHeaderField(r1)
            return r0
    }

    public java.lang.String getLastModified() {
            r2 = this;
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "last-modified"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getRespHeadFieldIgnoreCase(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L16
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            java.lang.String r1 = "Last-Modified"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getRespHeadFieldIgnoreCase(r0, r1)
        L16:
            return r0
    }

    public long getMaxAge() {
            r2 = this;
            java.lang.String r0 = r2.getCacheControl()
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parserMaxAge(r0)
            return r0
    }

    public long getTotalLength() {
            r4 = this;
            long r0 = r4.totalLength
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L23
            boolean r0 = r4.isChunked()
            if (r0 != 0) goto L1f
            java.lang.String r0 = r4.getContentRange()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L23
            long r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parseContentRangeOfInstanceLength(r0)
            r4.totalLength = r0
            goto L23
        L1f:
            r0 = -1
            r4.totalLength = r0
        L23:
            long r0 = r4.totalLength
            return r0
    }

    public boolean isChunked() {
            r2 = this;
            r0 = 8
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r0 = r2.connection
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isChunkedTask(r0)
            return r0
        Lf:
            long r0 = r2.getContentLength()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isChunkedTask(r0)
            return r0
    }

    public boolean isResponseDataFromBegin() {
            r1 = this;
            int r0 = r1.responseCode
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isResponseDataFromBegin(r0)
            return r0
    }
}
