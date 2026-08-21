package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.UUID;

public final class j {

    static class a implements b {
        final Map a;

        a(Map r1) {
            this.a = r1;
        }

        @Override
        public g a(Map<Integer, ByteBuffer> r5) {
            Map r0 = this.a;
            if (r0 != null) goto L5;
        L7:
            g r02 = new g();
            Iterator<Map.Entry<Integer, ByteBuffer>> r52 = r5.entrySet().iterator();
        L9:
            if (r52.hasNext() == false) goto L11;
            Map.Entry<Integer, ByteBuffer> r1 = r52.next();
            r02.a(new h(r1.getKey().intValue(), r1.getValue()));
            goto L9
        L11:
            return r02;
        L5:
            if (r0.isEmpty() == true) goto L7;
            r5.putAll(this.a);
            goto L7
        }
    }

    interface b {
        g a(Map<Integer, ByteBuffer> r1);
    }

    public static void a(File r3, int r4, String r5, boolean r6) throws IOException, f {
        byte[] r52 = r5.getBytes("UTF-8");
        ByteBuffer r0 = ByteBuffer.allocate(r52.length);
        r0.order(ByteOrder.LITTLE_ENDIAN);
        r0.put(r52, 0, r52.length);
        r0.flip();
        a(r3, r4, r0, r6);
    }

    public static void a(File r1, int r2, ByteBuffer r3, boolean r4) throws IOException, f {
        HashMap r0 = new HashMap();
        r0.put(Integer.valueOf(r2), r3);
        a(r1, r0, r4);
    }

    public static void a(File r1, Map<Integer, ByteBuffer> r2, boolean r3) throws IOException, f {
        a(r1, new a(r2), r3);
    }

    static void a(File r16, b r17, boolean r18) throws IOException, f {
        FileChannel r1 = null;
        FileOutputStream r12 = null;
        FileInputStream r13 = null;
        r1 = null;
        RandomAccessFile r2 = new RandomAccessFile(r16, "rw");     // Catch: Throwable -> L56
        FileChannel r4 = r2.getChannel();     // Catch: Throwable -> L54
        long r5 = com.bianfeng.ymnsdk.gongxiang.a.c(r4);     // Catch: Throwable -> L52
        long r7 = com.bianfeng.ymnsdk.gongxiang.a.b(r4, r5);     // Catch: Throwable -> L52
        d<ByteBuffer, Long> r0 = com.bianfeng.ymnsdk.gongxiang.a.a(r4, r7);     // Catch: Throwable -> L52
        ByteBuffer r9 = r0.a();     // Catch: Throwable -> L52
        long r10 = r0.b().longValue();     // Catch: Throwable -> L52
        Map<Integer, ByteBuffer> r02 = com.bianfeng.ymnsdk.gongxiang.a.b(r9);     // Catch: Throwable -> L52
        if (r02.get(1896449818) == null) goto L51;
        g r03 = r17.a(r02);     // Catch: Throwable -> L52
        if (r10 != 0) goto L10;
    L46:
        if (r4 == null) goto L48;
        r4.close();
    L48:
        r2.close();
        return;
    L10:
        if (r7 == 0) goto L46;
        r2.seek(r7);     // Catch: Throwable -> L52
        if (r18 == false) goto L27;
        File r132 = new File(r16.getParent(), UUID.randomUUID().toString());     // Catch: Throwable -> L52
        FileOutputStream r3 = new FileOutputStream(r132);     // Catch: Throwable -> L23
        byte[] r14 = new byte[1024];     // Catch: Throwable -> L21
    L16:
        int r15 = r2.read(r14);     // Catch: Throwable -> L21
        if (r15 <= 0) goto L20;
        r3.write(r14, 0, r15);     // Catch: Throwable -> L21
        goto L16
    L20:
        r3.close();     // Catch: Throwable -> L52
        byte[] r32 = null;
    L28:
        r4.position(r10);     // Catch: Throwable -> L52
        long r142 = r03.a(r2);     // Catch: Throwable -> L52
        if (r18 == true) goto L66;
        r2.write(r32);     // Catch: Throwable -> L52
    L45:
        r2.setLength(r2.getFilePointer());     // Catch: Throwable -> L52
        r2.seek((r4.size() - r5) - 6);     // Catch: Throwable -> L52
        ByteBuffer r04 = ByteBuffer.allocate(4);     // Catch: Throwable -> L52
        r04.order(ByteOrder.LITTLE_ENDIAN);     // Catch: Throwable -> L52
        r04.putInt((int) (((r142 + r7) + 8) - (r7 - r10)));     // Catch: Throwable -> L52
        r04.flip();     // Catch: Throwable -> L52
        r2.write(r04.array());     // Catch: Throwable -> L52
        goto L46
    L66:
        FileInputStream r33 = new FileInputStream(r132);     // Catch: Throwable -> L39
        byte[] r05 = new byte[1024];     // Catch: Throwable -> L37
    L32:
        int r19 = r33.read(r05);     // Catch: Throwable -> L37
        if (r19 <= 0) goto L36;
        r2.write(r05, 0, r19);     // Catch: Throwable -> L37
        goto L32
    L36:
        r33.close();     // Catch: Throwable -> L52
        r132.delete();     // Catch: Throwable -> L52
    L37:
        th = th;
        r13 = r33;
    L40:
        if (r13 == null) goto L42;
        r13.close();     // Catch: Throwable -> L52
    L42:
        r132.delete();     // Catch: Throwable -> L52
        throw th;     // Catch: Throwable -> L52
    L39:
        th = th;
    L21:
        th = th;
        r12 = r3;
    L24:
        if (r12 == null) goto L26;
        r12.close();     // Catch: Throwable -> L52
    L26:
        throw th;     // Catch: Throwable -> L52
    L23:
        th = th;
        goto L24
    L27:
        r32 = new byte[(int) (r4.size() - r7)];     // Catch: Throwable -> L52
        r2.read(r32);     // Catch: Throwable -> L52
        r132 = null;
        goto L28
    L51:
        throw new IOException("No APK Signature Scheme v2 block in APK Signing Block");     // Catch: Throwable -> L52
    L52:
        th = th;
        r1 = r4;
    L58:
        if (r1 == null) goto L60;
        r1.close();
    L60:
        if (r2 == null) goto L62;
        r2.close();
    L62:
        throw th;
    L54:
        th = th;
    L56:
        th = th;
        r2 = null;
        goto L58
    }
}
