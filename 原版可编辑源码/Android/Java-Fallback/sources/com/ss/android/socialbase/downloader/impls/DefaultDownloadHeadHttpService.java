package com.ss.android.socialbase.downloader.impls;

public class DefaultDownloadHeadHttpService implements com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService {


    public DefaultDownloadHeadHttpService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection downloadWithConnection(java.lang.String r4, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r5) throws java.io.IOException {
            r3 = this;
            okhttp3.OkHttpClient r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadClient()
            if (r0 == 0) goto L62
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder
            r1.<init>()
            okhttp3.Request$Builder r4 = r1.url(r4)
            okhttp3.Request$Builder r4 = r4.head()
            if (r5 == 0) goto L3b
            int r1 = r5.size()
            if (r1 <= 0) goto L3b
            java.util.Iterator r5 = r5.iterator()
        L1f:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r5.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = (com.ss.android.socialbase.downloader.model.HttpHeader) r1
            java.lang.String r2 = r1.getName()
            java.lang.String r1 = r1.getValue()
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getEncodedStr(r1)
            r4.addHeader(r2, r1)
            goto L1f
        L3b:
            okhttp3.Request r4 = r4.build()
            okhttp3.Call r4 = r0.newCall(r4)
            okhttp3.Response r5 = r4.execute()
            if (r5 == 0) goto L5a
            r0 = 2097152(0x200000, float:2.938736E-39)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            if (r0 == 0) goto L54
            r5.close()
        L54:
            com.ss.android.socialbase.downloader.impls.DefaultDownloadHeadHttpService$1 r0 = new com.ss.android.socialbase.downloader.impls.DefaultDownloadHeadHttpService$1
            r0.<init>(r3, r5, r4)
            return r0
        L5a:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "can't get response"
            r4.<init>(r5)
            throw r4
        L62:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "can't get httpClient"
            r4.<init>(r5)
            throw r4
    }
}
