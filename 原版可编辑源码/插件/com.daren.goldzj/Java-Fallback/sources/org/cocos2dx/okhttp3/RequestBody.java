package org.cocos2dx.okhttp3;

import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import javax.annotation.Nullable;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okio.BufferedSink;
import org.cocos2dx.okio.ByteString;

public abstract class RequestBody {
    public long contentLength() throws IOException {
        return -1;
    }

    @Nullable
    public abstract MediaType contentType();

    public abstract void writeTo(BufferedSink r1) throws IOException;

    public RequestBody() {
    }

    public static RequestBody create(@Nullable MediaType r2, String r3) {
        Charset r0 = Util.UTF_8;
        if (r2 == null) goto L8;
        r0 = r2.charset();
        if (r0 != null) goto L8;
        r0 = Util.UTF_8;
        r2 = MediaType.parse(r2 + "; charset=utf-8");
    L8:
        return create(r2, r3.getBytes(r0));
    }

    public static RequestBody create(@Nullable final MediaType r1, final ByteString r2) {
        return new 1(r1, r2);
    }

    public static RequestBody create(@Nullable MediaType r2, byte[] r3) {
        return create(r2, r3, 0, r3.length);
    }

    public static RequestBody create(@Nullable final MediaType r7, final byte[] r8, final int r9, final int r10) {
        if (r8 == null) goto L6;
        Util.checkOffsetAndCount(r8.length, r9, r10);
        return new 2(r7, r10, r8, r9);
    L6:
        throw new NullPointerException("content == null");
    }

    public static RequestBody create(@Nullable final MediaType r1, final File r2) {
        if (r2 == null) goto L6;
        return new 3(r1, r2);
    L6:
        throw new NullPointerException("file == null");
    }
}
