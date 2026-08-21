package com.qq.e.comm.managers.plugin;

import android.content.Context;
import com.qq.e.comm.util.GDTLogger;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStreamWriter;

class h {
    private static String a = b.a("e_qq_com_plugin");
    private static String b = b.a("e_qq_com_dex");

    static File a(Context context) {
        return context.getDir(b, 0);
    }

    static String a() {
        return "gdt_plugin";
    }

    public static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Exception unused) {
            }
        }
    }

    static void a(String str, File file) throws Throwable {
        if (file == null) {
            throw new IOException("Target File Can not be null in StringUtil.writeTo");
        }
        File parentFile = file.getParentFile();
        if (parentFile != null && !parentFile.exists()) {
            parentFile.mkdirs();
        }
        OutputStreamWriter outputStreamWriter = null;
        try {
            OutputStreamWriter outputStreamWriter2 = new OutputStreamWriter(new FileOutputStream(file), "UTF-8");
            try {
                outputStreamWriter2.write(str);
                a(outputStreamWriter2);
            } catch (Throwable th) {
                th = th;
                outputStreamWriter = outputStreamWriter2;
                a(outputStreamWriter);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static boolean a(File file, File file2) {
        if (file == null || !file.exists()) {
            return false;
        }
        if (file.renameTo(file2)) {
            return true;
        }
        try {
            return a(new FileInputStream(file), file2);
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean a(InputStream inputStream, File file) throws Throwable {
        if (inputStream == null || file == null) {
            return false;
        }
        FileOutputStream fileOutputStream = null;
        try {
            File parentFile = file.getParentFile();
            if (parentFile != null && !parentFile.exists() && !parentFile.mkdirs()) {
                GDTLogger.e("parent dir not exists " + parentFile.getAbsolutePath());
                return false;
            }
            FileOutputStream fileOutputStream2 = new FileOutputStream(file);
            try {
                byte[] bArr = new byte[16384];
                while (true) {
                    int i = inputStream.read(bArr);
                    if (i <= 0) {
                        a(inputStream);
                        a(fileOutputStream2);
                        return true;
                    }
                    fileOutputStream2.write(bArr, 0, i);
                }
            } catch (Throwable th) {
                th = th;
                fileOutputStream = fileOutputStream2;
                try {
                    GDTLogger.e("Exception while copy from InputStream to File", th);
                    throw th;
                } finally {
                    a(inputStream);
                    a(fileOutputStream);
                }
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    static File b(Context context) {
        return new File(context.getDir(a, 0), "update_lc");
    }

    static File c(Context context) {
        return new File(context.getDir(a, 0), "gdt_plugin.next");
    }

    static File d(Context context) {
        return new File(context.getDir(a, 0), "gdt_plugin.next.sig");
    }

    static File e(Context context) {
        return new File(context.getDir(a, 0), "gdt_plugin.jar");
    }

    static File f(Context context) {
        return new File(context.getDir(a, 0), "gdt_plugin.jar.sig");
    }
}
