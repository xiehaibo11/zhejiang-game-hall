package com.xiaomi.clientreport.processor;

import android.text.TextUtils;
import com.xiaomi.clientreport.data.PerfClientReport;
import com.xiaomi.push.ab;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public class e {
    private static PerfClientReport a(PerfClientReport perfClientReport, String str) {
        long[] jArrM54a;
        if (perfClientReport == null || (jArrM54a = m54a(str)) == null) {
            return null;
        }
        perfClientReport.perfCounts = jArrM54a[0];
        perfClientReport.perfLatencies = jArrM54a[1];
        return perfClientReport;
    }

    private static PerfClientReport a(String str) {
        PerfClientReport blankInstance = null;
        try {
            String[] strArrM55a = m55a(str);
            if (strArrM55a == null || strArrM55a.length < 4 || TextUtils.isEmpty(strArrM55a[0]) || TextUtils.isEmpty(strArrM55a[1]) || TextUtils.isEmpty(strArrM55a[2]) || TextUtils.isEmpty(strArrM55a[3])) {
                return null;
            }
            blankInstance = PerfClientReport.getBlankInstance();
            blankInstance.production = Integer.parseInt(strArrM55a[0]);
            blankInstance.clientInterfaceId = strArrM55a[1];
            blankInstance.reportType = Integer.parseInt(strArrM55a[2]);
            blankInstance.code = Integer.parseInt(strArrM55a[3]);
            return blankInstance;
        } catch (Exception unused) {
            com.xiaomi.channel.commonutils.logger.b.c("parse per key error");
            return blankInstance;
        }
    }

    public static String a(PerfClientReport perfClientReport) {
        return perfClientReport.production + "#" + perfClientReport.clientInterfaceId + "#" + perfClientReport.reportType + "#" + perfClientReport.code;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v12, types: [int] */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v14 */
    /* JADX WARN: Type inference failed for: r1v15, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r1v17 */
    /* JADX WARN: Type inference failed for: r1v18 */
    /* JADX WARN: Type inference failed for: r1v19 */
    /* JADX WARN: Type inference failed for: r1v20 */
    /* JADX WARN: Type inference failed for: r1v3 */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v5, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r1v7 */
    /* JADX WARN: Type inference failed for: r1v8 */
    /* JADX WARN: Type inference failed for: r1v9 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.CharSequence] */
    /* JADX WARN: Type inference failed for: r4v0, types: [java.lang.CharSequence] */
    /* JADX WARN: Type inference failed for: r5v8, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r5v9, types: [java.lang.Object] */
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static HashMap<String, String> m53a(String str) throws Throwable {
        HashMap map = new HashMap();
        if (TextUtils.isEmpty(str) || !new File(str).exists()) {
            return map;
        }
        ?? r1 = 0;
        ?? length = 0;
        BufferedReader bufferedReader = null;
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new FileReader(str));
                while (true) {
                    try {
                        String line = bufferedReader2.readLine();
                        if (line == null) {
                            break;
                        }
                        ?? Split = line.split("%%%");
                        length = Split.length;
                        if (length >= 2) {
                            length = 0;
                            length = 0;
                            if (!TextUtils.isEmpty(Split[0]) && !TextUtils.isEmpty(Split[1])) {
                                length = Split[0];
                                map.put(length, Split[1]);
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        bufferedReader = bufferedReader2;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                        ab.a(bufferedReader);
                        r1 = bufferedReader;
                    } catch (Throwable th) {
                        th = th;
                        r1 = bufferedReader2;
                        ab.a((Closeable) r1);
                        throw th;
                    }
                }
                ab.a(bufferedReader2);
                r1 = length;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        return map;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:112:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x00de  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x00f4  */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v10, types: [java.io.BufferedReader, java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r4v11 */
    /* JADX WARN: Type inference failed for: r4v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r4v3, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v5 */
    /* JADX WARN: Type inference failed for: r4v6 */
    /* JADX WARN: Type inference failed for: r4v7 */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.util.List<java.lang.String> a(android.content.Context r7, java.lang.String r8) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 249
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.clientreport.processor.e.a(android.content.Context, java.lang.String):java.util.List");
    }

    private static void a(String str, HashMap<String, String> map) throws Throwable {
        BufferedWriter bufferedWriter;
        Throwable th;
        Exception e;
        if (TextUtils.isEmpty(str) || map == null || map.size() == 0) {
            return;
        }
        File file = new File(str);
        if (file.exists()) {
            file.delete();
        }
        try {
            bufferedWriter = new BufferedWriter(new FileWriter(file));
            try {
                try {
                    for (String str2 : map.keySet()) {
                        bufferedWriter.write(str2 + "%%%" + map.get(str2));
                        bufferedWriter.newLine();
                    }
                } catch (Exception e2) {
                    e = e2;
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            } catch (Throwable th2) {
                th = th2;
                ab.a(bufferedWriter);
                throw th;
            }
        } catch (Exception e3) {
            bufferedWriter = null;
            e = e3;
        } catch (Throwable th3) {
            bufferedWriter = null;
            th = th3;
            ab.a(bufferedWriter);
            throw th;
        }
        ab.a(bufferedWriter);
    }

    public static void a(String str, com.xiaomi.clientreport.data.a[] aVarArr) {
        RandomAccessFile randomAccessFile;
        if (aVarArr == null || aVarArr.length <= 0 || TextUtils.isEmpty(str)) {
            return;
        }
        FileLock fileLockLock = null;
        try {
            File file = new File(str + ".lock");
            ab.m115a(file);
            randomAccessFile = new RandomAccessFile(file, "rw");
        } catch (Throwable unused) {
            randomAccessFile = null;
        }
        try {
            fileLockLock = randomAccessFile.getChannel().lock();
            HashMap<String, String> mapM53a = m53a(str);
            for (com.xiaomi.clientreport.data.a aVar : aVarArr) {
                if (aVar != null) {
                    String strA = a((PerfClientReport) aVar);
                    long j = ((PerfClientReport) aVar).perfCounts;
                    long j2 = ((PerfClientReport) aVar).perfLatencies;
                    if (!TextUtils.isEmpty(strA) && j > 0 && j2 >= 0) {
                        a(mapM53a, strA, j, j2);
                    }
                }
            }
            a(str, mapM53a);
            if (fileLockLock != null && fileLockLock.isValid()) {
                try {
                    fileLockLock.release();
                } catch (IOException e) {
                    e = e;
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
        } catch (Throwable unused2) {
            try {
                com.xiaomi.channel.commonutils.logger.b.c("failed to write perf to file ");
                if (fileLockLock != null && fileLockLock.isValid()) {
                    try {
                        fileLockLock.release();
                    } catch (IOException e2) {
                        e = e2;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                    }
                }
                ab.a(randomAccessFile);
            } catch (Throwable th) {
                if (fileLockLock != null && fileLockLock.isValid()) {
                    try {
                        fileLockLock.release();
                    } catch (IOException e3) {
                        com.xiaomi.channel.commonutils.logger.b.a(e3);
                    }
                }
                ab.a(randomAccessFile);
                throw th;
            }
        }
        ab.a(randomAccessFile);
    }

    private static void a(HashMap<String, String> map, String str, long j, long j2) {
        long[] jArrM54a;
        StringBuilder sb;
        String str2 = map.get(str);
        if (!TextUtils.isEmpty(str2) && (jArrM54a = m54a(str2)) != null && jArrM54a[0] > 0 && jArrM54a[1] >= 0) {
            j += jArrM54a[0];
            j2 += jArrM54a[1];
            sb = new StringBuilder();
        } else {
            sb = new StringBuilder();
        }
        sb.append(j);
        sb.append("#");
        sb.append(j2);
        map.put(str, sb.toString());
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected static long[] m54a(String str) {
        long[] jArr = new long[2];
        try {
            String[] strArrSplit = str.split("#");
            if (strArrSplit.length >= 2) {
                jArr[0] = Long.parseLong(strArrSplit[0].trim());
                jArr[1] = Long.parseLong(strArrSplit[1].trim());
            }
            return jArr;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return null;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static String[] m55a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return str.split("#");
    }
}
