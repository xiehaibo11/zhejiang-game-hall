package com.kwad.sdk.core.diskcache;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import com.kwad.sdk.c;
import com.kwad.sdk.d;
import com.kwad.sdk.utils.av;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.concurrent.TimeUnit;

public class a {
    public static void aS(final Context context) {
        g.schedule(new aw() {
            @Override
            public final void doTask() {
                d dVarWR;
                synchronized (a.class) {
                    try {
                        File fileCK = av.cK(context);
                        if (!fileCK.exists()) {
                            return;
                        }
                        for (File file : a.n(fileCK)) {
                            if (file.getName().endsWith(com.tkay.china.common.a.a.g) && com.kwad.sdk.core.a.yT().cp(file.getAbsolutePath()) != null && a.b(context, file) != null && (dVarWR = c.wP().wR()) != null) {
                                dVarWR.g(file);
                            }
                        }
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.printStackTrace(th);
                    }
                }
            }
        }, 10L, TimeUnit.SECONDS);
    }

    private static PackageInfo b(Context context, File file) {
        if (file != null && file.exists()) {
            try {
                if (file.exists() & (!file.isDirectory())) {
                    PackageManager packageManager = context.getPackageManager();
                    PackageInfo packageArchiveInfo = packageManager.getPackageArchiveInfo(file.getPath(), 65);
                    if (packageManager.getPackageInfo(packageArchiveInfo.packageName, 1) != null) {
                        return null;
                    }
                    return packageArchiveInfo;
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return null;
    }

    private static List<File> n(File file) {
        ArrayList arrayList = new ArrayList();
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null) {
            return arrayList;
        }
        arrayList.addAll(Arrays.asList(fileArrListFiles));
        r(arrayList);
        return arrayList;
    }

    private static void r(List<File> list) {
        Collections.sort(list, new Comparator<File>() {
            private static int c(File file, File file2) {
                if (file.lastModified() >= file2.lastModified()) {
                    return file.lastModified() == file2.lastModified() ? 0 : 1;
                }
                return -1;
            }

            @Override
            public final int compare(File file, File file2) {
                return c(file, file2);
            }
        });
    }
}
