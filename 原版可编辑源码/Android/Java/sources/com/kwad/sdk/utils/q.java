package com.kwad.sdk.utils;

import android.content.Context;
import android.text.TextUtils;
import cz.msebera.android.httpclient.HttpHeaders;
import cz.msebera.android.httpclient.message.TokenParser;
import java.io.BufferedInputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.math.BigInteger;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.List;

public final class q {
    private static final char aIA;
    public static final BigInteger aIp;
    public static final BigInteger aIq;
    public static final BigInteger aIr;
    public static final BigInteger aIs;
    public static final BigInteger aIt;
    public static final BigInteger aIu;
    public static final char aIv;
    public static final BigInteger aIw;
    public static final BigInteger aIx;
    public static final File[] aIy;
    public static final String aIz;

    static {
        BigInteger bigIntegerValueOf = BigInteger.valueOf(1024L);
        aIp = bigIntegerValueOf;
        BigInteger bigIntegerMultiply = bigIntegerValueOf.multiply(bigIntegerValueOf);
        aIq = bigIntegerMultiply;
        BigInteger bigIntegerMultiply2 = aIp.multiply(bigIntegerMultiply);
        aIr = bigIntegerMultiply2;
        BigInteger bigIntegerMultiply3 = aIp.multiply(bigIntegerMultiply2);
        aIs = bigIntegerMultiply3;
        BigInteger bigIntegerMultiply4 = aIp.multiply(bigIntegerMultiply3);
        aIt = bigIntegerMultiply4;
        aIu = aIp.multiply(bigIntegerMultiply4);
        BigInteger bigIntegerMultiply5 = BigInteger.valueOf(1024L).multiply(BigInteger.valueOf(1152921504606846976L));
        aIw = bigIntegerMultiply5;
        aIx = aIp.multiply(bigIntegerMultiply5);
        aIy = new File[0];
        aIz = Character.toString('.');
        aIA = File.separatorChar;
        aIv = If() ? '/' : TokenParser.ESCAPE;
    }

    private static boolean If() {
        return aIA == '\\';
    }

    public static String K(Context context, String str) {
        return "/data/data/" + context.getPackageName() + "/" + str + "/";
    }

    public static boolean L(File file) {
        return file != null && file.exists() && file.length() > 0;
    }

    public static boolean M(File file) {
        return file.exists();
    }

    private static FileInputStream N(File file) throws IOException {
        if (!file.exists()) {
            throw new FileNotFoundException("File '" + file + "' does not exist");
        }
        if (file.isDirectory()) {
            throw new IOException("File '" + file + "' exists but is a directory");
        }
        if (file.canRead()) {
            return new FileInputStream(file);
        }
        throw new IOException("File '" + file + "' cannot be read");
    }

    private static FileOutputStream O(File file) {
        return a(file, false);
    }

    public static void P(File file) throws IOException {
        if (file.exists()) {
            if (file.isDirectory()) {
                throw new IOException("File '" + file + "' exists but is a directory");
            }
            return;
        }
        File parentFile = file.getParentFile();
        if (parentFile == null) {
            throw new IOException("Could not find parent directory");
        }
        if (parentFile.mkdirs() || parentFile.isDirectory()) {
            file.createNewFile();
            return;
        }
        throw new IOException("Directory '" + parentFile + "' could not be created");
    }

    private static void Q(File file) throws IOException {
        if (file.exists()) {
            if (!Z(file)) {
                T(file);
            }
            if (file.delete()) {
                return;
            }
            throw new IOException("Unable to delete directory " + file + ".");
        }
    }

    public static boolean R(File file) {
        if (file == null) {
            return false;
        }
        try {
            if (file.isDirectory()) {
                T(file);
            }
        } catch (Exception unused) {
        }
        try {
            return file.delete();
        } catch (Exception unused2) {
            return false;
        }
    }

    public static boolean S(File file) {
        return R(file);
    }

    public static void T(File file) throws IOException {
        if (!file.exists()) {
            throw new IllegalArgumentException(file + " does not exist");
        }
        if (!file.isDirectory()) {
            throw new IllegalArgumentException(file + " is not a directory");
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            throw new IOException("Failed to list contents of " + file);
        }
        IOException e = null;
        for (File file2 : fileArrListFiles) {
            try {
                W(file2);
            } catch (IOException e2) {
                e = e2;
            }
        }
        if (e != null) {
            throw e;
        }
    }

    public static byte[] U(File file) {
        return V(file).getBytes();
    }

    public static String V(File file) {
        return a(file, Charset.defaultCharset());
    }

    private static void W(File file) throws IOException {
        if (file.isDirectory()) {
            Q(file);
            return;
        }
        boolean zExists = file.exists();
        if (file.delete()) {
            return;
        }
        if (zExists) {
            throw new IOException("Unable to delete file: " + file);
        }
        throw new FileNotFoundException("File does not exist: " + file);
    }

