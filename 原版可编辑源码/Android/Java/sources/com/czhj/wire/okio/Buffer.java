package com.czhj.wire.okio;

import com.heytap.mcssdk.constant.a;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.sigmob.sdk.archives.tar.e;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import okhttp3.internal.connection.RealConnection;
import okio.internal._BufferKt;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

public final class Buffer implements BufferedSink, BufferedSource, Cloneable {
    static final int a = 65533;
    private static final byte[] d = {e.H, e.I, e.J, e.K, e.L, e.M, e.N, e.O, 56, 57, 97, 98, 99, 100, 101, 102};
    Segment b;
    long c;

    private ByteString a(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(str);
            messageDigest.update(this.b.c, this.b.d, this.b.e - this.b.d);
            Segment segment = this.b;
            while (true) {
                segment = segment.h;
                if (segment == this.b) {
                    return ByteString.of(messageDigest.digest());
                }
                messageDigest.update(segment.c, segment.d, segment.e - segment.d);
            }
        } catch (NoSuchAlgorithmException unused) {
            throw new AssertionError();
        }
    }

    private void a(InputStream inputStream, long j, boolean z) throws IOException {
        if (inputStream == null) {
            throw new IllegalArgumentException("in == null");
        }
        while (true) {
            if (j <= 0 && !z) {
                return;
            }
            Segment segmentA = a(1);
            int i = inputStream.read(segmentA.c, segmentA.e, (int) Math.min(j, 8192 - segmentA.e));
            if (i == -1) {
                if (!z) {
                    throw new EOFException();
                }
                return;
            } else {
                segmentA.e += i;
                long j2 = i;
                this.c += j2;
                j -= j2;
            }
        }
    }

    private boolean a(Segment segment, int i, ByteString byteString, int i2, int i3) {
        int i4 = segment.e;
        byte[] bArr = segment.c;
        while (i2 < i3) {
            if (i == i4) {
                segment = segment.h;
                byte[] bArr2 = segment.c;
                bArr = bArr2;
                i = segment.d;
                i4 = segment.e;
            }
            if (bArr[i] != byteString.getByte(i2)) {
                return false;
            }
            i++;
            i2++;
        }
        return true;
    }

    int a(Options options) {
        Segment segment = this.b;
        ByteString[] byteStringArr = options.a;
        int length = byteStringArr.length;
        for (int i = 0; i < length; i++) {
            ByteString byteString = byteStringArr[i];
            int iMin = (int) Math.min(this.c, byteString.size());
            if (iMin == 0 || a(segment, segment.d, byteString, 0, iMin)) {
                return i;
            }
        }
        return -1;
    }

    Segment a(int i) {
        if (i < 1 || i > 8192) {
            throw new IllegalArgumentException();
        }
        Segment segment = this.b;
        if (segment != null) {
            Segment segment2 = segment.i;
            return (segment2.e + i > 8192 || !segment2.g) ? segment2.push(SegmentPool.a()) : segment2;
        }
        Segment segmentA = SegmentPool.a();
        this.b = segmentA;
        segmentA.i = segmentA;
        segmentA.h = segmentA;
        return segmentA;
    }

    String a(long j) throws EOFException {
        if (j > 0) {
            long j2 = j - 1;
            if (getByte(j2) == 13) {
                String utf8 = readUtf8(j2);
                skip(2L);
                return utf8;
            }
        }
        String utf82 = readUtf8(j);
        skip(1L);
        return utf82;
    }

    List<Integer> a() {
        if (this.b == null) {
            return Collections.emptyList();
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(Integer.valueOf(this.b.e - this.b.d));
        Segment segment = this.b;
        while (true) {
            segment = segment.h;
            if (segment == this.b) {
                return arrayList;
            }
            arrayList.add(Integer.valueOf(segment.e - segment.d));
        }
    }

    boolean a(long j, ByteString byteString) {
        int size = byteString.size();
        if (this.c - j < size) {
            return false;
        }
        for (int i = 0; i < size; i++) {
            if (getByte(((long) i) + j) != byteString.getByte(i)) {
                return false;
            }
        }
        return true;
    }

    @Override
    public Buffer buffer() {
        return this;
    }

    public void clear() {
        try {
            skip(this.c);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    public Buffer clone() {
        Buffer buffer = new Buffer();
        if (this.c == 0) {
            return buffer;
        }
        Segment segment = new Segment(this.b);
        buffer.b = segment;
        segment.i = segment;
        segment.h = segment;
        Segment segment2 = this.b;
        while (true) {
            segment2 = segment2.h;
            if (segment2 == this.b) {
                buffer.c = this.c;
                return buffer;
            }
            buffer.b.i.push(new Segment(segment2));
        }
    }

    @Override
    public void close() {
    }

    public long completeSegmentByteCount() {
        long j = this.c;
        if (j == 0) {
            return 0L;
        }
        Segment segment = this.b.i;
        return (segment.e >= 8192 || !segment.g) ? j : j - ((long) (segment.e - segment.d));
    }

    public Buffer copyTo(Buffer buffer, long j, long j2) {
        if (buffer == null) {
            throw new IllegalArgumentException("out == null");
        }
        Util.checkOffsetAndCount(this.c, j, j2);
        if (j2 == 0) {
            return this;
        }
        buffer.c += j2;
        Segment segment = this.b;
        while (j >= segment.e - segment.d) {
            j -= (long) (segment.e - segment.d);
            segment = segment.h;
        }
        while (j2 > 0) {
            Segment segment2 = new Segment(segment);
            segment2.d = (int) (((long) segment2.d) + j);
            segment2.e = Math.min(segment2.d + ((int) j2), segment2.e);
            Segment segment3 = buffer.b;
            if (segment3 == null) {
                segment2.i = segment2;
                segment2.h = segment2;
                buffer.b = segment2;
            } else {
                segment3.i.push(segment2);
            }
            j2 -= (long) (segment2.e - segment2.d);
            segment = segment.h;
            j = 0;
        }
        return this;
    }

    public Buffer copyTo(OutputStream outputStream) throws IOException {
        return copyTo(outputStream, 0L, this.c);
    }

    public Buffer copyTo(OutputStream outputStream, long j, long j2) throws IOException {
        if (outputStream == null) {
            throw new IllegalArgumentException("out == null");
        }
        Util.checkOffsetAndCount(this.c, j, j2);
        if (j2 == 0) {
            return this;
        }
        Segment segment = this.b;
        while (j >= segment.e - segment.d) {
            j -= (long) (segment.e - segment.d);
            segment = segment.h;
        }
        while (j2 > 0) {
            int i = (int) (((long) segment.d) + j);
            int iMin = (int) Math.min(segment.e - i, j2);
            outputStream.write(segment.c, i, iMin);
            j2 -= (long) iMin;
            segment = segment.h;
            j = 0;
        }
        return this;
    }

    @Override
    public BufferedSink emit() {
        return this;
    }

    @Override
    public Buffer emitCompleteSegments() {
        return this;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Buffer)) {
            return false;
        }
        Buffer buffer = (Buffer) obj;
        long j = this.c;
        if (j != buffer.c) {
            return false;
        }
        long j2 = 0;
        if (j == 0) {
            return true;
        }
        Segment segment = this.b;
        Segment segment2 = buffer.b;
        int i = segment.d;
        int i2 = segment2.d;
        while (j2 < this.c) {
            long jMin = Math.min(segment.e - i, segment2.e - i2);
            int i3 = 0;
            while (i3 < jMin) {
                int i4 = i + 1;
                int i5 = i2 + 1;
                if (segment.c[i] != segment2.c[i2]) {
                    return false;
                }
                i3++;
                i = i4;
                i2 = i5;
            }
            if (i == segment.e) {
                segment = segment.h;
                i = segment.d;
            }
            if (i2 == segment2.e) {
                segment2 = segment2.h;
                i2 = segment2.d;
            }
            j2 += jMin;
        }
        return true;
    }

    @Override
    public boolean exhausted() {
        return this.c == 0;
    }

    @Override
    public void flush() {
    }

    public byte getByte(long j) {
        Util.checkOffsetAndCount(this.c, j, 1L);
        Segment segment = this.b;
        while (true) {
            long j2 = segment.e - segment.d;
            if (j < j2) {
                return segment.c[segment.d + ((int) j)];
            }
            j -= j2;
            segment = segment.h;
        }
    }

    public int hashCode() {
        Segment segment = this.b;
        if (segment == null) {
            return 0;
        }
        int i = 1;
        do {
            int i2 = segment.e;
            for (int i3 = segment.d; i3 < i2; i3++) {
                i = (i * 31) + segment.c[i3];
            }
            segment = segment.h;
        } while (segment != this.b);
        return i;
    }

    @Override
    public long indexOf(byte b) {
        return indexOf(b, 0L);
    }

    @Override
    public long indexOf(byte b, long j) {
        long j2 = 0;
        if (j < 0) {
            throw new IllegalArgumentException("fromIndex < 0");
        }
        Segment segment = this.b;
        if (segment == null) {
            return -1L;
        }
        long j3 = this.c;
        if (j3 - j < j) {
            while (j3 > j) {
                segment = segment.i;
                j3 -= (long) (segment.e - segment.d);
            }
        } else {
            while (true) {
                long j4 = ((long) (segment.e - segment.d)) + j2;
                if (j4 >= j) {
                    break;
                }
                segment = segment.h;
                j2 = j4;
            }
            j3 = j2;
        }
        while (j3 < this.c) {
            byte[] bArr = segment.c;
            int i = segment.e;
            for (int i2 = (int) ((((long) segment.d) + j) - j3); i2 < i; i2++) {
                if (bArr[i2] == b) {
                    return ((long) (i2 - segment.d)) + j3;
                }
            }
            j3 += (long) (segment.e - segment.d);
            segment = segment.h;
            j = j3;
        }
        return -1L;
    }

    @Override
    public long indexOf(ByteString byteString) throws IOException {
        return indexOf(byteString, 0L);
    }

    @Override
    public long indexOf(ByteString byteString, long j) throws IOException {
        byte[] bArr;
        if (byteString.size() == 0) {
            throw new IllegalArgumentException("bytes is empty");
        }
        long j2 = 0;
        if (j < 0) {
            throw new IllegalArgumentException("fromIndex < 0");
        }
        Segment segment = this.b;
        long j3 = -1;
        if (segment == null) {
            return -1L;
        }
        long j4 = this.c;
        if (j4 - j < j) {
            while (j4 > j) {
                segment = segment.i;
                j4 -= (long) (segment.e - segment.d);
            }
        } else {
            while (true) {
                long j5 = ((long) (segment.e - segment.d)) + j2;
                if (j5 >= j) {
                    break;
                }
                segment = segment.h;
                j2 = j5;
            }
            j4 = j2;
        }
        byte b = byteString.getByte(0);
        int size = byteString.size();
        long j6 = 1 + (this.c - ((long) size));
        long j7 = j;
        Segment segment2 = segment;
        long j8 = j4;
        while (j8 < j6) {
            byte[] bArr2 = segment2.c;
            int iMin = (int) Math.min(segment2.e, (((long) segment2.d) + j6) - j8);
            int i = (int) ((((long) segment2.d) + j7) - j8);
            while (i < iMin) {
                if (bArr2[i] == b) {
                    bArr = bArr2;
                    if (a(segment2, i + 1, byteString, 1, size)) {
                        return ((long) (i - segment2.d)) + j8;
                    }
                } else {
                    bArr = bArr2;
                }
                i++;
                bArr2 = bArr;
            }
            j8 += (long) (segment2.e - segment2.d);
            segment2 = segment2.h;
            j7 = j8;
            j3 = -1;
        }
        return j3;
    }

    @Override
    public long indexOfElement(ByteString byteString) {
        return indexOfElement(byteString, 0L);
    }

    @Override
    public long indexOfElement(ByteString byteString, long j) {
        int i;
        long j2 = 0;
        if (j < 0) {
            throw new IllegalArgumentException("fromIndex < 0");
        }
        Segment segment = this.b;
        if (segment == null) {
            return -1L;
        }
        long j3 = this.c;
        if (j3 - j < j) {
            while (j3 > j) {
                segment = segment.i;
                j3 -= (long) (segment.e - segment.d);
            }
        } else {
            while (true) {
                long j4 = ((long) (segment.e - segment.d)) + j2;
                if (j4 >= j) {
                    break;
                }
                segment = segment.h;
                j2 = j4;
            }
            j3 = j2;
        }
        if (byteString.size() == 2) {
            byte b = byteString.getByte(0);
            byte b2 = byteString.getByte(1);
            while (j3 < this.c) {
                byte[] bArr = segment.c;
                i = (int) ((((long) segment.d) + j) - j3);
                int i2 = segment.e;
                while (i < i2) {
                    byte b3 = bArr[i];
                    if (b3 == b || b3 == b2) {
                        return ((long) (i - segment.d)) + j3;
                    }
                    i++;
                }
                j3 += (long) (segment.e - segment.d);
                segment = segment.h;
                j = j3;
            }
            return -1L;
        }
        byte[] bArrA = byteString.a();
        while (j3 < this.c) {
            byte[] bArr2 = segment.c;
            i = (int) ((((long) segment.d) + j) - j3);
            int i3 = segment.e;
            while (i < i3) {
                byte b4 = bArr2[i];
                for (byte b5 : bArrA) {
                    if (b4 == b5) {
                        return ((long) (i - segment.d)) + j3;
                    }
                }
                i++;
            }
            j3 += (long) (segment.e - segment.d);
            segment = segment.h;
            j = j3;
        }
        return -1L;
    }

    @Override
    public InputStream inputStream() {
        return new InputStream() {
            @Override
            public int available() {
                return (int) Math.min(Buffer.this.c, 2147483647L);
            }

            @Override
            public void close() {
            }

            @Override
            public int read() {
                if (Buffer.this.c > 0) {
                    return Buffer.this.readByte() & UByte.MAX_VALUE;
                }
                return -1;
            }

            @Override
            public int read(byte[] bArr, int i, int i2) {
                return Buffer.this.read(bArr, i, i2);
            }

            public String toString() {
                return Buffer.this + ".inputStream()";
            }
        };
    }

    public ByteString md5() {
        return a("MD5");
    }

    @Override
    public OutputStream outputStream() {
        return new OutputStream() {
            @Override
            public void close() {
            }

            @Override
            public void flush() {
            }

            public String toString() {
                return this + ".outputStream()";
            }

            @Override
            public void write(int i) {
                Buffer.this.writeByte((int) ((byte) i));
            }

            @Override
            public void write(byte[] bArr, int i, int i2) {
                Buffer.this.write(bArr, i, i2);
            }
        };
    }

    @Override
    public int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) {
        Util.checkOffsetAndCount(bArr.length, i, i2);
        Segment segment = this.b;
        if (segment == null) {
            return -1;
        }
        int iMin = Math.min(i2, segment.e - segment.d);
        System.arraycopy(segment.c, segment.d, bArr, i, iMin);
        segment.d += iMin;
        this.c -= (long) iMin;
        if (segment.d == segment.e) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        }
        return iMin;
    }

    @Override
    public long read(Buffer buffer, long j) {
        if (buffer == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        long j2 = this.c;
        if (j2 == 0) {
            return -1L;
        }
        if (j > j2) {
            j = j2;
        }
        buffer.write(this, j);
        return j;
    }

    @Override
    public long readAll(Sink sink) throws IOException {
        long j = this.c;
        if (j > 0) {
            sink.write(this, j);
        }
        return j;
    }

    @Override
    public byte readByte() {
        if (this.c == 0) {
            throw new IllegalStateException("size == 0");
        }
        Segment segment = this.b;
        int i = segment.d;
        int i2 = segment.e;
        int i3 = i + 1;
        byte b = segment.c[i];
        this.c--;
        if (i3 == i2) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        } else {
            segment.d = i3;
        }
        return b;
    }

    @Override
    public byte[] readByteArray() {
        try {
            return readByteArray(this.c);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    @Override
    public byte[] readByteArray(long j) throws EOFException {
        Util.checkOffsetAndCount(this.c, 0L, j);
        if (j <= 2147483647L) {
            byte[] bArr = new byte[(int) j];
            readFully(bArr);
            return bArr;
        }
        throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
    }

    @Override
    public ByteString readByteString() {
        return new ByteString(readByteArray());
    }

    @Override
    public ByteString readByteString(long j) throws EOFException {
        return new ByteString(readByteArray(j));
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00a2  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00a6  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00aa A[EDGE_INSN: B:48:0x00aa->B:38:0x00aa BREAK  A[LOOP:0: B:5:0x000f->B:50:?], SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public long readDecimalLong() {
        long j = 0;
        if (this.c == 0) {
            throw new IllegalStateException("size == 0");
        }
        long j2 = -7;
        int i = 0;
        boolean z = false;
        boolean z2 = false;
        do {
            Segment segment = this.b;
            byte[] bArr = segment.c;
            int i2 = segment.d;
            int i3 = segment.e;
            while (i2 < i3) {
                byte b = bArr[i2];
                if (b >= 48 && b <= 57) {
                    int i4 = 48 - b;
                    if (j < _BufferKt.OVERFLOW_ZONE || (j == _BufferKt.OVERFLOW_ZONE && i4 < j2)) {
                        Buffer bufferWriteByte = new Buffer().writeDecimalLong(j).writeByte((int) b);
                        if (!z) {
                            bufferWriteByte.readByte();
                        }
                        throw new NumberFormatException("Number too large: " + bufferWriteByte.readUtf8());
                    }
                    j = (j * 10) + ((long) i4);
                } else if (b == 45 && i == 0) {
                    j2--;
                    z = true;
                } else {
                    if (i == 0) {
                        throw new NumberFormatException("Expected leading [0-9] or '-' character but was 0x" + Integer.toHexString(b));
                    }
                    z2 = true;
                    if (i2 != i3) {
                        this.b = segment.pop();
                        SegmentPool.a(segment);
                    } else {
                        segment.d = i2;
                    }
                    if (!z2) {
                        break;
                    }
                }
                i2++;
                i++;
            }
            if (i2 != i3) {
            }
            if (!z2) {
            }
        } while (this.b != null);
        this.c -= (long) i;
        return z ? j : -j;
    }

    public Buffer readFrom(InputStream inputStream) throws IOException {
        a(inputStream, Long.MAX_VALUE, true);
        return this;
    }

    public Buffer readFrom(InputStream inputStream, long j) throws IOException {
        if (j >= 0) {
            a(inputStream, j, false);
            return this;
        }
        throw new IllegalArgumentException("byteCount < 0: " + j);
    }

    @Override
    public void readFully(Buffer buffer, long j) throws EOFException {
        long j2 = this.c;
        if (j2 >= j) {
            buffer.write(this, j);
        } else {
            buffer.write(this, j2);
            throw new EOFException();
        }
    }

    @Override
    public void readFully(byte[] bArr) throws EOFException {
        int i = 0;
        while (i < bArr.length) {
            int i2 = read(bArr, i, bArr.length - i);
            if (i2 == -1) {
                throw new EOFException();
            }
            i += i2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00a1  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00a5 A[EDGE_INSN: B:44:0x00a5->B:38:0x00a5 BREAK  A[LOOP:0: B:5:0x000b->B:46:?], SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public long readHexadecimalUnsignedLong() {
        int i;
        int i2;
        if (this.c == 0) {
            throw new IllegalStateException("size == 0");
        }
        int i3 = 0;
        boolean z = false;
        long j = 0;
        do {
            Segment segment = this.b;
            byte[] bArr = segment.c;
            int i4 = segment.d;
            int i5 = segment.e;
            while (i4 < i5) {
                byte b = bArr[i4];
                if (b < 48 || b > 57) {
                    if (b >= 97 && b <= 102) {
                        i = b - 97;
                    } else if (b >= 65 && b <= 70) {
                        i = b - 65;
                    } else {
                        if (i3 == 0) {
                            throw new NumberFormatException("Expected leading [0-9a-fA-F] character but was 0x" + Integer.toHexString(b));
                        }
                        z = true;
                        if (i4 != i5) {
                            this.b = segment.pop();
                            SegmentPool.a(segment);
                        } else {
                            segment.d = i4;
                        }
                        if (!z) {
                            break;
                        }
                    }
                    i2 = i + 10;
                } else {
                    i2 = b - 48;
                }
                if (((-1152921504606846976L) & j) != 0) {
                    throw new NumberFormatException("Number too large: " + new Buffer().writeHexadecimalUnsignedLong(j).writeByte((int) b).readUtf8());
                }
                j = (j << 4) | ((long) i2);
                i4++;
                i3++;
            }
            if (i4 != i5) {
            }
            if (!z) {
            }
        } while (this.b != null);
        this.c -= (long) i3;
        return j;
    }

    @Override
    public int readInt() {
        if (this.c < 4) {
            throw new IllegalStateException("size < 4: " + this.c);
        }
        Segment segment = this.b;
        int i = segment.d;
        int i2 = segment.e;
        if (i2 - i < 4) {
            return ((readByte() & UByte.MAX_VALUE) << 24) | ((readByte() & UByte.MAX_VALUE) << 16) | ((readByte() & UByte.MAX_VALUE) << 8) | (readByte() & UByte.MAX_VALUE);
        }
        byte[] bArr = segment.c;
        int i3 = i + 1;
        int i4 = i3 + 1;
        int i5 = ((bArr[i] & UByte.MAX_VALUE) << 24) | ((bArr[i3] & UByte.MAX_VALUE) << 16);
        int i6 = i4 + 1;
        int i7 = i5 | ((bArr[i4] & UByte.MAX_VALUE) << 8);
        int i8 = i6 + 1;
        int i9 = i7 | (bArr[i6] & UByte.MAX_VALUE);
        this.c -= 4;
        if (i8 == i2) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        } else {
            segment.d = i8;
        }
        return i9;
    }

    @Override
    public int readIntLe() {
        return Util.reverseBytesInt(readInt());
    }

    @Override
    public long readLong() {
        if (this.c < 8) {
            throw new IllegalStateException("size < 8: " + this.c);
        }
        Segment segment = this.b;
        int i = segment.d;
        int i2 = segment.e;
        if (i2 - i < 8) {
            return ((((long) readInt()) & 4294967295L) << 32) | (4294967295L & ((long) readInt()));
        }
        byte[] bArr = segment.c;
        int i3 = i + 1;
        long j = (((long) bArr[i]) & 255) << 56;
        int i4 = i3 + 1;
        int i5 = i4 + 1;
        long j2 = j | ((((long) bArr[i3]) & 255) << 48) | ((((long) bArr[i4]) & 255) << 40);
        int i6 = i5 + 1;
        int i7 = i6 + 1;
        long j3 = j2 | ((((long) bArr[i5]) & 255) << 32) | ((((long) bArr[i6]) & 255) << 24);
        int i8 = i7 + 1;
        long j4 = j3 | ((((long) bArr[i7]) & 255) << 16);
        int i9 = i8 + 1;
        long j5 = j4 | ((((long) bArr[i8]) & 255) << 8);
        int i10 = i9 + 1;
        long j6 = (((long) bArr[i9]) & 255) | j5;
        this.c -= 8;
        if (i10 == i2) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        } else {
            segment.d = i10;
        }
        return j6;
    }

    @Override
    public long readLongLe() {
        return Util.reverseBytesLong(readLong());
    }

    @Override
    public short readShort() {
        if (this.c < 2) {
            throw new IllegalStateException("size < 2: " + this.c);
        }
        Segment segment = this.b;
        int i = segment.d;
        int i2 = segment.e;
        if (i2 - i < 2) {
            return (short) (((readByte() & UByte.MAX_VALUE) << 8) | (readByte() & UByte.MAX_VALUE));
        }
        byte[] bArr = segment.c;
        int i3 = i + 1;
        int i4 = i3 + 1;
        int i5 = ((bArr[i] & UByte.MAX_VALUE) << 8) | (bArr[i3] & UByte.MAX_VALUE);
        this.c -= 2;
        if (i4 == i2) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        } else {
            segment.d = i4;
        }
        return (short) i5;
    }

    @Override
    public short readShortLe() {
        return Util.reverseBytesShort(readShort());
    }

    @Override
    public String readString(long j, Charset charset) throws EOFException {
        Util.checkOffsetAndCount(this.c, 0L, j);
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        if (j > 2147483647L) {
            throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
        }
        if (j == 0) {
            return "";
        }
        Segment segment = this.b;
        if (((long) segment.d) + j > segment.e) {
            return new String(readByteArray(j), charset);
        }
        String str = new String(segment.c, segment.d, (int) j, charset);
        segment.d = (int) (((long) segment.d) + j);
        this.c -= j;
        if (segment.d == segment.e) {
            this.b = segment.pop();
            SegmentPool.a(segment);
        }
        return str;
    }

    @Override
    public String readString(Charset charset) {
        try {
            return readString(this.c, charset);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    @Override
    public String readUtf8() {
        try {
            return readString(this.c, Util.UTF_8);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    @Override
    public String readUtf8(long j) throws EOFException {
        return readString(j, Util.UTF_8);
    }

    @Override
    public int readUtf8CodePoint() throws EOFException {
        int i;
        int i2;
        int i3;
        if (this.c == 0) {
            throw new EOFException();
        }
        byte b = getByte(0L);
        if ((b & ByteCompanionObject.MIN_VALUE) == 0) {
            i = b & ByteCompanionObject.MAX_VALUE;
            i3 = 0;
            i2 = 1;
        } else if ((b & 224) == 192) {
            i = b & 31;
            i2 = 2;
            i3 = 128;
        } else if ((b & 240) == 224) {
            i = b & 15;
            i2 = 3;
            i3 = 2048;
        } else {
            if ((b & 248) != 240) {
                skip(1L);
                return 65533;
            }
            i = b & 7;
            i2 = 4;
            i3 = 65536;
        }
        long j = i2;
        if (this.c < j) {
            throw new EOFException("size < " + i2 + ": " + this.c + " (to read code point prefixed 0x" + Integer.toHexString(b) + ")");
        }
        for (int i4 = 1; i4 < i2; i4++) {
            long j2 = i4;
            byte b2 = getByte(j2);
            if ((b2 & 192) != 128) {
                skip(j2);
                return 65533;
            }
            i = (i << 6) | (b2 & okio.Utf8.REPLACEMENT_BYTE);
        }
        skip(j);
        if (i > 1114111) {
            return 65533;
        }
        if ((i < 55296 || i > 57343) && i >= i3) {
            return i;
        }
        return 65533;
    }

    @Override
    public String readUtf8Line() throws EOFException {
        long jIndexOf = indexOf((byte) 10);
        if (jIndexOf != -1) {
            return a(jIndexOf);
        }
        long j = this.c;
        if (j != 0) {
            return readUtf8(j);
        }
        return null;
    }

    @Override
    public String readUtf8LineStrict() throws EOFException {
        long jIndexOf = indexOf((byte) 10);
        if (jIndexOf != -1) {
            return a(jIndexOf);
        }
        Buffer buffer = new Buffer();
        copyTo(buffer, 0L, Math.min(32L, this.c));
        throw new EOFException("\\n not found: size=" + size() + " content=" + buffer.readByteString().hex() + "…");
    }

    @Override
    public boolean request(long j) {
        return this.c >= j;
    }

    @Override
    public void require(long j) throws EOFException {
        if (this.c < j) {
            throw new EOFException();
        }
    }

    @Override
    public int select(Options options) {
        Segment segment = this.b;
        if (segment == null) {
            return options.indexOf(ByteString.EMPTY);
        }
        ByteString[] byteStringArr = options.a;
        int length = byteStringArr.length;
        for (int i = 0; i < length; i++) {
            ByteString byteString = byteStringArr[i];
            if (this.c >= byteString.size() && a(segment, segment.d, byteString, 0, byteString.size())) {
                try {
                    skip(byteString.size());
                    return i;
                } catch (EOFException e) {
                    throw new AssertionError(e);
                }
            }
        }
        return -1;
    }

    public ByteString sha1() {
        return a(MessageDigestAlgorithms.SHA_1);
    }

    public ByteString sha256() {
        return a(MessageDigestAlgorithms.SHA_256);
    }

    public long size() {
        return this.c;
    }

    @Override
    public void skip(long j) throws EOFException {
        while (j > 0) {
            if (this.b == null) {
                throw new EOFException();
            }
            int iMin = (int) Math.min(j, r0.e - this.b.d);
            long j2 = iMin;
            this.c -= j2;
            j -= j2;
            this.b.d += iMin;
            if (this.b.d == this.b.e) {
                Segment segment = this.b;
                this.b = segment.pop();
                SegmentPool.a(segment);
            }
        }
    }

    public ByteString snapshot() {
        long j = this.c;
        if (j <= 2147483647L) {
            return snapshot((int) j);
        }
        throw new IllegalArgumentException("size > Integer.MAX_VALUE: " + this.c);
    }

    public ByteString snapshot(int i) {
        return i == 0 ? ByteString.EMPTY : new SegmentedByteString(this, i);
    }

    @Override
    public Timeout timeout() {
        return Timeout.NONE;
    }

    public String toString() {
        return snapshot().toString();
    }

    @Override
    public Buffer write(ByteString byteString) {
        if (byteString == null) {
            throw new IllegalArgumentException("byteString == null");
        }
        byteString.a(this);
        return this;
    }

    @Override
    public Buffer write(byte[] bArr) {
        if (bArr != null) {
            return write(bArr, 0, bArr.length);
        }
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public Buffer write(byte[] bArr, int i, int i2) {
        if (bArr == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = i2;
        Util.checkOffsetAndCount(bArr.length, i, j);
        int i3 = i2 + i;
        while (i < i3) {
            Segment segmentA = a(1);
            int iMin = Math.min(i3 - i, 8192 - segmentA.e);
            System.arraycopy(bArr, i, segmentA.c, segmentA.e, iMin);
            i += iMin;
            segmentA.e += iMin;
        }
        this.c += j;
        return this;
    }

    @Override
    public BufferedSink write(Source source, long j) throws IOException {
        while (j > 0) {
            long j2 = source.read(this, j);
            if (j2 == -1) {
                throw new EOFException();
            }
            j -= j2;
        }
        return this;
    }

    @Override
    public void write(Buffer buffer, long j) {
        if (buffer == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (buffer == this) {
            throw new IllegalArgumentException("source == this");
        }
        Util.checkOffsetAndCount(buffer.c, 0L, j);
        while (j > 0) {
            if (j < buffer.b.e - buffer.b.d) {
                Segment segment = this.b;
                Segment segment2 = segment != null ? segment.i : null;
                if (segment2 != null && segment2.g) {
                    if ((((long) segment2.e) + j) - ((long) (segment2.f ? 0 : segment2.d)) <= 8192) {
                        buffer.b.writeTo(segment2, (int) j);
                        buffer.c -= j;
                        this.c += j;
                        return;
                    }
                }
                buffer.b = buffer.b.split((int) j);
            }
            Segment segment3 = buffer.b;
            long j2 = segment3.e - segment3.d;
            buffer.b = segment3.pop();
            Segment segment4 = this.b;
            if (segment4 == null) {
                this.b = segment3;
                segment3.i = segment3;
                segment3.h = segment3;
            } else {
                segment4.i.push(segment3).compact();
            }
            buffer.c -= j2;
            this.c += j2;
            j -= j2;
        }
    }

    @Override
    public long writeAll(Source source) throws IOException {
        if (source == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = 0;
        while (true) {
            long j2 = source.read(this, 8192L);
            if (j2 == -1) {
                return j;
            }
            j += j2;
        }
    }

    @Override
    public Buffer writeByte(int i) {
        Segment segmentA = a(1);
        byte[] bArr = segmentA.c;
        int i2 = segmentA.e;
        segmentA.e = i2 + 1;
        bArr[i2] = (byte) i;
        this.c++;
        return this;
    }

    @Override
    public Buffer writeDecimalLong(long j) {
        if (j == 0) {
            return writeByte(48);
        }
        boolean z = false;
        int i = 1;
        if (j < 0) {
            j = -j;
            if (j < 0) {
                return writeUtf8("-9223372036854775808");
            }
            z = true;
        }
        if (j >= 100000000) {
            i = j < 1000000000000L ? j < RealConnection.IDLE_CONNECTION_HEALTHY_NS ? j < 1000000000 ? 9 : 10 : j < 100000000000L ? 11 : 12 : j < 1000000000000000L ? j < 10000000000000L ? 13 : j < 100000000000000L ? 14 : 15 : j < 100000000000000000L ? j < 10000000000000000L ? 16 : 17 : j < 1000000000000000000L ? 18 : 19;
        } else if (j >= a.q) {
            i = j < 1000000 ? j < 100000 ? 5 : 6 : j < 10000000 ? 7 : 8;
        } else if (j >= 100) {
            i = j < 1000 ? 3 : 4;
        } else if (j >= 10) {
            i = 2;
        }
        if (z) {
            i++;
        }
        Segment segmentA = a(i);
        byte[] bArr = segmentA.c;
        int i2 = segmentA.e + i;
        while (j != 0) {
            i2--;
            bArr[i2] = d[(int) (j % 10)];
            j /= 10;
        }
        if (z) {
            bArr[i2 - 1] = 45;
        }
        segmentA.e += i;
        this.c += (long) i;
        return this;
    }

    @Override
    public Buffer writeHexadecimalUnsignedLong(long j) {
        if (j == 0) {
            return writeByte(48);
        }
        int iNumberOfTrailingZeros = (Long.numberOfTrailingZeros(Long.highestOneBit(j)) / 4) + 1;
        Segment segmentA = a(iNumberOfTrailingZeros);
        byte[] bArr = segmentA.c;
        int i = segmentA.e;
        for (int i2 = (segmentA.e + iNumberOfTrailingZeros) - 1; i2 >= i; i2--) {
            bArr[i2] = d[(int) (15 & j)];
            j >>>= 4;
        }
        segmentA.e += iNumberOfTrailingZeros;
        this.c += (long) iNumberOfTrailingZeros;
        return this;
    }

    @Override
    public Buffer writeInt(int i) {
        Segment segmentA = a(4);
        byte[] bArr = segmentA.c;
        int i2 = segmentA.e;
        int i3 = i2 + 1;
        bArr[i2] = (byte) ((i >>> 24) & 255);
        int i4 = i3 + 1;
        bArr[i3] = (byte) ((i >>> 16) & 255);
        int i5 = i4 + 1;
        bArr[i4] = (byte) ((i >>> 8) & 255);
        bArr[i5] = (byte) (i & 255);
        segmentA.e = i5 + 1;
        this.c += 4;
        return this;
    }

    @Override
    public Buffer writeIntLe(int i) {
        return writeInt(Util.reverseBytesInt(i));
    }

    @Override
    public Buffer writeLong(long j) {
        Segment segmentA = a(8);
        byte[] bArr = segmentA.c;
        int i = segmentA.e;
        int i2 = i + 1;
        bArr[i] = (byte) ((j >>> 56) & 255);
        int i3 = i2 + 1;
        bArr[i2] = (byte) ((j >>> 48) & 255);
        int i4 = i3 + 1;
        bArr[i3] = (byte) ((j >>> 40) & 255);
        int i5 = i4 + 1;
        bArr[i4] = (byte) ((j >>> 32) & 255);
        int i6 = i5 + 1;
        bArr[i5] = (byte) ((j >>> 24) & 255);
        int i7 = i6 + 1;
        bArr[i6] = (byte) ((j >>> 16) & 255);
        int i8 = i7 + 1;
        bArr[i7] = (byte) ((j >>> 8) & 255);
        bArr[i8] = (byte) (j & 255);
        segmentA.e = i8 + 1;
        this.c += 8;
        return this;
    }

    @Override
    public Buffer writeLongLe(long j) {
        return writeLong(Util.reverseBytesLong(j));
    }

    @Override
    public Buffer writeShort(int i) {
        Segment segmentA = a(2);
        byte[] bArr = segmentA.c;
        int i2 = segmentA.e;
        int i3 = i2 + 1;
        bArr[i2] = (byte) ((i >>> 8) & 255);
        bArr[i3] = (byte) (i & 255);
        segmentA.e = i3 + 1;
        this.c += 2;
        return this;
    }

    @Override
    public Buffer writeShortLe(int i) {
        return writeShort((int) Util.reverseBytesShort((short) i));
    }

    @Override
    public Buffer writeString(String str, int i, int i2, Charset charset) {
        if (str == null) {
            throw new IllegalArgumentException("string == null");
        }
        if (i < 0) {
            throw new IllegalAccessError("beginIndex < 0: " + i);
        }
        if (i2 < i) {
            throw new IllegalArgumentException("endIndex < beginIndex: " + i2 + " < " + i);
        }
        if (i2 <= str.length()) {
            if (charset == null) {
                throw new IllegalArgumentException("charset == null");
            }
            if (charset.equals(Util.UTF_8)) {
                return writeUtf8(str);
            }
            byte[] bytes = str.substring(i, i2).getBytes(charset);
            return write(bytes, 0, bytes.length);
        }
        throw new IllegalArgumentException("endIndex > string.length: " + i2 + " > " + str.length());
    }

    @Override
    public Buffer writeString(String str, Charset charset) {
        return writeString(str, 0, str.length(), charset);
    }

    public Buffer writeTo(OutputStream outputStream) throws IOException {
        return writeTo(outputStream, this.c);
    }

    public Buffer writeTo(OutputStream outputStream, long j) throws IOException {
        if (outputStream == null) {
            throw new IllegalArgumentException("out == null");
        }
        Util.checkOffsetAndCount(this.c, 0L, j);
        Segment segment = this.b;
        while (j > 0) {
            int iMin = (int) Math.min(j, segment.e - segment.d);
            outputStream.write(segment.c, segment.d, iMin);
            segment.d += iMin;
            long j2 = iMin;
            this.c -= j2;
            j -= j2;
            if (segment.d == segment.e) {
                Segment segmentPop = segment.pop();
                this.b = segmentPop;
                SegmentPool.a(segment);
                segment = segmentPop;
            }
        }
        return this;
    }

    @Override
    public Buffer writeUtf8(String str) {
        return writeUtf8(str, 0, str.length());
    }

    @Override
    public Buffer writeUtf8(String str, int i, int i2) {
        int i3;
        if (str == null) {
            throw new IllegalArgumentException("string == null");
        }
        if (i < 0) {
            throw new IllegalAccessError("beginIndex < 0: " + i);
        }
        if (i2 < i) {
            throw new IllegalArgumentException("endIndex < beginIndex: " + i2 + " < " + i);
        }
        if (i2 > str.length()) {
            throw new IllegalArgumentException("endIndex > string.length: " + i2 + " > " + str.length());
        }
        while (i < i2) {
            char cCharAt = str.charAt(i);
            if (cCharAt < 128) {
                Segment segmentA = a(1);
                byte[] bArr = segmentA.c;
                int i4 = segmentA.e - i;
                int iMin = Math.min(i2, 8192 - i4);
                int i5 = i + 1;
                bArr[i + i4] = (byte) cCharAt;
                while (i5 < iMin) {
                    char cCharAt2 = str.charAt(i5);
                    if (cCharAt2 >= 128) {
                        break;
                    }
                    bArr[i5 + i4] = (byte) cCharAt2;
                    i5++;
                }
                int i6 = (i4 + i5) - segmentA.e;
                segmentA.e += i6;
                this.c += (long) i6;
                i = i5;
            } else {
                if (cCharAt < 2048) {
                    i3 = (cCharAt >> 6) | PsExtractor.AUDIO_STREAM;
                } else if (cCharAt < 55296 || cCharAt > 57343) {
                    writeByte((cCharAt >> '\f') | 224);
                    i3 = ((cCharAt >> 6) & 63) | 128;
                } else {
                    int i7 = i + 1;
                    char cCharAt3 = i7 < i2 ? str.charAt(i7) : (char) 0;
                    if (cCharAt > 56319 || cCharAt3 < 56320 || cCharAt3 > 57343) {
                        writeByte(63);
                        i = i7;
                    } else {
                        int i8 = (((cCharAt & 10239) << 10) | (9215 & cCharAt3)) + 65536;
                        writeByte((i8 >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                        writeByte(((i8 >> 12) & 63) | 128);
                        writeByte(((i8 >> 6) & 63) | 128);
                        writeByte((i8 & 63) | 128);
                        i += 2;
                    }
                }
                writeByte(i3);
                writeByte((cCharAt & '?') | 128);
                i++;
            }
        }
        return this;
    }

    @Override
    public Buffer writeUtf8CodePoint(int i) {
        int i2;
        int i3;
        if (i >= 128) {
            if (i < 2048) {
                i3 = (i >> 6) | PsExtractor.AUDIO_STREAM;
            } else {
                if (i < 65536) {
                    if (i >= 55296 && i <= 57343) {
                        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(i));
                    }
                    i2 = (i >> 12) | 224;
                } else {
                    if (i > 1114111) {
                        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(i));
                    }
                    writeByte((i >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                    i2 = ((i >> 12) & 63) | 128;
                }
                writeByte(i2);
                i3 = ((i >> 6) & 63) | 128;
            }
            writeByte(i3);
            i = (i & 63) | 128;
        }
        writeByte(i);
        return this;
    }
}
