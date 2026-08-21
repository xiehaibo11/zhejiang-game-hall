package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Arrays;
import java.util.Map;

public final class e {
    public static byte[] a(File file, int i) {
        ByteBuffer byteBuffer;
        Map<Integer, ByteBuffer> mapA = a(file);
        if (mapA == null || (byteBuffer = mapA.get(Integer.valueOf(i))) == null) {
            return null;
        }
        return a(byteBuffer);
    }

    public static String b(File file, int i) {
        byte[] bArrA = a(file, i);
        if (bArrA == null) {
            return null;
        }
        try {
            return new String(bArrA, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    private static byte[] a(ByteBuffer byteBuffer) {
        byte[] bArrArray = byteBuffer.array();
        int iArrayOffset = byteBuffer.arrayOffset();
        return Arrays.copyOfRange(bArrArray, byteBuffer.position() + iArrayOffset, iArrayOffset + byteBuffer.limit());
    }

    private static Map<Integer, ByteBuffer> a(File file) {
        Throwable th;
        FileChannel channel;
        RandomAccessFile randomAccessFile;
        Map<Integer, ByteBuffer> mapB = null;
        try {
            try {
                randomAccessFile = new RandomAccessFile(file, "r");
                try {
                    channel = randomAccessFile.getChannel();
                    try {
                        mapB = a.b(a.a(channel).a());
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
                        return mapB;
                    } catch (Throwable th2) {
                        th = th2;
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
                } catch (Throwable th3) {
                    th = th3;
                    channel = null;
                }
            } catch (f | IOException unused7) {
            }
        } catch (IOException unused8) {
            channel = null;
            randomAccessFile = null;
        } catch (Throwable th4) {
            th = th4;
            channel = null;
            randomAccessFile = null;
        }
        randomAccessFile.close();
        return mapB;
    }
}
