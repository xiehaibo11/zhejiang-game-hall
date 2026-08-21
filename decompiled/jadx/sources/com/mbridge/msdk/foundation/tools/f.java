package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.os.Environment;
import cz.msebera.android.httpclient.HttpStatus;
import java.io.File;
import java.io.IOException;

/* JADX INFO: compiled from: DomainSameFileTool.java */
/* JADX INFO: loaded from: classes2.dex */
public class f {
    public static File a(String str, Context context, boolean[] zArr) throws IOException {
        if (Environment.getExternalStorageState().equals("mounted")) {
            File file = new File(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_APK) + "/download/.mb" + str);
            file.mkdirs();
            if (file.exists()) {
                zArr[0] = true;
                return file;
            }
        }
        String absolutePath = context.getCacheDir().getAbsolutePath();
        new File(absolutePath).mkdir();
        x.a(absolutePath, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
        String str2 = absolutePath + "/mbdownload";
        new File(str2).mkdir();
        x.a(str2, HttpStatus.SC_HTTP_VERSION_NOT_SUPPORTED, -1, -1);
        File file2 = new File(str2);
        zArr[0] = false;
        return file2;
    }
}
