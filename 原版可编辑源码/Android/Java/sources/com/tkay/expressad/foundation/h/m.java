package com.tkay.expressad.foundation.h;

import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Enumeration;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

public final class m extends e {
    public static final int a = 1;
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
    */
    public static String a(File file) throws Throwable {
        StringBuffer stringBuffer;
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2;
        BufferedReader bufferedReader3 = null;
        try {
            try {
                bufferedReader = new BufferedReader(new FileReader(file));
                try {
                    stringBuffer = new StringBuffer();
                } catch (IOException e2) {
                    e = e2;
                    stringBuffer = null;
                }
            } catch (Throwable th) {
                th = th;
                bufferedReader3 = bufferedReader2;
                if (bufferedReader3 != null) {
                    try {
                        bufferedReader3.close();
                    } catch (IOException unused) {
                    }
                }
                throw th;
            }
        } catch (IOException e3) {
            e = e3;
            stringBuffer = null;
            bufferedReader = null;
        } catch (Throwable th2) {
            th = th2;
            if (bufferedReader3 != null) {
            }
            throw th;
        }
        while (true) {
            try {
                String line = bufferedReader.readLine();
                if (line != null) {
                    stringBuffer.append(line + "\n");
                }
            } catch (IOException e4) {
                e = e4;
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
        new Thread(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:24:0x0048  */
            /* JADX WARN: Removed duplicated region for block: B:37:? A[RETURN, SYNTHETIC] */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final void run() {
                try {
                } catch (Exception e2) {
                    if (com.tkay.expressad.b.a) {
                    }
                }
                if (com.tkay.expressad.foundation.b.b.b().d() != null) {
                    String strB = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.d);
                    try {
                        File file = new File(strB);
                        if (file.exists() && file.isDirectory()) {
                            for (File file2 : m.b(strB)) {
                                if (file2.exists() && file2.isFile()) {
                                    file2.delete();
                                }
                            }
                            return;
                        }
                        return;
                    } catch (Exception e3) {
                        e3.printStackTrace();
                        return;
                    }
                    if (com.tkay.expressad.b.a) {
                        return;
                    }
                    e2.printStackTrace();
                }
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
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    com.tkay.expressad.d.b.a();
                    com.tkay.expressad.foundation.b.b.b().e();
                    com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
                    if (aVarB == null) {
                        com.tkay.expressad.d.b.a();
                        aVarB = com.tkay.expressad.d.b.c();
                    }
                    m.a(com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.l), aVarB.b());
                    m.a(System.currentTimeMillis() - ((long) (aVarB.n() * 1000)));
                } catch (Exception e2) {
                    if (com.tkay.expressad.b.a) {
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

    private static void f(String str) {
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
            for (File file : e(new File(com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.l)))) {
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
    */
    private static int b(String str, String str2) throws Throwable {
        FileOutputStream fileOutputStream;
        FileInputStream fileInputStream = null;
        try {
            if (!r.a) {
                return -1;
            }
            FileInputStream fileInputStream2 = new FileInputStream(str);
            try {
                fileOutputStream = new FileOutputStream(str2);
                try {
                    byte[] bArr = new byte[1024];
                    while (true) {
                        int i = fileInputStream2.read(bArr);
                        if (i <= 0) {
                            break;
                        }
                        fileOutputStream.write(bArr, 0, i);
                    }
                    File file = new File(str2);
                    if (file.exists()) {
                        if (file.isFile()) {
                            try {
                                fileInputStream2.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                            try {
                                fileOutputStream.close();
                            } catch (IOException e3) {
                                e3.printStackTrace();
                            }
                            return 0;
                        }
                    }
                    try {
                        fileInputStream2.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                    try {
                        fileOutputStream.close();
                    } catch (IOException e5) {
                        e5.printStackTrace();
                    }
                    return -1;
                } catch (Exception unused) {
                    fileInputStream = fileInputStream2;
                    if (fileInputStream != null) {
                    }
                    if (fileOutputStream != null) {
                    }
                    return -1;
                } catch (Throwable th) {
                    th = th;
                    fileInputStream = fileInputStream2;
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (IOException e6) {
                            e6.printStackTrace();
                        }
                    }
                    if (fileOutputStream == null) {
                        throw th;
                    }
                    try {
                        fileOutputStream.close();
                        throw th;
                    } catch (IOException e7) {
                        e7.printStackTrace();
                        throw th;
                    }
                }
            } catch (Exception unused2) {
                fileOutputStream = null;
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream = null;
            }
        } catch (Exception unused3) {
            fileOutputStream = null;
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream = null;
        }
        if (fileInputStream != null) {
            try {
                fileInputStream.close();
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
        return -1;
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
    */
    public static String a(String str, String str2) {
        FileOutputStream fileOutputStream;
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
            ZipFile zipFile = new ZipFile(file);
            Enumeration<? extends ZipEntry> enumerationEntries = zipFile.entries();
            fileOutputStream = null;
            while (true) {
                try {
                    String canonicalPath = "";
                    if (!enumerationEntries.hasMoreElements()) {
                        zipFile.close();
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                        }
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
                            } catch (IOException e3) {
                                e3.printStackTrace();
                            }
                        }
                        return "";
                    }
                    ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
                    if (zipEntryNextElement != null) {
                        String name = zipEntryNextElement.getName();
                        if (!TextUtils.isEmpty(name) && !name.contains("../")) {
                            File file2 = new File(str2 + name);
                            try {
                                canonicalPath = file2.getCanonicalPath();
                            } catch (IOException unused) {
                            }
                            if (TextUtils.isEmpty(canonicalPath) || !canonicalPath.startsWith(str2) || canonicalPath.startsWith("..") || canonicalPath.startsWith("../") || canonicalPath.contains("../")) {
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
                                } catch (Throwable th) {
                                    th = th;
                                    fileOutputStream = fileOutputStream2;
                                    try {
                                        if (com.tkay.expressad.b.a) {
                                            th.printStackTrace();
                                        }
                                        String message = th.getMessage();
                                        if (inputStream != null) {
                                            try {
                                                inputStream.close();
                                            } catch (IOException e4) {
                                                e4.printStackTrace();
                                            }
                                        }
                                        if (fileOutputStream != null) {
                                            try {
                                                fileOutputStream.close();
                                            } catch (IOException e5) {
                                                e5.printStackTrace();
                                            }
                                        }
                                        return message;
                                    } finally {
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
                            } catch (IOException e6) {
                                e6.printStackTrace();
                            }
                        }
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
                            } catch (IOException e7) {
                                e7.printStackTrace();
                            }
                        }
                        return "unzip zipEntry is null";
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            }
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
            return "unzip zipEntry canonicalPath is not available";
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream = null;
        }
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
        public static final int a = 448;
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

    static void a(String str, int i) {
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
