package com.ymnsdk.replugin.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ProgressResponseBody extends okhttp3.ResponseBody {
    private okio.BufferedSource bufferedSource;
    private final com.ymnsdk.replugin.download.ProgressResponseListener progressListener;
    private final okhttp3.ResponseBody responseBody;


    public ProgressResponseBody(okhttp3.ResponseBody r1, com.ymnsdk.replugin.download.ProgressResponseListener r2) {
            r0 = this;
            r0.<init>()
            r0.responseBody = r1
            r0.progressListener = r2
            return
    }

    static okhttp3.ResponseBody access$000(com.ymnsdk.replugin.download.ProgressResponseBody r0) {
            okhttp3.ResponseBody r0 = r0.responseBody
            return r0
    }

    static com.ymnsdk.replugin.download.ProgressResponseListener access$100(com.ymnsdk.replugin.download.ProgressResponseBody r0) {
            com.ymnsdk.replugin.download.ProgressResponseListener r0 = r0.progressListener
            return r0
    }

    private okio.Source source(okio.Source r2) {
            r1 = this;
            com.ymnsdk.replugin.download.ProgressResponseBody$1 r0 = new com.ymnsdk.replugin.download.ProgressResponseBody$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public long contentLength() {
            r2 = this;
            okhttp3.ResponseBody r0 = r2.responseBody
            long r0 = r0.contentLength()
            return r0
    }

    @Override
    public okhttp3.MediaType contentType() {
            r1 = this;
            okhttp3.ResponseBody r0 = r1.responseBody
            okhttp3.MediaType r0 = r0.contentType()
            return r0
    }

    @Override
    public okio.BufferedSource source() {
            r1 = this;
            okio.BufferedSource r0 = r1.bufferedSource
            if (r0 != 0) goto L14
            okhttp3.ResponseBody r0 = r1.responseBody
            okio.BufferedSource r0 = r0.source()
            okio.Source r0 = r1.source(r0)
            okio.BufferedSource r0 = okio.Okio.buffer(r0)
            r1.bufferedSource = r0
        L14:
            okio.BufferedSource r0 = r1.bufferedSource
            return r0
    }
}
