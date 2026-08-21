package com.xiaomi.push;

import java.io.File;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public class aa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final HashMap<String, String> f8028a;

    static {
        HashMap<String, String> map = new HashMap<>();
        f8028a = map;
        map.put("FFD8FF", "jpg");
        f8028a.put("89504E47", "png");
        f8028a.put("47494638", "gif");
        f8028a.put("474946", "gif");
        f8028a.put("424D", "bmp");
    }

    public static long a(File file) {
        long jA = 0;
        try {
            File[] fileArrListFiles = file.listFiles();
            for (int i = 0; i < fileArrListFiles.length; i++) {
                jA += fileArrListFiles[i].isDirectory() ? a(fileArrListFiles[i]) : fileArrListFiles[i].length();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
        return jA;
    }
}