    public static void X(File file) throws IOException {
        if (file == null) {
            throw new IOException("Dir is null.");
        }
        if (!file.exists()) {
            file.mkdirs();
        } else {
            if (file.isDirectory()) {
                return;
            }
            if (!R(file)) {
                throw new IOException("Fail to delete existing file, file = " + file.getAbsolutePath());
            }
            file.mkdir();
        }
        if (file.exists() && file.isDirectory()) {
            return;
        }
        throw new IOException("Fail to create dir, dir = " + file.getAbsolutePath());
    }

    public static void Y(File file) throws IOException {
        R(file);
        s(file);
        if (!file.exists()) {
            throw new IOException("Create file fail");
        }
    }

    private static boolean Z(File file) {
        ao.checkNotNull(file);
        if (If()) {
            return false;
        }
        if (file.getParent() != null) {
            file = new File(file.getParentFile().getCanonicalFile(), file.getName());
        }
        return !file.getCanonicalFile().equals(file.getAbsoluteFile());
    }

    public static FileOutputStream a(File file, boolean z) throws IOException {
        P(file);
        return new FileOutputStream(file, z);
    }

    public static String a(File file, Charset charset) throws Throwable {
        FileInputStream fileInputStreamN;
        try {
            fileInputStreamN = N(file);
            try {
                String strA = com.kwad.sdk.crash.utils.h.a(fileInputStreamN, com.kwad.sdk.crash.utils.a.a(charset));
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStreamN);
                return strA;
            } catch (Throwable th) {
                th = th;
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStreamN);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            fileInputStreamN = null;
        }
    }

    public static void a(Context context, String str, File file) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("Asset path is empty.");
        }
        InputStream inputStreamOpen = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            b(inputStreamOpen, file);
        } finally {
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamOpen);
        }
    }

    private static void a(File file, File file2, FileFilter fileFilter, boolean z) throws Throwable {
        ArrayList arrayList;
        File[] fileArrListFiles;
        ao.h(file, "Source");
        ao.h(file2, HttpHeaders.DESTINATION);
        if (!file.exists()) {
            throw new FileNotFoundException("Source '" + file + "' does not exist");
        }
        if (!file.isDirectory()) {
            throw new IOException("Source '" + file + "' exists but is not a directory");
        }
        if (file.getCanonicalPath().equals(file2.getCanonicalPath())) {
            throw new IOException("Source '" + file + "' and destination '" + file2 + "' are the same");
        }
        if (!file2.getCanonicalPath().startsWith(file.getCanonicalPath()) || (fileArrListFiles = file.listFiles()) == null || fileArrListFiles.length <= 0) {
            arrayList = null;
        } else {
            arrayList = new ArrayList(fileArrListFiles.length);
            for (File file3 : fileArrListFiles) {
                arrayList.add(new File(file2, file3.getName()).getCanonicalPath());
            }
        }
        a(file, file2, null, z, arrayList);
    }

    private static void a(File file, File file2, FileFilter fileFilter, boolean z, List<String> list) throws Throwable {
        File[] fileArrListFiles = fileFilter == null ? file.listFiles() : file.listFiles(fileFilter);
        if (fileArrListFiles == null) {
            throw new IOException("Failed to list contents of " + file);
        }
        if (file2.exists()) {
            if (!file2.isDirectory()) {
                throw new IOException("Destination '" + file2 + "' exists but is not a directory");
            }
        } else if (!file2.mkdirs() && !file2.isDirectory()) {
            throw new IOException("Destination '" + file2 + "' directory cannot be created");
        }
        if (!file2.canWrite()) {
            throw new IOException("Destination '" + file2 + "' cannot be written to");
        }
        for (File file3 : fileArrListFiles) {
            File file4 = new File(file2, file3.getName());
            if (list == null || !list.contains(file3.getCanonicalPath())) {
                if (file3.isDirectory()) {
                    a(file3, file4, fileFilter, z, list);
                } else {
                    c(file3, file4, z);
                }
            }
        }
        if (z) {
            file2.setLastModified(file.lastModified());
        }
    }

    public static void a(File file, String str, Charset charset, boolean z) {
        FileOutputStream fileOutputStreamA;
        try {
            fileOutputStreamA = a(file, false);
            try {
                com.kwad.sdk.crash.utils.h.a(str, fileOutputStreamA, charset);
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStreamA);
            } catch (Throwable th) {
                th = th;
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStreamA);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            fileOutputStreamA = null;
        }
    }

    public static boolean aa(File file) throws Throwable {
        File file2 = new File(file.getAbsolutePath() + System.currentTimeMillis());
        e(file, file2);
        return R(file2);
    }

    private static void b(File file, File file2, boolean z) throws Throwable {
        ao.h(file, "Source");
        ao.h(file2, HttpHeaders.DESTINATION);
        if (!file.exists()) {
            throw new FileNotFoundException("Source '" + file + "' does not exist");
        }
        if (file.isDirectory()) {
            throw new IOException("Source '" + file + "' exists but is a directory");
        }
        if (file.getCanonicalPath().equals(file2.getCanonicalPath())) {
            throw new IOException("Source '" + file + "' and destination '" + file2 + "' are the same");
        }
        File parentFile = file2.getParentFile();
        if (parentFile != null && !parentFile.mkdirs() && !parentFile.isDirectory()) {
            throw new IOException("Destination '" + parentFile + "' directory cannot be created");
        }
        if (!file2.exists() || file2.canWrite()) {
            c(file, file2, true);
            return;
        }
        throw new IOException("Destination '" + file2 + "' exists but is read-only");
    }

    private static void b(InputStream inputStream, File file) throws Throwable {
        FileOutputStream fileOutputStreamO;
        try {
            fileOutputStreamO = O(file);
        } catch (Throwable th) {
            th = th;
            fileOutputStreamO = null;
        }
        try {
            com.kwad.sdk.crash.utils.h.g(inputStream, fileOutputStreamO);
            com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStreamO);
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
        } catch (Throwable th2) {
            th = th2;
            com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStreamO);
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
            throw th;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v0 */
    /* JADX WARN: Type inference failed for: r11v1, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r11v2 */
    /* JADX WARN: Type inference failed for: r11v3, types: [java.io.Closeable, java.nio.channels.FileChannel, java.nio.channels.ReadableByteChannel] */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v11 */
    /* JADX WARN: Type inference failed for: r2v12 */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.io.Closeable, java.nio.channels.FileChannel] */
    private static void c(File file, File file2, boolean z) throws Throwable {
        FileInputStream fileInputStream;
        FileOutputStream fileOutputStream;
        ?? channel;
        if (file2.exists() && file2.isDirectory()) {
            throw new IOException("Destination '" + file2 + "' exists but is a directory");
        }
        ?? channel2 = 0;
        channel2 = 0;
        channel2 = 0;
        try {
            fileInputStream = new FileInputStream(file);
            try {
                fileOutputStream = new FileOutputStream(file2);
                try {
                    channel = fileInputStream.getChannel();
                    try {
                        channel2 = fileOutputStream.getChannel();
                        long size = channel.size();
                        long jTransferFrom = 0;
                        while (jTransferFrom < size) {
                            long j = size - jTransferFrom;
                            jTransferFrom += channel2.transferFrom(channel, jTransferFrom, j > 31457280 ? 31457280L : j);
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel2);
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
                        com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel);
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                        if (file.length() == file2.length()) {
                            if (z) {
                                file2.setLastModified(file.lastModified());
                            }
                        } else {
                            throw new IOException("Failed to copy full contents from '" + file + "' to '" + file2 + "'");
                        }
                    } catch (Throwable th) {
                        th = th;
                        com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel2);
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
                        com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel);
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    channel = 0;
                }
            } catch (Throwable th3) {
                th = th3;
                fileOutputStream = null;
                channel = fileOutputStream;
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel2);
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) channel);
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                throw th;
            }
        } catch (Throwable th4) {
            th = th4;
            fileInputStream = null;
            fileOutputStream = null;
        }
    }

    private static void d(File file, File file2, boolean z) throws Throwable {
        a(file, file2, (FileFilter) null, true);
    }

    public static boolean delete(String str) {
        return R(new File(str));
    }

    public static void deleteContents(File file) {
        File[] fileArrListFiles;
        if (file.exists() && (fileArrListFiles = file.listFiles()) != null) {
            for (File file2 : fileArrListFiles) {
                if (file2.isDirectory()) {
                    deleteContents(file2);
                }
                file2.delete();
            }
        }
    }

    private static boolean e(File file, File file2) throws Throwable {
        if (file.renameTo(file2)) {
            return true;
        }
        try {
            f(file, file2);
            try {
                file.delete();
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
            return true;
        } catch (Exception e2) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e2);
            return false;
        }
    }

    public static void f(File file, File file2) throws Throwable {
        b(file, file2, true);
    }

    public static BufferedInputStream fp(String str) {
        FileInputStream fileInputStream;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        File file = new File(str);
        if (!file.exists() || file.isDirectory()) {
            return null;
        }
        try {
            fileInputStream = new FileInputStream(file);
        } catch (Exception unused) {
            fileInputStream = null;
        }
        if (fileInputStream == null) {
            return null;
        }
        return new BufferedInputStream(fileInputStream);
    }

    public static boolean fq(String str) {
        return !TextUtils.isEmpty(str) && new File(str).exists();
    }

    public static boolean fr(String str) {
        return !TextUtils.isEmpty(str) && L(new File(str));
    }

    private static int fs(String str) {
        if (str == null) {
            return -1;
        }
        return Math.max(str.lastIndexOf(47), str.lastIndexOf(92));
    }

    private static int ft(String str) {
        int iLastIndexOf;
        if (str != null && fs(str) <= (iLastIndexOf = str.lastIndexOf(46))) {
            return iLastIndexOf;
        }
        return -1;
    }

    public static void g(File file, File file2) throws Throwable {
        d(file, file2, true);
    }

    public static String getExtension(String str) {
        if (str == null) {
            return null;
        }
        int iFt = ft(str);
        return iFt == -1 ? "" : str.substring(iFt + 1);
    }

    private static void s(File file) throws IOException {
        if (!file.exists()) {
            com.kwad.sdk.crash.utils.b.closeQuietly(O(file));
        }
        if (file.setLastModified(System.currentTimeMillis())) {
            return;
        }
        throw new IOException("Unable to set the last modification time for " + file);
    }
}
