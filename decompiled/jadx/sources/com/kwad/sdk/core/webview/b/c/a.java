package com.kwad.sdk.core.webview.b.c;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    public static String B(Context context, String str) {
        String strBr = br(context);
        if (TextUtils.isEmpty(strBr)) {
            return null;
        }
        return strBr + File.separator + str;
    }

    public static String C(Context context, String str) {
        String strBr = br(context);
        if (TextUtils.isEmpty(strBr)) {
            return null;
        }
        return strBr + File.separator + str + ".zip";
    }

    public static String D(Context context, String str) {
        String strBr = br(context);
        if (TextUtils.isEmpty(strBr)) {
            return null;
        }
        return strBr + File.separator + str;
    }

    public static String E(Context context, String str) {
        String strBr = br(context);
        if (TextUtils.isEmpty(strBr)) {
            return null;
        }
        return strBr + File.separator + str + File.separator + "_manifest_.json";
    }

    private static File bq(Context context) {
        File filesDir = context.getFilesDir();
        if (filesDir != null) {
            return filesDir;
        }
        return new File("/data/data/" + context.getPackageName() + "/file/");
    }

    private static String br(Context context) {
        String str = bq(context) + File.separator + "offlinepackage";
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return str;
    }

    public static File bs(Context context) throws IOException {
        String strBr = br(context);
        if (TextUtils.isEmpty(strBr)) {
            return null;
        }
        ef(strBr);
        File file = new File(strBr, "packageIndex.json");
        if (!file.exists()) {
            file.createNewFile();
        }
        return file;
    }

    public static void e(Context context, String str, String str2) throws IOException {
        ZipInputStream zipInputStream = new ZipInputStream(new FileInputStream(str));
        while (true) {
            ZipEntry nextEntry = zipInputStream.getNextEntry();
            if (nextEntry == null) {
                break;
            }
            String name = nextEntry.getName();
            String strBr = br(context);
            if (!new File(strBr, name).getAbsolutePath().startsWith(strBr)) {
                break;
            }
            if (!nextEntry.isDirectory()) {
                File file = new File(str2 + File.separator + name);
                if (!file.exists()) {
                    file.getParentFile().mkdirs();
                    file.createNewFile();
                }
                FileOutputStream fileOutputStream = new FileOutputStream(file);
                byte[] bArr = new byte[1024];
                while (true) {
                    int i = zipInputStream.read(bArr);
                    if (i == -1) {
                        break;
                    }
                    fileOutputStream.write(bArr, 0, i);
                    fileOutputStream.flush();
                }
                com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
            } else if (!name.contains("../")) {
                new File(str2 + File.separator + name.substring(0, name.length() - 1)).mkdirs();
            }
        }
        com.kwad.sdk.crash.utils.b.closeQuietly(zipInputStream);
    }

    public static String ed(String str) {
        try {
            return Uri.parse(str).getQueryParameter("sceneId");
        } catch (Throwable unused) {
            com.kwad.sdk.core.e.c.e("HybridFileUtils", "getSceneId This isn't a hierarchical URI url is " + str);
            return "";
        }
    }

    public static String ee(String str) {
        try {
            List<String> pathSegments = Uri.parse(str).getPathSegments();
            String str2 = null;
            if (pathSegments != null && pathSegments.size() > 0) {
                str2 = pathSegments.get(pathSegments.size() - 1);
            }
            return (TextUtils.isEmpty(str2) || !str2.contains(".zip")) ? "" : str2.substring(0, str2.indexOf(".zip"));
        } catch (Throwable unused) {
            com.kwad.sdk.core.e.c.e("HybridFileUtils", "getZipName This isn't a hierarchical URI url is " + str);
            return "";
        }
    }

    private static boolean ef(String str) {
        File file = new File(str);
        if (file.exists()) {
            return true;
        }
        return file.mkdirs();
    }
}
