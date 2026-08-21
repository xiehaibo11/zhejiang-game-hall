package com.ss.android.ttmd5;

import com.loc.at;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.security.MessageDigest;
import kotlin.UByte;

public class TTMd5 {
    private static final int DEFAULT_SAMPLE_COUNT = 9;
    private static final int DEFAULT_SAMPLE_SIZE = 8192;
    private static final char[] HEX_CHARS = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    private static final String PROTOCOL = "ttmd5";
    private static final String TAG = "TTMd5";
    private static final int VERSION_MAIN = 1;
    private static final int VERSION_SUB = 1;

    @Retention(RetentionPolicy.SOURCE)
    public @interface CHECK_MD5_STATUS {
        public static final int FILE_NOT_EXIST = 5;
        public static final int GET_FILE_MD5_ERROR = 6;
        public static final int MD5_EMPTY = 2;
        public static final int MD5_MATCH = 0;
        public static final int MD5_NOT_MATCH = 1;
        public static final int TTMD5_TAG_PARSER_ERROR = 4;
        public static final int TTMD5_VERSION_NOT_SUPPORT = 3;
        public static final int UNKNOWN_ERROR = 99;
    }

    public static String ttmd5(File file) {
        return ttmd5(file, 9, 8192L);
    }

    public static String ttmd5(File file, int i) {
        return ttmd5(file, i, 8192L);
    }

    public static String ttmd5(File file, int i, long j) {
        if (file != null) {
            try {
                if (file.exists()) {
                    return _ttmd5(file, i, j);
                }
            } catch (Throwable th) {
                th.printStackTrace();
                return "";
            }
        }
        return "";
    }

    public static String md5(File file) {
        return ttmd5(file, -1, -1L);
    }

    public static String ttmd5(IRandomAccess iRandomAccess) {
        return ttmd5(iRandomAccess, 9, 8192L);
    }

    public static String ttmd5(IRandomAccess iRandomAccess, int i) {
        return ttmd5(iRandomAccess, i, 8192L);
    }

