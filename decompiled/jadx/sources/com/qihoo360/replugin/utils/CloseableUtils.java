package com.qihoo360.replugin.utils;

import android.database.Cursor;
import java.io.Closeable;
import java.io.IOException;
import java.util.zip.ZipFile;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class CloseableUtils {
    public static void closeQuietly(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    public static void closeQuietly(Closeable... closeableArr) {
        if (closeableArr == null) {
            return;
        }
        for (Closeable closeable : closeableArr) {
            closeQuietly(closeable);
        }
    }

    public static void closeQuietly(Cursor cursor) {
        if (cursor != null) {
            try {
                cursor.close();
            } catch (Exception unused) {
            }
        }
    }

    public static void closeQuietly(ZipFile zipFile) {
        if (zipFile != null) {
            try {
                zipFile.close();
            } catch (Exception unused) {
            }
        }
    }
}
