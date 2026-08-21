package org.cocos2dx.okio;

import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ByteChannel;
import java.nio.charset.Charset;
import java.security.InvalidKeyException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import javax.annotation.Nullable;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public final class Buffer implements BufferedSource, BufferedSink, Cloneable, ByteChannel {
    private static final byte[] DIGITS = null;
    static final int REPLACEMENT_CHARACTER = 65533;

    @Nullable
    Segment head;
    long size;

    public static final class UnsafeCursor implements Closeable {
        public Buffer buffer;
        public byte[] data;
        public int end;
        public long offset;
        public boolean readWrite;
        private Segment segment;
        public int start;

        public UnsafeCursor() {
            this.offset = -1;
            this.start = -1;
            this.end = -1;
        }

        public final int next() {
            if (this.offset == this.buffer.size) goto L11;
            long r0 = this.offset;
            if (r0 != (-1)) goto L9;
            return seek(0);
        L9:
            return seek(r0 + ((long) (this.end - this.start)));
        L11:
            throw new IllegalStateException();
        }

        public final int seek(long r12) {
            if (r12 < (-1)) goto L38;
            if (r12 > this.buffer.size) goto L38;
            if (r12 != (-1)) goto L8;
        L35:
            this.segment = null;
            this.offset = r12;
            this.data = null;
            this.start = -1;
            this.end = -1;
            return -1;
        L8:
            if (r12 == this.buffer.size) goto L35;
            long r0 = 0;
            long r2 = this.buffer.size;
            Segment r4 = this.buffer.head;
            Segment r5 = this.buffer.head;
            Segment r6 = this.segment;
            if (r6 == null) goto L17;
            long r62 = this.offset - ((long) (this.start - r6.pos));
            if (r62 <= r12) goto L15;
            r5 = this.segment;
            r2 = r62;
            goto L17
        L15:
            r4 = this.segment;
            r0 = r62;
        L17:
            if ((r2 - r12) > (r12 - r0)) goto L19;
            r0 = r2;
            r4 = r5;
        L23:
            if (r0 <= r12) goto L26;
            r4 = r4.prev;
            r0 = r0 - ((long) (r4.limit - r4.pos));
        L26:
            if (this.readWrite == true) goto L28;
        L33:
            this.segment = r4;
            this.offset = r12;
            this.data = r4.data;
            this.start = r4.pos + ((int) (r12 - r0));
            this.end = r4.limit;
            return this.end - this.start;
        L28:
            if (r4.shared == false) goto L33;
            Segment r22 = r4.unsharedCopy();
            if (this.buffer.head != r4) goto L32;
            this.buffer.head = r22;
        L32:
            r4 = r4.push(r22);
            r4.prev.pop();
        L19:
            if (r12 < (((long) (r4.limit - r4.pos)) + r0)) goto L26;
            r0 = r0 + ((long) (r4.limit - r4.pos));
            r4 = r4.next;
        L38:
            throw new ArrayIndexOutOfBoundsException(String.format("offset=%s > size=%s", new Object[]{Long.valueOf(r12), Long.valueOf(this.buffer.size)}));
        }

        public final long resizeBuffer(long r14) {
            Buffer r0 = this.buffer;
            if (r0 == null) goto L32;
            if (this.readWrite == false) goto L30;
            long r02 = r0.size;
            if (r14 <= r02) goto L9;
            if (r14 <= r02) goto L27;
            long r4 = r14 - r02;
            boolean r7 = true;
        L23:
            if (r4 <= 0) goto L27;
            Segment r8 = this.buffer.writableSegment(1);
            int r10 = (int) Math.min(r4, 8192 - r8.limit);
            r8.limit += r10;
            r4 = r4 - ((long) r10);
            if (r7 == false) goto L23;
            this.segment = r8;
            this.offset = r02;
            this.data = r8.data;
            this.start = r8.limit - r10;
            this.end = r8.limit;
            r7 = false;
        L27:
            this.buffer.size = r14;
            return r02;
        L9:
            if (r14 < 0) goto L19;
            long r42 = r02 - r14;
        L12:
            if (r42 <= 0) goto L17;
            Segment r6 = this.buffer.head.prev;
            long r72 = r6.limit - r6.pos;
            if (r72 > r42) goto L16;
            this.buffer.head = r6.pop();
            SegmentPool.recycle(r6);
            r42 = r42 - r72;
            goto L12
        L16:
            r6.limit = (int) (((long) r6.limit) - r42);
        L17:
            this.segment = null;
            this.offset = r14;
            this.data = null;
            this.start = -1;
            this.end = -1;
            goto L27
        L19:
            throw new IllegalArgumentException("newSize < 0: " + r14);
        L30:
            throw new IllegalStateException("resizeBuffer() only permitted for read/write buffers");
        L32:
            throw new IllegalStateException("not attached to a buffer");
        }

        public final long expandBuffer(int r10) {
            if (r10 <= 0) goto L18;
            if (r10 > 8192) goto L16;
            Buffer r1 = this.buffer;
            if (r1 == null) goto L14;
            if (this.readWrite == false) goto L12;
            long r12 = r1.size;
            Segment r102 = this.buffer.writableSegment(r10);
            int r3 = 8192 - r102.limit;
            r102.limit = 8192;
            long r5 = r3;
            this.buffer.size = r12 + r5;
            this.segment = r102;
            this.offset = r12;
            this.data = r102.data;
            this.start = 8192 - r3;
            this.end = 8192;
            return r5;
        L12:
            throw new IllegalStateException("expandBuffer() only permitted for read/write buffers");
        L14:
            throw new IllegalStateException("not attached to a buffer");
        L16:
            throw new IllegalArgumentException("minByteCount > Segment.SIZE: " + r10);
        L18:
            throw new IllegalArgumentException("minByteCount <= 0: " + r10);
        }

        @Override
        public void close() {
            if (this.buffer == null) goto L7;
            this.buffer = null;
            this.segment = null;
            this.offset = -1;
            this.data = null;
            this.start = -1;
            this.end = -1;
            return;
        L7:
            throw new IllegalStateException("not attached to a buffer");
        }
    }

    @Override
    public Buffer buffer() {
        return this;
    }

    @Override
    public void close() {
    }

    @Override
    public BufferedSink emit() {
        return this;
    }

    @Override
    public Buffer emitCompleteSegments() {
        return this;
    }

    @Override
    public void flush() {
    }

    @Override
    public boolean isOpen() {
        return true;
    }

    public Object clone() throws CloneNotSupportedException {
        return clone();
    }

    @Override
    public BufferedSink emitCompleteSegments() throws IOException {
        return emitCompleteSegments();
    }

    @Override
    public BufferedSink write(ByteString r1) throws IOException {
        return write(r1);
    }

    @Override
    public BufferedSink write(byte[] r1) throws IOException {
        return write(r1);
    }

    @Override
    public BufferedSink write(byte[] r1, int r2, int r3) throws IOException {
        return write(r1, r2, r3);
    }

    @Override
    public BufferedSink writeByte(int r1) throws IOException {
        return writeByte(r1);
    }

    @Override
    public BufferedSink writeDecimalLong(long r1) throws IOException {
        return writeDecimalLong(r1);
    }

    @Override
    public BufferedSink writeHexadecimalUnsignedLong(long r1) throws IOException {
        return writeHexadecimalUnsignedLong(r1);
    }

    @Override
    public BufferedSink writeInt(int r1) throws IOException {
        return writeInt(r1);
    }

    @Override
    public BufferedSink writeIntLe(int r1) throws IOException {
        return writeIntLe(r1);
    }

    @Override
    public BufferedSink writeLong(long r1) throws IOException {
        return writeLong(r1);
    }

    @Override
    public BufferedSink writeLongLe(long r1) throws IOException {
        return writeLongLe(r1);
    }

    @Override
    public BufferedSink writeShort(int r1) throws IOException {
        return writeShort(r1);
    }

    @Override
    public BufferedSink writeShortLe(int r1) throws IOException {
        return writeShortLe(r1);
    }

    @Override
    public BufferedSink writeString(String r1, int r2, int r3, Charset r4) throws IOException {
        return writeString(r1, r2, r3, r4);
    }

    @Override
    public BufferedSink writeString(String r1, Charset r2) throws IOException {
        return writeString(r1, r2);
    }

    @Override
    public BufferedSink writeUtf8(String r1) throws IOException {
        return writeUtf8(r1);
    }

    @Override
    public BufferedSink writeUtf8(String r1, int r2, int r3) throws IOException {
        return writeUtf8(r1, r2, r3);
    }

    @Override
    public BufferedSink writeUtf8CodePoint(int r1) throws IOException {
        return writeUtf8CodePoint(r1);
    }

    static {
        DIGITS = new byte[]{48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};
    }

    public Buffer() {
    }

    public final long size() {
        return this.size;
    }

    @Override
    public OutputStream outputStream() {
        return new 1(this);
    }

    @Override
    public boolean exhausted() {
        if (this.size != 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void require(long r4) throws EOFException {
        if (this.size < r4) goto L6;
        return;
    L6:
        throw new EOFException();
    }

    @Override
    public boolean request(long r4) {
        if (this.size < r4) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public InputStream inputStream() {
        return new 2(this);
    }

    public final Buffer copyTo(OutputStream r7) throws IOException {
        return copyTo(r7, 0, this.size);
    }

    public final Buffer copyTo(OutputStream r7, long r8, long r10) throws IOException {
        if (r7 == null) goto L15;
        Util.checkOffsetAndCount(this.size, r8, r10);
        if (r10 != 0) goto L6;
        return this;
    L6:
        Segment r2 = this.head;
    L8:
        if (r8 < (r2.limit - r2.pos)) goto L11;
        r8 = r8 - ((long) (r2.limit - r2.pos));
        r2 = r2.next;
    L11:
        if (r10 <= 0) goto L13;
        int r82 = (int) (((long) r2.pos) + r8);
        int r9 = (int) Math.min(r2.limit - r82, r10);
        r7.write(r2.data, r82, r9);
        r10 = r10 - ((long) r9);
        r2 = r2.next;
        r8 = 0;
        goto L11
    L13:
        return this;
    L15:
        throw new IllegalArgumentException("out == null");
    }

    public final Buffer copyTo(Buffer r7, long r8, long r10) {
        if (r7 == null) goto L19;
        Util.checkOffsetAndCount(this.size, r8, r10);
        if (r10 != 0) goto L6;
        return this;
    L6:
        r7.size += r10;
        Segment r2 = this.head;
    L8:
        if (r8 < (r2.limit - r2.pos)) goto L11;
        r8 = r8 - ((long) (r2.limit - r2.pos));
        r2 = r2.next;
    L11:
        if (r10 <= 0) goto L17;
        Segment r3 = r2.sharedCopy();
        r3.pos = (int) (((long) r3.pos) + r8);
        r3.limit = Math.min(r3.pos + ((int) r10), r3.limit);
        Segment r82 = r7.head;
        if (r82 != null) goto L15;
        r3.prev = r3;
        r3.next = r3;
        r7.head = r3;
    L16:
        r10 = r10 - ((long) (r3.limit - r3.pos));
        r2 = r2.next;
        r8 = 0;
        goto L11
    L15:
        r82.prev.push(r3);
        goto L16
    L17:
        return this;
    L19:
        throw new IllegalArgumentException("out == null");
    }

    public final Buffer writeTo(OutputStream r3) throws IOException {
        return writeTo(r3, this.size);
    }

    public final Buffer writeTo(OutputStream r7, long r8) throws IOException {
        if (r7 == null) goto L11;
        Util.checkOffsetAndCount(this.size, 0, r8);
        Segment r0 = this.head;
    L5:
        if (r8 <= 0) goto L9;
        int r2 = (int) Math.min(r8, r0.limit - r0.pos);
        r7.write(r0.data, r0.pos, r2);
        r0.pos += r2;
        long r1 = r2;
        this.size -= r1;
        r8 = r8 - r1;
        if (r0.pos != r0.limit) goto L5;
        Segment r12 = r0.pop();
        this.head = r12;
        SegmentPool.recycle(r0);
        r0 = r12;
        goto L5
    L9:
        return this;
    L11:
        throw new IllegalArgumentException("out == null");
    }

    public final Buffer readFrom(InputStream r4) throws IOException {
        readFrom(r4, Long.MAX_VALUE, true);
        return this;
    }

    public final Buffer readFrom(InputStream r4, long r5) throws IOException {
        if (r5 < 0) goto L7;
        readFrom(r4, r5, false);
        return this;
    L7:
        throw new IllegalArgumentException("byteCount < 0: " + r5);
    }

    private void readFrom(InputStream r5, long r6, boolean r8) throws IOException {
        if (r5 == null) goto L16;
    L4:
        if (r6 > 0) goto L8;
        if (r8 == true) goto L8;
        return;
    L8:
        Segment r0 = writableSegment(1);
        int r1 = r5.read(r0.data, r0.limit, (int) Math.min(r6, 8192 - r0.limit));
        if (r1 == (-1)) goto L10;
        r0.limit += r1;
        long r02 = r1;
        this.size += r02;
        r6 = r6 - r02;
        goto L4
    L10:
        if (r8 == false) goto L13;
        return;
    L13:
        throw new EOFException();
    L16:
        throw new IllegalArgumentException("in == null");
    }

    public final long completeSegmentByteCount() {
        long r0 = this.size;
        if (r0 != 0) goto L5;
        return 0;
    L5:
        Segment r2 = this.head.prev;
        if (r2.limit < 8192) goto L8;
        return r0;
    L8:
        if (r2.owner == true) goto L10;
        return r0;
    L10:
        return r0 - ((long) (r2.limit - r2.pos));
    }

    @Override
    public byte readByte() {
        if (this.size == 0) goto L10;
        Segment r0 = this.head;
        int r1 = r0.pos;
        int r2 = r0.limit;
        int r4 = r1 + 1;
        byte r12 = r0.data[r1];
        this.size--;
        if (r4 != r2) goto L7;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L8:
        return r12;
    L7:
        r0.pos = r4;
        goto L8
    L10:
        throw new IllegalStateException("size == 0");
    }

    public final byte getByte(long r7) {
        Util.checkOffsetAndCount(this.size, r7, 1);
        long r0 = this.size;
        if ((r0 - r7) <= r7) goto L10;
        Segment r02 = this.head;
    L5:
        long r1 = r02.limit - r02.pos;
        if (r7 < r1) goto L8;
        r7 = r7 - r1;
        r02 = r02.next;
        goto L5
    L8:
        return r02.data[r02.pos + ((int) r7)];
    L10:
        long r72 = r7 - r0;
        Segment r03 = this.head;
    L11:
        r03 = r03.prev;
        r72 = r72 + ((long) (r03.limit - r03.pos));
        if (r72 < 0) goto L11;
        return r03.data[r03.pos + ((int) r72)];
    }

    @Override
    public short readShort() {
        if (this.size < 2) goto L15;
        Segment r0 = this.head;
        int r1 = r0.pos;
        int r4 = r0.limit;
        if ((r4 - r1) < 2) goto L7;
        byte[] r5 = r0.data;
        int r6 = r1 + 1;
        int r7 = r6 + 1;
        int r12 = ((r5[r1] & 255) << 8) | (r5[r6] & 255);
        this.size -= 2;
        if (r7 != r4) goto L11;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L13:
        return (short) r12;
    L11:
        r0.pos = r7;
        goto L13
    L7:
        return (short) (((readByte() & 255) << 8) | (readByte() & 255));
    L15:
        throw new IllegalStateException("size < 2: " + this.size);
    }

    @Override
    public int readInt() {
        if (this.size < 4) goto L14;
        Segment r0 = this.head;
        int r1 = r0.pos;
        int r4 = r0.limit;
        if ((r4 - r1) < 4) goto L7;
        byte[] r5 = r0.data;
        int r6 = r1 + 1;
        int r7 = r6 + 1;
        int r12 = ((r5[r1] & 255) << 24) | ((r5[r6] & 255) << 16);
        int r62 = r7 + 1;
        int r13 = r12 | ((r5[r7] & 255) << 8);
        int r72 = r62 + 1;
        int r14 = r13 | (r5[r62] & 255);
        this.size -= 4;
        if (r72 != r4) goto L11;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L12:
        return r14;
    L11:
        r0.pos = r72;
        goto L12
    L7:
        return ((((readByte() & 255) << 24) | ((readByte() & 255) << 16)) | ((readByte() & 255) << 8)) | (readByte() & 255);
    L14:
        throw new IllegalStateException("size < 4: " + this.size);
    }

    @Override
    public long readLong() {
        if (this.size < 8) goto L14;
        Segment r0 = this.head;
        int r1 = r0.pos;
        int r4 = r0.limit;
        if ((r4 - r1) < 8) goto L7;
        byte[] r5 = r0.data;
        int r8 = r1 + 1;
        long r9 = (((long) r5[r1]) & 255) << 56;
        int r12 = r8 + 1;
        int r10 = r12 + 1;
        long r82 = (r9 | ((((long) r5[r8]) & 255) << 48)) | ((((long) r5[r12]) & 255) << 40);
        int r13 = r10 + 1;
        int r6 = r13 + 1;
        long r83 = (r82 | ((((long) r5[r10]) & 255) << 32)) | ((((long) r5[r13]) & 255) << 24);
        int r14 = r6 + 1;
        long r84 = r83 | ((((long) r5[r6]) & 255) << 16);
        int r62 = r14 + 1;
        long r7 = r84 | ((((long) r5[r14]) & 255) << 8);
        int r15 = r62 + 1;
        long r52 = (((long) r5[r62]) & 255) | r7;
        this.size -= 8;
        if (r15 != r4) goto L11;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L12:
        return r52;
    L11:
        r0.pos = r15;
        goto L12
    L7:
        return ((((long) readInt()) & 4294967295L) << 32) | (4294967295L & ((long) readInt()));
    L14:
        throw new IllegalStateException("size < 8: " + this.size);
    }

    @Override
    public short readShortLe() {
        return Util.reverseBytesShort(readShort());
    }

    @Override
    public int readIntLe() {
        return Util.reverseBytesInt(readInt());
    }

    @Override
    public long readLongLe() {
        return Util.reverseBytesLong(readLong());
    }

    @Override
    public long readDecimalLong() {
        long r3 = 0;
        if (this.size == 0) goto L44;
        int r7 = 0;
        long r8 = -7;
        boolean r5 = false;
        boolean r6 = false;
    L5:
        Segment r10 = this.head;
        byte[] r11 = r10.data;
        int r12 = r10.pos;
        int r13 = r10.limit;
    L6:
        if (r12 >= r13) goto L32;
        byte r15 = r11[r12];
        if (r15 < 48) goto L24;
        if (r15 > 57) goto L24;
        int r14 = 48 - r15;
        if (r3 < (-922337203685477580L)) goto L18;
        if (r3 == (-922337203685477580L)) goto L15;
    L17:
        r3 = (r3 * 10) + ((long) r14);
    L27:
        r12 = r12 + 1;
        r7 = r7 + 1;
        goto L6
    L15:
        if (r14 >= r8) goto L17;
    L18:
        Buffer r1 = new Buffer().writeDecimalLong(r3).writeByte(r15);
        if (r5 == true) goto L22;
        r1.readByte();
    L22:
        throw new NumberFormatException("Number too large: " + r1.readUtf8());
    L24:
        if (r15 != 45) goto L28;
        if (r7 != 0) goto L28;
        r8 = r8 - 1;
        r5 = true;
    L28:
        if (r7 == 0) goto L31;
        r6 = true;
        goto L32
    L31:
        throw new NumberFormatException("Expected leading [0-9] or '-' character but was 0x" + Integer.toHexString(r15));
    L32:
        if (r12 != r13) goto L34;
        this.head = r10.pop();
        SegmentPool.recycle(r10);
    L35:
        if (r6 == true) goto L38;
        if (this.head != null) goto L5;
    L38:
        this.size -= (long) r7;
        if (r5 == false) goto L42;
        return r3;
    L42:
        return -r3;
    L34:
        r10.pos = r12;
        goto L35
    L44:
        throw new IllegalStateException("size == 0");
    }

    @Override
    public long readHexadecimalUnsignedLong() {
        if (this.size == 0) goto L41;
        boolean r0 = false;
        long r4 = 0;
        int r1 = 0;
    L5:
        Segment r6 = this.head;
        byte[] r7 = r6.data;
        int r8 = r6.pos;
        int r9 = r6.limit;
    L6:
        if (r8 >= r9) goto L32;
        byte r10 = r7[r8];
        if (r10 < 48) goto L13;
        if (r10 > 57) goto L13;
        int r11 = r10 - 48;
    L24:
        if (((-1152921504606846976L) & r4) != 0) goto L27;
        r4 = (r4 << 4) | ((long) r11);
        r8 = r8 + 1;
        r1 = r1 + 1;
        goto L6
    L27:
        throw new NumberFormatException("Number too large: " + new Buffer().writeHexadecimalUnsignedLong(r4).writeByte(r10).readUtf8());
    L13:
        if (r10 < 97) goto L19;
        if (r10 > 102) goto L19;
        int r112 = r10 - 97;
    L17:
        r11 = r112 + 10;
    L19:
        if (r10 < 65) goto L28;
        if (r10 > 70) goto L28;
        r112 = r10 - 65;
    L28:
        if (r1 == 0) goto L31;
        r0 = true;
        goto L32
    L31:
        throw new NumberFormatException("Expected leading [0-9a-fA-F] character but was 0x" + Integer.toHexString(r10));
    L32:
        if (r8 != r9) goto L34;
        this.head = r6.pop();
        SegmentPool.recycle(r6);
    L35:
        if (r0 == true) goto L38;
        if (this.head != null) goto L5;
    L38:
        this.size -= (long) r1;
        return r4;
    L34:
        r6.pos = r8;
        goto L35
    L41:
        throw new IllegalStateException("size == 0");
    }

    @Override
    public ByteString readByteString() {
        return new ByteString(readByteArray());
    }

    @Override
    public ByteString readByteString(long r2) throws EOFException {
        return new ByteString(readByteArray(r2));
    }

    @Override
    public int select(Options r4) {
        int r0 = selectPrefix(r4, false);
        if (r0 != (-1)) goto L10;
        return -1;
    L10:
        skip(r4.byteStrings[r0].size());     // Catch: EOFException -> L8
        return r0;
    L9:
        throw new AssertionError();
    }

    int selectPrefix(Options r18, boolean r19) {
        Segment r2 = this.head;
        int r3 = -2;
        if (r2 != null) goto L8;
        if (r19 == false) goto L7;
        return -2;
    L7:
        return r18.indexOf(ByteString.EMPTY);
    L8:
        byte[] r4 = r2.data;
        int r5 = r2.pos;
        int r6 = r2.limit;
        int[] r0 = r18.trie;
        int r9 = r5;
        int r11 = r6;
        int r10 = -1;
        Segment r52 = r2;
        byte[] r62 = r4;
        int r42 = 0;
    L9:
        int r12 = r42 + 1;
        int r43 = r0[r42];
        int r13 = r12 + 1;
        int r122 = r0[r12];
        if (r122 == (-1)) goto L12;
        r10 = r122;
    L12:
        if (r52 == null) goto L27;
        if (r43 >= 0) goto L35;
        int r14 = r13 + (r43 * (-1));
    L17:
        int r44 = r9 + 1;
        int r15 = r13 + 1;
        if ((r62[r9] & 255) != r0[r13]) goto L19;
        if (r15 != r14) goto L22;
        boolean r92 = true;
    L23:
        if (r44 != r11) goto L32;
        Segment r45 = r52.next;
        int r53 = r45.pos;
        r62 = r45.data;
        r11 = r45.limit;
        if (r45 != r2) goto L31;
        if (r92 == false) goto L27;
        r44 = r53;
        r52 = null;
        goto L32
    L31:
        r52 = r45;
        r44 = r53;
    L32:
        if (r92 == true) goto L33;
        r9 = r44;
        r13 = r15;
        goto L17
    L33:
        int r93 = r0[r15];
    L47:
        if (r93 >= 0) goto L48;
        int r32 = -r93;
        r9 = r44;
        r42 = r32;
        r3 = -2;
        goto L9
    L48:
        return r93;
    L22:
        r92 = false;
        goto L23
    L19:
        return r10;
    L35:
        int r142 = r9 + 1;
        int r94 = r62[r9] & 255;
        int r152 = r13 + r43;
    L36:
        if (r13 == r152) goto L37;
        if (r94 == r0[r13]) goto L40;
        r13 = r13 + 1;
        goto L36
    L40:
        r93 = r0[r13 + r43];
        if (r142 != r11) goto L46;
        Segment r33 = r52.next;
        r44 = r33.pos;
        byte[] r54 = r33.data;
        int r63 = r33.limit;
        if (r33 != r2) goto L45;
        r11 = r63;
        r62 = r54;
        r52 = null;
        goto L47
    L45:
        r11 = r63;
        r62 = r54;
        r52 = r33;
        goto L47
    L46:
        r44 = r142;
        goto L47
    L37:
        return r10;
    L27:
        if (r19 == false) goto L29;
        return r3;
    L29:
        return r10;
    }

    @Override
    public void readFully(Buffer r4, long r5) throws EOFException {
        long r0 = this.size;
        if (r0 < r5) goto L6;
        r4.write(this, r5);
        return;
    L6:
        r4.write(this, r0);
        throw new EOFException();
    }

    @Override
    public long readAll(Sink r6) throws IOException {
        long r0 = this.size;
        if (r0 <= 0) goto L5;
        r6.write(this, r0);
    L5:
        return r0;
    }

    @Override
    public String readUtf8() {
        return readString(this.size, Util.UTF_8);
    L4:
        e = move-exception;
        throw new AssertionError(e);
    }

    @Override
    public String readUtf8(long r2) throws EOFException {
        return readString(r2, Util.UTF_8);
    }

    @Override
    public String readString(Charset r3) {
        return readString(this.size, r3);
    L4:
        e = move-exception;
        throw new AssertionError(e);
    }

    @Override
    public String readString(long r7, Charset r9) throws EOFException {
        Util.checkOffsetAndCount(this.size, 0, r7);
        if (r9 == null) goto L21;
        if (r7 > 2147483647L) goto L19;
        if (r7 != 0) goto L10;
        return "";
    L10:
        Segment r0 = this.head;
        if ((((long) r0.pos) + r7) > r0.limit) goto L13;
        String r1 = new String(r0.data, r0.pos, (int) r7, r9);
        r0.pos = (int) (((long) r0.pos) + r7);
        this.size -= r7;
        if (r0.pos != r0.limit) goto L17;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L17:
        return r1;
    L13:
        return new String(readByteArray(r7), r9);
    L19:
        throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + r7);
    L21:
        throw new IllegalArgumentException("charset == null");
    }

    @Override
    @Nullable
    public String readUtf8Line() throws EOFException {
        long r0 = indexOf((byte) 10);
        if (r0 != (-1)) goto L10;
        long r02 = this.size;
        if (r02 != 0) goto L11;
        return null;
    L11:
        return readUtf8(r02);
    L10:
        return readUtf8Line(r0);
    }

    @Override
    public String readUtf8LineStrict() throws EOFException {
        return readUtf8LineStrict(Long.MAX_VALUE);
    }

    @Override
    public String readUtf8LineStrict(long r11) throws EOFException {
        if (r11 < 0) goto L23;
        long r2 = Long.MAX_VALUE;
        if (r11 == Long.MAX_VALUE) goto L8;
        r2 = r11 + 1;
    L8:
        long r4 = indexOf((byte) 10, 0, r2);
        if (r4 == (-1)) goto L13;
        return readUtf8Line(r4);
    L13:
        if (r2 < size()) goto L15;
    L20:
        Buffer r6 = new Buffer();
        copyTo(r6, 0, Math.min(32, size()));
        throw new EOFException("\\n not found: limit=" + Math.min(size(), r11) + " content=" + r6.readByteString().hex() + 8230);
    L15:
        if (getByte(r2 - 1) != 13) goto L20;
        if (getByte(r2) != 10) goto L20;
        return readUtf8Line(r2);
    L23:
        throw new IllegalArgumentException("limit < 0: " + r11);
    }

    String readUtf8Line(long r7) throws EOFException {
        if (r7 <= 0) goto L8;
        long r2 = r7 - 1;
        if (getByte(r2) != 13) goto L8;
        String r72 = readUtf8(r2);
        skip(2);
        return r72;
    L8:
        String r73 = readUtf8(r7);
        skip(1);
        return r73;
    }

    @Override
    public int readUtf8CodePoint() throws EOFException {
        if (this.size == 0) goto L40;
        byte r0 = getByte(0);
        int r2 = 1;
        if ((r0 & 128) != 0) goto L8;
        int r1 = r0 & 127;
        int r5 = 1;
        int r6 = 0;
    L16:
        long r9 = r5;
        if (this.size < r9) goto L36;
    L18:
        if (r2 >= r5) goto L24;
        long r7 = r2;
        byte r02 = getByte(r7);
        if ((r02 & 192) != 128) goto L22;
        r1 = (r1 << 6) | (r02 & 63);
        r2 = r2 + 1;
        goto L18
    L22:
        skip(r7);
        return REPLACEMENT_CHARACTER;
    L24:
        skip(r9);
        if (r1 <= 1114111) goto L28;
        return REPLACEMENT_CHARACTER;
    L28:
        if (r1 >= 55296) goto L30;
    L32:
        if (r1 >= r6) goto L34;
        return REPLACEMENT_CHARACTER;
    L34:
        return r1;
    L30:
        if (r1 > 57343) goto L32;
        return REPLACEMENT_CHARACTER;
    L36:
        throw new EOFException("size < " + r5 + ": " + this.size + " (to read code point prefixed 0x" + Integer.toHexString(r0) + ")");
    L8:
        if ((r0 & 224) != 192) goto L11;
        r1 = r0 & 31;
        r5 = 2;
        r6 = 128;
        goto L16
    L11:
        if ((r0 & 240) != 224) goto L14;
        r1 = r0 & 15;
        r5 = 3;
        r6 = 2048;
        goto L16
    L14:
        if ((r0 & 248) != 240) goto L37;
        r1 = r0 & 7;
        r5 = 4;
        r6 = 65536;
        goto L16
    L37:
        skip(1);
        return REPLACEMENT_CHARACTER;
    L40:
        throw new EOFException();
    }

    @Override
    public byte[] readByteArray() {
        return readByteArray(this.size);
    L4:
        e = move-exception;
        throw new AssertionError(e);
    }

    @Override
    public byte[] readByteArray(long r7) throws EOFException {
        Util.checkOffsetAndCount(this.size, 0, r7);
        if (r7 > 2147483647L) goto L7;
        byte[] r72 = new byte[(int) r7];
        readFully(r72);
        return r72;
    L7:
        throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + r7);
    }

    @Override
    public int read(byte[] r3) {
        return read(r3, 0, r3.length);
    }

    @Override
    public void readFully(byte[] r4) throws EOFException {
        int r0 = 0;
    L4:
        if (r0 >= r4.length) goto L10;
        int r1 = read(r4, r0, r4.length - r0);
        if (r1 == (-1)) goto L9;
        r0 = r0 + r1;
        goto L4
    L9:
        throw new EOFException();
    }

    @Override
    public int read(byte[] r8, int r9, int r10) {
        Util.checkOffsetAndCount(r8.length, r9, r10);
        Segment r0 = this.head;
        if (r0 != null) goto L6;
        return -1;
    L6:
        int r102 = Math.min(r10, r0.limit - r0.pos);
        System.arraycopy(r0.data, r0.pos, r8, r9, r102);
        r0.pos += r102;
        this.size -= (long) r102;
        if (r0.pos != r0.limit) goto L9;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L9:
        return r102;
    }

    @Override
    public int read(ByteBuffer r7) throws IOException {
        Segment r0 = this.head;
        if (r0 != null) goto L6;
        return -1;
    L6:
        int r1 = Math.min(r7.remaining(), r0.limit - r0.pos);
        r7.put(r0.data, r0.pos, r1);
        r0.pos += r1;
        this.size -= (long) r1;
        if (r0.pos != r0.limit) goto L9;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
    L9:
        return r1;
    }

    public final void clear() {
        skip(this.size);     // Catch: EOFException -> L4
        return;
    L4:
        e = move-exception;
        throw new AssertionError(e);
    }

    @Override
    public void skip(long r7) throws EOFException {
    L3:
        if (r7 <= 0) goto L11;
        if (this.head == null) goto L10;
        int r1 = (int) Math.min(r7, r0.limit - this.head.pos);
        long r4 = r1;
        this.size -= r4;
        r7 = r7 - r4;
        this.head.pos += r1;
        if (this.head.pos != this.head.limit) goto L3;
        Segment r0 = this.head;
        this.head = r0.pop();
        SegmentPool.recycle(r0);
        goto L3
    L10:
        throw new EOFException();
    }

    @Override
    public Buffer write(ByteString r2) {
        if (r2 == null) goto L6;
        r2.write(this);
        return this;
    L6:
        throw new IllegalArgumentException("byteString == null");
    }

    @Override
    public Buffer writeUtf8(String r3) {
        return writeUtf8(r3, 0, r3.length());
    }

    @Override
    public Buffer writeUtf8(String r8, int r9, int r10) {
        if (r8 == null) goto L47;
        if (r9 < 0) goto L45;
        if (r10 < r9) goto L43;
        if (r10 > r8.length()) goto L41;
    L7:
        if (r9 >= r10) goto L39;
        char r0 = r8.charAt(r9);
        if (r0 < 128) goto L10;
        if (r0 < 2048) goto L19;
        if (r0 < 55296) goto L38;
        if (r0 > 57343) goto L38;
        int r4 = r9 + 1;
        if (r4 >= r10) goto L29;
        char r5 = r8.charAt(r4);
    L31:
        if (r0 > 56319) goto L37;
        if (r5 < 56320) goto L37;
        if (r5 > 57343) goto L37;
        int r02 = (((r0 & 10239) << 10) | (9215 & r5)) + 65536;
        writeByte((r02 >> 18) | 240);
        writeByte(((r02 >> 12) & 63) | 128);
        writeByte(((r02 >> 6) & 63) | 128);
        writeByte((r02 & 63) | 128);
        r9 = r9 + 2;
    L37:
        writeByte(63);
        r9 = r4;
        goto L7
    L29:
        r5 = 0;
    L38:
        writeByte((r0 >> '\f') | 224);
        writeByte(((r0 >> 6) & 63) | 128);
        writeByte((r0 & '?') | 128);
    L20:
        r9 = r9 + 1;
        goto L7
    L19:
        writeByte((r0 >> 6) | 192);
        writeByte((r0 & '?') | 128);
        goto L20
    L10:
        Segment r2 = writableSegment(1);
        byte[] r3 = r2.data;
        int r42 = r2.limit - r9;
        int r52 = Math.min(r10, 8192 - r42);
        int r6 = r9 + 1;
        r3[r9 + r42] = (byte) r0;
    L11:
        if (r6 >= r52) goto L16;
        char r92 = r8.charAt(r6);
        if (r92 >= 128) goto L16;
        r3[r6 + r42] = (byte) r92;
        r6 = r6 + 1;
    L16:
        int r43 = (r42 + r6) - r2.limit;
        r2.limit += r43;
        this.size += (long) r43;
        r9 = r6;
        goto L7
    L39:
        return this;
    L41:
        throw new IllegalArgumentException("endIndex > string.length: " + r10 + " > " + r8.length());
    L43:
        throw new IllegalArgumentException("endIndex < beginIndex: " + r10 + " < " + r9);
    L45:
        throw new IllegalArgumentException("beginIndex < 0: " + r9);
    L47:
        throw new IllegalArgumentException("string == null");
    }

    @Override
    public Buffer writeUtf8CodePoint(int r4) {
        if (r4 >= 128) goto L6;
        writeByte(r4);
    L19:
        return this;
    L6:
        if (r4 >= 2048) goto L9;
        writeByte((r4 >> 6) | 192);
        writeByte((r4 & 63) | 128);
        goto L19
    L9:
        if (r4 >= 65536) goto L17;
        if (r4 >= 55296) goto L13;
    L15:
        writeByte((r4 >> 12) | 224);
        writeByte(((r4 >> 6) & 63) | 128);
        writeByte((r4 & 63) | 128);
        goto L19
    L13:
        if (r4 > 57343) goto L15;
        writeByte(63);
        goto L19
    L17:
        if (r4 > 1114111) goto L21;
        writeByte((r4 >> 18) | 240);
        writeByte(((r4 >> 12) & 63) | 128);
        writeByte(((r4 >> 6) & 63) | 128);
        writeByte((r4 & 63) | 128);
        goto L19
    L21:
        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(r4));
    }

    @Override
    public Buffer writeString(String r3, Charset r4) {
        return writeString(r3, 0, r3.length(), r4);
    }

    @Override
    public Buffer writeString(String r2, int r3, int r4, Charset r5) {
        if (r2 == null) goto L23;
        if (r3 < 0) goto L21;
        if (r4 < r3) goto L19;
        if (r4 > r2.length()) goto L17;
        if (r5 == null) goto L15;
        if (r5.equals(Util.UTF_8) == true) goto L11;
        byte[] r22 = r2.substring(r3, r4).getBytes(r5);
        return write(r22, 0, r22.length);
    L11:
        return writeUtf8(r2, r3, r4);
    L15:
        throw new IllegalArgumentException("charset == null");
    L17:
        throw new IllegalArgumentException("endIndex > string.length: " + r4 + " > " + r2.length());
    L19:
        throw new IllegalArgumentException("endIndex < beginIndex: " + r4 + " < " + r3);
    L21:
        throw new IllegalAccessError("beginIndex < 0: " + r3);
    L23:
        throw new IllegalArgumentException("string == null");
    }

    @Override
    public Buffer write(byte[] r3) {
        if (r3 == null) goto L6;
        return write(r3, 0, r3.length);
    L6:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public Buffer write(byte[] r10, int r11, int r12) {
        if (r10 == null) goto L9;
        long r7 = r12;
        Util.checkOffsetAndCount(r10.length, r11, r7);
        int r122 = r12 + r11;
    L4:
        if (r11 >= r122) goto L6;
        Segment r0 = writableSegment(1);
        int r1 = Math.min(r122 - r11, 8192 - r0.limit);
        System.arraycopy(r10, r11, r0.data, r0.limit, r1);
        r11 = r11 + r1;
        r0.limit += r1;
        goto L4
    L6:
        this.size += r7;
        return this;
    L9:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public int write(ByteBuffer r7) throws IOException {
        if (r7 == null) goto L9;
        int r0 = r7.remaining();
        int r1 = r0;
    L4:
        if (r1 <= 0) goto L6;
        Segment r2 = writableSegment(1);
        int r3 = Math.min(r1, 8192 - r2.limit);
        r7.get(r2.data, r2.limit, r3);
        r1 = r1 - r3;
        r2.limit += r3;
        goto L4
    L6:
        this.size += (long) r0;
        return r0;
    L9:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public long writeAll(Source r8) throws IOException {
        if (r8 == null) goto L9;
        long r0 = 0;
    L4:
        long r2 = r8.read(this, 8192);
        if (r2 == (-1)) goto L7;
        r0 = r0 + r2;
        goto L4
    L7:
        return r0;
    L9:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public BufferedSink write(Source r6, long r7) throws IOException {
    L3:
        if (r7 <= 0) goto L9;
        long r0 = r6.read(this, r7);
        if (r0 == (-1)) goto L8;
        r7 = r7 - r0;
        goto L3
    L8:
        throw new EOFException();
    L9:
        return this;
    }

    @Override
    public Buffer writeByte(int r5) {
        Segment r0 = writableSegment(1);
        byte[] r1 = r0.data;
        int r2 = r0.limit;
        r0.limit = r2 + 1;
        r1[r2] = (byte) r5;
        this.size++;
        return this;
    }

    @Override
    public Buffer writeShort(int r6) {
        Segment r0 = writableSegment(2);
        byte[] r1 = r0.data;
        int r2 = r0.limit;
        int r3 = r2 + 1;
        r1[r2] = (byte) ((r6 >>> 8) & 255);
        r1[r3] = (byte) (r6 & 255);
        r0.limit = r3 + 1;
        this.size += 2;
        return this;
    }

    @Override
    public Buffer writeShortLe(int r1) {
        return writeShort(Util.reverseBytesShort((short) r1));
    }

    @Override
    public Buffer writeInt(int r6) {
        Segment r0 = writableSegment(4);
        byte[] r1 = r0.data;
        int r2 = r0.limit;
        int r3 = r2 + 1;
        r1[r2] = (byte) ((r6 >>> 24) & 255);
        int r22 = r3 + 1;
        r1[r3] = (byte) ((r6 >>> 16) & 255);
        int r32 = r22 + 1;
        r1[r22] = (byte) ((r6 >>> 8) & 255);
        r1[r32] = (byte) (r6 & 255);
        r0.limit = r32 + 1;
        this.size += 4;
        return this;
    }

    @Override
    public Buffer writeIntLe(int r1) {
        return writeInt(Util.reverseBytesInt(r1));
    }

    @Override
    public Buffer writeLong(long r10) {
        Segment r1 = writableSegment(8);
        byte[] r2 = r1.data;
        int r3 = r1.limit;
        int r4 = r3 + 1;
        r2[r3] = (byte) ((r10 >>> 56) & 255);
        int r32 = r4 + 1;
        r2[r4] = (byte) ((r10 >>> 48) & 255);
        int r42 = r32 + 1;
        r2[r32] = (byte) ((r10 >>> 40) & 255);
        int r33 = r42 + 1;
        r2[r42] = (byte) ((r10 >>> 32) & 255);
        int r43 = r33 + 1;
        r2[r33] = (byte) ((r10 >>> 24) & 255);
        int r34 = r43 + 1;
        r2[r43] = (byte) ((r10 >>> 16) & 255);
        int r44 = r34 + 1;
        r2[r34] = (byte) ((r10 >>> 8) & 255);
        r2[r44] = (byte) (r10 & 255);
        r1.limit = r44 + 1;
        this.size += 8;
        return this;
    }

    @Override
    public Buffer writeLongLe(long r1) {
        return writeLong(Util.reverseBytesLong(r1));
    }

    @Override
    public Buffer writeDecimalLong(long r12) {
        if (r12 == 0) goto L5;
        boolean r3 = false;
        int r4 = 1;
        if (r12 >= 0) goto L14;
        r12 = -r12;
        if (r12 < 0) goto L11;
        r3 = true;
        goto L14
    L11:
        return writeUtf8("-9223372036854775808");
    L14:
        if (r12 >= 100000000) goto L38;
        if (r12 >= 10000) goto L28;
        if (r12 >= 100) goto L24;
        if (r12 < 10) goto L68;
        r4 = 2;
    L68:
        if (r3 == false) goto L70;
        r4 = r4 + 1;
    L70:
        Segment r2 = writableSegment(r4);
        byte[] r5 = r2.data;
        int r6 = r2.limit + r4;
    L72:
        if (r12 == 0) goto L74;
        r6 = r6 - 1;
        r5[r6] = DIGITS[(int) (r12 % 10)];
        r12 = r12 / 10;
        goto L72
    L74:
        if (r3 == false) goto L76;
        r5[r6 - 1] = 45;
    L76:
        r2.limit += r4;
        this.size += (long) r4;
        return this;
    L24:
        if (r12 >= 1000) goto L26;
        r4 = 3;
        goto L68
    L26:
        r4 = 4;
        goto L68
    L28:
        if (r12 >= 1000000) goto L34;
        if (r12 >= 100000) goto L32;
        r4 = 5;
        goto L68
    L32:
        r4 = 6;
        goto L68
    L34:
        if (r12 >= 10000000) goto L36;
        r4 = 7;
        goto L68
    L36:
        r4 = 8;
        goto L68
    L38:
        if (r12 >= 1000000000000L) goto L50;
        if (r12 >= 10000000000L) goto L46;
        if (r12 >= 1000000000) goto L44;
        r4 = 9;
        goto L68
    L44:
        r4 = 10;
        goto L68
    L46:
        if (r12 >= 100000000000L) goto L48;
        r4 = 11;
        goto L68
    L48:
        r4 = 12;
        goto L68
    L50:
        if (r12 >= 1000000000000000L) goto L59;
        if (r12 >= 10000000000000L) goto L55;
        r4 = 13;
        goto L68
    L55:
        if (r12 >= 100000000000000L) goto L57;
        r4 = 14;
        goto L68
    L57:
        r4 = 15;
        goto L68
    L59:
        if (r12 >= 100000000000000000L) goto L65;
        if (r12 >= 10000000000000000L) goto L63;
        r4 = 16;
        goto L68
    L63:
        r4 = 17;
        goto L68
    L65:
        if (r12 >= 1000000000000000000L) goto L67;
        r4 = 18;
        goto L68
    L67:
        r4 = 19;
        goto L68
    L5:
        return writeByte(48);
    }

    @Override
    public Buffer writeHexadecimalUnsignedLong(long r10) {
        if (r10 == 0) goto L5;
        int r0 = (Long.numberOfTrailingZeros(Long.highestOneBit(r10)) / 4) + 1;
        Segment r2 = writableSegment(r0);
        byte[] r3 = r2.data;
        int r4 = (r2.limit + r0) - 1;
        int r5 = r2.limit;
    L7:
        if (r4 < r5) goto L9;
        r3[r4] = DIGITS[(int) (15 & r10)];
        r10 = r10 >>> 4;
        r4 = r4 - 1;
        goto L7
    L9:
        r2.limit += r0;
        this.size += (long) r0;
        return this;
    L5:
        return writeByte(48);
    }

    Segment writableSegment(int r4) {
        if (r4 < 1) goto L17;
        if (r4 > 8192) goto L17;
        Segment r1 = this.head;
        if (r1 != null) goto L10;
        this.head = SegmentPool.take();
        Segment r42 = this.head;
        r42.prev = r42;
        r42.next = r42;
        return r42;
    L10:
        Segment r12 = r1.prev;
        if ((r12.limit + r4) > 8192) goto L15;
        if (r12.owner == false) goto L15;
        return r12;
    L15:
        return r12.push(SegmentPool.take());
    L17:
        throw new IllegalArgumentException();
    }

    @Override
    public void write(Buffer r7, long r8) {
        if (r7 == null) goto L34;
        if (r7 == this) goto L32;
        Util.checkOffsetAndCount(r7.size, 0, r8);
    L6:
        if (r8 <= 0) goto L30;
        if (r8 >= (r7.head.limit - r7.head.pos)) goto L25;
        Segment r0 = this.head;
        if (r0 == null) goto L12;
        Segment r02 = r0.prev;
    L13:
        if (r02 != null) goto L15;
    L24:
        r7.head = r7.head.split((int) r8);
        goto L25
    L15:
        if (r02.owner == false) goto L24;
        long r1 = ((long) r02.limit) + r8;
        if (r02.shared == false) goto L19;
        int r3 = 0;
    L21:
        if ((r1 - ((long) r3)) > 8192) goto L24;
        r7.head.writeTo(r02, (int) r8);
        r7.size -= r8;
        this.size += r8;
        return;
    L19:
        r3 = r02.pos;
        goto L21
    L12:
        r02 = null;
    L25:
        Segment r03 = r7.head;
        long r12 = r03.limit - r03.pos;
        r7.head = r03.pop();
        Segment r32 = this.head;
        if (r32 != null) goto L28;
        this.head = r03;
        Segment r04 = this.head;
        r04.prev = r04;
        r04.next = r04;
    L29:
        r7.size -= r12;
        this.size += r12;
        r8 = r8 - r12;
        goto L6
    L28:
        r32.prev.push(r03).compact();
        goto L29
    L30:
        return;
    L32:
        throw new IllegalArgumentException("source == this");
    L34:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public long read(Buffer r6, long r7) {
        if (r6 == null) goto L17;
        if (r7 < 0) goto L15;
        long r2 = this.size;
        if (r2 != 0) goto L10;
        return -1;
    L10:
        if (r7 <= r2) goto L12;
        r7 = r2;
    L12:
        r6.write(this, r7);
        return r7;
    L15:
        throw new IllegalArgumentException("byteCount < 0: " + r7);
    L17:
        throw new IllegalArgumentException("sink == null");
    }

    @Override
    public long indexOf(byte r7) {
        return indexOf(r7, 0, Long.MAX_VALUE);
    }

    @Override
    public long indexOf(byte r7, long r8) {
        return indexOf(r7, r8, Long.MAX_VALUE);
    }

    @Override
    public long indexOf(byte r16, long r17, long r19) {
        long r1 = 0;
        if (r17 < 0) goto L37;
        if (r19 < r17) goto L37;
        long r3 = this.size;
        if (r19 > r3) goto L11;
        r3 = r19;
    L11:
        if (r17 != r3) goto L13;
        return -1;
    L13:
        Segment r7 = this.head;
        if (r7 != null) goto L16;
        return -1;
    L16:
        long r8 = this.size;
        if ((r8 - r17) < r17) goto L19;
    L21:
        r8 = r1;
        r1 = ((long) (r7.limit - r7.pos)) + r8;
        if (r1 >= r17) goto L24;
        r7 = r7.next;
    L24:
        long r12 = r17;
    L26:
        if (r8 >= r3) goto L35;
        byte[] r10 = r7.data;
        int r122 = (int) Math.min(r7.limit, (((long) r7.pos) + r3) - r8);
        int r13 = (int) ((((long) r7.pos) + r12) - r8);
    L28:
        if (r13 >= r122) goto L34;
        if (r10[r13] == r16) goto L32;
        r13 = r13 + 1;
        goto L28
    L32:
        return ((long) (r13 - r7.pos)) + r8;
    L34:
        r12 = ((long) (r7.limit - r7.pos)) + r8;
        r7 = r7.next;
        r8 = r12;
        goto L26
    L35:
        return -1;
    L19:
        if (r8 <= r17) goto L24;
        r7 = r7.prev;
        r8 = r8 - ((long) (r7.limit - r7.pos));
    L37:
        throw new IllegalArgumentException(String.format("size=%s fromIndex=%s toIndex=%s", new Object[]{Long.valueOf(this.size), Long.valueOf(r17), Long.valueOf(r19)}));
    }

    @Override
    public long indexOf(ByteString r3) throws IOException {
        return indexOf(r3, 0);
    }

    @Override
    public long indexOf(ByteString r19, long r20) throws IOException {
        if (r19.size() == 0) goto L36;
        long r0 = 0;
        if (r20 < 0) goto L34;
        Segment r2 = this.head;
        long r7 = -1;
        if (r2 != null) goto L9;
        return -1;
    L9:
        long r3 = this.size;
        if ((r3 - r20) < r20) goto L12;
    L14:
        r3 = r0;
        r0 = ((long) (r2.limit - r2.pos)) + r3;
        if (r0 >= r20) goto L17;
        r2 = r2.next;
    L17:
        byte r10 = r19.getByte(0);
        int r11 = r19.size();
        long r12 = 1 + (this.size - ((long) r11));
        long r02 = r20;
        Segment r5 = r2;
        long r14 = r3;
    L19:
        if (r14 >= r12) goto L32;
        byte[] r4 = r5.data;
        int r72 = (int) Math.min(r5.limit, (((long) r5.pos) + r12) - r14);
        int r8 = (int) ((((long) r5.pos) + r02) - r14);
    L21:
        if (r8 >= r72) goto L30;
        if (r4[r8] != r10) goto L28;
        byte[] r17 = r4;
        Segment r6 = r5;
        if (rangeEquals(r5, r8 + 1, r19, 1, r11) == false) goto L29;
        return ((long) (r8 - r6.pos)) + r14;
    L29:
        r8 = r8 + 1;
        r5 = r6;
        r4 = r17;
        goto L21
    L28:
        r17 = r4;
        r6 = r5;
        goto L29
    L30:
        Segment r62 = r5;
        r02 = ((long) (r62.limit - r62.pos)) + r14;
        r5 = r62.next;
        r7 = -1;
        r14 = r02;
        goto L19
    L32:
        return r7;
    L12:
        if (r3 <= r20) goto L17;
        r2 = r2.prev;
        r3 = r3 - ((long) (r2.limit - r2.pos));
        goto L12
    L34:
        throw new IllegalArgumentException("fromIndex < 0");
    L36:
        throw new IllegalArgumentException("bytes is empty");
    }

    @Override
    public long indexOfElement(ByteString r3) {
        return indexOfElement(r3, 0);
    }

    @Override
    public long indexOfElement(ByteString r12, long r13) {
        long r0 = 0;
        if (r13 < 0) goto L46;
        Segment r2 = this.head;
        if (r2 != null) goto L7;
        return -1;
    L7:
        long r5 = this.size;
        if ((r5 - r13) < r13) goto L10;
    L12:
        r5 = r0;
        r0 = ((long) (r2.limit - r2.pos)) + r5;
        if (r0 >= r13) goto L16;
        r2 = r2.next;
    L16:
        if (r12.size() != 2) goto L31;
        byte r02 = r12.getByte(0);
        byte r122 = r12.getByte(1);
    L19:
        if (r5 >= this.size) goto L44;
        byte[] r1 = r2.data;
        int r132 = (int) ((((long) r2.pos) + r13) - r5);
        int r14 = r2.limit;
    L21:
        if (r132 >= r14) goto L30;
        byte r7 = r1[r132];
        if (r7 == r02) goto L27;
        if (r7 == r122) goto L27;
        r132 = r132 + 1;
    L27:
        int r123 = r2.pos;
    L29:
        return ((long) (r132 - r123)) + r5;
    L30:
        r13 = ((long) (r2.limit - r2.pos)) + r5;
        r2 = r2.next;
        r5 = r13;
    L44:
        return -1;
    L31:
        byte[] r124 = r12.internalArray();
    L33:
        if (r5 >= this.size) goto L44;
        byte[] r03 = r2.data;
        r132 = (int) ((((long) r2.pos) + r13) - r5);
        int r142 = r2.limit;
    L35:
        if (r132 >= r142) goto L43;
        byte r15 = r03[r132];
        int r8 = r124.length;
        int r9 = 0;
    L37:
        if (r9 >= r8) goto L42;
        if (r15 == r124[r9]) goto L40;
        r9 = r9 + 1;
        goto L37
    L40:
        r123 = r2.pos;
        goto L29
    L42:
        r132 = r132 + 1;
        goto L35
    L43:
        r13 = ((long) (r2.limit - r2.pos)) + r5;
        r2 = r2.next;
        r5 = r13;
    L10:
        if (r5 <= r13) goto L16;
        r2 = r2.prev;
        r5 = r5 - ((long) (r2.limit - r2.pos));
        goto L10
    L46:
        throw new IllegalArgumentException("fromIndex < 0");
    }

    @Override
    public boolean rangeEquals(long r7, ByteString r9) {
        return rangeEquals(r7, r9, 0, r9.size());
    }

    @Override
    public boolean rangeEquals(long r7, ByteString r9, int r10, int r11) {
        if (r7 < 0) goto L19;
        if (r10 < 0) goto L19;
        if (r11 < 0) goto L19;
        if ((this.size - r7) < r11) goto L19;
        if ((r9.size() - r10) < r11) goto L19;
        int r1 = 0;
    L12:
        if (r1 >= r11) goto L17;
        if (getByte(((long) r1) + r7) != r9.getByte(r10 + r1)) goto L15;
        r1 = r1 + 1;
        goto L12
    L15:
        return false;
    L17:
        return true;
    L19:
        return false;
    }

    private boolean rangeEquals(Segment r6, int r7, ByteString r8, int r9, int r10) {
        int r0 = r6.limit;
        byte[] r1 = r6.data;
    L3:
        if (r9 >= r10) goto L11;
        if (r7 != r0) goto L7;
        r6 = r6.next;
        byte[] r72 = r6.data;
        int r02 = r6.pos;
        r1 = r72;
        r7 = r02;
        r0 = r6.limit;
    L7:
        if (r1[r7] != r8.getByte(r9)) goto L8;
        r7 = r7 + 1;
        r9 = r9 + 1;
        goto L3
    L8:
        return false;
    L11:
        return true;
    }

    @Override
    public Timeout timeout() {
        return Timeout.NONE;
    }

    List<Integer> segmentSizes() {
        if (this.head == null) goto L5;
        ArrayList r0 = new ArrayList();
        r0.add(Integer.valueOf(this.head.limit - this.head.pos));
        Segment r1 = this.head;
    L7:
        r1 = r1.next;
        if (r1 == this.head) goto L10;
        r0.add(Integer.valueOf(r1.limit - r1.pos));
        goto L7
    L10:
        return r0;
    L5:
        return Collections.emptyList();
    }

    public final ByteString md5() {
        return digest("MD5");
    }

    public final ByteString sha1() {
        return digest("SHA-1");
    }

    public final ByteString sha256() {
        return digest("SHA-256");
    }

    public final ByteString sha512() {
        return digest("SHA-512");
    }

    private ByteString digest(String r6) {
        MessageDigest r62 = MessageDigest.getInstance(r6);     // Catch: NoSuchAlgorithmException -> L10
        if (this.head == null) goto L8;
        r62.update(this.head.data, this.head.pos, this.head.limit - this.head.pos);     // Catch: NoSuchAlgorithmException -> L10
        Segment r0 = this.head;     // Catch: NoSuchAlgorithmException -> L10
    L5:
        r0 = r0.next;     // Catch: NoSuchAlgorithmException -> L10
        if (r0 == this.head) goto L8;
        r62.update(r0.data, r0.pos, r0.limit - r0.pos);     // Catch: NoSuchAlgorithmException -> L10
    L8:
        return ByteString.of(r62.digest());
    L11:
        throw new AssertionError();
    }

    public final ByteString hmacSha1(ByteString r2) {
        return hmac("HmacSHA1", r2);
    }

    public final ByteString hmacSha256(ByteString r2) {
        return hmac("HmacSHA256", r2);
    }

    public final ByteString hmacSha512(ByteString r2) {
        return hmac("HmacSHA512", r2);
    }

    private ByteString hmac(String r5, ByteString r6) {
        Mac r0 = Mac.getInstance(r5);     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
        r0.init(new SecretKeySpec(r6.toByteArray(), r5));     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
        if (this.head == null) goto L8;
        r0.update(this.head.data, this.head.pos, this.head.limit - this.head.pos);     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
        Segment r52 = this.head;     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
    L5:
        r52 = r52.next;     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
        if (r52 == this.head) goto L8;
        r0.update(r52.data, r52.pos, r52.limit - r52.pos);     // Catch: InvalidKeyException -> L10 NoSuchAlgorithmException -> L13
    L8:
        return ByteString.of(r0.doFinal());
    L10:
        e = move-exception;
        throw new IllegalArgumentException(e);
    L14:
        throw new AssertionError();
    }

    public boolean equals(Object r14) {
        if (this != r14) goto L6;
        return true;
    L6:
        if ((r14 instanceof Buffer) == true) goto L8;
        return false;
    L8:
        Buffer r142 = (Buffer) r14;
        long r3 = this.size;
        if (r3 == r142.size) goto L11;
        return false;
    L11:
        long r5 = 0;
        if (r3 != 0) goto L14;
        return true;
    L14:
        Segment r1 = this.head;
        Segment r143 = r142.head;
        int r32 = r1.pos;
        int r4 = r143.pos;
    L16:
        if (r5 >= this.size) goto L33;
        long r7 = Math.min(r1.limit - r32, r143.limit - r4);
        int r9 = r4;
        int r42 = r32;
        int r33 = 0;
    L19:
        if (r33 >= r7) goto L25;
        int r11 = r42 + 1;
        int r12 = r9 + 1;
        if (r1.data[r42] != r143.data[r9]) goto L22;
        r33 = r33 + 1;
        r42 = r11;
        r9 = r12;
        goto L19
    L22:
        return false;
    L25:
        if (r42 != r1.limit) goto L27;
        r1 = r1.next;
        r32 = r1.pos;
    L29:
        if (r9 != r143.limit) goto L31;
        r143 = r143.next;
        r4 = r143.pos;
    L32:
        r5 = r5 + r7;
        goto L16
    L31:
        r4 = r9;
        goto L32
    L27:
        r32 = r42;
        goto L29
    L33:
        return true;
    }

    public int hashCode() {
        Segment r0 = this.head;
        if (r0 != null) goto L6;
        return 0;
    L6:
        int r1 = 1;
    L7:
        int r2 = r0.pos;
        int r3 = r0.limit;
    L8:
        if (r2 >= r3) goto L10;
        r1 = (r1 * 31) + r0.data[r2];
        r2 = r2 + 1;
        goto L8
    L10:
        r0 = r0.next;
        if (r0 != this.head) goto L7;
        return r1;
    }

    public String toString() {
        return snapshot().toString();
    }

    public Buffer clone() {
        Buffer r0 = new Buffer();
        if (this.size != 0) goto L5;
        return r0;
    L5:
        r0.head = this.head.sharedCopy();
        Segment r1 = r0.head;
        r1.prev = r1;
        r1.next = r1;
        Segment r12 = this.head;
    L6:
        r12 = r12.next;
        if (r12 == this.head) goto L9;
        r0.head.prev.push(r12.sharedCopy());
        goto L6
    L9:
        r0.size = this.size;
        return r0;
    }

    public final ByteString snapshot() {
        long r0 = this.size;
        if (r0 > 2147483647L) goto L7;
        return snapshot((int) r0);
    L7:
        throw new IllegalArgumentException("size > Integer.MAX_VALUE: " + this.size);
    }

    public final ByteString snapshot(int r2) {
        if (r2 != 0) goto L6;
        return ByteString.EMPTY;
    L6:
        return new SegmentedByteString(this, r2);
    }

    public final UnsafeCursor readUnsafe() {
        return readUnsafe(new UnsafeCursor());
    }

    public final UnsafeCursor readUnsafe(UnsafeCursor r2) {
        if (r2.buffer != null) goto L7;
        r2.buffer = this;
        r2.readWrite = false;
        return r2;
    L7:
        throw new IllegalStateException("already attached to a buffer");
    }

    public final UnsafeCursor readAndWriteUnsafe() {
        return readAndWriteUnsafe(new UnsafeCursor());
    }

    public final UnsafeCursor readAndWriteUnsafe(UnsafeCursor r2) {
        if (r2.buffer != null) goto L7;
        r2.buffer = this;
        r2.readWrite = true;
        return r2;
    L7:
        throw new IllegalStateException("already attached to a buffer");
    }
}
