package com.meizu.cloud.pushsdk.notification.c;

import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class a {
    public static void a(String str, String str2) {
        try {
            new File(str2).mkdirs();
            for (String str3 : new File(str).list()) {
                File file = str.endsWith(File.separator) ? new File(str + str3) : new File(str + File.separator + str3);
                if (file.isFile()) {
                    FileInputStream fileInputStream = new FileInputStream(file);
                    FileOutputStream fileOutputStream = new FileOutputStream(str2 + "/" + file.getName());
                    byte[] bArr = new byte[5120];
                    while (true) {
                        int i = fileInputStream.read(bArr);
                        if (i == -1) {
                            break;
                        } else {
                            fileOutputStream.write(bArr, 0, i);
                        }
                    }
                    fileOutputStream.flush();
                    fileOutputStream.close();
                    fileInputStream.close();
                } else if (file.isDirectory()) {
                    a(str + "/" + str3, str2 + "/" + str3);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static boolean a(String str) {
        if (!TextUtils.isEmpty(str) && !str.contains("../")) {
            File file = new File(str);
            if (file.isFile() && file.exists()) {
                return file.delete();
            }
        }
        return false;
    }

    public static boolean b(String str) {
        if (!TextUtils.isEmpty(str) && !str.contains("../")) {
            if (!str.endsWith(File.separator)) {
                str = str + File.separator;
            }
            File file = new File(str);
            if (file.exists() && file.isDirectory()) {
                boolean zB = true;
                for (File file2 : file.listFiles()) {
                    boolean zIsFile = file2.isFile();
                    String absolutePath = file2.getAbsolutePath();
                    if (zIsFile) {
                        zB = a(absolutePath);
                        if (!zB) {
                            break;
                        }
                    } else {
                        zB = b(absolutePath);
                        if (!zB) {
                            break;
                        }
                    }
                }
                if (zB) {
                    return file.delete();
                }
                return false;
            }
        }
        return false;
    }

    public static File[] b(String str, final String str2) {
        File file = new File(str);
        return file.isDirectory() ? file.listFiles(new FileFilter() {
            @Override
            public boolean accept(File file2) {
                try {
                    return Long.valueOf(str2).longValue() > Long.valueOf(file2.getName().split(Constants.ACCEPT_TIME_SEPARATOR_SERVER)[1]).longValue();
                } catch (Exception e) {
                    DebugLogger.e("FileUtil", "filters file error " + e.getMessage());
                    return true;
                }
            }
        }) : new File[0];
    }
}
