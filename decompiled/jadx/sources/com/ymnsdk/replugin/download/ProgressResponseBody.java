package com.ymnsdk.replugin.download;

import java.io.IOException;
import okhttp3.MediaType;
import okhttp3.ResponseBody;
import okio.Buffer;
import okio.BufferedSource;
import okio.ForwardingSource;
import okio.Okio;
import okio.Source;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ProgressResponseBody extends ResponseBody {
    private BufferedSource bufferedSource;
    private final ProgressResponseListener progressListener;
    private final ResponseBody responseBody;

    public ProgressResponseBody(ResponseBody responseBody, ProgressResponseListener progressResponseListener) {
        this.responseBody = responseBody;
        this.progressListener = progressResponseListener;
    }

    @Override // okhttp3.ResponseBody
    /* JADX INFO: renamed from: contentType */
    public MediaType get$contentType() {
        return this.responseBody.get$contentType();
    }

    @Override // okhttp3.ResponseBody
    /* JADX INFO: renamed from: contentLength */
    public long getContentLength() {
        return this.responseBody.getContentLength();
    }

    @Override // okhttp3.ResponseBody
    /* JADX INFO: renamed from: source */
    public BufferedSource getSource() {
        if (this.bufferedSource == null) {
            this.bufferedSource = Okio.buffer(source(this.responseBody.getSource()));
        }
        return this.bufferedSource;
    }

    private Source source(Source source) {
        return new ForwardingSource(source) { // from class: com.ymnsdk.replugin.download.ProgressResponseBody.1
            long totalBytesRead = 0;

            @Override // okio.ForwardingSource, okio.Source
            public long read(Buffer buffer, long j) throws IOException {
                long j2 = super.read(buffer, j);
                this.totalBytesRead += j2 != -1 ? j2 : 0L;
                ProgressResponseBody.this.progressListener.onResponseProgress(this.totalBytesRead, ProgressResponseBody.this.responseBody.getContentLength(), j2 == -1);
                return j2;
            }
        };
    }
}
