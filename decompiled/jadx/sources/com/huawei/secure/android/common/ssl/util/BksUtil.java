package com.huawei.secure.android.common.ssl.util;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import kotlin.UByte;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes2.dex */
public class BksUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2255a = "BksUtil";
    private static final String b = "com.huawei.hwid";
    private static final String c = "com.huawei.hwid";
    private static final String d = "com.huawei.hms";
    private static final String e = "com.huawei.hwid.tv";
    private static final String g = "files/hmsrootcas.bks";
    private static final String h = "4.0.2.300";
    private static final String i = "aegis";
    private static final String j = "hmsrootcas.bks";
    private static final long k = 604800000;
    private static final String l = "last_update_time";
    private static final String m = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05";
    private static final String n = "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C";
    private static final String q = "";
    private static final String r = "bks_hash";
    private static final Uri f = Uri.parse("content://com.huawei.hwid");
    private static final String o = "E49D5C2C0E11B3B1B96CA56C6DE2A14EC7DAB5CCC3B5F300D03E5B4DBA44F539";
    private static final String[] p = {"B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05", o};

    private BksUtil() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v12 */
    /* JADX WARN: Type inference failed for: r7v3 */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v5, types: [java.io.OutputStream] */
    /* JADX WARN: Type inference failed for: r7v7 */
    /* JADX WARN: Type inference failed for: r7v8 */
    /* JADX WARN: Type inference failed for: r7v9 */
    private static void a(InputStream inputStream, Context context) throws Throwable {
        FileOutputStream fileOutputStream;
        if (inputStream == null || context == null) {
            return;
        }
        String strA = a(context);
        if (!new File(strA).exists()) {
            a(strA);
        }
        File file = new File(strA, "hmsrootcas.bks");
        if (file.exists()) {
            file.delete();
        }
        ?? r7 = 0;
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                g.c(f2255a, "write output stream ");
                fileOutputStream = new FileOutputStream(file);
                r7 = 2048;
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException unused) {
        }
        try {
            byte[] bArr = new byte[2048];
            while (true) {
                int i2 = inputStream.read(bArr, 0, 2048);
                if (i2 == -1) {
                    break;
                } else {
                    fileOutputStream.write(bArr, 0, i2);
                }
            }
            f.a((OutputStream) fileOutputStream);
        } catch (IOException unused2) {
            fileOutputStream2 = fileOutputStream;
            g.b(f2255a, " IOException");
            f.a((OutputStream) fileOutputStream2);
            r7 = fileOutputStream2;
        } catch (Throwable th2) {
            th = th2;
            r7 = fileOutputStream;
            f.a((OutputStream) r7);
            throw th;
        }
    }

    private static boolean a(int i2) {
        return i2 >= 40002300;
    }

    private static String b(Context context) {
        return a(context) + File.separator + "hmsrootcas.bks";
    }

    private static boolean c(Context context) {
        return new File(a(context) + File.separator + "hmsrootcas.bks").exists();
    }

    /* JADX WARN: Can't wrap try/catch for region: R(11:26|(5:66|27|28|62|29)|(7:30|(1:32)(1:68)|49|50|51|52|53)|33|65|34|(1:40)(1:39)|41|51|52|53) */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00dd, code lost:
    
        r7 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x00de, code lost:
    
        r1 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00e0, code lost:
    
        r1 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x00fd, code lost:
    
        com.huawei.secure.android.common.ssl.util.f.a(r3);
        com.huawei.secure.android.common.ssl.util.f.a((java.io.OutputStream) r2);
        com.huawei.secure.android.common.ssl.util.f.a((java.io.InputStream) r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0106, code lost:
    
        throw r7;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static synchronized java.io.InputStream getBksFromTss(android.content.Context r7) {
        /*
            Method dump skipped, instruction units count: 266
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.secure.android.common.ssl.util.BksUtil.getBksFromTss(android.content.Context):java.io.InputStream");
    }

    public static InputStream getFilesBksIS(Context context) {
        if (!c(context)) {
            return null;
        }
        g.c(f2255a, "getFilesBksIS ");
        try {
            return new FileInputStream(b(context));
        } catch (FileNotFoundException unused) {
            g.b(f2255a, "FileNotFoundExceptio: ");
            return null;
        }
    }

    private static boolean b(String str) {
        int i2;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        g.c(f2255a, "hms version code is : " + str);
        String[] strArrSplit = str.split("\\.");
        String[] strArrSplit2 = h.split("\\.");
        int length = strArrSplit.length;
        int length2 = strArrSplit2.length;
        int iMax = Math.max(length, length2);
        int i3 = 0;
        while (i3 < iMax) {
            if (i3 < length) {
                try {
                    i2 = Integer.parseInt(strArrSplit[i3]);
                } catch (Exception e2) {
                    g.b(f2255a, " exception : " + e2.getMessage());
                    return i3 >= length2;
                }
            } else {
                i2 = 0;
            }
            int i4 = i3 < length2 ? Integer.parseInt(strArrSplit2[i3]) : 0;
            if (i2 < i4) {
                return false;
            }
            if (i2 > i4) {
                return true;
            }
            i3++;
        }
        return true;
    }

    private static boolean c(Context context, String str) {
        byte[] bArrA = a(context, str);
        for (String str2 : p) {
            if (str2.equalsIgnoreCase(c(bArrA))) {
                return true;
            }
        }
        return false;
    }

    private static String c(byte[] bArr) {
        if (bArr == null || bArr.length == 0) {
            return "";
        }
        try {
            return a(MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(bArr));
        } catch (NoSuchAlgorithmException e2) {
            Log.e(f2255a, "NoSuchAlgorithmException" + e2.getMessage());
            return "";
        }
    }

    private static boolean b(Context context, String str) {
        return o.equalsIgnoreCase(c(a(context, str)));
    }

    private static int a(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        File file = new File(str);
        if (file.exists()) {
            g.e(f2255a, "The directory  has already exists");
            return 1;
        }
        if (file.mkdirs()) {
            g.a(f2255a, "create directory  success");
            return 0;
        }
        g.b(f2255a, "create directory  failed");
        return -1;
    }

    private static String b(byte[] bArr) {
        if (bArr == null) {
            return "";
        }
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256);
            messageDigest.update(bArr);
            return a(messageDigest.digest());
        } catch (NoSuchAlgorithmException unused) {
            g.b(f2255a, "inputstraem exception");
            return "";
        }
    }

    private static String a(Context context) {
        if (Build.VERSION.SDK_INT >= 24) {
            return context.createDeviceProtectedStorageContext().getFilesDir() + File.separator + i;
        }
        return context.getApplicationContext().getFilesDir() + File.separator + i;
    }

    private static byte[] a(Context context, String str) {
        PackageInfo packageInfo;
        if (context != null && !TextUtils.isEmpty(str)) {
            try {
                PackageManager packageManager = context.getPackageManager();
                if (packageManager != null && (packageInfo = packageManager.getPackageInfo(str, 64)) != null) {
                    return packageInfo.signatures[0].toByteArray();
                }
            } catch (PackageManager.NameNotFoundException e2) {
                Log.e(f2255a, "PackageManager.NameNotFoundException : " + e2.getMessage());
            } catch (Exception e3) {
                Log.e(f2255a, "get pm exception : " + e3.getMessage());
            }
            return new byte[0];
        }
        Log.e(f2255a, "packageName is null or context is null");
        return new byte[0];
    }

    private static String a(byte[] bArr) {
        if (bArr == null || bArr.length == 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (byte b2 : bArr) {
            String hexString = Integer.toHexString(b2 & UByte.MAX_VALUE);
            if (hexString.length() == 1) {
                sb.append('0');
            }
            sb.append(hexString);
        }
        return sb.toString();
    }
}
