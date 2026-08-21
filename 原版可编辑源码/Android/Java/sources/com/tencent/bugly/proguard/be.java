package com.tencent.bugly.proguard;

import android.content.Context;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tencent.bugly.crashreport.crash.CrashDetailBean;
import com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;

public final class be {
    private static List<File> a = new ArrayList();

    private static Map<String, Integer> d(String str) {
        if (str == null) {
            return null;
        }
        try {
            HashMap map = new HashMap();
            for (String str2 : str.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                String[] strArrSplit = str2.split(Constants.COLON_SEPARATOR);
                if (strArrSplit.length != 2) {
                    al.e("error format at %s", str2);
                    return null;
                }
                map.put(strArrSplit[0], Integer.valueOf(Integer.parseInt(strArrSplit[1])));
            }
            return map;
        } catch (Exception e) {
            al.e("error format intStateStr %s", str);
            e.printStackTrace();
            return null;
        }
    }

    protected static String a(String str) {
        if (str == null) {
            return "";
        }
        String[] strArrSplit = str.split("\n");
        if (strArrSplit == null || strArrSplit.length == 0) {
            return str;
        }
        StringBuilder sb = new StringBuilder();
        for (String str2 : strArrSplit) {
            if (!str2.contains("java.lang.Thread.getStackTrace(")) {
                sb.append(str2);
                sb.append("\n");
            }
        }
        return sb.toString();
    }

