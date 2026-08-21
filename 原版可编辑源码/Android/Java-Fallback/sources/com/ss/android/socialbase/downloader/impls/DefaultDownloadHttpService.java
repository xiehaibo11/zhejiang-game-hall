package com.ss.android.socialbase.downloader.impls;

public class DefaultDownloadHttpService implements com.ss.android.socialbase.downloader.network.IDownloadHttpService {
    private final com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, okhttp3.OkHttpClient> hostIpClientCache;



    public DefaultDownloadHttpService() {
            r3 = this;
            r3.<init>()
            com.ss.android.socialbase.downloader.utils.LruCache r0 = new com.ss.android.socialbase.downloader.utils.LruCache
            r1 = 4
            r2 = 8
            r0.<init>(r1, r2)
            r3.hostIpClientCache = r0
            return
    }

    private okhttp3.OkHttpClient createSpecialHostIpClient(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = r4.getHost()     // Catch: java.lang.Throwable -> L58
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L5c
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L5c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r0.<init>()     // Catch: java.lang.Throwable -> L58
            r0.append(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = "_"
            r0.append(r1)     // Catch: java.lang.Throwable -> L58
            r0.append(r5)     // Catch: java.lang.Throwable -> L58
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, okhttp3.OkHttpClient> r1 = r3.hostIpClientCache     // Catch: java.lang.Throwable -> L58
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, okhttp3.OkHttpClient> r2 = r3.hostIpClientCache     // Catch: java.lang.Throwable -> L55
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L55
            okhttp3.OkHttpClient r2 = (okhttp3.OkHttpClient) r2     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L37
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L55
            return r2
        L37:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L55
            okhttp3.OkHttpClient$Builder r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.createDownloadClientBuilder()     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService$2 r2 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService$2     // Catch: java.lang.Throwable -> L58
            r2.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L58
            r1.dns(r2)     // Catch: java.lang.Throwable -> L58
            okhttp3.OkHttpClient r4 = r1.build()     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, okhttp3.OkHttpClient> r5 = r3.hostIpClientCache     // Catch: java.lang.Throwable -> L58
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L58
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.String, okhttp3.OkHttpClient> r1 = r3.hostIpClientCache     // Catch: java.lang.Throwable -> L52
            r1.put(r0, r4)     // Catch: java.lang.Throwable -> L52
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L52
            return r4
        L52:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L52
            throw r4     // Catch: java.lang.Throwable -> L58
        L55:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L55
            throw r4     // Catch: java.lang.Throwable -> L58
        L58:
            r4 = move-exception
            r4.printStackTrace()
        L5c:
            okhttp3.OkHttpClient r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadClient()
            return r4
    }

    @Override
    public com.ss.android.socialbase.downloader.network.IDownloadHttpConnection downloadWithConnection(int r8, java.lang.String r9, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r10) throws java.io.IOException {
            r7 = this;
            okhttp3.Request$Builder r8 = new okhttp3.Request$Builder
            r8.<init>()
            okhttp3.Request$Builder r8 = r8.url(r9)
            r0 = 0
            if (r10 == 0) goto L42
            int r1 = r10.size()
            if (r1 <= 0) goto L42
            java.util.Iterator r10 = r10.iterator()
            r1 = r0
        L17:
            boolean r2 = r10.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r10.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r2 = (com.ss.android.socialbase.downloader.model.HttpHeader) r2
            java.lang.String r3 = r2.getName()
            if (r1 != 0) goto L36
            java.lang.String r4 = "ss_d_request_host_ip_114"
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L36
            java.lang.String r1 = r2.getValue()
            goto L17
        L36:
            java.lang.String r2 = r2.getValue()
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getEncodedStr(r2)
            r8.addHeader(r3, r2)
            goto L17
        L42:
            r1 = r0
        L43:
            boolean r10 = android.text.TextUtils.isEmpty(r1)
            if (r10 != 0) goto L4e
            okhttp3.OkHttpClient r9 = r7.createSpecialHostIpClient(r9, r1)
            goto L52
        L4e:
            okhttp3.OkHttpClient r9 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadClient()
        L52:
            if (r9 == 0) goto L99
            okhttp3.Request r8 = r8.build()
            okhttp3.Call r5 = r9.newCall(r8)
            okhttp3.Response r4 = r5.execute()
            if (r4 == 0) goto L91
            okhttp3.ResponseBody r6 = r4.body()
            if (r6 == 0) goto L90
            java.io.InputStream r8 = r6.byteStream()
            java.lang.String r9 = "Content-Encoding"
            java.lang.String r9 = r4.header(r9)
            if (r9 == 0) goto L87
            java.lang.String r10 = "gzip"
            boolean r9 = r10.equalsIgnoreCase(r9)
            if (r9 == 0) goto L87
            boolean r9 = r8 instanceof java.util.zip.GZIPInputStream
            if (r9 != 0) goto L87
            java.util.zip.GZIPInputStream r9 = new java.util.zip.GZIPInputStream
            r9.<init>(r8)
            r3 = r9
            goto L88
        L87:
            r3 = r8
        L88:
            com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService$1 r8 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadHttpService$1
            r1 = r8
            r2 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            return r8
        L90:
            return r0
        L91:
            java.io.IOException r8 = new java.io.IOException
            java.lang.String r9 = "can't get response"
            r8.<init>(r9)
            throw r8
        L99:
            java.io.IOException r8 = new java.io.IOException
            java.lang.String r9 = "can't get httpClient"
            r8.<init>(r9)
            throw r8
    }
}
