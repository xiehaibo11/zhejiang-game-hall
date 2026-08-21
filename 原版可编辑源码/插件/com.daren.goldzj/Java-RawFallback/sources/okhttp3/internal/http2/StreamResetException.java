package okhttp3.internal.http2;

public final class StreamResetException extends java.io.IOException {
    public final okhttp3.internal.http2.ErrorCode errorCode;

    public StreamResetException(okhttp3.internal.http2.ErrorCode r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "stream was reset: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            r2.errorCode = r3
            return
    }
}