    private static <KeyT, ValueT> ValueT a(Map<KeyT, ValueT> map, KeyT keyt, ValueT valuet) {
        ValueT valuet2;
        try {
            valuet2 = map.get(keyt);
        } catch (Exception e) {
            al.a(e);
        }
        return valuet2 != null ? valuet2 : valuet;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0037  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String a(BufferedInputStream bufferedInputStream) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        ByteArrayOutputStream byteArrayOutputStream2 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream(1024);
                while (true) {
                    try {
                        int i = bufferedInputStream.read();
                        if (i == -1) {
                            break;
                        }
                        if (i == 0) {
                            String str = new String(byteArrayOutputStream.toByteArray(), "UTf-8");
                            byteArrayOutputStream.close();
                            return str;
                        }
                        byteArrayOutputStream.write(i);
                    } catch (Throwable th) {
                        th = th;
                        al.a(th);
                        if (byteArrayOutputStream != null) {
                            byteArrayOutputStream.close();
                        }
                        return null;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                if (0 != 0) {
                    byteArrayOutputStream2.close();
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            byteArrayOutputStream = null;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v3, types: [boolean] */
    /* JADX WARN: Type inference failed for: r7v6 */
    public static CrashDetailBean a(Context context, String str, NativeExceptionHandler nativeExceptionHandler) {
        BufferedInputStream bufferedInputStream;
        String str2;
        String strA;
        if (context == null || str == null || nativeExceptionHandler == null) {
            al.e("get eup record file args error", new Object[0]);
            return null;
        }
        File file = new File(str, "rqd_record.eup");
        if (file.exists()) {
            BufferedInputStream bufferedInputStreamCanRead = file.canRead();
            try {
                if (bufferedInputStreamCanRead != 0) {
                    try {
                        bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
                        try {
                            String strA2 = a(bufferedInputStream);
                            if (strA2 != null && strA2.equals("NATIVE_RQD_REPORT")) {
                                HashMap map = new HashMap();
                                loop0: while (true) {
                                    str2 = null;
                                    while (true) {
                                        strA = a(bufferedInputStream);
                                        if (strA == null) {
                                            break loop0;
                                        }
                                        if (str2 == null) {
                                            str2 = strA;
                                        }
                                    }
                                    map.put(str2, strA);
                                }
                                if (str2 != null) {
                                    al.e("record not pair! drop! %s", str2);
                                    try {
                                        bufferedInputStream.close();
                                    } catch (IOException e) {
                                        e.printStackTrace();
                                    }
                                    return null;
                                }
                                CrashDetailBean crashDetailBeanA = a(context, map, nativeExceptionHandler);
                                try {
                                    bufferedInputStream.close();
                                } catch (IOException e2) {
                                    e2.printStackTrace();
                                }
                                return crashDetailBeanA;
                            }
                            al.e("record read fail! %s", strA2);
                            try {
                                bufferedInputStream.close();
                            } catch (IOException e3) {
                                e3.printStackTrace();
                            }
                            return null;
                        } catch (IOException e4) {
                            e = e4;
                            e.printStackTrace();
                            if (bufferedInputStream != null) {
                                try {
                                    bufferedInputStream.close();
                                } catch (IOException e5) {
                                    e5.printStackTrace();
                                }
                            }
                            return null;
                        }
                    } catch (IOException e6) {
                        e = e6;
                        bufferedInputStream = null;
                    } catch (Throwable th) {
                        th = th;
                        bufferedInputStreamCanRead = 0;
                        if (bufferedInputStreamCanRead != 0) {
                            try {
                                bufferedInputStreamCanRead.close();
                            } catch (IOException e7) {
                                e7.printStackTrace();
                            }
                        }
                        throw th;
                    }
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
        return null;
    }

    private static String b(String str, String str2) {
        BufferedReader bufferedReaderB = ap.b(str, "reg_record.txt");
        try {
            if (bufferedReaderB == null) {
                return null;
            }
            try {
                StringBuilder sb = new StringBuilder();
                String line = bufferedReaderB.readLine();
                if (line != null && line.startsWith(str2)) {
                    int i = 0;
                    int i2 = 18;
                    int length = 0;
                    while (true) {
                        String line2 = bufferedReaderB.readLine();
                        if (line2 == null) {
                            break;
                        }
                        if (i % 4 == 0) {
                            if (i > 0) {
                                sb.append("\n");
                            }
                            sb.append("  ");
                        } else {
                            if (line2.length() > 16) {
                                i2 = 28;
                            }
                            sb.append("                ".substring(0, i2 - length));
                        }
                        length = line2.length();
                        sb.append(line2);
                        i++;
                    }
                    sb.append("\n");
                    String string = sb.toString();
                    if (bufferedReaderB != null) {
                        try {
                            bufferedReaderB.close();
                        } catch (Exception e) {
                            al.a(e);
                        }
                    }
                    return string;
                }
                if (bufferedReaderB != null) {
                    try {
                        bufferedReaderB.close();
                    } catch (Exception e2) {
                        al.a(e2);
                    }
                }
                return null;
            } catch (Throwable th) {
                al.a(th);
                if (bufferedReaderB != null) {
                    try {
                        bufferedReaderB.close();
                    } catch (Exception e3) {
                        al.a(e3);
                    }
                }
                return null;
            }
        } catch (Throwable th2) {
            if (bufferedReaderB != null) {
                try {
                    bufferedReaderB.close();
                } catch (Exception e4) {
                    al.a(e4);
                }
            }
            throw th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x005d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static String c(String str, String str2) {
        StringBuilder sb;
        String line;
        BufferedReader bufferedReaderB = ap.b(str, "map_record.txt");
        if (bufferedReaderB == null) {
            return null;
        }
        try {
            try {
                sb = new StringBuilder();
                line = bufferedReaderB.readLine();
            } catch (Throwable th) {
                al.a(th);
                if (bufferedReaderB != null) {
                    try {
                        bufferedReaderB.close();
                    } catch (Exception e) {
                        al.a(e);
                    }
                }
                return null;
            }
        } catch (Throwable th2) {
            if (bufferedReaderB != null) {
            }
            throw th2;
        }
        if (line != null && line.startsWith(str2)) {
            while (true) {
                String line2 = bufferedReaderB.readLine();
                if (line2 == null) {
                    break;
                }
                sb.append("  ");
                sb.append(line2);
                sb.append("\n");
                if (bufferedReaderB != null) {
                    try {
                        bufferedReaderB.close();
                    } catch (Exception e2) {
                        al.a(e2);
                    }
                }
                throw th2;
            }
            String string = sb.toString();
            if (bufferedReaderB != null) {
                try {
                    bufferedReaderB.close();
                } catch (Exception e3) {
                    al.a(e3);
                }
            }
            return string;
        }
        if (bufferedReaderB != null) {
            try {
                bufferedReaderB.close();
            } catch (Exception e4) {
                al.a(e4);
            }
        }
        return null;
    }

    public static String a(String str, String str2) {
        if (str == null || str2 == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        String strB = b(str, str2);
        if (strB != null && !strB.isEmpty()) {
            sb.append("Register infos:\n");
            sb.append(strB);
        }
        String strC = c(str, str2);
        if (strC != null && !strC.isEmpty()) {
            if (sb.length() > 0) {
                sb.append("\n");
            }
            sb.append("System SO infos:\n");
            sb.append(strC);
        }
        return sb.toString();
    }

    public static String b(String str) {
        if (str == null) {
            return null;
        }
        File file = new File(str, "backup_record.txt");
        if (file.exists()) {
            return file.getAbsolutePath();
        }
        return null;
    }

    public static void c(String str) {
        File[] fileArrListFiles;
        if (str == null) {
            return;
        }
        try {
            File file = new File(str);
            if (file.canRead() && file.isDirectory() && (fileArrListFiles = file.listFiles()) != null) {
                for (File file2 : fileArrListFiles) {
                    if (file2.canRead() && file2.canWrite() && file2.length() == 0) {
                        file2.delete();
                        al.c("Delete empty record file %s", file2.getAbsoluteFile());
                    }
                }
            }
        } catch (Throwable th) {
            al.a(th);
        }
    }

    public static void a(boolean z, String str) {
        if (str != null) {
            a.add(new File(str, "rqd_record.eup"));
            a.add(new File(str, "reg_record.txt"));
            a.add(new File(str, "map_record.txt"));
            a.add(new File(str, "backup_record.txt"));
            if (z) {
                c(str);
            }
        }
        List<File> list = a;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (File file : a) {
            if (file.exists() && file.canWrite()) {
                file.delete();
                al.c("Delete record file %s", file.getAbsoluteFile());
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v1, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r6v12 */
    /* JADX WARN: Type inference failed for: r6v13 */
    /* JADX WARN: Type inference failed for: r6v7, types: [java.lang.String] */
    public static String a(String str, int i, String str2, boolean z) throws Throwable {
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        if (str != null && i > 0) {
            File file = new File(str);
            if (file.exists() && file.canRead()) {
                al.a("Read system log from native record file(length: %s bytes): %s", Long.valueOf(file.length()), file.getAbsolutePath());
                a.add(file);
                al.c("Add this record file to list for cleaning lastly.", new Object[0]);
                if (str2 == null) {
                    return ap.a(new File(str), i, z);
                }
                String sb = new StringBuilder();
                try {
                    try {
                        try {
                            bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), "utf-8"));
                            while (true) {
                                try {
                                    String line = bufferedReader.readLine();
                                    if (line == null) {
                                        break;
                                    }
                                    if (Pattern.compile(str2 + "[ ]*:").matcher(line).find()) {
                                        sb.append(line);
                                        sb.append("\n");
                                    }
                                    if (i > 0 && sb.length() > i) {
                                        if (z) {
                                            sb.delete(i, sb.length());
                                            break;
                                        }
                                        sb.delete(0, sb.length() - i);
                                    }
                                } catch (Throwable th) {
                                    th = th;
                                    if (bufferedReader != null) {
                                        try {
                                            bufferedReader.close();
                                        } catch (Exception e) {
                                            al.a(e);
                                        }
                                    }
                                    throw th;
                                }
                            }
                            String string = sb.toString();
                            bufferedReader.close();
                            sb = string;
                        } catch (Throwable th2) {
                            th = th2;
                        }
                        return sb;
                    } catch (Throwable th3) {
                        th = th3;
                        bufferedReader = bufferedReader2;
                    }
                } catch (Exception e2) {
                    al.a(e2);
                    return sb;
                }
            }
        }
        return null;
    }

    private static Map<String, String> a(Map<String, String> map) {
        String str = map.get("key-value");
        if (str == null) {
            return null;
        }
        HashMap map2 = new HashMap();
        for (String str2 : str.split("\n")) {
            String[] strArrSplit = str2.split(ContainerUtils.KEY_VALUE_DELIMITER);
            if (strArrSplit.length == 2) {
                map2.put(strArrSplit[0], strArrSplit[1]);
            }
        }
        return map2;
    }

    private static long b(Map<String, String> map) {
        String str = map.get("launchTime");
        if (str == null) {
            return -1L;
        }
        al.c("[Native record info] launchTime: %s", str);
        try {
            return Long.parseLong(str);
        } catch (NumberFormatException e) {
            if (al.a(e)) {
                return -1L;
            }
            e.printStackTrace();
            return -1L;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0037 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0038  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static CrashDetailBean a(Context context, Map<String, String> map, NativeExceptionHandler nativeExceptionHandler) {
        boolean z;
        String str;
        String str2;
        boolean zEqualsIgnoreCase;
        if (aa.a(context) == null) {
            al.e("abnormal com info not created", new Object[0]);
        } else {
            String str3 = map.get("intStateStr");
            if (str3 != null && str3.trim().length() > 0) {
                z = true;
                if (z) {
                    return null;
                }
                Map<String, Integer> mapD = d(map.get("intStateStr"));
                if (mapD == null) {
                    al.e("parse intSateMap fail", Integer.valueOf(map.size()));
                    return null;
                }
                try {
                    mapD.get("sino").intValue();
                    mapD.get("sud").intValue();
                    String str4 = map.get("soVersion");
                    if (TextUtils.isEmpty(str4)) {
                        al.e("error format at version", new Object[0]);
                        return null;
                    }
                    String str5 = (String) a(map, "codeMsg", EnvironmentCompat.MEDIA_UNKNOWN);
                    String str6 = (String) a(map, "signalName", EnvironmentCompat.MEDIA_UNKNOWN);
                    map.get("errnoMsg");
                    String str7 = (String) a(map, "stack", EnvironmentCompat.MEDIA_UNKNOWN);
                    String str8 = map.get("jstack");
                    if (str8 != null) {
                        str7 = str7 + "java:\n" + str8;
                    }
                    Integer num = mapD.get("sico");
                    if (num == null || num.intValue() <= 0) {
                        str = str5;
                        str2 = str6;
                    } else {
                        str2 = str6 + "(" + str5 + ")";
                        str = "KERNEL";
                    }
                    String str9 = map.get("nativeLog");
                    byte[] bArrA = (str9 == null || str9.isEmpty()) ? null : ap.a(str9, "BuglyNativeLog.txt");
                    String str10 = (String) a(map, "sendingProcess", EnvironmentCompat.MEDIA_UNKNOWN);
                    Integer num2 = mapD.get("spd");
                    if (num2 != null) {
                        str10 = str10 + "(" + num2 + ")";
                    }
                    String str11 = str10;
                    String str12 = (String) a(map, "threadName", EnvironmentCompat.MEDIA_UNKNOWN);
                    Integer num3 = mapD.get("et");
                    if (num3 != null) {
                        str12 = str12 + "(" + num3 + ")";
                    }
                    String str13 = str12;
                    String str14 = (String) a(map, "processName", EnvironmentCompat.MEDIA_UNKNOWN);
                    Integer num4 = mapD.get("ep");
                    if (num4 != null) {
                        str14 = str14 + "(" + num4 + ")";
                    }
                    CrashDetailBean crashDetailBeanPackageCrashDatas = nativeExceptionHandler.packageCrashDatas(str14, str13, (((long) mapD.get("ets").intValue()) * 1000) + (((long) mapD.get("etms").intValue()) / 1000), str2, (String) a(map, "errorAddr", EnvironmentCompat.MEDIA_UNKNOWN), a(str7), str, str11, (String) a(map, "tombPath", EnvironmentCompat.MEDIA_UNKNOWN), map.get("sysLogPath"), map.get("jniLogPath"), str4, bArrA, a(map), false, false);
                    if (crashDetailBeanPackageCrashDatas != null) {
                        crashDetailBeanPackageCrashDatas.m = (String) a(map, "userId", crashDetailBeanPackageCrashDatas.m);
                        al.c("[Native record info] userId: %s", crashDetailBeanPackageCrashDatas.m);
                        crashDetailBeanPackageCrashDatas.w = (String) a(map, "sysLog", crashDetailBeanPackageCrashDatas.w);
                        crashDetailBeanPackageCrashDatas.f = (String) a(map, "appVersion", crashDetailBeanPackageCrashDatas.w);
                        al.c("[Native record info] appVersion: %s", crashDetailBeanPackageCrashDatas.f);
                        String str15 = map.get("isAppForeground");
                        if (str15 != null) {
                            al.c("[Native record info] isAppForeground: %s", str15);
                            zEqualsIgnoreCase = str15.equalsIgnoreCase("true");
                        } else {
                            zEqualsIgnoreCase = false;
                        }
                        crashDetailBeanPackageCrashDatas.R = zEqualsIgnoreCase;
                        crashDetailBeanPackageCrashDatas.Q = b(map);
                        crashDetailBeanPackageCrashDatas.z = null;
                        crashDetailBeanPackageCrashDatas.k = true;
                    }
                    return crashDetailBeanPackageCrashDatas;
                } catch (Throwable th) {
                    al.e("error format", new Object[0]);
                    th.printStackTrace();
                    return null;
                }
            }
            al.e("no intStateStr", new Object[0]);
        }
        z = false;
        if (z) {
        }
    }
}
