package com.czhj.sdk.common.utils;

import android.graphics.Bitmap;
import com.kuaishou.weapon.p0.t;
import java.io.FileInputStream;
import java.util.HashMap;
import kotlin.UByte;

public class ImageUtils {
    private static final HashMap<String, String> a;

    static {
        HashMap<String, String> map = new HashMap<>();
        a = map;
        map.put("FFD8FF", "jpg");
        a.put("89504E47", "png");
        a.put("47494638", "gif");
        a.put("49492A00", "tif");
        a.put("424D", "bmp");
        a.put("41433130", "dwg");
        a.put("38425053", "psd");
        a.put("7B5C727466", "rtf");
        a.put("3C3F786D6C", "xml");
        a.put("68746D6C3E", "html");
        a.put("44656C69766572792D646174653A", "eml");
        a.put("D0CF11E0", "doc");
        a.put("5374616E64617264204A", "mdb");
        a.put("252150532D41646F6265", "ps");
        a.put("255044462D312E", "pdf");
        a.put("504B0304", "docx");
        a.put("52617221", "rar");
        a.put("57415645", "wav");
        a.put("41564920", "avi");
        a.put("2E524D46", t.w);
        a.put("000001BA", "mpg");
        a.put("000001B3", "mpg");
        a.put("6D6F6F76", "mov");
        a.put("3026B2758E66CF11", "asf");
        a.put("4D546864", "mid");
        a.put("1F8B08", "gz");
        a.put("4D5A9000", "exe/dll");
        a.put("75736167", "txt");
    }

    private static String a(String str) {
        FileInputStream fileInputStream;
        String strA = null;
        try {
            fileInputStream = new FileInputStream(str);
        } catch (Throwable unused) {
            fileInputStream = null;
        }
        try {
            byte[] bArr = new byte[4];
            fileInputStream.read(bArr, 0, 4);
            strA = a(bArr);
        } catch (Throwable unused2) {
            if (fileInputStream != null) {
            }
            return strA;
        }
        try {
            fileInputStream.close();
        } catch (Throwable unused3) {
        }
        return strA;
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

    public static String getFileType(String str) {
        return a.get(a(str));
    }

    public static void recycleBitmap(Bitmap bitmap) {
        if (bitmap == null || bitmap.isRecycled()) {
            return;
        }
        bitmap.recycle();
    }
}