    public static String ttmd5(IRandomAccess iRandomAccess, int i, long j) {
        if (iRandomAccess == null) {
            return "";
        }
        try {
            return _ttmd5(iRandomAccess, i, j);
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }

    public static int checkMd5(String str, File file) {
        return checkMd5(str, file, null);
    }

    public static int checkMd5(String str, File file, IRandomAccess iRandomAccess) {
        String str_ttmd5;
        if (str == null || str.length() == 0) {
            return 2;
        }
        try {
            if (iRandomAccess != null) {
                if (iRandomAccess.length() <= 0) {
                    try {
                        iRandomAccess.close();
                    } catch (Throwable unused) {
                    }
                    return 5;
                }
            } else if (file == null || !file.exists()) {
                return 5;
            }
            int i = -1;
            long j = -1;
            try {
                TTMd5Args tTMd5Args = parserTTMd5Args(str);
                if (tTMd5Args != null) {
                    if (tTMd5Args.versionMain > 1) {
                        return 3;
                    }
                    i = tTMd5Args.sampleCount;
                    j = tTMd5Args.sampleSize;
                }
                TTMd5Args tTMd5Args2 = null;
                try {
                    if (iRandomAccess != null) {
                        str_ttmd5 = _ttmd5(iRandomAccess, i, j);
                    } else {
                        str_ttmd5 = _ttmd5(file, i, j);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                    str_ttmd5 = null;
                }
                if (str_ttmd5 != null && str_ttmd5.length() != 0) {
                    if (tTMd5Args == null || (tTMd5Args.versionMain == 1 && tTMd5Args.versionSub == 1)) {
                        if (str_ttmd5.equals(str)) {
                            return 0;
                        }
                    } else if (tTMd5Args.realMd5 != null) {
                        try {
                            tTMd5Args2 = parserTTMd5Args(str_ttmd5);
                        } catch (Throwable unused2) {
                        }
                        if (tTMd5Args2 != null && tTMd5Args.sampleCount == tTMd5Args2.sampleCount && tTMd5Args.sampleSize == tTMd5Args2.sampleSize && tTMd5Args.realMd5.equals(tTMd5Args2.realMd5)) {
                            return 0;
                        }
                    }
                    return 1;
                }
                return 6;
            } catch (Throwable unused3) {
                return 4;
            }
        } catch (Throwable unused4) {
            return 99;
        }
    }

    public static int checkMd5(File file, File file2) {
        if (file == null || file2 == null) {
            return 5;
        }
        try {
            if (file.exists() && file2.exists()) {
                if (file == file2) {
                    return 0;
                }
                return _ttmd5(file, 9, 8192L).equals(_ttmd5(file2, 9, 8192L)) ? 0 : 1;
            }
            return 5;
        } catch (Throwable th) {
            th.printStackTrace();
            return 99;
        }
    }

    private static String _ttmd5(File file, int i, long j) throws Exception {
        return _ttmd5(new FileRandomAccess(file), i, j);
    }

    private static String _ttmd5(IRandomAccess iRandomAccess, int i, long j) throws Exception {
        long j2;
        int i2 = i;
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        if (messageDigest == null) {
            return "";
        }
        try {
            long length = iRandomAccess.length();
            if (i2 <= 0 || j <= 0 || ((long) i2) * j > (8 * length) / 10) {
                j2 = length;
                i2 = 1;
            } else {
                j2 = j;
            }
            byte[] bArr = new byte[8192];
            long j3 = 0;
            updateSample(iRandomAccess, messageDigest, bArr, 0L, j2);
            if (i2 > 2) {
                int i3 = i2 - 1;
                long j4 = (length - (((long) i2) * j2)) / ((long) i3);
                int i4 = 1;
                while (i4 < i3) {
                    j3 += j2 + j4;
                    updateSample(iRandomAccess, messageDigest, bArr, j3, j2);
                    i4++;
                    i3 = i3;
                }
            }
            if (i2 > 1) {
                updateSample(iRandomAccess, messageDigest, bArr, length - j2, j2);
            }
            String hexString = toHexString(messageDigest.digest());
            if (i2 == 1 && j2 == length) {
                return hexString;
            }
            String str = generateTTMd5Tag(i2, j2) + ";" + hexString;
            try {
                iRandomAccess.close();
            } catch (Throwable unused) {
            }
            return str;
        } finally {
            try {
                iRandomAccess.close();
            } catch (Throwable unused2) {
            }
        }
    }

    private static void updateSample(IRandomAccess iRandomAccess, MessageDigest messageDigest, byte[] bArr, long j, long j2) throws IOException {
        iRandomAccess.seek(j, j2);
        long j3 = 0;
        while (j3 < j2) {
            int i = iRandomAccess.read(bArr, 0, (int) Math.min(j2 - j3, bArr.length));
            if (i <= 0) {
                throw new IOException("updateSample unexpected readCount <= 0, readCount = " + i + ", readTotalCount = " + j3 + ", sampleSize = " + j2);
            }
            messageDigest.update(bArr, 0, i);
            j3 += (long) i;
        }
    }

    private static String toHexString(byte[] bArr) {
        if (bArr == null) {
            throw new NullPointerException("bytes is null");
        }
        int length = bArr.length;
        int i = length * 2;
        char[] cArr = new char[i];
        int i2 = 0;
        for (int i3 = 0; i3 < length; i3++) {
            int i4 = bArr[i3 + 0] & UByte.MAX_VALUE;
            int i5 = i2 + 1;
            char[] cArr2 = HEX_CHARS;
            cArr[i2] = cArr2[i4 >> 4];
            i2 = i5 + 1;
            cArr[i5] = cArr2[i4 & 15];
        }
        return new String(cArr, 0, i);
    }

    private static String generateTTMd5Tag(int i, long j) {
        return "ttmd5:1:1:" + encryptionNum(i) + at.f + encryptionNum(j);
    }

    private static TTMd5Args parserTTMd5Args(String str) throws Exception {
        if (!str.startsWith("ttmd5:")) {
            return null;
        }
        String[] strArrSplit = str.split(";");
        String[] strArrSplit2 = strArrSplit[0].split(Constants.COLON_SEPARATOR);
        TTMd5Args tTMd5Args = new TTMd5Args();
        tTMd5Args.versionMain = Integer.parseInt(strArrSplit2[1]);
        if (tTMd5Args.versionMain > 1) {
            return tTMd5Args;
        }
        tTMd5Args.versionSub = Integer.parseInt(strArrSplit2[2]);
        String[] strArrSplit3 = strArrSplit2[3].split(at.f);
        tTMd5Args.sampleCount = (int) decryptNum(strArrSplit3[0]);
        tTMd5Args.sampleSize = decryptNum(strArrSplit3[1]);
        tTMd5Args.realMd5 = strArrSplit[1];
        return tTMd5Args;
    }

    private static String encryptionNum(long j) {
        return Long.toHexString((j << 4) + 31);
    }

    private static long decryptNum(String str) throws RuntimeException {
        return (Long.parseLong(str, 16) - 31) >> 4;
    }

    private static class TTMd5Args {
        private String realMd5;
        private int sampleCount;
        private long sampleSize;
        private int versionMain;
        private int versionSub;

        private TTMd5Args() {
        }
    }
}
