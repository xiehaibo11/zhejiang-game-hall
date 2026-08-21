package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: SameFileTool.java */
/* JADX INFO: loaded from: classes2.dex */
public final class x extends f {
    private static long c(File file) throws Exception {
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
                        } catch (Exception e) {
                            e = e;
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
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                }
                            }
                            throw th;
                        }
                    } else {
                        file.createNewFile();
                        z.d("获取文件大小", "文件不存在!");
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Exception e3) {
                e = e3;
            }
            if (fileInputStream != null) {
                fileInputStream.close();
            }
        } catch (Exception e4) {
            e4.printStackTrace();
        }
        return jAvailable;
    }

    private static long d(File file) throws Exception {
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

    /* JADX WARN: Can't wrap try/catch for region: R(2:(3:41|7|(1:9)(0))|39) */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0044  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0049 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x004e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.io.File r4) {
        /*
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.lang.StringBuffer r4 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L4a
            r4.<init>()     // Catch: java.io.IOException -> L34 java.lang.Throwable -> L4a
        L13:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            if (r2 == 0) goto L2e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r3.<init>()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r3.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            java.lang.String r2 = r3.toString()     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            r4.append(r2)     // Catch: java.io.IOException -> L32 java.lang.Throwable -> L4a
            goto L13
        L2e:
            r1.close()     // Catch: java.io.IOException -> L42
            goto L42
        L32:
            r2 = move-exception
            goto L3c
        L34:
            r2 = move-exception
            r4 = r0
            goto L3c
        L37:
            r4 = move-exception
            goto L4c
        L39:
            r2 = move-exception
            r4 = r0
            r1 = r4
        L3c:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L42
            goto L2e
        L42:
            if (r4 == 0) goto L49
            java.lang.String r4 = r4.toString()
            return r4
        L49:
            return r0
        L4a:
            r4 = move-exception
            r0 = r1
        L4c:
            if (r0 == 0) goto L51
            r0.close()     // Catch: java.io.IOException -> L51
        L51:
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.x.a(java.io.File):java.lang.String");
    }

    public static boolean a(String str) {
        if (com.mbridge.msdk.foundation.same.c.e.a(str)) {
            return false;
        }
        File file = new File(str);
        return file.exists() && file.isFile();
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
        new Thread(new Runnable() { // from class: com.mbridge.msdk.foundation.tools.x.1
            /* JADX WARN: Removed duplicated region for block: B:23:0x0047  */
            /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void run() {
                /*
                    r5 = this;
                    com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L42
                    android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L42
                    if (r0 == 0) goto L4a
                    com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.MBRIDGE_VC     // Catch: java.lang.Exception -> L42
                    java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)     // Catch: java.lang.Exception -> L42
                    java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3d
                    r1.<init>(r0)     // Catch: java.lang.Exception -> L3d
                    boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L3d
                    if (r2 == 0) goto L4a
                    boolean r1 = r1.isDirectory()     // Catch: java.lang.Exception -> L3d
                    if (r1 == 0) goto L4a
                    java.io.File[] r0 = com.mbridge.msdk.foundation.tools.x.b(r0)     // Catch: java.lang.Exception -> L3d
                    int r1 = r0.length     // Catch: java.lang.Exception -> L3d
                    r2 = 0
                L27:
                    if (r2 >= r1) goto L4a
                    r3 = r0[r2]     // Catch: java.lang.Exception -> L3d
                    boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L3d
                    if (r4 == 0) goto L3a
                    boolean r4 = r3.isFile()     // Catch: java.lang.Exception -> L3d
                    if (r4 == 0) goto L3a
                    r3.delete()     // Catch: java.lang.Exception -> L3d
                L3a:
                    int r2 = r2 + 1
                    goto L27
                L3d:
                    r0 = move-exception
                    r0.printStackTrace()     // Catch: java.lang.Exception -> L42
                    goto L4a
                L42:
                    r0 = move-exception
                    boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                    if (r1 == 0) goto L4a
                    r0.printStackTrace()
                L4a:
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.x.AnonymousClass1.run():void");
            }
        }).start();
    }

    public static void c(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            long jCurrentTimeMillis = System.currentTimeMillis() - ((long) (aVarB.X() * 1000));
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
        Runnable runnable = new Runnable() { // from class: com.mbridge.msdk.foundation.tools.x.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                    if (aVarB == null) {
                        aVarB = com.mbridge.msdk.c.b.a().b();
                    }
                    x.a(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_RES_MANAGER_DIR), aVarB.p());
                    x.a(System.currentTimeMillis() - ((long) (aVarB.X() * 1000)));
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        };
        if (com.mbridge.msdk.foundation.controller.b.a().d()) {
            com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
        } else {
            runnable.run();
        }
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
        } catch (Exception e) {
            return e.getMessage();
        }
    }

    private static ArrayList<File> e(File file) {
        ArrayList<File> arrayList = new ArrayList<>();
        for (File file2 : file.listFiles(new FileFilter() { // from class: com.mbridge.msdk.foundation.tools.x.3
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

    private static void e(String str) {
        try {
            ArrayList<File> arrayListE = e(new File(str));
            Collections.sort(arrayListE, new Comparator<File>() { // from class: com.mbridge.msdk.foundation.tools.x.4
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
            });
            int size = (arrayListE.size() - 1) / 2;
            for (int i = 0; i < size; i++) {
                File file = arrayListE.get(i);
                if (file.exists() && file.isFile()) {
                    file.delete();
                }
            }
        } catch (Exception unused) {
            z.d("SameFileTool", "del memory failed");
        }
    }

    public static void a(long j) {
        try {
            for (File file : e(new File(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_RES_MANAGER_DIR)))) {
                if (file.lastModified() < j && file.exists() && file.isFile()) {
                    file.delete();
                }
            }
        } catch (Throwable th) {
            z.c("SameFileTool", th.getMessage(), th);
        }
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
            } catch (Exception e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            fileOutputStream.write(bArr);
            try {
                fileOutputStream.close();
                return true;
            } catch (IOException e2) {
                e2.printStackTrace();
                return true;
            }
        } catch (Exception e3) {
            e = e3;
            fileOutputStream2 = fileOutputStream;
            e.printStackTrace();
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            return false;
        } catch (Throwable th2) {
            th = th2;
            fileOutputStream2 = fileOutputStream;
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            }
            throw th;
        }
    }

    public static String d(String str) {
        return !TextUtils.isEmpty(str) ? SameMD5.getMD5(ak.a(str.trim())) : "";
    }

    /* JADX WARN: Code restructure failed: missing block: B:81:0x0104, code lost:
    
        if (r10 == null) goto L86;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0106, code lost:
    
        r10.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x010a, code lost:
    
        r10 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x010b, code lost:
    
        r10.printStackTrace();
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0119, code lost:
    
        r3.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x011c, code lost:
    
        if (r10 == null) goto L98;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x011e, code lost:
    
        r10.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x0122, code lost:
    
        r10 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x0123, code lost:
    
        r10.printStackTrace();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String a(java.lang.String r10, java.lang.String r11) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 369
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.x.a(java.lang.String, java.lang.String):java.lang.String");
    }

    protected static boolean a(String str, int i, int i2, int i3) {
        try {
            Class.forName("android.os.FileUtils").getMethod("setPermissions", String.class, Integer.TYPE, Integer.TYPE, Integer.TYPE).invoke(null, str, Integer.valueOf(i), -1, -1);
            return true;
        } catch (ClassNotFoundException e) {
            z.a("SameFileTool", "error when set permissions:", e);
            return false;
        } catch (IllegalAccessException e2) {
            z.a("SameFileTool", "error when set permissions:", e2);
            return false;
        } catch (IllegalArgumentException e3) {
            z.a("SameFileTool", "error when set permissions:", e3);
            return false;
        } catch (NoSuchMethodException e4) {
            z.a("SameFileTool", "error when set permissions:", e4);
            return false;
        } catch (InvocationTargetException e5) {
            z.a("SameFileTool", "error when set permissions:", e5);
            return false;
        }
    }

    public static List<String> b(String str, String str2) {
        ArrayList arrayList = new ArrayList();
        try {
        } catch (Exception e) {
            z.d("SameFileTool", e.getMessage());
        }
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            File file = new File(str + File.separator + "template_config.json");
            if (file.isFile() && file.exists()) {
                String strA = a(file);
                if (TextUtils.isEmpty(strA)) {
                    return arrayList;
                }
                try {
                    JSONArray jSONArray = new JSONArray(strA);
                    for (int i = 0; i < jSONArray.length(); i++) {
                        JSONObject jSONObject = jSONArray.getJSONObject(i);
                        if (jSONObject != null && str2.equals(jSONObject.optString("xml_type"))) {
                            arrayList.add(str + File.separator + jSONObject.optString("name"));
                            if (jSONObject.has("ext_template")) {
                                jSONObject.put("folder_dir", str);
                                arrayList.add(jSONObject.toString());
                            }
                        }
                    }
                } catch (JSONException e2) {
                    z.d("SameFileTool", e2.getMessage());
                    return arrayList;
                }
                return arrayList;
            }
            arrayList.add(str);
        }
        return arrayList;
    }

    static /* synthetic */ void a(String str, int i) {
        try {
            if (d(new File(str)) > i * 1048576) {
                e(str);
            }
        } catch (Exception e) {
            e.printStackTrace();
        } catch (Throwable unused) {
            z.d("SameFileTool", "clean memory failed");
        }
    }
}
