package com.qihoo360.replugin.utils.basic;

import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class SecurityUtil {
    public static byte[] MD5(byte[] bArr) {
        MessageDigest messageDigest;
        try {
            messageDigest = MessageDigest.getInstance("MD5");
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            messageDigest = null;
        }
        if (messageDigest == null) {
            return null;
        }
        messageDigest.update(bArr);
        return messageDigest.digest();
    }

    public static String getMD5(byte[] bArr) {
        return ByteConvertor.bytesToHexString(MD5(bArr));
    }

    public static String getMD5(String str) {
        return str == null ? "" : getMD5(str.getBytes());
    }

    public static String getFileMD5(String str) {
        byte[] bArrMD5 = MD5(str);
        if (bArrMD5 == null) {
            return null;
        }
        return ByteConvertor.bytesToHexString(bArrMD5);
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x004c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String getMd5ByFile(File file) throws Throwable {
        FileInputStream fileInputStream;
        byte[] bArrDigest;
        FileInputStream fileInputStream2 = null;
        try {
            fileInputStream = new FileInputStream(file);
            try {
                try {
                    MappedByteBuffer map = fileInputStream.getChannel().map(FileChannel.MapMode.READ_ONLY, 0L, file.length());
                    MessageDigest messageDigest = MessageDigest.getInstance("MD5");
                    messageDigest.update(map);
                    bArrDigest = messageDigest.digest();
                    try {
                        fileInputStream.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                } catch (Exception e2) {
                    e = e2;
                    e.printStackTrace();
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                    }
                    bArrDigest = null;
                }
            } catch (Throwable th) {
                th = th;
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
                throw th;
            }
        } catch (Exception e5) {
            e = e5;
            fileInputStream = null;
        } catch (Throwable th2) {
            th = th2;
            if (fileInputStream2 != null) {
            }
            throw th;
        }
        if (bArrDigest == null) {
            return null;
        }
        return ByteConvertor.bytesToHexString(bArrDigest);
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:0|2|(5:38|3|4|36|5)|(3:6|(1:8)(1:40)|(1:23)(2:24|25))|9|32|10|(0)(0)|(1:(0))) */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0037 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0038  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String getMD5(InputStream inputStream) throws Throwable {
        BufferedInputStream bufferedInputStream;
        byte[] bArrDigest;
        MessageDigest messageDigest;
        byte[] bArr;
        BufferedInputStream bufferedInputStream2 = null;
        try {
            messageDigest = MessageDigest.getInstance("MD5");
            bufferedInputStream = new BufferedInputStream(inputStream);
            try {
                bArr = new byte[1024];
            } catch (Exception unused) {
                if (bufferedInputStream != null) {
                    try {
                        bufferedInputStream.close();
                    } catch (Exception unused2) {
                    }
                }
                bArrDigest = null;
            } catch (Throwable th) {
                th = th;
                bufferedInputStream2 = bufferedInputStream;
                if (bufferedInputStream2 != null) {
                    try {
                        bufferedInputStream2.close();
                    } catch (Exception unused3) {
                    }
                }
                throw th;
            }
        } catch (Exception unused4) {
            bufferedInputStream = null;
        } catch (Throwable th2) {
            th = th2;
        }
        while (true) {
            int i = bufferedInputStream.read(bArr);
            if (i == -1) {
                break;
            }
            messageDigest.update(bArr, 0, i);
            if (bArrDigest != null) {
                return null;
            }
            return ByteConvertor.bytesToHexString(bArrDigest);
        }
        bArrDigest = messageDigest.digest();
        bufferedInputStream.close();
        if (bArrDigest != null) {
        }
    }

    public static byte[] MD5(String str) {
        return MD5(new File(str));
    }

    public static byte[] MD5(File file) throws Throwable {
        Throwable th;
        FileInputStream fileInputStreamOpenInputStream;
        try {
            fileInputStreamOpenInputStream = FileUtils.openInputStream(file);
            try {
                byte[] bArrMD5 = MD5(fileInputStreamOpenInputStream);
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                return bArrMD5;
            } catch (Exception unused) {
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                return null;
            } catch (Throwable th2) {
                th = th2;
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                throw th;
            }
        } catch (Exception unused2) {
            fileInputStreamOpenInputStream = null;
        } catch (Throwable th3) {
            th = th3;
            fileInputStreamOpenInputStream = null;
        }
    }

    public static final byte[] MD5(InputStream inputStream) throws NoSuchAlgorithmException, IOException {
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        byte[] bArr = new byte[4096];
        while (true) {
            int i = inputStream.read(bArr);
            if (i < 0) {
                return messageDigest.digest();
            }
            if (i > 0) {
                messageDigest.update(bArr, 0, i);
            }
        }
    }
}
