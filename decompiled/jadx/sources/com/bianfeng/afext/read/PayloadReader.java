package com.bianfeng.afext.read;

import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Arrays;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class PayloadReader {
    private PayloadReader() {
    }

    public static String getString(File file, int i) {
        byte[] bArr = get(file, i);
        if (bArr == null) {
            return null;
        }
        try {
            return new String(bArr, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static byte[] get(File file, int i) {
        ByteBuffer byteBuffer;
        Map<Integer, ByteBuffer> all = getAll(file);
        if (all == null || (byteBuffer = all.get(Integer.valueOf(i))) == null) {
            return null;
        }
        return getBytes(byteBuffer);
    }

    private static byte[] getBytes(ByteBuffer byteBuffer) {
        byte[] bArrArray = byteBuffer.array();
        int iArrayOffset = byteBuffer.arrayOffset();
        return Arrays.copyOfRange(bArrArray, byteBuffer.position() + iArrayOffset, iArrayOffset + byteBuffer.limit());
    }

    private static Map<Integer, ByteBuffer> getAll(File file) {
        FileChannel channel;
        RandomAccessFile randomAccessFile;
        Map<Integer, ByteBuffer> mapFindIdValues = null;
        try {
            try {
                randomAccessFile = new RandomAccessFile(file, "r");
                try {
                    channel = randomAccessFile.getChannel();
                    try {
                        mapFindIdValues = ApkUtil.findIdValues(ApkUtil.findApkSigningBlock(channel).getFirst());
                        if (channel != null) {
                            try {
                                channel.close();
                            } catch (IOException unused) {
                            }
                        }
                    } catch (IOException unused2) {
                        if (channel != null) {
                            try {
                                channel.close();
                            } catch (IOException unused3) {
                            }
                        }
                        if (randomAccessFile != null) {
                        }
                        return mapFindIdValues;
                    } catch (Throwable th) {
                        th = th;
                        if (channel != null) {
                            try {
                                channel.close();
                            } catch (IOException unused4) {
                            }
                        }
                        if (randomAccessFile != null) {
                            try {
                                randomAccessFile.close();
                                throw th;
                            } catch (IOException unused5) {
                                throw th;
                            }
                        }
                        throw th;
                    }
                } catch (IOException unused6) {
                    channel = null;
                } catch (Throwable th2) {
                    th = th2;
                    channel = null;
                }
            } catch (SignatureNotFoundException | IOException unused7) {
            }
        } catch (IOException unused8) {
            channel = null;
            randomAccessFile = null;
        } catch (Throwable th3) {
            th = th3;
            channel = null;
            randomAccessFile = null;
        }
        randomAccessFile.close();
        return mapFindIdValues;
    }
}
