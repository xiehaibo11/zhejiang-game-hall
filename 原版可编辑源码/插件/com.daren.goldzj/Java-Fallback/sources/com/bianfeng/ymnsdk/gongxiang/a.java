package com.bianfeng.ymnsdk.gongxiang;

import java.io.IOException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.util.LinkedHashMap;
import java.util.Map;

public final class a {
    public static d<ByteBuffer, Long> a(FileChannel r2) throws IOException, f {
        return a(r2, b(r2));
    }

    public static long b(FileChannel r2) throws IOException {
        return b(r2, c(r2));
    }

    public static long c(FileChannel r11) throws IOException {
        long r0 = r11.size();
        if (r0 < 22) goto L17;
        long r02 = r0 - 22;
        long r2 = Math.min(r02, 65535);
        int r5 = 0;
    L5:
        long r6 = r5;
        if (r6 > r2) goto L15;
        long r62 = r02 - r6;
        ByteBuffer r8 = ByteBuffer.allocate(4);
        r11.position(r62);
        r11.read(r8);
        r8.order(ByteOrder.LITTLE_ENDIAN);
        if (r8.getInt(0) != 101010256) goto L13;
        ByteBuffer r82 = ByteBuffer.allocate(2);
        r11.position(r62 + 20);
        r11.read(r82);
        r82.order(ByteOrder.LITTLE_ENDIAN);
        short r63 = r82.getShort(0);
        if (r63 != r5) goto L13;
        return r63;
    L13:
        r5 = r5 + 1;
        goto L5
    L15:
        throw new IOException("ZIP End of Central Directory (EOCD) record not found");
    L17:
        throw new IOException("APK too small for ZIP End of Central Directory (EOCD) record");
    }

    public static long b(FileChannel r3, long r4) throws IOException {
        ByteBuffer r0 = ByteBuffer.allocate(4);
        r0.order(ByteOrder.LITTLE_ENDIAN);
        r3.position((r3.size() - r4) - 6);
        r3.read(r0);
        return r0.getInt(0);
    }

    public static d<ByteBuffer, Long> a(FileChannel r7, long r8) throws IOException, f {
        if (r8 < 32) goto L27;
        r7.position(r8 - 24);
        ByteBuffer r0 = ByteBuffer.allocate(24);
        r7.read(r0);
        r0.order(ByteOrder.LITTLE_ENDIAN);
        if (r0.getLong(8) != 2334950737559900225L) goto L25;
        if (r0.getLong(16) != 3617552046287187010L) goto L25;
        long r2 = r0.getLong(0);
        if (r2 < r0.capacity()) goto L23;
        if (r2 > 2147483639) goto L23;
        int r02 = (int) (8 + r2);
        long r82 = r8 - ((long) r02);
        if (r82 < 0) goto L21;
        r7.position(r82);
        ByteBuffer r03 = ByteBuffer.allocate(r02);
        r7.read(r03);
        r03.order(ByteOrder.LITTLE_ENDIAN);
        long r4 = r03.getLong(0);
        if (r4 != r2) goto L19;
        return d.a(r03, Long.valueOf(r82));
    L19:
        throw new f("APK Signing Block sizes in header and footer do not match: " + r4 + " vs " + r2);
    L21:
        throw new f("APK Signing Block offset out of range: " + r82);
    L23:
        throw new f("APK Signing Block size out of range: " + r2);
    L25:
        throw new f("No APK Signing Block before ZIP Central Directory");
    L27:
        throw new f("APK too small for APK Signing Block. ZIP Central Directory offset: " + r8);
    }

    public static Map<Integer, ByteBuffer> b(ByteBuffer r10) throws f {
        a(r10);
        ByteBuffer r102 = a(r10, 8, r10.capacity() - 24);
        LinkedHashMap r0 = new LinkedHashMap();
        int r2 = 0;
    L4:
        if (r102.hasRemaining() == false) goto L20;
        r2 = r2 + 1;
        if (r102.remaining() < 8) goto L19;
        long r3 = r102.getLong();
        if (r3 < 4) goto L17;
        if (r3 > 2147483647L) goto L17;
        int r4 = (int) r3;
        int r32 = r102.position() + r4;
        if (r4 > r102.remaining()) goto L15;
        r0.put(Integer.valueOf(r102.getInt()), a(r102, r4 - 4));
        r102.position(r32);
        goto L4
    L15:
        throw new f("APK Signing Block entry #" + r2 + " size out of range: " + r4 + ", available: " + r102.remaining());
    L17:
        throw new f("APK Signing Block entry #" + r2 + " size out of range: " + r3);
    L19:
        throw new f("Insufficient data to read size of APK Signing Block entry #" + r2);
    L20:
        return r0;
    }

    private static ByteBuffer a(ByteBuffer r3, int r4, int r5) {
        if (r4 < 0) goto L18;
        if (r5 < r4) goto L16;
        int r0 = r3.capacity();
        if (r5 > r3.capacity()) goto L14;
        int r02 = r3.limit();
        int r1 = r3.position();
        r3.position(0);     // Catch: Throwable -> L10
        r3.limit(r5);     // Catch: Throwable -> L10
        r3.position(r4);     // Catch: Throwable -> L10
        ByteBuffer r42 = r3.slice();     // Catch: Throwable -> L10
        r42.order(r3.order());     // Catch: Throwable -> L10
        r3.position(0);
        r3.limit(r02);
        r3.position(r1);
        return r42;
    L10:
        th = move-exception;
        r3.position(0);
        r3.limit(r02);
        r3.position(r1);
        throw th;
    L14:
        throw new IllegalArgumentException("end > capacity: " + r5 + " > " + r0);
    L16:
        throw new IllegalArgumentException("end < start: " + r5 + " < " + r4);
    L18:
        throw new IllegalArgumentException("start: " + r4);
    }

    private static ByteBuffer a(ByteBuffer r3, int r4) throws BufferUnderflowException {
        if (r4 < 0) goto L16;
        int r0 = r3.limit();
        int r1 = r3.position();
        int r42 = r4 + r1;
        if (r42 < r1) goto L14;
        if (r42 > r0) goto L14;
        r3.limit(r42);
        ByteBuffer r12 = r3.slice();     // Catch: Throwable -> L10
        r12.order(r3.order());     // Catch: Throwable -> L10
        r3.position(r42);     // Catch: Throwable -> L10
        r3.limit(r0);
        return r12;
    L10:
        th = move-exception;
        r3.limit(r0);
        throw th;
    L14:
        throw new BufferUnderflowException();
    L16:
        throw new IllegalArgumentException("size: " + r4);
    }

    private static void a(ByteBuffer r1) {
        if (r1.order() != ByteOrder.LITTLE_ENDIAN) goto L6;
        return;
    L6:
        throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
    }
}
