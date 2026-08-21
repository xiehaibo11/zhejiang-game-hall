package com.bytedance.pangle.util.a;

import android.util.Pair;
import com.bianfeng.afext.read.ApkUtil;
import com.bytedance.pangle.util.f;
import java.io.File;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public final class b {
    private static String a = "";

    public static String[] a(File file) throws Throwable {
        String str;
        ByteBuffer byteBufferB;
        boolean z;
        String strA = "";
        try {
            byteBufferB = b(file);
        } catch (Exception unused) {
            str = "";
        }
        if (byteBufferB.order() == ByteOrder.LITTLE_ENDIAN) {
            ByteBuffer byteBufferA = a(byteBufferB, byteBufferB.capacity() - 24);
            int i = 0;
            while (byteBufferA.hasRemaining()) {
                i++;
                if (byteBufferA.remaining() < 8) {
                    throw new Exception("Insufficient data to read size of APK Signing Block entry #".concat(String.valueOf(i)));
                }
                long j = byteBufferA.getLong();
                if (j < 4 || j > 2147483647L) {
                    throw new Exception("APK Signing Block entry #" + i + " size out of range: " + j);
                }
                int i2 = (int) j;
                int iPosition = byteBufferA.position() + i2;
                if (i2 > byteBufferA.remaining()) {
                    throw new Exception("APK Signing Block entry #" + i + " size out of range: " + i2 + ", available: " + byteBufferA.remaining());
                }
                int i3 = byteBufferA.getInt();
                if (i3 == -262969152) {
                    a = "V3";
                } else if (i3 == 1896449818) {
                    a = "V2";
                } else {
                    byteBufferA.position(iPosition);
                }
                z = true;
                break;
            }
            z = false;
            if (z) {
                strA = f.a(byteBufferB.array());
                str = "";
            } else {
                str = "without v2 & v3 signature.";
            }
            return new String[]{strA, a, str};
        }
        throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0048  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static ByteBuffer b(File file) throws Throwable {
        RandomAccessFile randomAccessFile;
        boolean z;
        RandomAccessFile randomAccessFile2 = null;
        Pair<ByteBuffer, Long> pairA = null;
        try {
            randomAccessFile = new RandomAccessFile(file, "r");
        } catch (Throwable th) {
            th = th;
        }
        try {
            if (randomAccessFile.length() >= 22 && (pairA = c.a(randomAccessFile, 0)) == null) {
                pairA = c.a(randomAccessFile, 65535);
            }
            if (pairA != null) {
                ByteBuffer byteBuffer = (ByteBuffer) pairA.first;
                long jLongValue = ((Long) pairA.second).longValue();
                long j = jLongValue - 20;
                if (j >= 0) {
                    randomAccessFile.seek(j);
                    z = randomAccessFile.readInt() == 1347094023;
                }
                if (z) {
                    throw new Exception("ZIP64 APK not supported");
                }
                c.a(byteBuffer);
                long jA = c.a(byteBuffer, byteBuffer.position() + 16);
                if (jA > jLongValue) {
                    throw new Exception("ZIP Central Directory offset out of range: " + jA + ". ZIP End of Central Directory offset: " + jLongValue);
                }
                c.a(byteBuffer);
                if (c.a(byteBuffer, byteBuffer.position() + 12) + jA != jLongValue) {
                    throw new Exception("ZIP Central Directory is not immediately followed by End of Central Directory");
                }
                if (jA < 32) {
                    throw new Exception("APK too small for APK Signing Block. ZIP Central Directory offset: ".concat(String.valueOf(jA)));
                }
                ByteBuffer byteBufferAllocate = ByteBuffer.allocate(24);
                byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
                randomAccessFile.seek(jA - ((long) byteBufferAllocate.capacity()));
                randomAccessFile.readFully(byteBufferAllocate.array(), byteBufferAllocate.arrayOffset(), byteBufferAllocate.capacity());
                if (byteBufferAllocate.getLong(8) != ApkUtil.APK_SIG_BLOCK_MAGIC_LO || byteBufferAllocate.getLong(16) != ApkUtil.APK_SIG_BLOCK_MAGIC_HI) {
                    throw new Exception("No APK Signing Block before ZIP Central Directory");
                }
                long j2 = byteBufferAllocate.getLong(0);
                if (j2 < byteBufferAllocate.capacity() || j2 > 2147483639) {
                    throw new Exception("APK Signing Block size out of range: ".concat(String.valueOf(j2)));
                }
                int i = (int) (8 + j2);
                long j3 = jA - ((long) i);
                if (j3 < 0) {
                    throw new Exception("APK Signing Block offset out of range: ".concat(String.valueOf(j3)));
                }
                ByteBuffer byteBufferAllocate2 = ByteBuffer.allocate(i);
                byteBufferAllocate2.order(ByteOrder.LITTLE_ENDIAN);
                randomAccessFile.seek(j3);
                randomAccessFile.readFully(byteBufferAllocate2.array(), byteBufferAllocate2.arrayOffset(), byteBufferAllocate2.capacity());
                long j4 = byteBufferAllocate2.getLong(0);
                if (j4 == j2) {
                    ByteBuffer byteBuffer2 = (ByteBuffer) Pair.create(byteBufferAllocate2, Long.valueOf(j3)).first;
                    randomAccessFile.close();
                    return byteBuffer2;
                }
                throw new Exception("APK Signing Block sizes in header and footer do not match: " + j4 + " vs " + j2);
            }
            throw new Exception("Not an APK file: ZIP End of Central Directory record not found");
        } catch (Throwable th2) {
            th = th2;
            randomAccessFile2 = randomAccessFile;
            if (randomAccessFile2 != null) {
                randomAccessFile2.close();
            }
            throw th;
        }
    }

    private static ByteBuffer a(ByteBuffer byteBuffer, int i) {
        if (i < 8) {
            throw new IllegalArgumentException("end < start: " + i + " < 8");
        }
        int iCapacity = byteBuffer.capacity();
        if (i > byteBuffer.capacity()) {
            throw new IllegalArgumentException("end > capacity: " + i + " > " + iCapacity);
        }
        int iLimit = byteBuffer.limit();
        int iPosition = byteBuffer.position();
        try {
            byteBuffer.position(0);
            byteBuffer.limit(i);
            byteBuffer.position(8);
            ByteBuffer byteBufferSlice = byteBuffer.slice();
            byteBufferSlice.order(byteBuffer.order());
            return byteBufferSlice;
        } finally {
            byteBuffer.position(0);
            byteBuffer.limit(iLimit);
            byteBuffer.position(iPosition);
        }
    }
}
