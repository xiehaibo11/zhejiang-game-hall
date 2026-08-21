package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Enumeration;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

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
    */
    public static String a(File file) {
        StringBuffer stringBuffer;
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        if (file == null) {
            return null;
        }
        try {
            bufferedReader = new BufferedReader(new FileReader(file));
            try {
                try {
                    stringBuffer = new StringBuffer();
                } catch (IOException e) {
                    e = e;
                    stringBuffer = null;
                }
            } catch (Throwable th) {
                th = th;
                bufferedReader2 = bufferedReader;
                if (bufferedReader2 != null) {
                    try {
                        bufferedReader2.close();
                    } catch (IOException unused) {
                    }
                }
                throw th;
            }
        } catch (IOException e2) {
            e = e2;
            stringBuffer = null;
            bufferedReader = null;
        } catch (Throwable th2) {
            th = th2;
            if (bufferedReader2 != null) {
            }
            throw th;
        }
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line != null) {
                    stringBuffer.append(line + "\n");
                }
            } catch (IOException e3) {
                e = e3;
                e.printStackTrace();
                if (bufferedReader != null) {
                    break;
                }
                if (stringBuffer == null) {
                }
            }
            break;
        }
        bufferedReader.close();
        if (stringBuffer == null) {
            return stringBuffer.toString();
        }
        return null;
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
        new Thread(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:23:0x0047  */
            /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final void run() {
                try {
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                    }
                }
                if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                    String strB = com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.c);
                    try {
                        File file = new File(strB);
                        if (file.exists() && file.isDirectory()) {
                            for (File file2 : x.b(strB)) {
                                if (file2.exists() && file2.isFile()) {
                                    file2.delete();
                                }
                            }
                            return;
                        }
                        return;
                    } catch (Exception e2) {
                        e2.printStackTrace();
                        return;
                    }
                    if (MBridgeConstans.DEBUG) {
                        return;
                    }
                    e.printStackTrace();
                }
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
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                try {
                    com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                    if (aVarB == null) {
                        aVarB = com.mbridge.msdk.c.b.a().b();
                    }
                    x.a(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.k), aVarB.p());
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
        for (File file2 : file.listFiles(new FileFilter() {
            @Override
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
            Collections.sort(arrayListE, new Comparator<File>() {
                @Override
                public final boolean equals(Object obj) {
                    return true;
                }

                @Override
                public final int compare(File file, File file2) {
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
            for (File file : e(new File(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.k)))) {
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
    */
    public static String a(String str, String str2) throws Throwable {
        FileOutputStream fileOutputStream;
        ZipFile zipFile;
        Enumeration<? extends ZipEntry> enumerationEntries;
        if (str == null || str2 == null) {
            return "unzip srcFile or destDir is null ";
        }
        if (!str2.endsWith("/")) {
            str2 = str2 + "/";
        }
        File file = new File(str);
        if (!file.exists()) {
            return "unzip file not exists";
        }
        InputStream inputStream = null;
        try {
            zipFile = new ZipFile(file);
            enumerationEntries = zipFile.entries();
            fileOutputStream = null;
        } catch (IOException e) {
            e = e;
            fileOutputStream = null;
        } catch (Throwable th) {
            th = th;
            fileOutputStream = null;
        }
        while (true) {
            try {
                try {
                    String canonicalPath = "";
                    if (!enumerationEntries.hasMoreElements()) {
                        break;
                    }
                    ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
                    if (zipEntryNextElement != null) {
                        String name = zipEntryNextElement.getName();
                        if (!TextUtils.isEmpty(name) && !name.startsWith("..") && !name.startsWith("../")) {
                            File file2 = new File(str2 + name);
                            try {
                                canonicalPath = file2.getCanonicalPath();
                            } catch (IOException unused) {
                            }
                            if (TextUtils.isEmpty(canonicalPath) || !canonicalPath.startsWith(str2) || canonicalPath.startsWith("..") || canonicalPath.startsWith("../")) {
                                break;
                            }
                            if (zipEntryNextElement.isDirectory()) {
                                file2.mkdirs();
                            } else {
                                if (!file2.getParentFile().exists()) {
                                    file2.getParentFile().mkdirs();
                                }
                                FileOutputStream fileOutputStream2 = new FileOutputStream(file2);
                                try {
                                    inputStream = zipFile.getInputStream(zipEntryNextElement);
                                    byte[] bArr = new byte[1024];
                                    while (true) {
                                        int i = inputStream.read(bArr, 0, 1024);
                                        if (i == -1) {
                                            break;
                                        }
                                        fileOutputStream2.write(bArr, 0, i);
                                        fileOutputStream2.flush();
                                    }
                                    fileOutputStream = fileOutputStream2;
                                } catch (IOException e2) {
                                    e = e2;
                                    fileOutputStream = fileOutputStream2;
                                } catch (Throwable th2) {
                                    th = th2;
                                    fileOutputStream = fileOutputStream2;
                                    if (inputStream != null) {
                                        try {
                                            inputStream.close();
                                        } catch (IOException e3) {
                                            e3.printStackTrace();
                                        }
                                    }
                                    if (fileOutputStream == null) {
                                        throw th;
                                    }
                                    try {
                                        fileOutputStream.close();
                                        throw th;
                                    } catch (IOException e4) {
                                        e4.printStackTrace();
                                        throw th;
                                    }
                                }
                            }
                        } else {
                            break;
                        }
                    } else {
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (IOException e5) {
                                e5.printStackTrace();
                            }
                        }
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
                            } catch (IOException e6) {
                                e6.printStackTrace();
                            }
                        }
                        return "unzip zipEntry is null";
                    }
                } catch (IOException e7) {
                    e = e7;
                }
            } catch (Throwable th3) {
                th = th3;
            }
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            String message = e.getMessage();
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException e8) {
                    e8.printStackTrace();
                }
            }
            if (fileOutputStream != null) {
                try {
                    fileOutputStream.close();
                } catch (IOException e9) {
                    e9.printStackTrace();
                }
            }
            return message;
        }
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (IOException e10) {
                e10.printStackTrace();
            }
        }
        if (fileOutputStream != null) {
            try {
                fileOutputStream.close();
            } catch (IOException e11) {
                e11.printStackTrace();
            }
        }
        return "unzip zipEntry canonicalPath is not available";
        if (fileOutputStream != null) {
            try {
                fileOutputStream.close();
            } catch (IOException e12) {
                e12.printStackTrace();
            }
        }
        return "";
        return "";
        if (fileOutputStream != null) {
            try {
                fileOutputStream.close();
            } catch (IOException e13) {
                e13.printStackTrace();
            }
        }
        return "unzip zipEntry name is not available";
        return "unzip zipEntry name is not available";
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

    static void a(String str, int i) {
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
