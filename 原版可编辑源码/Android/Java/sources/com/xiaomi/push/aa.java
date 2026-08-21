package com.xiaomi.push;

import java.io.File;
import java.util.HashMap;

public class aa {
    private static final HashMap<String, String> a;

    static {
        HashMap<String, String> map = new HashMap<>();
        a = map;
        map.put("FFD8FF", "jpg");
        a.put("89504E47", "png");
        a.put("47494638", "gif");
        a.put("474946", "gif");
        a.put("424D", "bmp");
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
