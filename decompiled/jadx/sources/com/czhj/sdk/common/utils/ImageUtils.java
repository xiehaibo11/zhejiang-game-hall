package com.czhj.sdk.common.utils;

import android.graphics.Bitmap;
import com.kuaishou.weapon.p0.t;
import java.io.FileInputStream;
import java.util.HashMap;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class ImageUtils {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final HashMap<String, String> f1810a;

    static {
        HashMap<String, String> map = new HashMap<>();
        f1810a = map;
        map.put("FFD8FF", "jpg");
        f1810a.put("89504E47", "png");
        f1810a.put("47494638", "gif");
        f1810a.put("49492A00", "tif");
        f1810a.put("424D", "bmp");
        f1810a.put("41433130", "dwg");
        f1810a.put("38425053", "psd");
        f1810a.put("7B5C727466", "rtf");
        f1810a.put("3C3F786D6C", "xml");
        f1810a.put("68746D6C3E", "html");
        f1810a.put("44656C69766572792D646174653A", "eml");
        f1810a.put("D0CF11E0", "doc");
        f1810a.put("5374616E64617264204A", "mdb");
        f1810a.put("252150532D41646F6265", "ps");
        f1810a.put("255044462D312E", "pdf");
        f1810a.put("504B0304", "docx");
        f1810a.put("52617221", "rar");
        f1810a.put("57415645", "wav");
        f1810a.put("41564920", "avi");
        f1810a.put("2E524D46", t.w);
        f1810a.put("000001BA", "mpg");
        f1810a.put("000001B3", "mpg");
        f1810a.put("6D6F6F76", "mov");
        f1810a.put("3026B2758E66CF11", "asf");
        f1810a.put("4D546864", "mid");
        f1810a.put("1F8B08", "gz");
        f1810a.put("4D5A9000", "exe/dll");
        f1810a.put("75736167", "txt");
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
        return f1810a.get(a(str));
    }

    public static void recycleBitmap(Bitmap bitmap) {
        if (bitmap == null || bitmap.isRecycled()) {
            return;
        }
        bitmap.recycle();
    }
}
