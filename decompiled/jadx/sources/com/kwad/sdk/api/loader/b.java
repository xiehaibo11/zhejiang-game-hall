package com.kwad.sdk.api.loader;

import android.content.Context;
import android.text.TextUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Enumeration;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* JADX INFO: loaded from: classes2.dex */
final class b {
    private static void D(String str, String str2) {
        d(new FileInputStream(str), new FileOutputStream(str2));
    }

    private static void E(String str, String str2) throws Throwable {
        String str3 = w.is64Bit() ? "lib/arm64-v8a/" : "lib/armeabi-v7a/";
        ZipFile zipFile = null;
        try {
            ZipFile zipFile2 = new ZipFile(str);
            try {
                Enumeration<? extends ZipEntry> enumerationEntries = zipFile2.entries();
                while (enumerationEntries.hasMoreElements()) {
                    ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
                    if (!zipEntryNextElement.isDirectory()) {
                        String name = zipEntryNextElement.getName();
                        if (!TextUtils.isEmpty(name) && !name.contains("../") && name.endsWith(".so") && name.startsWith(str3)) {
                            d(zipFile2.getInputStream(zipEntryNextElement), new FileOutputStream(new File(str2, name.substring(str3.length()))));
                        }
                    }
                }
                try {
                    zipFile2.close();
                } catch (Exception unused) {
                }
            } catch (Throwable th) {
                th = th;
                zipFile = zipFile2;
                if (zipFile != null) {
                    try {
                        zipFile.close();
                    } catch (Exception unused2) {
                    }
                }
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    static boolean a(Context context, ClassLoader classLoader, String str, String str2) throws Exception {
        String strO = h.o(context, str2);
        h(new File(strO));
        String strQ = h.q(context, str2);
        String strR = h.r(context, str2);
        String strS = h.s(context, str2);
        try {
            D(str, strQ);
            E(str, strS);
            return k.b(context, classLoader, strQ, strR, strS).ys() != null;
        } catch (Exception e) {
            h(new File(strQ));
            h(new File(strR));
            h(new File(strS));
            h(new File(strO));
            throw e;
        }
    }

    private static void c(InputStream inputStream, OutputStream outputStream) throws IOException {
        byte[] bArr = new byte[8192];
        while (true) {
            int i = inputStream.read(bArr);
            if (i == -1) {
                return;
            } else {
                outputStream.write(bArr, 0, i);
            }
        }
    }

    private static void d(InputStream inputStream, OutputStream outputStream) {
        try {
            c(inputStream, outputStream);
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (Exception unused) {
                }
            }
            try {
                outputStream.close();
            } catch (Exception unused2) {
            }
        } finally {
        }
    }

    private static void h(File file) {
        if (file.isFile()) {
            file.delete();
            return;
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null || fileArrListFiles.length <= 0) {
            return;
        }
        for (File file2 : fileArrListFiles) {
            h(file2);
        }
    }
}
