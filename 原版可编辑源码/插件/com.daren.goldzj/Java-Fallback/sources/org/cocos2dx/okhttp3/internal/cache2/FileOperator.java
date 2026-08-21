package org.cocos2dx.okhttp3.internal.cache2;

import java.io.IOException;
import java.nio.channels.FileChannel;
import org.cocos2dx.okio.Buffer;

final class FileOperator {
    private final FileChannel fileChannel;

    FileOperator(FileChannel r1) {
        this.fileChannel = r1;
    }

    public void write(long r14, Buffer r16, long r17) throws IOException {
        if (r17 < 0) goto L13;
        if (r17 > r16.size()) goto L13;
        long r11 = r14;
        long r2 = r17;
    L8:
        if (r2 <= 0) goto L11;
        long r5 = this.fileChannel.transferFrom(r16, r11, r2);
        r11 = r11 + r5;
        r2 = r2 - r5;
        goto L8
    L11:
        return;
    L13:
        throw new IndexOutOfBoundsException();
    }

    public void read(long r10, Buffer r12, long r13) throws IOException {
        if (r13 < 0) goto L9;
    L5:
        if (r13 <= 0) goto L7;
        long r2 = this.fileChannel.transferTo(r10, r13, r12);
        r10 = r10 + r2;
        r13 = r13 - r2;
        goto L5
    L7:
        return;
    L9:
        throw new IndexOutOfBoundsException();
    }
}
