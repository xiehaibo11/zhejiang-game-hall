package com.kwad.sdk.api.loader;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;

final class h {
    private static File ais;

    private static File aB(Context context) {
        if (ais == null) {
            ais = i(new File(context.getApplicationInfo().dataDir, "ksad_dynamic"));
        }
        return ais;
    }

    static void h(File file) {
        if (file == null) {
            return;
        }
        if (file.isFile()) {
            file.delete();
            return;
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles != null && fileArrListFiles.length > 0) {
            for (File file2 : fileArrListFiles) {
                h(file2);
            }
        }
        file.delete();
    }

    private static File i(File file) {
        if (file.exists() && file.isFile()) {
            file.delete();
        }
        if (file.exists() && file.isDirectory()) {
            return file;
        }
        if (!file.exists()) {
            file.mkdirs();
        }
        if ((file.exists() && file.isDirectory()) || !com.kwad.sdk.api.a.ml.booleanValue()) {
            return file;
        }
        throw new RuntimeException("Can not ensureDir:" + file);
    }

    static void j(File file) {
        try {
            h(file);
        } catch (Exception unused) {
        }
    }

    static File n(Context context, String str) {
        return new File(aB(context), "dynamic-" + System.currentTimeMillis() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + str + com.tkay.china.common.a.a.g);
    }

    static String o(Context context, String str) {
        return i(new File(aB(context), "apk-" + str)).getPath();
    }

    static File p(Context context, String str) {
        return i(new File(aB(context), "apk-" + str));
    }

    static String q(Context context, String str) {
        return new File(o(context, str), "dynamic.apk").getPath();
    }

    static String r(Context context, String str) {
        return i(new File(o(context, str), "dex")).getPath();
    }

    static String s(Context context, String str) {
        return i(new File(o(context, str), "libs")).getPath();
    }

    static void t(final Context context, final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        com.kwad.sdk.api.a.a.submit(new Runnable() {
            @Override
            public final void run() {
                try {
                    File[] fileArrListFiles = h.p(context, str).getParentFile().listFiles();
                    if (fileArrListFiles == null || fileArrListFiles.length <= 0) {
                        return;
                    }
                    for (File file : fileArrListFiles) {
                        if (g.F(str, file.getName().substring(file.getName().indexOf(Constants.ACCEPT_TIME_SEPARATOR_SERVER) + 1))) {
                            h.h(file);
                        }
                    }
                } catch (Exception unused) {
                }
            }
        });
    }
}
