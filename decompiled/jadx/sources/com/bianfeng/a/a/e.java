package com.bianfeng.a.a;

import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Arrays;
import java.util.Map;

/* JADX INFO: compiled from: PayloadReader.java */
/* JADX INFO: loaded from: classes.dex */
public final class e {
    public static String a(File file, int i) {
        byte[] bArrB = b(file, i);
        if (bArrB == null) {
            return null;
        }
        try {
            return new String(bArrB, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static byte[] b(File file, int i) {
        ByteBuffer byteBuffer;
        Map<Integer, ByteBuffer> mapA = a(file);
        if (mapA == null || (byteBuffer = mapA.get(Integer.valueOf(i))) == null) {
            return null;
        }
        return a(byteBuffer);
    }

    private static byte[] a(ByteBuffer byteBuffer) {
        byte[] bArrArray = byteBuffer.array();
        int iArrayOffset = byteBuffer.arrayOffset();
        return Arrays.copyOfRange(bArrArray, byteBuffer.position() + iArrayOffset, iArrayOffset + byteBuffer.limit());
    }

    private static Map<Integer, ByteBuffer> a(File file) {
        FileChannel channel;
        RandomAccessFile randomAccessFile;
        Map<Integer, ByteBuffer> mapA = null;
        try {
            try {
                randomAccessFile = new RandomAccessFile(file, "r");
                try {
                    channel = randomAccessFile.getChannel();
                    try {
                        mapA = a.a(a.c(channel).a());
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
                        return mapA;
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
            } catch (f | IOException unused7) {
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
        return mapA;
    }
}
