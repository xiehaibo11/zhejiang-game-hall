package com.qihoo360.replugin.utils;

import android.content.Context;
import android.content.res.AssetManager;
import android.text.TextUtils;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FileUtils {
    private static final long FILE_COPY_BUFFER_SIZE = 31457280;
    public static final long ONE_KB = 1024;
    public static final long ONE_MB = 1048576;

    public static FileInputStream openInputStream(File file) throws IOException {
        if (file.exists()) {
            if (file.isDirectory()) {
                throw new IOException("File '" + file + "' exists but is a directory");
            }
            if (!file.canRead()) {
                throw new IOException("File '" + file + "' cannot be read");
            }
            return new FileInputStream(file);
        }
        throw new FileNotFoundException("File '" + file + "' does not exist");
    }

    public static InputStream openInputStreamFromAssetsQuietly(Context context, String str) {
        AssetManager assets = context.getAssets();
        if (assets == null) {
            return null;
        }
        try {
            return assets.open(str);
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static FileOutputStream openOutputStream(File file) throws IOException {
        return openOutputStream(file, false);
    }

    public static FileOutputStream openOutputStream(File file, boolean z) throws IOException {
        if (file.exists()) {
            if (file.isDirectory()) {
                throw new IOException("File '" + file + "' exists but is a directory");
            }
            if (!file.canWrite()) {
                throw new IOException("File '" + file + "' cannot be written to");
            }
        } else {
            File parentFile = file.getParentFile();
            if (parentFile != null && !parentFile.mkdirs() && !parentFile.isDirectory()) {
                throw new IOException("Directory '" + parentFile + "' could not be created");
            }
        }
        return new FileOutputStream(file, z);
    }

    public static void forceMkdirParent(File file) throws IOException {
        File parentFile = file.getParentFile();
        if (parentFile == null) {
            return;
        }
        forceMkdir(parentFile);
    }

    public static void forceMkdir(File file) throws IOException {
        if (file.exists()) {
            if (file.isDirectory()) {
                return;
            }
            throw new IOException("File " + file + " exists and is not a directory. Unable to create directory.");
        }
        if (file.mkdirs() || file.isDirectory()) {
            return;
        }
        throw new IOException("Unable to create directory " + file);
    }

    public static void forceDelete(File file) throws IOException {
        if (file.exists()) {
            if (file.isDirectory()) {
                deleteDirectory(file);
                return;
            }
            boolean zExists = file.exists();
            if (file.delete()) {
                return;
            }
            if (!zExists) {
                throw new FileNotFoundException("File does not exist: " + file);
            }
            throw new IOException("Unable to delete file: " + file);
        }
    }

    public static void deleteDirectory(File file) throws IOException {
        if (file.exists()) {
            cleanDirectory(file);
            if (file.delete()) {
                return;
            }
            throw new IOException("Unable to delete directory " + file + ".");
        }
    }

    public static void cleanDirectory(File file) throws IOException {
        IOException e = null;
        for (File file2 : verifiedListFiles(file)) {
            try {
                forceDelete(file2);
            } catch (IOException e2) {
                e = e2;
            }
        }
        if (e != null) {
            throw e;
        }
    }

    private static File[] verifiedListFiles(File file) throws IOException {
        if (!file.exists()) {
            throw new IllegalArgumentException(file + " does not exist");
        }
        if (!file.isDirectory()) {
            throw new IllegalArgumentException(file + " is not a directory");
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles != null) {
            return fileArrListFiles;
        }
        throw new IOException("Failed to list contents of " + file);
    }

    public static String readFileToString(File file, Charset charset) throws Throwable {
        FileInputStream fileInputStreamOpenInputStream;
        try {
            fileInputStreamOpenInputStream = openInputStream(file);
            try {
                String string = IOUtils.toString(fileInputStreamOpenInputStream, Charsets.toCharset(charset));
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                return string;
            } catch (Throwable th) {
                th = th;
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            fileInputStreamOpenInputStream = null;
        }
    }

    public static void writeStringToFile(File file, String str, Charset charset) throws Throwable {
        writeStringToFile(file, str, charset, false);
    }

    public static void writeStringToFile(File file, String str, Charset charset, boolean z) throws Throwable {
        FileOutputStream fileOutputStreamOpenOutputStream;
        try {
            fileOutputStreamOpenOutputStream = openOutputStream(file, z);
        } catch (Throwable th) {
            th = th;
            fileOutputStreamOpenOutputStream = null;
        }
        try {
            IOUtils.write(str, fileOutputStreamOpenOutputStream, charset);
            fileOutputStreamOpenOutputStream.close();
            CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
        } catch (Throwable th2) {
            th = th2;
            CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
            throw th;
        }
    }

    public static boolean deleteQuietly(File file) {
        if (file == null) {
            return false;
        }
        try {
            if (file.isDirectory()) {
                cleanDirectory(file);
            }
        } catch (Exception unused) {
        }
        try {
            return file.delete();
        } catch (Exception unused2) {
            return false;
        }
    }

    public static void copyDir(File file, File file2) throws Throwable {
        copyDir(file, file2, true);
    }

    public static void copyDir(File file, File file2, boolean z) throws Throwable {
        checkFileRequirements(file, file2);
        if (!file.isDirectory()) {
            throw new IOException("Source '" + file + "' exists but is not a directory");
        }
        if (file.getCanonicalPath().equals(file2.getCanonicalPath())) {
            throw new IOException("Source '" + file + "' and destination '" + file2 + "' are the same");
        }
        if (file2.exists() && !file2.canWrite()) {
            throw new IOException("Destination '" + file2 + "' exists but is read-only");
        }
        for (File file3 : file.listFiles()) {
            copyFile(file3, new File(file2, file3.getName()), z);
        }
    }

    public static void copyFile(File file, File file2) throws Throwable {
        copyFile(file, file2, true);
    }

    public static void copyFile(File file, File file2, boolean z) throws Throwable {
        checkFileRequirements(file, file2);
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
        if (file2.exists() && !file2.canWrite()) {
            throw new IOException("Destination '" + file2 + "' exists but is read-only");
        }
        doCopyFile(file, file2, z);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r16v0 */
    /* JADX WARN: Type inference failed for: r16v1 */
    /* JADX WARN: Type inference failed for: r16v2 */
    /* JADX WARN: Type inference failed for: r16v3, types: [java.nio.channels.FileChannel, java.nio.channels.ReadableByteChannel] */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.io.Closeable[]] */
    /* JADX WARN: Type inference failed for: r6v1, types: [java.io.Closeable[]] */
    /* JADX WARN: Type inference failed for: r7v0 */
    /* JADX WARN: Type inference failed for: r7v1 */
    /* JADX WARN: Type inference failed for: r7v2 */
    /* JADX WARN: Type inference failed for: r7v3, types: [java.nio.channels.FileChannel] */
    /* JADX WARN: Type inference failed for: r7v5 */
    /* JADX WARN: Type inference failed for: r7v6 */
    private static void doCopyFile(File file, File file2, boolean z) throws Throwable {
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
                        long j = 0;
                        while (j < size) {
                            long j2 = size - j;
                            long jTransferFrom = channel2.transferFrom(channel, j, j2 > FILE_COPY_BUFFER_SIZE ? 31457280L : j2);
                            if (jTransferFrom == 0) {
                                break;
                            } else {
                                j += jTransferFrom;
                            }
                        }
                        CloseableUtils.closeQuietly((Closeable[]) new Closeable[]{channel2, fileOutputStream, channel, fileInputStream});
                        long length = file.length();
                        long length2 = file2.length();
                        if (length == length2) {
                            if (z) {
                                file2.setLastModified(file.lastModified());
                                return;
                            }
                            return;
                        }
                        throw new IOException("Failed to copy full contents from '" + file + "' to '" + file2 + "' Expected length: " + length + " Actual: " + length2);
                    } catch (Throwable th) {
                        th = th;
                        CloseableUtils.closeQuietly((Closeable[]) new Closeable[]{channel2, fileOutputStream, channel, fileInputStream});
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
                CloseableUtils.closeQuietly((Closeable[]) new Closeable[]{channel2, fileOutputStream, channel, fileInputStream});
                throw th;
            }
        } catch (Throwable th4) {
            th = th4;
            fileInputStream = null;
            fileOutputStream = null;
        }
    }

    private static void checkFileRequirements(File file, File file2) throws FileNotFoundException {
        if (file == null) {
            throw new NullPointerException("Source must not be null");
        }
        if (file2 == null) {
            throw new NullPointerException("Destination must not be null");
        }
        if (file.exists()) {
            return;
        }
        throw new FileNotFoundException("Source '" + file + "' does not exist");
    }

    public static void copyInputStreamToFile(InputStream inputStream, File file) throws IOException {
        try {
            copyToFile(inputStream, file);
        } finally {
            CloseableUtils.closeQuietly(inputStream);
        }
    }

    public static void copyToFile(InputStream inputStream, File file) throws IOException {
        FileOutputStream fileOutputStreamOpenOutputStream = openOutputStream(file);
        try {
            IOUtils.copy(inputStream, fileOutputStreamOpenOutputStream);
            fileOutputStreamOpenOutputStream.close();
        } finally {
            CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
        }
    }

    public static void moveFile(File file, File file2) throws Throwable {
        if (file == null) {
            throw new NullPointerException("Source must not be null");
        }
        if (file2 == null) {
            throw new NullPointerException("Destination must not be null");
        }
        if (!file.exists()) {
            throw new FileNotFoundException("Source '" + file + "' does not exist");
        }
        if (file.isDirectory()) {
            throw new IOException("Source '" + file + "' is a directory");
        }
        if (file2.exists()) {
            throw new IOException("Destination '" + file2 + "' already exists");
        }
        if (file2.isDirectory()) {
            throw new IOException("Destination '" + file2 + "' is a directory");
        }
        if (file.renameTo(file2)) {
            return;
        }
        copyFile(file, file2);
        if (file.delete()) {
            return;
        }
        deleteQuietly(file2);
        throw new IOException("Failed to delete original file '" + file + "' after copy to '" + file2 + "'");
    }

    public static long sizeOf(File file) {
        if (!file.exists()) {
            throw new IllegalArgumentException(file + " does not exist");
        }
        if (file.isDirectory()) {
            return sizeOfDirectory0(file);
        }
        return file.length();
    }

    private static long sizeOfDirectory0(File file) {
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            return 0L;
        }
        long jSizeOf0 = 0;
        for (File file2 : fileArrListFiles) {
            jSizeOf0 += sizeOf0(file2);
            if (jSizeOf0 < 0) {
                break;
            }
        }
        return jSizeOf0;
    }

    private static long sizeOf0(File file) {
        if (file.isDirectory()) {
            return sizeOfDirectory0(file);
        }
        return file.length();
    }

    public static String getFileNameWithoutExt(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        int iLastIndexOf = str.lastIndexOf(".");
        int iLastIndexOf2 = str.lastIndexOf(File.separator);
        if (iLastIndexOf2 == -1) {
            return iLastIndexOf == -1 ? str : str.substring(0, iLastIndexOf);
        }
        if (iLastIndexOf == -1) {
            return str.substring(iLastIndexOf2 + 1);
        }
        return iLastIndexOf2 < iLastIndexOf ? str.substring(iLastIndexOf2 + 1, iLastIndexOf) : str.substring(iLastIndexOf2 + 1);
    }

    public static String getFileExt(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        int iLastIndexOf = str.lastIndexOf(".");
        return (iLastIndexOf != -1 && str.lastIndexOf(File.separator) < iLastIndexOf) ? str.substring(iLastIndexOf + 1) : "";
    }
}
