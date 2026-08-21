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
public class ProgressResponseBody extends ResponseBody {
    private BufferedSource bufferedSource;
    private final ProgressResponseListener progressListener;
    private final ResponseBody responseBody;

    public ProgressResponseBody(ResponseBody responseBody, ProgressResponseListener progressResponseListener) {
        this.responseBody = responseBody;
        this.progressListener = progressResponseListener;
    }

    @Override
    public MediaType get$contentType() {
        return this.responseBody.get$contentType();
    }

    @Override
    public long getContentLength() {
        return this.responseBody.getContentLength();
    }

    @Override
    public BufferedSource getSource() {
        if (this.bufferedSource == null) {
            this.bufferedSource = Okio.buffer(source(this.responseBody.getSource()));
        }
        return this.bufferedSource;
    }

    private Source source(Source source) {
        return new ForwardingSource(source) {
            long totalBytesRead = 0;

            @Override
            public long read(Buffer buffer, long j) throws IOException {
                long j2 = super.read(buffer, j);
                this.totalBytesRead += j2 != -1 ? j2 : 0L;
                ProgressResponseBody.this.progressListener.onResponseProgress(this.totalBytesRead, ProgressResponseBody.this.responseBody.getContentLength(), j2 == -1);
                return j2;
            }
        };
    }
}
