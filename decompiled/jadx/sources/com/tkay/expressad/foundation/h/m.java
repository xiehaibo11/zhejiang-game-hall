package com.tkay.expressad.foundation.h;

import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

/* JADX INFO: loaded from: classes3.dex */
public final class m extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6950a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final String e = "/download/.at";
    public static final String f = "/atdownload";
    private static final String g = "SameFileTool";

    private static double b(String str, int i) throws Throwable {
        long jC;
        File file = new File(str);
        try {
            if (file.isDirectory()) {
                jC = d(file);
            } else {
                jC = c(file);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            jC = 0;
        }
        DecimalFormat decimalFormat = new DecimalFormat("#.00");
        if (i == 1) {
            return Double.valueOf(decimalFormat.format(jC)).doubleValue();
        }
        if (i == 2) {
            return Double.valueOf(decimalFormat.format(jC / 1024.0d)).doubleValue();
        }
        if (i == 3) {
            return Double.valueOf(decimalFormat.format(jC / 1048576.0d)).doubleValue();
        }
        if (i != 4) {
            return 0.0d;
        }
        return Double.valueOf(decimalFormat.format(jC / 1.073741824E9d)).doubleValue();
    }

    private static String e(String str) throws Throwable {
        long jC;
        File file = new File(str);
        try {
            if (file.isDirectory()) {
                jC = d(file);
            } else {
                jC = c(file);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            jC = 0;
        }
        DecimalFormat decimalFormat = new DecimalFormat("#.00");
        if (jC == 0) {
            return "0B";
        }
        if (jC < 1024) {
            return decimalFormat.format(jC) + "B";
        }
        if (jC < 1048576) {
            return decimalFormat.format(jC / 1024.0d) + "KB";
        }
        if (jC < DownloadConstants.GB) {
            return decimalFormat.format(jC / 1048576.0d) + "AT";
        }
        return decimalFormat.format(jC / 1.073741824E9d) + "GB";
    }

    private static long c(File file) throws Throwable {
        long jAvailable = 0;
        FileInputStream fileInputStream = null;
        try {
            try {
                try {
                    if (file.exists()) {
                        FileInputStream fileInputStream2 = new FileInputStream(file);
                        try {
                            jAvailable = fileInputStream2.available();
                            fileInputStream = fileInputStream2;
                        } catch (Exception e2) {
                            e = e2;
                            fileInputStream = fileInputStream2;
                            e.printStackTrace();
                            if (fileInputStream != null) {
                                fileInputStream.close();
                            }
                            return jAvailable;
                        } catch (Throwable th) {
                            th = th;
                            fileInputStream = fileInputStream2;
                            if (fileInputStream != null) {
                                try {
                                    fileInputStream.close();
                                } catch (Exception e3) {
                                    e3.printStackTrace();
                                }
                            }
                            throw th;
                        }
                    } else {
                        file.createNewFile();
                    }
                } catch (Exception e4) {
                    e = e4;
                }
                if (fileInputStream != null) {
                    fileInputStream.close();
                }
            } catch (Exception e5) {
                e5.printStackTrace();
            }
            return jAvailable;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static long d(File file) throws Throwable {
        long jC;
        File[] fileArrListFiles = file.listFiles();
        long j = 0;
        if (fileArrListFiles != null) {
            for (int i = 0; i < fileArrListFiles.length; i++) {
                if (fileArrListFiles[i].isDirectory()) {
                    jC = d(fileArrListFiles[i]);
                } else {
                    jC = c(fileArrListFiles[i]);
                }
                j += jC;
            }
        }
        return j;
    }

    private static String b(long j) {
        DecimalFormat decimalFormat = new DecimalFormat("#.00");
        if (j == 0) {
            return "0B";
        }
        if (j < 1024) {
            return decimalFormat.format(j) + "B";
        }
        if (j < 1048576) {
            return decimalFormat.format(j / 1024.0d) + "KB";
        }
        if (j < DownloadConstants.GB) {
            return decimalFormat.format(j / 1048576.0d) + "AT";
        }
        return decimalFormat.format(j / 1.073741824E9d) + "GB";
    }

    private static double a(long j, int i) {
        DecimalFormat decimalFormat = new DecimalFormat("#.00");
        if (i == 1) {
            return Double.valueOf(decimalFormat.format(j)).doubleValue();
        }
        if (i == 2) {
            return Double.valueOf(decimalFormat.format(j / 1024.0d)).doubleValue();
        }
        if (i == 3) {
            return Double.valueOf(decimalFormat.format(j / 1048576.0d)).doubleValue();
        }
        if (i != 4) {
            return 0.0d;
        }
        return Double.valueOf(decimalFormat.format(j / 1.073741824E9d)).doubleValue();
    }

    /* JADX WARN: Can't wrap try/catch for region: R(2:(3:38|5|(1:7)(0))|36) */
    /* JADX WARN: Not initialized variable reg: 1, insn: 0x0048: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:27:0x0048 */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0046 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x004b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.io.File r4) throws java.lang.Throwable {
        /*
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L47
            r4.<init>()     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L47
        L10:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            if (r2 == 0) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r3.<init>()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r3.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            java.lang.String r2 = r3.toString()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            r4.append(r2)     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L47
            goto L10
        L2b:
            r1.close()     // Catch: java.io.IOException -> L3f
            goto L3f
        L2f:
            r2 = move-exception
            goto L39
        L31:
            r2 = move-exception
            r4 = r0
            goto L39
        L34:
            r4 = move-exception
            goto L49
        L36:
            r2 = move-exception
            r4 = r0
            r1 = r4
        L39:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L3f
            goto L2b
        L3f:
            if (r4 == 0) goto L46
            java.lang.String r4 = r4.toString()
            return r4
        L46:
            return r0
        L47:
            r4 = move-exception
            r0 = r1
        L49:
            if (r0 == 0) goto L4e
            r0.close()     // Catch: java.io.IOException -> L4e
        L4e:
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.m.a(java.io.File):java.lang.String");
    }

    public static boolean a(String str) {
        if (com.tkay.expressad.foundation.g.d.e.a(str)) {
            return false;
        }
        File file = new File(str);
        return file.length() > 0 && file.isFile();
    }

    public static File[] b(String str) {
        try {
            File file = new File(str);
            if (file.exists()) {
                return file.listFiles();
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    public static void a() {
        new Thread(new Runnable() { // from class: com.tkay.expressad.foundation.h.m.1
            /* JADX WARN: Removed duplicated region for block: B:24:0x0048  */
            /* JADX WARN: Removed duplicated region for block: B:37:? A[RETURN, SYNTHETIC] */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    r5 = this;
                    com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L43
                    android.content.Context r0 = r0.d()     // Catch: java.lang.Exception -> L43
                    if (r0 == 0) goto L42
                    com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.ANYTHINK_VC     // Catch: java.lang.Exception -> L43
                    java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)     // Catch: java.lang.Exception -> L43
                    java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3e
                    r1.<init>(r0)     // Catch: java.lang.Exception -> L3e
                    boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L3e
                    if (r2 == 0) goto L3d
                    boolean r1 = r1.isDirectory()     // Catch: java.lang.Exception -> L3e
                    if (r1 == 0) goto L3d
                    java.io.File[] r0 = com.tkay.expressad.foundation.h.m.b(r0)     // Catch: java.lang.Exception -> L3e
                    int r1 = r0.length     // Catch: java.lang.Exception -> L3e
                    r2 = 0
                L27:
                    if (r2 >= r1) goto L3d
                    r3 = r0[r2]     // Catch: java.lang.Exception -> L3e
                    boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L3e
                    if (r4 == 0) goto L3a
                    boolean r4 = r3.isFile()     // Catch: java.lang.Exception -> L3e
                    if (r4 == 0) goto L3a
                    r3.delete()     // Catch: java.lang.Exception -> L3e
                L3a:
                    int r2 = r2 + 1
                    goto L27
                L3d:
                    return
                L3e:
                    r0 = move-exception
                    r0.printStackTrace()     // Catch: java.lang.Exception -> L43
                L42:
                    return
                L43:
                    r0 = move-exception
                    boolean r1 = com.tkay.expressad.b.f6449a
                    if (r1 == 0) goto L4b
                    r0.printStackTrace()
                L4b:
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.m.AnonymousClass1.run():void");
            }
        }).start();
    }

    public static void c(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            long jCurrentTimeMillis = System.currentTimeMillis() - 1440000;
            File file = new File(str);
            if (file.exists() && file.isDirectory()) {
                long jCurrentTimeMillis2 = System.currentTimeMillis();
                File[] fileArrListFiles = file.listFiles();
                if (fileArrListFiles != null) {
                    for (File file2 : fileArrListFiles) {
                        if (file2.lastModified() + jCurrentTimeMillis < jCurrentTimeMillis2) {
                            b(file2);
                            try {
                                File file3 = new File(str + ".zip");
                                if (file3.exists() && file3.isFile()) {
                                    b(file3);
                                }
                            } catch (Exception unused) {
                            }
                        }
                    }
                }
            }
        } catch (Exception unused2) {
        }
    }

    public static void b() {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.expressad.foundation.h.m.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    com.tkay.expressad.d.b.a();
                    com.tkay.expressad.foundation.b.b.b().e();
                    com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                    if (aVarB == null) {
                        com.tkay.expressad.d.b.a();
                        aVarB = com.tkay.expressad.d.b.c();
                    }
                    m.a(com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.ANYTHINK_RES_MANAGER_DIR), aVarB.b());
                    m.a(System.currentTimeMillis() - ((long) (aVarB.n() * 1000)));
                } catch (Exception e2) {
                    if (com.tkay.expressad.b.f6449a) {
                        e2.printStackTrace();
                    }
                }
            }
        });
    }

    public static String b(File file) {
        try {
            if (file.isFile()) {
                file.delete();
                return "";
            }
            if (!file.isDirectory()) {
                return "";
            }
            File[] fileArrListFiles = file.listFiles();
            if (fileArrListFiles != null && fileArrListFiles.length != 0) {
                for (File file2 : fileArrListFiles) {
                    b(file2);
                }
                file.delete();
                return "";
            }
            file.delete();
            return "";
        } catch (Exception e2) {
            return e2.getMessage();
        }
    }

    private static void c(String str, int i) {
        try {
            if (d(new File(str)) > i * 1048576) {
                f(str);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        } catch (Throwable unused) {
        }
    }

    private static ArrayList<File> e(File file) {
        ArrayList<File> arrayList = new ArrayList<>();
        for (File file2 : file.listFiles(new FileFilter() { // from class: com.tkay.expressad.foundation.h.m.3
            @Override // java.io.FileFilter
            public final boolean accept(File file3) {
                return !file3.isHidden() || file3.isDirectory();
            }
        })) {
            if (!file2.isDirectory()) {
                arrayList.add(file2);
            } else {
                arrayList.addAll(e(file2));
            }
        }
        return arrayList;
    }

    private static void f(String str) {
        try {
            ArrayList<File> arrayListE = e(new File(str));
            Collections.sort(arrayListE, new Comparator<File>() { // from class: com.tkay.expressad.foundation.h.m.4
                @Override // java.util.Comparator
                public final boolean equals(Object obj) {
                    return true;
                }

                @Override // java.util.Comparator
                public final /* synthetic */ int compare(File file, File file2) {
                    long jLastModified = file.lastModified() - file2.lastModified();
                    if (jLastModified > 0) {
                        return 1;
                    }
                    return jLastModified == 0 ? 0 : -1;
                }

                private static int a(File file, File file2) {
                    long jLastModified = file.lastModified() - file2.lastModified();
                    if (jLastModified > 0) {
                        return 1;
                    }
                    return jLastModified == 0 ? 0 : -1;
                }
            });
            int size = (arrayListE.size() - 1) / 2;
            for (int i = 0; i < size; i++) {
                File file = arrayListE.get(i);
                if (file.exists() && file.isFile()) {
                    file.delete();
                }
            }
        } catch (Exception unused) {
        }
    }

    public static void a(long j) {
        try {
            for (File file : e(new File(com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.ANYTHINK_RES_MANAGER_DIR)))) {
                if (file.lastModified() < j && file.exists() && file.isFile()) {
                    file.delete();
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static void g(String str) {
        try {
            File file = new File(str);
            if (file.exists() && file.isDirectory()) {
                for (File file2 : b(str)) {
                    if (file2.exists() && file2.isFile()) {
                        file2.delete();
                    }
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private static boolean a(String str, String str2, String str3) throws Throwable {
        try {
            if (r.b()) {
                String str4 = str + File.separator + str3;
                File file = new File(str4);
                if (file.exists() && file.isFile() && r.a(file.length())) {
                    File file2 = new File(str2);
                    if (!file2.exists()) {
                        file2.mkdirs();
                    }
                    int iB = b(str4, str2 + File.separator + str3);
                    if (file.exists() && iB == 0) {
                        file.delete();
                        return true;
                    }
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:77:0x0081 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0077 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static int b(java.lang.String r5, java.lang.String r6) throws java.lang.Throwable {
        /*
            r0 = 0
            r1 = -1
            boolean r2 = com.tkay.expressad.foundation.h.r.f6955a     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            if (r2 != 0) goto L7
            return r1
        L7:
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L74
            java.io.FileOutputStream r5 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5a
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L5a
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
        L15:
            int r3 = r2.read(r0)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r4 = 0
            if (r3 <= 0) goto L20
            r5.write(r0, r4, r3)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            goto L15
        L20:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            boolean r6 = r0.exists()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            if (r6 == 0) goto L43
            boolean r6 = r0.isFile()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L5b
            if (r6 != 0) goto L32
            goto L43
        L32:
            r2.close()     // Catch: java.io.IOException -> L36
            goto L3a
        L36:
            r6 = move-exception
            r6.printStackTrace()
        L3a:
            r5.close()     // Catch: java.io.IOException -> L3e
            goto L42
        L3e:
            r5 = move-exception
            r5.printStackTrace()
        L42:
            return r4
        L43:
            r2.close()     // Catch: java.io.IOException -> L47
            goto L4b
        L47:
            r6 = move-exception
            r6.printStackTrace()
        L4b:
            r5.close()     // Catch: java.io.IOException -> L4f
            goto L53
        L4f:
            r5 = move-exception
            r5.printStackTrace()
        L53:
            return r1
        L54:
            r6 = move-exception
            goto L58
        L56:
            r6 = move-exception
            r5 = r0
        L58:
            r0 = r2
            goto L5f
        L5a:
            r5 = r0
        L5b:
            r0 = r2
            goto L75
        L5d:
            r6 = move-exception
            r5 = r0
        L5f:
            if (r0 == 0) goto L69
            r0.close()     // Catch: java.io.IOException -> L65
            goto L69
        L65:
            r0 = move-exception
            r0.printStackTrace()
        L69:
            if (r5 == 0) goto L73
            r5.close()     // Catch: java.io.IOException -> L6f
            goto L73
        L6f:
            r5 = move-exception
            r5.printStackTrace()
        L73:
            throw r6
        L74:
            r5 = r0
        L75:
            if (r0 == 0) goto L7f
            r0.close()     // Catch: java.io.IOException -> L7b
            goto L7f
        L7b:
            r6 = move-exception
            r6.printStackTrace()
        L7f:
            if (r5 == 0) goto L89
            r5.close()     // Catch: java.io.IOException -> L85
            goto L89
        L85:
            r5 = move-exception
            r5.printStackTrace()
        L89:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.m.b(java.lang.String, java.lang.String):int");
    }

    public static boolean a(byte[] bArr, File file) throws Throwable {
        FileOutputStream fileOutputStream;
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                if (file.getParentFile() != null && !file.exists()) {
                    file.getParentFile().mkdirs();
                }
                fileOutputStream = new FileOutputStream(file);
            } catch (Exception e2) {
                e = e2;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            fileOutputStream.write(bArr);
            try {
                fileOutputStream.close();
                return true;
            } catch (IOException e3) {
                e3.printStackTrace();
                return true;
            }
        } catch (Exception e4) {
            e = e4;
            fileOutputStream2 = fileOutputStream;
            e.printStackTrace();
            if (fileOutputStream2 == null) {
                return false;
            }
            try {
                fileOutputStream2.close();
                return false;
            } catch (IOException e5) {
                e5.printStackTrace();
                return false;
            }
        } catch (Throwable th2) {
            th = th2;
            fileOutputStream2 = fileOutputStream;
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException e6) {
                    e6.printStackTrace();
                }
            }
            throw th;
        }
    }

    private static boolean c(String str, String str2) {
        File[] fileArrListFiles;
        if (str != null) {
            try {
                if (!TextUtils.isEmpty(str) && str2 != null && !TextUtils.isEmpty(str2)) {
                    File file = new File(str);
                    if (file.isDirectory() && file.listFiles() != null && file.listFiles().length > 0 && (fileArrListFiles = file.listFiles()) != null) {
                        for (File file2 : fileArrListFiles) {
                            if (file2.isFile()) {
                                if (str2.equals(file2.getName())) {
                                    return true;
                                }
                            } else {
                                c(file2.getAbsolutePath(), str2);
                            }
                        }
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        return false;
    }

    public static String d(String str) {
        return !TextUtils.isEmpty(str) ? p.a(x.a(str.trim())) : "";
    }

    /* JADX WARN: Code restructure failed: missing block: B:78:0x0103, code lost:
    
        throw new java.lang.Exception("zipEntry's name is unsafe!");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.lang.String r9, java.lang.String r10) {
        /*
            Method dump skipped, instruction units count: 345
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.m.a(java.lang.String, java.lang.String):java.lang.String");
    }

    private static boolean d(String str, int i) {
        try {
            Class.forName("android.os.FileUtils").getMethod("setPermissions", String.class, Integer.TYPE, Integer.TYPE, Integer.TYPE).invoke(null, str, Integer.valueOf(i), -1, -1);
            return true;
        } catch (ClassNotFoundException | IllegalAccessException | IllegalArgumentException | NoSuchMethodException | InvocationTargetException unused) {
            return false;
        }
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f6951a = 448;
        public static final int b = 256;
        public static final int c = 128;
        public static final int d = 64;
        public static final int e = 56;
        public static final int f = 32;
        public static final int g = 16;
        public static final int h = 8;
        public static final int i = 7;
        public static final int j = 4;
        public static final int k = 2;
        public static final int l = 1;

        a() {
        }
    }

    static /* synthetic */ void a(String str, int i) {
        try {
            if (d(new File(str)) > i * 1048576) {
                f(str);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        } catch (Throwable unused) {
        }
    }
}
