package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Arrays;
import java.util.Map;

public final class e {
    public static byte[] a(File r1, int r2) {
        Map<Integer, ByteBuffer> r12 = a(r1);
        if (r12 != null) goto L5;
        return null;
    L5:
        ByteBuffer r13 = r12.get(Integer.valueOf(r2));
        if (r13 != null) goto L9;
        return null;
    L9:
        return a(r13);
    }

    public static String b(File r2, int r3) {
        byte[] r22 = a(r2, r3);
        if (r22 != null) goto L10;
        return null;
    L10:
        return new String(r22, "UTF-8");
    L7:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    private static byte[] a(ByteBuffer r3) {
        byte[] r0 = r3.array();
        int r1 = r3.arrayOffset();
        return Arrays.copyOfRange(r0, r3.position() + r1, r1 + r3.limit());
    }

    private static Map<Integer, ByteBuffer> a(File r3) {
        Map<Integer, ByteBuffer> r0 = null;
        RandomAccessFile r1 = new RandomAccessFile(r3, "r");     // Catch: Throwable -> L14 IOException -> L23
        FileChannel r32 = r1.getChannel();     // Catch: Throwable -> L11 IOException -> L13
        r0 = a.b(a.a(r32).a());     // Catch: Throwable -> L9 IOException -> L34
        if (r32 != null) goto L38;
    L29:
        r1.close();     // Catch: Throwable -> L32
        goto L30
    L38:
        r32.close();     // Catch: IOException -> L31 Throwable -> L32
        goto L29
    L9:
        Throwable th = th;
    L16:
        if (r32 != null) goto L40;
    L20:
        if (r1 == null) goto L49;
        r1.close();     // Catch: IOException -> L33 Throwable -> L32
        throw th;     // Catch: Throwable -> L32
    L50:
        throw th;     // Catch: Throwable -> L32
    L49:
        throw th;     // Catch: Throwable -> L32
    L40:
        r32.close();     // Catch: IOException -> L19 Throwable -> L32
    L24:
        if (r32 != null) goto L42;
    L28:
        if (r1 == null) goto L30;
    L42:
        r32.close();     // Catch: IOException -> L27 Throwable -> L32
        goto L28
    L13:
        r32 = null;
    L11:
        th = th;
        r32 = null;
        goto L16
    L23:
        r32 = null;
        r1 = null;
    L14:
        th = move-exception;
        th = th;
        r32 = null;
        r1 = null;
    L30:
        return r0;
    }
}
