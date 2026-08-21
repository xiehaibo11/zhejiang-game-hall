package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import java.io.Closeable;
import java.io.File;
import java.io.FileFilter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class bo {
    /* JADX WARN: Code restructure failed: missing block: B:9:0x001c, code lost:
    
        r0.add(r3);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static List<File> a(File file, final String str, int i) {
        ArrayList arrayList = new ArrayList();
        try {
            File[] fileArrListFiles = file.listFiles(new FileFilter() {
                @Override
                public final boolean accept(File file2) {
                    return file2.isDirectory() || file2.getName().toLowerCase().contains(str);
                }
            });
            if (fileArrListFiles != null) {
                int length = fileArrListFiles.length;
                int i2 = 0;
                while (true) {
                    if (i2 >= length) {
                        break;
                    }
                    File file2 = fileArrListFiles[i2];
                    if (file2.isFile()) {
                        break;
                    }
                    int i3 = i + 1;
                    arrayList.addAll(a(file2, str, i));
                    i2++;
                    i = i3;
                }
            }
        } catch (Throwable unused) {
        }
        return arrayList;
    }

    public static void a(Closeable closeable) {
        if (closeable == null) {
            return;
        }
        try {
            closeable.close();
        } catch (IOException unused) {
        }
    }

    public static boolean a(Context context, String str) {
        try {
            String str2 = Engine.soPath;
            if (!TextUtils.isEmpty(str2)) {
                if (new File(str2 + "/lib" + str).exists()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return a(context.getFilesDir(), str, 0).size() > 0;
    }
}
