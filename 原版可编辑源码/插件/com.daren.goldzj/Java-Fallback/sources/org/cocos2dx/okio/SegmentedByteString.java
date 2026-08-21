package org.cocos2dx.okio;

import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.Arrays;

final class SegmentedByteString extends ByteString {
    final transient int[] directory;
    final transient byte[][] segments;

    SegmentedByteString(Buffer r8, int r9) {
        super(null);
        Util.checkOffsetAndCount(r8.size, 0, r9);
        int r1 = 0;
        Segment r3 = r8.head;
        int r0 = 0;
        int r2 = 0;
    L3:
        if (r0 >= r9) goto L9;
        if (r3.limit == r3.pos) goto L8;
        r0 = r0 + (r3.limit - r3.pos);
        r2 = r2 + 1;
        r3 = r3.next;
        goto L3
    L8:
        throw new AssertionError("s.limit == s.pos");
    L9:
        this.segments = new byte[r2][];
        this.directory = new int[r2 * 2];
        Segment r02 = r8.head;
        int r82 = 0;
    L10:
        if (r1 >= r9) goto L15;
        this.segments[r82] = r02.data;
        r1 = r1 + (r02.limit - r02.pos);
        if (r1 <= r9) goto L14;
        r1 = r9;
    L14:
        int[] r22 = this.directory;
        r22[r82] = r1;
        r22[this.segments.length + r82] = r02.pos;
        r02.shared = true;
        r82 = r82 + 1;
        r02 = r02.next;
        goto L10
    }

    @Override
    public String utf8() {
        return toByteString().utf8();
    }

    @Override
    public String string(Charset r2) {
        return toByteString().string(r2);
    }

    @Override
    public String base64() {
        return toByteString().base64();
    }

    @Override
    public String hex() {
        return toByteString().hex();
    }

    @Override
    public ByteString toAsciiLowercase() {
        return toByteString().toAsciiLowercase();
    }

    @Override
    public ByteString toAsciiUppercase() {
        return toByteString().toAsciiUppercase();
    }

    @Override
    public ByteString md5() {
        return toByteString().md5();
    }

    @Override
    public ByteString sha1() {
        return toByteString().sha1();
    }

    @Override
    public ByteString sha256() {
        return toByteString().sha256();
    }

    @Override
    public ByteString hmacSha1(ByteString r2) {
        return toByteString().hmacSha1(r2);
    }

    @Override
    public ByteString hmacSha256(ByteString r2) {
        return toByteString().hmacSha256(r2);
    }

    @Override
    public String base64Url() {
        return toByteString().base64Url();
    }

    @Override
    public ByteString substring(int r2) {
        return toByteString().substring(r2);
    }

    @Override
    public ByteString substring(int r2, int r3) {
        return toByteString().substring(r2, r3);
    }

    @Override
    public byte getByte(int r8) {
        Util.checkOffsetAndCount(this.directory[this.segments.length - 1], r8, 1);
        int r0 = segment(r8);
        if (r0 != 0) goto L5;
        int r1 = 0;
    L6:
        int[] r2 = this.directory;
        byte[][] r3 = this.segments;
        return r3[r0][(r8 - r1) + r2[r3.length + r0]];
    L5:
        r1 = this.directory[r0 - 1];
        goto L6
    }

    private int segment(int r4) {
        int r42 = Arrays.binarySearch(this.directory, 0, this.segments.length, r4 + 1);
        if (r42 < 0) goto L6;
        return r42;
    L6:
        return ~r42;
    }

    @Override
    public int size() {
        return this.directory[this.segments.length - 1];
    }

    @Override
    public byte[] toByteArray() {
        int[] r0 = this.directory;
        byte[][] r1 = this.segments;
        byte[] r02 = new byte[r0[r1.length - 1]];
        int r12 = r1.length;
        int r2 = 0;
        int r3 = 0;
    L3:
        if (r2 >= r12) goto L5;
        int[] r4 = this.directory;
        int r5 = r4[r12 + r2];
        int r42 = r4[r2];
        System.arraycopy(this.segments[r2], r5, r02, r3, r42 - r3);
        r2 = r2 + 1;
        r3 = r42;
        goto L3
    L5:
        return r02;
    }

    @Override
    public ByteBuffer asByteBuffer() {
        return ByteBuffer.wrap(toByteArray()).asReadOnlyBuffer();
    }

    @Override
    public void write(OutputStream r7) throws IOException {
        if (r7 == null) goto L8;
        int r0 = this.segments.length;
        int r1 = 0;
        int r2 = 0;
    L4:
        if (r1 >= r0) goto L6;
        int[] r3 = this.directory;
        int r4 = r3[r0 + r1];
        int r32 = r3[r1];
        r7.write(this.segments[r1], r4, r32 - r2);
        r1 = r1 + 1;
        r2 = r32;
        goto L4
    L6:
        return;
    L8:
        throw new IllegalArgumentException("out == null");
    }

