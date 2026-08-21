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
import java.util.Map;
import java.util.UUID;

public final class j {

    static class a implements b {
        final Map a;

        a(Map map) {
            this.a = map;
        }

        @Override
        public g a(Map<Integer, ByteBuffer> map) {
            Map map2 = this.a;
            if (map2 != null && !map2.isEmpty()) {
                map.putAll(this.a);
            }
            g gVar = new g();
            for (Map.Entry<Integer, ByteBuffer> entry : map.entrySet()) {
                gVar.a(new h(entry.getKey().intValue(), entry.getValue()));
            }
            return gVar;
        }
    }

    interface b {
        g a(Map<Integer, ByteBuffer> map);
    }

    public static void a(File file, int i, String str, boolean z) throws Throwable {
        byte[] bytes = str.getBytes("UTF-8");
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(bytes.length);
        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate.put(bytes, 0, bytes.length);
        byteBufferAllocate.flip();
        a(file, i, byteBufferAllocate, z);
    }

    public static void a(File file, int i, ByteBuffer byteBuffer, boolean z) throws Throwable {
        HashMap map = new HashMap();
        map.put(Integer.valueOf(i), byteBuffer);
        a(file, map, z);
    }

    public static void a(File file, Map<Integer, ByteBuffer> map, boolean z) throws Throwable {
        a(file, new a(map), z);
    }

    static void a(File file, b bVar, boolean z) throws Throwable {
        RandomAccessFile randomAccessFile;
        byte[] bArr;
        File file2;
        FileChannel fileChannel = null;
        FileOutputStream fileOutputStream = null;
        FileInputStream fileInputStream = null;
        fileChannel = null;
        try {
            randomAccessFile = new RandomAccessFile(file, "rw");
            try {
                FileChannel channel = randomAccessFile.getChannel();
                try {
                    long jC = com.bianfeng.ymnsdk.gongxiang.a.c(channel);
                    long jB = com.bianfeng.ymnsdk.gongxiang.a.b(channel, jC);
                    d<ByteBuffer, Long> dVarA = com.bianfeng.ymnsdk.gongxiang.a.a(channel, jB);
                    ByteBuffer byteBufferA = dVarA.a();
                    long jLongValue = dVarA.b().longValue();
                    Map<Integer, ByteBuffer> mapB = com.bianfeng.ymnsdk.gongxiang.a.b(byteBufferA);
                    if (mapB.get(1896449818) != null) {
                        g gVarA = bVar.a(mapB);
                        if (jLongValue != 0 && jB != 0) {
                            randomAccessFile.seek(jB);
                            if (z) {
                                file2 = new File(file.getParent(), UUID.randomUUID().toString());
                                try {
                                    FileOutputStream fileOutputStream2 = new FileOutputStream(file2);
                                    try {
                                        byte[] bArr2 = new byte[1024];
                                        while (true) {
                                            int i = randomAccessFile.read(bArr2);
                                            if (i <= 0) {
                                                break;
                                            } else {
                                                fileOutputStream2.write(bArr2, 0, i);
                                            }
                                        }
                                        fileOutputStream2.close();
                                        bArr = null;
                                    } catch (Throwable th) {
                                        th = th;
                                        fileOutputStream = fileOutputStream2;
                                        if (fileOutputStream != null) {
                                            fileOutputStream.close();
                                        }
                                        throw th;
                                    }
                                } catch (Throwable th2) {
                                    th = th2;
                                }
                            } else {
                                bArr = new byte[(int) (channel.size() - jB)];
                                randomAccessFile.read(bArr);
                                file2 = null;
                            }
                            channel.position(jLongValue);
                            long jA = gVarA.a(randomAccessFile);
                            if (z) {
                                try {
                                    FileInputStream fileInputStream2 = new FileInputStream(file2);
                                    try {
                                        byte[] bArr3 = new byte[1024];
                                        while (true) {
                                            int i2 = fileInputStream2.read(bArr3);
                                            if (i2 <= 0) {
                                                break;
                                            } else {
                                                randomAccessFile.write(bArr3, 0, i2);
                                            }
                                        }
                                        fileInputStream2.close();
                                        file2.delete();
                                    } catch (Throwable th3) {
                                        th = th3;
                                        fileInputStream = fileInputStream2;
                                        if (fileInputStream != null) {
                                            fileInputStream.close();
                                        }
                                        file2.delete();
                                        throw th;
                                    }
                                } catch (Throwable th4) {
                                    th = th4;
                                }
                            } else {
                                randomAccessFile.write(bArr);
                            }
                            randomAccessFile.setLength(randomAccessFile.getFilePointer());
                            randomAccessFile.seek((channel.size() - jC) - 6);
                            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(4);
                            byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
                            byteBufferAllocate.putInt((int) (((jA + jB) + 8) - (jB - jLongValue)));
                            byteBufferAllocate.flip();
                            randomAccessFile.write(byteBufferAllocate.array());
                        }
                        if (channel != null) {
                            channel.close();
                        }
                        randomAccessFile.close();
                        return;
                    }
                    throw new IOException("No APK Signature Scheme v2 block in APK Signing Block");
                } catch (Throwable th5) {
                    th = th5;
                    fileChannel = channel;
                    if (fileChannel != null) {
                        fileChannel.close();
                    }
                    if (randomAccessFile != null) {
                        randomAccessFile.close();
                    }
                    throw th;
                }
            } catch (Throwable th6) {
                th = th6;
            }
        } catch (Throwable th7) {
            th = th7;
            randomAccessFile = null;
        }
    }
}
