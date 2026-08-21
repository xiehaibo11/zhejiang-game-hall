package com.bianfeng.afext.write;

import com.bianfeng.afext.read.ApkUtil;
import com.bianfeng.afext.read.Pair;
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

/* JADX INFO: loaded from: classes.dex */
public final class PayloadWriter {

    interface ApkSigningBlockHandler {
        ApkSigningBlock handle(Map<Integer, ByteBuffer> map);
    }

    private PayloadWriter() {
    }

    public static void put(File file, int i, String str) throws Throwable {
        put(file, i, str, false);
    }

    public static void put(File file, int i, String str, boolean z) throws Throwable {
        byte[] bytes = str.getBytes("UTF-8");
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(bytes.length);
        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
        byteBufferAllocate.put(bytes, 0, bytes.length);
        byteBufferAllocate.flip();
        put(file, i, byteBufferAllocate, z);
    }

    public static void put(File file, int i, ByteBuffer byteBuffer) throws Throwable {
        put(file, i, byteBuffer, false);
    }

    public static void put(File file, int i, ByteBuffer byteBuffer, boolean z) throws Throwable {
        HashMap map = new HashMap();
        map.put(Integer.valueOf(i), byteBuffer);
        putAll(file, map, z);
    }

    public static void putAll(File file, Map<Integer, ByteBuffer> map) throws Throwable {
        putAll(file, map, false);
    }

    public static void putAll(File file, final Map<Integer, ByteBuffer> map, boolean z) throws Throwable {
        handleApkSigningBlock(file, new ApkSigningBlockHandler() { // from class: com.bianfeng.afext.write.PayloadWriter.1
            @Override // com.bianfeng.afext.write.PayloadWriter.ApkSigningBlockHandler
            public ApkSigningBlock handle(Map<Integer, ByteBuffer> map2) {
                Map map3 = map;
                if (map3 != null && !map3.isEmpty()) {
                    map2.putAll(map);
                }
                ApkSigningBlock apkSigningBlock = new ApkSigningBlock();
                for (Map.Entry<Integer, ByteBuffer> entry : map2.entrySet()) {
                    apkSigningBlock.addPayload(new ApkSigningPayload(entry.getKey().intValue(), entry.getValue()));
                }
                return apkSigningBlock;
            }
        }, z);
    }

    public static void remove(File file, int i) throws Throwable {
        remove(file, i, false);
    }

    public static void remove(File file, final int i, boolean z) throws Throwable {
        handleApkSigningBlock(file, new ApkSigningBlockHandler() { // from class: com.bianfeng.afext.write.PayloadWriter.2
            @Override // com.bianfeng.afext.write.PayloadWriter.ApkSigningBlockHandler
            public ApkSigningBlock handle(Map<Integer, ByteBuffer> map) {
                ApkSigningBlock apkSigningBlock = new ApkSigningBlock();
                for (Map.Entry<Integer, ByteBuffer> entry : map.entrySet()) {
                    if (entry.getKey().intValue() != i) {
                        apkSigningBlock.addPayload(new ApkSigningPayload(entry.getKey().intValue(), entry.getValue()));
                    }
                }
                return apkSigningBlock;
            }
        }, z);
    }

    static void handleApkSigningBlock(File file, ApkSigningBlockHandler apkSigningBlockHandler, boolean z) throws Throwable {
        RandomAccessFile randomAccessFile;
        FileChannel channel;
        byte[] bArr;
        File file2;
        FileInputStream fileInputStream;
        FileOutputStream fileOutputStream;
        try {
            randomAccessFile = new RandomAccessFile(file, "rw");
            try {
                channel = randomAccessFile.getChannel();
                try {
                    long commentLength = ApkUtil.getCommentLength(channel);
                    long jFindCentralDirStartOffset = ApkUtil.findCentralDirStartOffset(channel, commentLength);
                    Pair<ByteBuffer, Long> pairFindApkSigningBlock = ApkUtil.findApkSigningBlock(channel, jFindCentralDirStartOffset);
                    ByteBuffer first = pairFindApkSigningBlock.getFirst();
                    long jLongValue = pairFindApkSigningBlock.getSecond().longValue();
                    Map<Integer, ByteBuffer> mapFindIdValues = ApkUtil.findIdValues(first);
                    if (mapFindIdValues.get(Integer.valueOf(ApkUtil.APK_SIGNATURE_SCHEME_V2_BLOCK_ID)) == null) {
                        throw new IOException("No APK Signature Scheme v2 block in APK Signing Block");
                    }
                    ApkSigningBlock apkSigningBlockHandle = apkSigningBlockHandler.handle(mapFindIdValues);
                    if (jLongValue != 0 && jFindCentralDirStartOffset != 0) {
                        randomAccessFile.seek(jFindCentralDirStartOffset);
                        if (z) {
                            file2 = new File(file.getParent(), UUID.randomUUID().toString());
                            try {
                                fileOutputStream = new FileOutputStream(file2);
                                try {
                                    byte[] bArr2 = new byte[1024];
                                    while (true) {
                                        int i = randomAccessFile.read(bArr2);
                                        if (i <= 0) {
                                            break;
                                        } else {
                                            fileOutputStream.write(bArr2, 0, i);
                                        }
                                    }
                                    fileOutputStream.close();
                                    bArr = null;
                                } catch (Throwable th) {
                                    th = th;
                                    if (fileOutputStream != null) {
                                        fileOutputStream.close();
                                    }
                                    throw th;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                fileOutputStream = null;
                            }
                        } else {
                            bArr = new byte[(int) (channel.size() - jFindCentralDirStartOffset)];
                            randomAccessFile.read(bArr);
                            file2 = null;
                        }
                        channel.position(jLongValue);
                        long jWriteApkSigningBlock = apkSigningBlockHandle.writeApkSigningBlock(randomAccessFile);
                        if (z) {
                            try {
                                fileInputStream = new FileInputStream(file2);
                                try {
                                    byte[] bArr3 = new byte[1024];
                                    while (true) {
                                        int i2 = fileInputStream.read(bArr3);
                                        if (i2 <= 0) {
                                            break;
                                        } else {
                                            randomAccessFile.write(bArr3, 0, i2);
                                        }
                                    }
                                    fileInputStream.close();
                                    file2.delete();
                                } catch (Throwable th3) {
                                    th = th3;
                                    if (fileInputStream != null) {
                                        fileInputStream.close();
                                    }
                                    file2.delete();
                                    throw th;
                                }
                            } catch (Throwable th4) {
                                th = th4;
                                fileInputStream = null;
                            }
                        } else {
                            randomAccessFile.write(bArr);
                        }
                        randomAccessFile.setLength(randomAccessFile.getFilePointer());
                        randomAccessFile.seek((channel.size() - commentLength) - 6);
                        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(4);
                        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
                        byteBufferAllocate.putInt((int) (((jWriteApkSigningBlock + jFindCentralDirStartOffset) + 8) - (jFindCentralDirStartOffset - jLongValue)));
                        byteBufferAllocate.flip();
                        randomAccessFile.write(byteBufferAllocate.array());
                    }
                    if (channel != null) {
                        channel.close();
                    }
                    randomAccessFile.close();
                } catch (Throwable th5) {
                    th = th5;
                    if (channel != null) {
                        channel.close();
                    }
                    if (randomAccessFile != null) {
                        randomAccessFile.close();
                    }
                    throw th;
                }
            } catch (Throwable th6) {
                th = th6;
                channel = null;
            }
        } catch (Throwable th7) {
            th = th7;
            randomAccessFile = null;
            channel = null;
        }
    }
}
