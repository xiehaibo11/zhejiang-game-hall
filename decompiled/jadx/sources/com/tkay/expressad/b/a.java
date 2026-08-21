package com.tkay.expressad.b;

import android.text.TextUtils;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f6450a;

    private a() {
    }

    private static a a() {
        if (f6450a == null) {
            synchronized (a.class) {
                if (f6450a == null) {
                    f6450a = new a();
                }
            }
        }
        return f6450a;
    }

    private static void a(String str, String str2) throws Throwable {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            throw new IOException("zipFilePath or destDirectory is null");
        }
        new c();
        c.a(str, str2);
    }

    private void a(File file) {
        if (file.exists()) {
            if (file.isFile()) {
                file.delete();
                return;
            }
            for (File file2 : file.listFiles()) {
                a(new File(file2.getAbsolutePath()));
            }
            file.delete();
        }
    }
}
