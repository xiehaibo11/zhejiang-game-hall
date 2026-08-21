package com.czhj.sdk.common.utils;

import com.czhj.sdk.logger.SigmobLog;
import java.io.FileInputStream;
import java.util.HashMap;
import kotlin.UByte;

public class ImageTypeUtil {
    private static final HashMap<String, String> a;

    static {
        HashMap<String, String> map = new HashMap<>();
        a = map;
        map.put("FFD8", "jpg");
        a.put("8950", "png");
        a.put("4749", "gif");
        a.put("4949", "tif");
        a.put("424D", "bmp");
        a.put("5745", "webp");
    }

    private static String a(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String upperCase = Integer.toHexString(b & UByte.MAX_VALUE).toUpperCase();
            if (upperCase.length() < 2) {
                sb.append(0);
            }
            sb.append(upperCase);
        }
        return sb.toString();
    }

    public static String getFileHeader(String str) {
        String str2;
        FileInputStream fileInputStream = null;
        try {
            FileInputStream fileInputStream2 = new FileInputStream(str);
            try {
                byte[] bArr = new byte[2];
                fileInputStream2.read(bArr, 0, 2);
                String strA = a(bArr);
                if (strA.equals("5249")) {
                    fileInputStream2.skip(6L);
                    fileInputStream2.read(bArr, 0, 2);
                    strA = a(bArr);
                }
                try {
                    fileInputStream2.close();
                    return strA;
                } catch (Throwable unused) {
                    return strA;
                }
            } catch (Throwable th) {
                th = th;
                str2 = null;
                fileInputStream = fileInputStream2;
                try {
                    SigmobLog.e(th.getMessage());
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (Throwable unused2) {
                        }
                    }
                    return str2;
                } catch (Throwable th2) {
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (Throwable unused3) {
                        }
                    }
                    throw th2;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            str2 = null;
        }
    }

    public static String getFileType(String str) {
        return a.get(getFileHeader(str));
    }
}
