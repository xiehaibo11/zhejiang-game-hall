package com.bianfeng.ymnsdk.sysfunc.utils;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class FileUtils {
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
}
