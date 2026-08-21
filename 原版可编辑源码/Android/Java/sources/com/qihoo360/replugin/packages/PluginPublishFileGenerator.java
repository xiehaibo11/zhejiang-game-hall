package com.qihoo360.replugin.packages;

import android.text.TextUtils;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import com.qihoo360.replugin.utils.IOUtils;
import com.qihoo360.replugin.utils.basic.SecurityUtil;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginPublishFileGenerator {
    PluginPublishFileGenerator() {
    }

    static boolean write(String str, String str2, int i, int i2, int i3) {
        FileOutputStream fileOutputStreamOpenOutputStream;
        FileInputStream fileInputStreamOpenInputStream;
        DataOutputStream dataOutputStream = null;
        try {
            fileInputStreamOpenInputStream = FileUtils.openInputStream(new File(str));
            try {
                fileOutputStreamOpenOutputStream = FileUtils.openOutputStream(new File(str2));
                try {
                    DataOutputStream dataOutputStream2 = new DataOutputStream(fileOutputStreamOpenOutputStream);
                    try {
                        dataOutputStream2.writeInt(i);
                        dataOutputStream2.writeInt(i2);
                        dataOutputStream2.writeInt(i3);
                        String fileMD5 = SecurityUtil.getFileMD5(str);
                        if (TextUtils.isEmpty(fileMD5)) {
                            CloseableUtils.closeQuietly(dataOutputStream2);
                            CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
                            CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                            return false;
                        }
                        dataOutputStream2.writeUTF(fileMD5);
                        dataOutputStream2.writeInt(0);
                        dataOutputStream2.writeInt((int) new File(str).length());
                        IOUtils.copy(fileInputStreamOpenInputStream, dataOutputStream2);
                        CloseableUtils.closeQuietly(dataOutputStream2);
                        CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
                        CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                        return true;
                    } catch (Throwable th) {
                        th = th;
                        dataOutputStream = dataOutputStream2;
                        try {
                            th.printStackTrace();
                            return false;
                        } finally {
                            CloseableUtils.closeQuietly(dataOutputStream);
                            CloseableUtils.closeQuietly(fileOutputStreamOpenOutputStream);
                            CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                        }
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            } catch (Throwable th3) {
                th = th3;
                fileOutputStreamOpenOutputStream = null;
            }
        } catch (Throwable th4) {
            th = th4;
            fileOutputStreamOpenOutputStream = null;
            fileInputStreamOpenInputStream = null;
        }
    }
}
