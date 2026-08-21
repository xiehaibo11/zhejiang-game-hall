package com.qihoo360.replugin.component.utils;

import android.support.v4.view.MotionEventCompat;
import com.sigmob.sdk.archives.tar.e;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Arrays;
import java.util.zip.GZIPInputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ApkCommentReader {
    private static final byte[] MAGIC = {40, 77, e.Q, 45, 80, e.P, 71, 41};

    public static String readComment(String str) throws Throwable {
        RandomAccessFile randomAccessFile;
        RandomAccessFile randomAccessFile2 = null;
        try {
            try {
                randomAccessFile = new RandomAccessFile(str, "r");
            } catch (IOException e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            String strDecompress = decompress(getComment(randomAccessFile));
            try {
                randomAccessFile.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return strDecompress;
        } catch (IOException e3) {
            e = e3;
            randomAccessFile2 = randomAccessFile;
            e.printStackTrace();
            if (randomAccessFile2 == null) {
                return "";
            }
            try {
                randomAccessFile2.close();
                return "";
            } catch (IOException e4) {
                e4.printStackTrace();
                return "";
            }
        } catch (Throwable th2) {
            th = th2;
            randomAccessFile2 = randomAccessFile;
            if (randomAccessFile2 != null) {
                try {
                    randomAccessFile2.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            }
            throw th;
        }
    }

    private static byte[] getComment(RandomAccessFile randomAccessFile) {
        if (randomAccessFile == null) {
            return null;
        }
        try {
            long length = randomAccessFile.length() - ((long) MAGIC.length);
            randomAccessFile.seek(length);
            byte[] bArr = new byte[MAGIC.length];
            randomAccessFile.readFully(bArr);
            if (!Arrays.equals(bArr, MAGIC)) {
                return null;
            }
            long j = length - 2;
            randomAccessFile.seek(j);
            byte[] bArr2 = new byte[2];
            randomAccessFile.readFully(bArr2);
            int i = (bArr2[0] & 255) | ((bArr2[1] << 8) & MotionEventCompat.ACTION_POINTER_INDEX_MASK);
            if (i > 0) {
                randomAccessFile.seek(j - ((long) i));
                byte[] bArr3 = new byte[i];
                randomAccessFile.readFully(bArr3);
                return bArr3;
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return null;
    }

    private static String decompress(byte[] bArr) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        if (bArr == null) {
            return "";
        }
        ByteArrayOutputStream byteArrayOutputStream2 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e) {
            e = e;
        }
        try {
            GZIPInputStream gZIPInputStream = new GZIPInputStream(new ByteArrayInputStream(bArr));
            byte[] bArr2 = new byte[256];
            while (true) {
                int i = gZIPInputStream.read(bArr2);
                if (i < 0) {
                    break;
                }
                byteArrayOutputStream.write(bArr2, 0, i);
            }
            String string = byteArrayOutputStream.toString("utf-8");
            try {
                byteArrayOutputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return string;
        } catch (IOException e3) {
            e = e3;
            byteArrayOutputStream2 = byteArrayOutputStream;
            e.printStackTrace();
            if (byteArrayOutputStream2 != null) {
                try {
                    byteArrayOutputStream2.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            return "";
        } catch (Throwable th2) {
            th = th2;
            byteArrayOutputStream2 = byteArrayOutputStream;
            if (byteArrayOutputStream2 != null) {
                try {
                    byteArrayOutputStream2.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            }
            throw th;
        }
    }
}
