package com.bianfeng.ymnsdk.gongxiang;

import com.bianfeng.afext.read.ApkUtil;
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
import java.util.Set;
import java.util.UUID;

public final class j {

    interface b {
        g a(Map<Integer, ByteBuffer> map);
    }

    public static void a(File apkFile, int id, String string, boolean lowMemory) throws Throwable {
        byte[] bytes = string.getBytes("UTF-8");
        ByteBuffer byteBuffer = ByteBuffer.allocate(bytes.length);
        byteBuffer.order(ByteOrder.LITTLE_ENDIAN);
        byteBuffer.put(bytes, 0, bytes.length);
        byteBuffer.flip();
        a(apkFile, id, byteBuffer, lowMemory);
    }

    public static void a(File apkFile, int id, ByteBuffer buffer, boolean lowMemory) throws Throwable {
        Map<Integer, ByteBuffer> idValues = new HashMap<>();
        idValues.put(Integer.valueOf(id), buffer);
        a(apkFile, idValues, lowMemory);
    }

    static class a implements b {
        final Map a;

        a(Map map) {
            this.a = map;
        }

        @Override
        public g a(Map<Integer, ByteBuffer> originIdValues) {
            Map map = this.a;
            if (map != null && !map.isEmpty()) {
                originIdValues.putAll(this.a);
            }
            g apkSigningBlock = new g();
            Set<Map.Entry<Integer, ByteBuffer>> entrySet = originIdValues.entrySet();
            for (Map.Entry<Integer, ByteBuffer> entry : entrySet) {
                h payload = new h(entry.getKey().intValue(), entry.getValue());
                apkSigningBlock.a(payload);
            }
            return apkSigningBlock;
        }
    }

    public static void a(File apkFile, Map<Integer, ByteBuffer> idValues, boolean lowMemory) throws Throwable {
        a(apkFile, new a(idValues), lowMemory);
    }

    /* JADX WARN: Generic types in debug info not equals: com.bianfeng.ymnsdk.gongxiang.d != com.bianfeng.afext.read.Pair<java.nio.ByteBuffer, java.lang.Long> */
    static void a(File apkFile, b handler, boolean lowMemory) throws Throwable {
        long commentLength;
        long centralDirStartOffset;
        ByteBuffer apkSigningBlock2;
        long apkSigningBlockOffset;
        Map<Integer, ByteBuffer> originIdValues;
        ByteBuffer apkSignatureSchemeV2Block;
        byte[] centralDirBytes;
        File tempCentralBytesFile;
        RandomAccessFile fIn = null;
        FileChannel fileChannel = null;
        try {
            fIn = new RandomAccessFile(apkFile, "rw");
            fileChannel = fIn.getChannel();
            commentLength = com.bianfeng.ymnsdk.gongxiang.a.c(fileChannel);
            centralDirStartOffset = com.bianfeng.ymnsdk.gongxiang.a.b(fileChannel, commentLength);
            d<ByteBuffer, Long> dVarA = com.bianfeng.ymnsdk.gongxiang.a.a(fileChannel, centralDirStartOffset);
            apkSigningBlock2 = dVarA.a();
            apkSigningBlockOffset = dVarA.b().longValue();
            originIdValues = com.bianfeng.ymnsdk.gongxiang.a.b(apkSigningBlock2);
            apkSignatureSchemeV2Block = originIdValues.get(Integer.valueOf(ApkUtil.APK_SIGNATURE_SCHEME_V2_BLOCK_ID));
        } catch (Throwable th) {
            th = th;
        }
        try {
            if (apkSignatureSchemeV2Block == null) {
                throw new IOException("No APK Signature Scheme v2 block in APK Signing Block");
            }
            g apkSigningBlock = handler.a(originIdValues);
            if (apkSigningBlockOffset != 0 && centralDirStartOffset != 0) {
                fIn.seek(centralDirStartOffset);
                if (lowMemory) {
                    File tempCentralBytesFile2 = new File(apkFile.getParent(), UUID.randomUUID().toString());
                    FileOutputStream outStream = null;
                    try {
                        outStream = new FileOutputStream(tempCentralBytesFile2);
                        try {
                            byte[] buffer = new byte[1024];
                            while (true) {
                                int len = fIn.read(buffer);
                                if (len <= 0) {
                                    break;
                                }
                                ByteBuffer apkSigningBlock22 = apkSigningBlock2;
                                try {
                                    outStream.write(buffer, 0, len);
                                    apkSigningBlock2 = apkSigningBlock22;
                                } catch (Throwable th2) {
                                    th = th2;
                                    if (outStream != null) {
                                        outStream.close();
                                    }
                                    throw th;
                                }
                            }
                            outStream.close();
                            centralDirBytes = null;
                            tempCentralBytesFile = tempCentralBytesFile2;
                        } catch (Throwable th3) {
                            th = th3;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                    }
                } else {
                    byte[] centralDirBytes2 = new byte[(int) (fileChannel.size() - centralDirStartOffset)];
                    fIn.read(centralDirBytes2);
                    centralDirBytes = centralDirBytes2;
                    tempCentralBytesFile = null;
                }
                fileChannel.position(apkSigningBlockOffset);
                long length = apkSigningBlock.a(fIn);
                if (lowMemory) {
                    FileInputStream inputStream = null;
                    try {
                        inputStream = new FileInputStream(tempCentralBytesFile);
                        byte[] buffer2 = new byte[1024];
                        while (true) {
                            int len2 = inputStream.read(buffer2);
                            if (len2 <= 0) {
                                break;
                            }
                            Map<Integer, ByteBuffer> originIdValues2 = originIdValues;
                            ByteBuffer apkSignatureSchemeV2Block2 = apkSignatureSchemeV2Block;
                            try {
                                fIn.write(buffer2, 0, len2);
                                apkSignatureSchemeV2Block = apkSignatureSchemeV2Block2;
                                originIdValues = originIdValues2;
                            } catch (Throwable th5) {
                                th = th5;
                                if (inputStream != null) {
                                    inputStream.close();
                                }
                                tempCentralBytesFile.delete();
                                throw th;
                            }
                        }
                        inputStream.close();
                        tempCentralBytesFile.delete();
                    } catch (Throwable th6) {
                        th = th6;
                    }
                } else {
                    fIn.write(centralDirBytes);
                }
                fIn.setLength(fIn.getFilePointer());
                fIn.seek((fileChannel.size() - commentLength) - 6);
                ByteBuffer temp = ByteBuffer.allocate(4);
                temp.order(ByteOrder.LITTLE_ENDIAN);
                temp.putInt((int) (((centralDirStartOffset + length) + 8) - (centralDirStartOffset - apkSigningBlockOffset)));
                temp.flip();
                fIn.write(temp.array());
            }
            if (fileChannel != null) {
                fileChannel.close();
            }
            fIn.close();
        } catch (Throwable th7) {
            th = th7;
            if (fileChannel != null) {
                fileChannel.close();
            }
            if (fIn != null) {
                fIn.close();
            }
            throw th;
        }
    }
}
