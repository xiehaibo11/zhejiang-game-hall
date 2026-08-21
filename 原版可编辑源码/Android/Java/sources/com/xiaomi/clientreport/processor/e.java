package com.xiaomi.clientreport.processor;

import android.content.Context;
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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class e {
    private static PerfClientReport a(PerfClientReport perfClientReport, String str) {
        long[] jArrA;
        if (perfClientReport == null || (jArrA = a(str)) == null) {
            return null;
        }
        perfClientReport.perfCounts = jArrA[0];
        perfClientReport.perfLatencies = jArrA[1];
        return perfClientReport;
    }

    private static PerfClientReport a(String str) {
        PerfClientReport blankInstance = null;
        try {
            String[] strArrA = a(str);
            if (strArrA == null || strArrA.length < 4 || TextUtils.isEmpty(strArrA[0]) || TextUtils.isEmpty(strArrA[1]) || TextUtils.isEmpty(strArrA[2]) || TextUtils.isEmpty(strArrA[3])) {
                return null;
            }
            blankInstance = PerfClientReport.getBlankInstance();
            blankInstance.production = Integer.parseInt(strArrA[0]);
            blankInstance.clientInterfaceId = strArrA[1];
            blankInstance.reportType = Integer.parseInt(strArrA[2]);
            blankInstance.code = Integer.parseInt(strArrA[3]);
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
    private static HashMap<String, String> a(String str) throws Throwable {
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
    */
    public static List<String> a(Context context, String str) throws Throwable {
        File file;
        RandomAccessFile randomAccessFile;
        ?? bufferedReader;
        PerfClientReport perfClientReportA;
        ArrayList arrayList = new ArrayList();
        if (TextUtils.isEmpty(str) || !new File(str).exists()) {
            return arrayList;
        }
        FileLock fileLock = null;
        try {
            file = new File(str + ".lock");
            try {
                ab.a(file);
                randomAccessFile = new RandomAccessFile(file, "rw");
                try {
                    FileLock fileLockLock = randomAccessFile.getChannel().lock();
                    try {
                        bufferedReader = new BufferedReader(new FileReader(str));
                        while (true) {
                            try {
                                String line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                }
                                String[] strArrSplit = line.split("%%%");
                                if (strArrSplit.length >= 2 && !TextUtils.isEmpty(strArrSplit[0]) && !TextUtils.isEmpty(strArrSplit[1]) && (perfClientReportA = a(a(strArrSplit[0]), strArrSplit[1])) != null) {
                                    arrayList.add(perfClientReportA.toJsonString());
                                }
                            } catch (Exception e) {
                                e = e;
                                fileLock = fileLockLock;
                                bufferedReader = bufferedReader;
                                try {
                                    com.xiaomi.channel.commonutils.logger.b.a(e);
                                    if (fileLock != null) {
                                        try {
                                            fileLock.release();
                                        } catch (IOException e2) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e2);
                                        }
                                    }
                                    ab.a(randomAccessFile);
                                    ab.a((Closeable) bufferedReader);
                                    if (file != null) {
                                    }
                                    return arrayList;
                                } catch (Throwable th) {
                                    th = th;
                                    if (fileLock != null && fileLock.isValid()) {
                                        try {
                                            fileLock.release();
                                        } catch (IOException e3) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e3);
                                        }
                                    }
                                    ab.a(randomAccessFile);
                                    ab.a((Closeable) bufferedReader);
                                    if (file == null) {
                                        throw th;
                                    }
                                    file.delete();
                                    throw th;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                fileLock = fileLockLock;
                                if (fileLock != null) {
                                }
                                ab.a(randomAccessFile);
                                ab.a((Closeable) bufferedReader);
                                if (file == null) {
                                }
                            }
                        }
                        if (fileLockLock != null && fileLockLock.isValid()) {
                            try {
                                fileLockLock.release();
                            } catch (IOException e4) {
                                com.xiaomi.channel.commonutils.logger.b.a(e4);
                            }
                        }
                        ab.a(randomAccessFile);
                        ab.a((Closeable) bufferedReader);
                    } catch (Exception e5) {
                        e = e5;
                        bufferedReader = 0;
                    } catch (Throwable th3) {
                        th = th3;
                        bufferedReader = 0;
                    }
                } catch (Exception e6) {
                    e = e6;
                    bufferedReader = 0;
                } catch (Throwable th4) {
                    th = th4;
                    bufferedReader = 0;
                }
            } catch (Exception e7) {
                e = e7;
                randomAccessFile = null;
                bufferedReader = randomAccessFile;
                com.xiaomi.channel.commonutils.logger.b.a(e);
                if (fileLock != null && fileLock.isValid()) {
                    fileLock.release();
                }
                ab.a(randomAccessFile);
                ab.a((Closeable) bufferedReader);
                if (file != null) {
                    file.delete();
                }
                return arrayList;
            } catch (Throwable th5) {
                th = th5;
                randomAccessFile = null;
                bufferedReader = randomAccessFile;
                if (fileLock != null) {
                    fileLock.release();
                }
                ab.a(randomAccessFile);
                ab.a((Closeable) bufferedReader);
                if (file == null) {
                }
            }
        } catch (Exception e8) {
            e = e8;
            file = null;
            randomAccessFile = null;
        } catch (Throwable th6) {
            th = th6;
            file = null;
            randomAccessFile = null;
        }
        file.delete();
        return arrayList;
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
            ab.a(file);
            randomAccessFile = new RandomAccessFile(file, "rw");
        } catch (Throwable unused) {
            randomAccessFile = null;
        }
        try {
            fileLockLock = randomAccessFile.getChannel().lock();
            HashMap<String, String> mapA = a(str);
            for (com.xiaomi.clientreport.data.a aVar : aVarArr) {
                if (aVar != null) {
                    String strA = a((PerfClientReport) aVar);
                    long j = ((PerfClientReport) aVar).perfCounts;
                    long j2 = ((PerfClientReport) aVar).perfLatencies;
                    if (!TextUtils.isEmpty(strA) && j > 0 && j2 >= 0) {
                        a(mapA, strA, j, j2);
                    }
                }
            }
            a(str, mapA);
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
        long[] jArrA;
        StringBuilder sb;
        String str2 = map.get(str);
        if (!TextUtils.isEmpty(str2) && (jArrA = a(str2)) != null && jArrA[0] > 0 && jArrA[1] >= 0) {
            j += jArrA[0];
            j2 += jArrA[1];
            sb = new StringBuilder();
        } else {
            sb = new StringBuilder();
        }
        sb.append(j);
        sb.append("#");
        sb.append(j2);
        map.put(str, sb.toString());
    }

    protected static long[] a(String str) {
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

    private static String[] a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return str.split("#");
    }
}