    @Override
    void write(Buffer r12) {
        int r0 = this.segments.length;
        int r1 = 0;
        int r2 = 0;
    L3:
        if (r1 >= r0) goto L9;
        int[] r3 = this.directory;
        int r7 = r3[r0 + r1];
        int r32 = r3[r1];
        Segment r4 = new Segment(this.segments[r1], r7, (r7 + r32) - r2, true, false);
        if (r12.head != null) goto L7;
        r4.prev = r4;
        r4.next = r4;
        r12.head = r4;
    L8:
        r1 = r1 + 1;
        r2 = r32;
        goto L3
    L7:
        r12.head.prev.push(r4);
        goto L8
    L9:
        r12.size += (long) r2;
    }

    @Override
    public boolean rangeEquals(int r8, ByteString r9, int r10, int r11) {
        if (r8 >= 0) goto L5;
    L18:
        return false;
    L5:
        if (r8 > (size() - r11)) goto L18;
        int r1 = segment(r8);
    L8:
        if (r11 <= 0) goto L16;
        if (r1 != 0) goto L11;
        int r2 = 0;
    L12:
        int r3 = Math.min(r11, ((this.directory[r1] - r2) + r2) - r8);
        int[] r4 = this.directory;
        byte[][] r5 = this.segments;
        if (r9.rangeEquals(r10, r5[r1], (r8 - r2) + r4[r5.length + r1], r3) == false) goto L14;
        r8 = r8 + r3;
        r10 = r10 + r3;
        r11 = r11 - r3;
        r1 = r1 + 1;
        goto L8
    L14:
        return false;
    L11:
        r2 = this.directory[r1 - 1];
        goto L12
    L16:
        return true;
    }

    @Override
    public boolean rangeEquals(int r8, byte[] r9, int r10, int r11) {
        if (r8 >= 0) goto L5;
    L21:
        return false;
    L5:
        if (r8 > (size() - r11)) goto L21;
        if (r10 < 0) goto L21;
        if (r10 > (r9.length - r11)) goto L21;
        int r1 = segment(r8);
    L11:
        if (r11 <= 0) goto L19;
        if (r1 != 0) goto L14;
        int r2 = 0;
    L15:
        int r3 = Math.min(r11, ((this.directory[r1] - r2) + r2) - r8);
        int[] r4 = this.directory;
        byte[][] r5 = this.segments;
        if (Util.arrayRangeEquals(r5[r1], (r8 - r2) + r4[r5.length + r1], r9, r10, r3) == false) goto L17;
        r8 = r8 + r3;
        r10 = r10 + r3;
        r11 = r11 - r3;
        r1 = r1 + 1;
        goto L11
    L17:
        return false;
    L14:
        r2 = this.directory[r1 - 1];
        goto L15
    L19:
        return true;
    }

    @Override
    public int indexOf(byte[] r2, int r3) {
        return toByteString().indexOf(r2, r3);
    }

    @Override
    public int lastIndexOf(byte[] r2, int r3) {
        return toByteString().lastIndexOf(r2, r3);
    }

    private ByteString toByteString() {
        return new ByteString(toByteArray());
    }

    @Override
    byte[] internalArray() {
        return toByteArray();
    }

    @Override
    public boolean equals(Object r5) {
        if (r5 != this) goto L6;
        return true;
    L6:
        if ((r5 instanceof ByteString) == false) goto L12;
        ByteString r52 = (ByteString) r5;
        if (r52.size() != size()) goto L12;
        if (rangeEquals(0, r52, 0, size()) == false) goto L12;
        return true;
    L12:
        return false;
    }

    @Override
    public int hashCode() {
        int r0 = this.hashCode;
        if (r0 == 0) goto L5;
        return r0;
    L5:
        int r02 = this.segments.length;
        int r1 = 0;
        int r2 = 1;
        int r3 = 0;
    L6:
        if (r1 >= r02) goto L11;
        byte[] r4 = this.segments[r1];
        int[] r5 = this.directory;
        int r6 = r5[r02 + r1];
        int r52 = r5[r1];
        int r32 = (r52 - r3) + r6;
    L8:
        if (r6 >= r32) goto L10;
        r2 = (r2 * 31) + r4[r6];
        r6 = r6 + 1;
        goto L8
    L10:
        r1 = r1 + 1;
        r3 = r52;
        goto L6
    L11:
        this.hashCode = r2;
        return r2;
    }

    @Override
    public String toString() {
        return toByteString().toString();
    }

    private Object writeReplace() {
        return toByteString();
    }
}
