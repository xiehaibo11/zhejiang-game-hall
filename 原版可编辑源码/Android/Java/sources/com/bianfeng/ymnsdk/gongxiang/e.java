package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.Map;

public final class e {
    public static String b(File apkFile, int id) throws f {
        byte[] bytes = a(apkFile, id);
        if (bytes == null) {
            return null;
        }
        try {
            return new String(bytes, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static byte[] a(File apkFile, int id) throws f {
        ByteBuffer byteBuffer;
        Map<Integer, ByteBuffer> idValues = a(apkFile);
        if (idValues == null || (byteBuffer = idValues.get(Integer.valueOf(id))) == null) {
            return null;
        }
        return a(byteBuffer);
    }

    private static byte[] a(ByteBuffer byteBuffer) {
        byte[] array = byteBuffer.array();
        int arrayOffset = byteBuffer.arrayOffset();
        return Arrays.copyOfRange(array, byteBuffer.position() + arrayOffset, byteBuffer.limit() + arrayOffset);
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:14:0x002d
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    private static java.util.Map<java.lang.Integer, java.nio.ByteBuffer> a(java.io.File r5) throws com.bianfeng.ymnsdk.gongxiang.f {
        /*
            r0 = 0
            r1 = 0
            r2 = 0
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.lang.String r4 = "r"
            r3.<init>(r5, r4)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r1 = r3
            java.nio.channels.FileChannel r3 = r1.getChannel()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r2 = r3
            com.bianfeng.ymnsdk.gongxiang.d r3 = com.bianfeng.ymnsdk.gongxiang.a.a(r2)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.lang.Object r3 = r3.a()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.nio.ByteBuffer r3 = (java.nio.ByteBuffer) r3     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            java.util.Map r4 = com.bianfeng.ymnsdk.gongxiang.a.b(r3)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L44
            r0 = r4
            if (r2 == 0) goto L27
            r2.close()     // Catch: java.io.IOException -> L25 com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L27
        L25:
            r3 = move-exception
            goto L28
        L27:
        L28:
            r1.close()     // Catch: java.io.IOException -> L2d com.bianfeng.ymnsdk.gongxiang.f -> L4b
        L2c:
            goto L56
        L2d:
            r3 = move-exception
            goto L56
        L2f:
            r3 = move-exception
            if (r2 == 0) goto L38
            r2.close()     // Catch: java.io.IOException -> L36 com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L38
        L36:
            r4 = move-exception
            goto L39
        L38:
        L39:
            if (r1 == 0) goto L41
            r1.close()     // Catch: java.io.IOException -> L3f com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L41
        L3f:
            r4 = move-exception
            goto L42
        L41:
        L42:
            throw r3     // Catch: com.bianfeng.ymnsdk.gongxiang.f -> L4b
        L44:
            r3 = move-exception
            if (r2 == 0) goto L4f
            r2.close()     // Catch: com.bianfeng.ymnsdk.gongxiang.f -> L4b java.io.IOException -> L4d
            goto L4f
        L4b:
            r1 = move-exception
            goto L57
        L4d:
            r3 = move-exception
            goto L50
        L4f:
        L50:
            if (r1 == 0) goto L2c
            r1.close()     // Catch: java.io.IOException -> L2d com.bianfeng.ymnsdk.gongxiang.f -> L4b
            goto L2c
        L56:
        L57:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.gongxiang.e.a(java.io.File):java.util.Map");
    }
}
