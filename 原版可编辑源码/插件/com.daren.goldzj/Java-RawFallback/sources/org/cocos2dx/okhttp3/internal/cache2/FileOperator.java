package org.cocos2dx.okhttp3.internal.cache2;

final class FileOperator {
    private final java.nio.channels.FileChannel fileChannel;

    FileOperator(java.nio.channels.FileChannel r1) {
            r0 = this;
            r0.<init>()
            r0.fileChannel = r1
            return
    }

    public void read(long r10, org.cocos2dx.okio.Buffer r12, long r13) throws java.io.IOException {
            r9 = this;
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto L17
        L6:
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 <= 0) goto L16
            java.nio.channels.FileChannel r3 = r9.fileChannel
            r4 = r10
            r6 = r13
            r8 = r12
            long r2 = r3.transferTo(r4, r6, r8)
            long r10 = r10 + r2
            long r13 = r13 - r2
            goto L6
        L16:
            return
        L17:
            java.lang.IndexOutOfBoundsException r10 = new java.lang.IndexOutOfBoundsException
            r10.<init>()
            throw r10
    }

    public void write(long r14, org.cocos2dx.okio.Buffer r16, long r17) throws java.io.IOException {
            r13 = this;
            r0 = 0
            int r2 = (r17 > r0 ? 1 : (r17 == r0 ? 0 : -1))
            if (r2 < 0) goto L25
            long r2 = r16.size()
            int r4 = (r17 > r2 ? 1 : (r17 == r2 ? 0 : -1))
            if (r4 > 0) goto L25
            r11 = r14
            r2 = r17
        L11:
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 <= 0) goto L23
            r4 = r13
            java.nio.channels.FileChannel r5 = r4.fileChannel
            r6 = r16
            r7 = r11
            r9 = r2
            long r5 = r5.transferFrom(r6, r7, r9)
            long r11 = r11 + r5
            long r2 = r2 - r5
            goto L11
        L23:
            r4 = r13
            return
        L25:
            r4 = r13
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            r0.<init>()
            throw r0
    }
}
