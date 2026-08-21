package com.sigmob.sdk.archives;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;

/* JADX INFO: loaded from: classes3.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final d f4775a = new d();

    private static void a() {
        System.out.println("Parameters: archive-name [archive-type]");
    }

    public static void a(String[] strArr) throws Exception {
        if (strArr.length == 0) {
            a();
            return;
        }
        System.out.println("Analysing " + strArr[0]);
        File file = new File(strArr[0]);
        if (!file.isFile()) {
            System.err.println(file + " doesn't exist or is a directory");
        }
        BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
        c cVarA = strArr.length > 1 ? f4775a.a(strArr[1], bufferedInputStream) : f4775a.a(bufferedInputStream);
        System.out.println("Created " + cVarA.toString());
        while (true) {
            a aVarA = cVarA.a();
            if (aVarA == null) {
                cVarA.close();
                bufferedInputStream.close();
                return;
            }
            System.out.println(aVarA.a());
        }
    }
}
