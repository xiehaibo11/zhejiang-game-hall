package com.tencent.bugly.proguard;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tencent.bugly.crashreport.crash.CrashDetailBean;
import com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: BUGLY */
/* JADX INFO: loaded from: classes3.dex */
public final class be {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static List<File> f5365a = new ArrayList();

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
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(java.io.BufferedInputStream r4) throws java.lang.Throwable {
        /*
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L29
            r2 = 1024(0x400, float:1.435E-42)
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L29
        L8:
            int r2 = r4.read()     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            r3 = -1
            if (r2 == r3) goto L30
            if (r2 != 0) goto L20
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            byte[] r2 = r1.toByteArray()     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            java.lang.String r3 = "UTf-8"
            r4.<init>(r2, r3)     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            r1.close()
            return r4
        L20:
            r1.write(r2)     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            goto L8
        L24:
            r4 = move-exception
            goto L2b
        L26:
            r4 = move-exception
            r1 = r0
            goto L35
        L29:
            r4 = move-exception
            r1 = r0
        L2b:
            com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L33
        L30:
            r1.close()
        L33:
            return r0
        L34:
            r4 = move-exception
        L35:
            if (r1 == 0) goto L3a
            r1.close()
        L3a:
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.be.a(java.io.BufferedInputStream):java.lang.String");
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String c(java.lang.String r3, java.lang.String r4) {
        /*
            java.lang.String r0 = "map_record.txt"
            java.io.BufferedReader r3 = com.tencent.bugly.proguard.ap.b(r3, r0)
            r0 = 0
            if (r3 != 0) goto La
            return r0
        La:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r2 == 0) goto L3f
            boolean r4 = r2.startsWith(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r4 != 0) goto L1c
            goto L3f
        L1c:
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r4 == 0) goto L30
            java.lang.String r2 = "  "
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            java.lang.String r4 = "\n"
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            goto L1c
        L30:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r3 == 0) goto L3e
            r3.close()     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L3e:
            return r4
        L3f:
            if (r3 == 0) goto L49
            r3.close()     // Catch: java.lang.Exception -> L45
            goto L49
        L45:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L49:
            return r0
        L4a:
            r4 = move-exception
            goto L5b
        L4c:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L4a
            if (r3 == 0) goto L5a
            r3.close()     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L5a:
            return r0
        L5b:
            if (r3 == 0) goto L65
            r3.close()     // Catch: java.lang.Exception -> L61
            goto L65
        L61:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L65:
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.be.c(java.lang.String, java.lang.String):java.lang.String");
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
            f5365a.add(new File(str, "rqd_record.eup"));
            f5365a.add(new File(str, "reg_record.txt"));
            f5365a.add(new File(str, "map_record.txt"));
            f5365a.add(new File(str, "backup_record.txt"));
            if (z) {
                c(str);
            }
        }
        List<File> list = f5365a;
        if (list == null || list.size() <= 0) {
            return;
        }
        for (File file : f5365a) {
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
                f5365a.add(file);
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tencent.bugly.crashreport.crash.CrashDetailBean a(android.content.Context r25, java.util.Map<java.lang.String, java.lang.String> r26, com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler r27) {
        /*
            Method dump skipped, instruction units count: 589
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.be.a(android.content.Context, java.util.Map, com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler):com.tencent.bugly.crashreport.crash.CrashDetailBean");
    }
}
