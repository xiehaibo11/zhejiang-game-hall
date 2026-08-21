package okhttp3.internal.http2;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/http2/StreamResetException;", "Ljava/io/IOException;", "errorCode", "Lokhttp3/internal/http2/ErrorCode;", "(Lokhttp3/internal/http2/ErrorCode;)V", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class StreamResetException extends java.io.IOException {
    public final okhttp3.internal.http2.ErrorCode errorCode;

    public StreamResetException(okhttp3.internal.http2.ErrorCode r2) {
            r1 = this;
            java.lang.String r0 = "errorCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "stream was reset: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r2)
            r1.<init>(r0)
            r1.errorCode = r2
            return
    }
}
