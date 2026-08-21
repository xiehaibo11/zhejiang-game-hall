package cz.msebera.android.httpclient.util;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public final class ByteArrayBuffer implements java.io.Serializable {
    private static final long serialVersionUID = 4359112959524048036L;
    private byte[] buffer;
    private int len;

    public ByteArrayBuffer(int r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Buffer capacity"
            cz.msebera.android.httpclient.util.Args.notNegative(r2, r0)
            byte[] r2 = new byte[r2]
            r1.buffer = r2
            return
    }

    private void expand(int r4) {
            r3 = this;
            byte[] r0 = r3.buffer
            int r0 = r0.length
            int r0 = r0 << 1
            int r4 = java.lang.Math.max(r0, r4)
            byte[] r4 = new byte[r4]
            byte[] r0 = r3.buffer
            int r1 = r3.len
            r2 = 0
            java.lang.System.arraycopy(r0, r2, r4, r2, r1)
            r3.buffer = r4
            return
    }

    public void append(int r4) {
            r3 = this;
            int r0 = r3.len
            int r0 = r0 + 1
            byte[] r1 = r3.buffer
            int r1 = r1.length
            if (r0 <= r1) goto Lc
            r3.expand(r0)
        Lc:
            byte[] r1 = r3.buffer
            int r2 = r3.len
            byte r4 = (byte) r4
            r1[r2] = r4
            r3.len = r0
            return
    }

    public void append(cz.msebera.android.httpclient.util.CharArrayBuffer r1, int r2, int r3) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            char[] r1 = r1.buffer()
            r0.append(r1, r2, r3)
            return
    }

    public void append(byte[] r4, int r5, int r6) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            if (r5 < 0) goto L29
            int r0 = r4.length
            if (r5 > r0) goto L29
            if (r6 < 0) goto L29
            int r0 = r5 + r6
            if (r0 < 0) goto L29
            int r1 = r4.length
            if (r0 > r1) goto L29
            if (r6 != 0) goto L14
            return
        L14:
            int r0 = r3.len
            int r0 = r0 + r6
            byte[] r1 = r3.buffer
            int r1 = r1.length
            if (r0 <= r1) goto L1f
            r3.expand(r0)
        L1f:
            byte[] r1 = r3.buffer
            int r2 = r3.len
            java.lang.System.arraycopy(r4, r5, r1, r2, r6)
            r3.len = r0
            return
        L29:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "off: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " len: "
            r1.append(r5)
            r1.append(r6)
            java.lang.String r5 = " b.length: "
            r1.append(r5)
            int r4 = r4.length
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void append(char[] r4, int r5, int r6) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            if (r5 < 0) goto L30
            int r0 = r4.length
            if (r5 > r0) goto L30
            if (r6 < 0) goto L30
            int r0 = r5 + r6
            if (r0 < 0) goto L30
            int r1 = r4.length
            if (r0 > r1) goto L30
            if (r6 != 0) goto L14
            return
        L14:
            int r0 = r3.len
            int r6 = r6 + r0
            byte[] r1 = r3.buffer
            int r1 = r1.length
            if (r6 <= r1) goto L1f
            r3.expand(r6)
        L1f:
            if (r0 >= r6) goto L2d
            byte[] r1 = r3.buffer
            char r2 = r4[r5]
            byte r2 = (byte) r2
            r1[r0] = r2
            int r5 = r5 + 1
            int r0 = r0 + 1
            goto L1f
        L2d:
            r3.len = r6
            return
        L30:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "off: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " len: "
            r1.append(r5)
            r1.append(r6)
            java.lang.String r5 = " b.length: "
            r1.append(r5)
            int r4 = r4.length
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public byte[] buffer() {
            r1 = this;
            byte[] r0 = r1.buffer
            return r0
    }

    public int byteAt(int r2) {
            r1 = this;
            byte[] r0 = r1.buffer
            r2 = r0[r2]
            return r2
    }

    public int capacity() {
            r1 = this;
            byte[] r0 = r1.buffer
            int r0 = r0.length
            return r0
    }

    public void clear() {
            r1 = this;
            r0 = 0
            r1.len = r0
            return
    }

    public void ensureCapacity(int r3) {
            r2 = this;
            if (r3 > 0) goto L3
            return
        L3:
            byte[] r0 = r2.buffer
            int r0 = r0.length
            int r1 = r2.len
            int r0 = r0 - r1
            if (r3 <= r0) goto Lf
            int r1 = r1 + r3
            r2.expand(r1)
        Lf:
            return
    }

    public int indexOf(byte r3) {
            r2 = this;
            int r0 = r2.len
            r1 = 0
            int r3 = r2.indexOf(r3, r1, r0)
            return r3
    }

    public int indexOf(byte r3, int r4, int r5) {
            r2 = this;
            if (r4 >= 0) goto L3
            r4 = 0
        L3:
            int r0 = r2.len
            if (r5 <= r0) goto L8
            r5 = r0
        L8:
            r0 = -1
            if (r4 <= r5) goto Lc
            return r0
        Lc:
            if (r4 >= r5) goto L18
            byte[] r1 = r2.buffer
            r1 = r1[r4]
            if (r1 != r3) goto L15
            return r4
        L15:
            int r4 = r4 + 1
            goto Lc
        L18:
            return r0
    }

    public boolean isEmpty() {
            r1 = this;
            int r0 = r1.len
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isFull() {
            r2 = this;
            int r0 = r2.len
            byte[] r1 = r2.buffer
            int r1 = r1.length
            if (r0 != r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int length() {
            r1 = this;
            int r0 = r1.len
            return r0
    }

    public void setLength(int r4) {
            r3 = this;
            if (r4 < 0) goto La
            byte[] r0 = r3.buffer
            int r0 = r0.length
            if (r4 > r0) goto La
            r3.len = r4
            return
        La:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "len: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " < 0 or > buffer len: "
            r1.append(r4)
            byte[] r4 = r3.buffer
            int r4 = r4.length
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public byte[] toByteArray() {
            r4 = this;
            int r0 = r4.len
            byte[] r1 = new byte[r0]
            if (r0 <= 0) goto Lc
            byte[] r2 = r4.buffer
            r3 = 0
            java.lang.System.arraycopy(r2, r3, r1, r3, r0)
        Lc:
            return r1
    }
}
