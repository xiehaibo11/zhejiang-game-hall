package com.czhj.devicehelper.cnadId;

import android.content.Context;
import android.provider.Settings;
import com.czhj.sdk.logger.SigmobLog;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: com.czhj.devicehelper.cnadId.a$a, reason: collision with other inner class name */
    private static class C0066a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final a f1718a = new a();

        private C0066a() {
        }
    }

    private a() {
    }

    public static a a() {
        return C0066a.f1718a;
    }

    private String b(Context context) {
        return Settings.System.getString(context.getContentResolver(), "ZHVzY2Lk");
    }

    private String c(Context context) {
        String string = context.getSharedPreferences(context.getPackageName() + "_dna", 0).getString("ZHVzY2Lk", "NA");
        if (string.equals("NA")) {
            return null;
        }
        return string;
    }

    private String d(Context context) {
        File file;
        try {
            file = new File("/sdcard/Android/ZHVzY2Lk");
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
        }
        if (!file.isDirectory() && file.isFile()) {
            FileInputStream fileInputStream = new FileInputStream(file);
            String line = new BufferedReader(new InputStreamReader(fileInputStream)).readLine();
            str = line != null ? line : null;
            fileInputStream.close();
            return str;
        }
        SigmobLog.e("The File doesn't not exist.");
        return null;
    }

    public String a(Context context) {
        String strB = b(context);
        if (strB != null) {
            return strB;
        }
        String strC = c(context);
        return strC != null ? strC : d(context);
    }
}
