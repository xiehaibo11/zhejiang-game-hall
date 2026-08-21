package com.tkay.expressad.foundation.g.f.g;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.expressad.foundation.h.w;
import java.util.List;

public class e {
    private static final String a = e.class.getSimpleName();

    public static String a(List<com.tkay.expressad.foundation.g.f.c.c> list) {
        com.tkay.expressad.foundation.g.f.c.c cVarB = b(list, "Content-Type");
        if (cVarB != null) {
            String strB = cVarB.b();
            if (!TextUtils.isEmpty(strB)) {
                String[] strArrSplit = strB.split(";");
                for (int i = 1; i < strArrSplit.length; i++) {
                    String[] strArrSplit2 = strArrSplit[i].trim().split(ContainerUtils.KEY_VALUE_DELIMITER);
                    if (strArrSplit2.length == 2 && strArrSplit2[0].equals("charset")) {
                        return strArrSplit2[1];
                    }
                }
            }
        }
        return "UTF-8";
    }

    private static com.tkay.expressad.foundation.g.f.c.c b(List<com.tkay.expressad.foundation.g.f.c.c> list, String str) {
        if (list != null) {
            for (int i = 0; i < list.size(); i++) {
                com.tkay.expressad.foundation.g.f.c.c cVar = list.get(i);
                if (cVar != null && str.equals(cVar.a())) {
                    return cVar;
                }
            }
        }
        return null;
    }

    public static String a(List<com.tkay.expressad.foundation.g.f.c.c> list, String str) {
        com.tkay.expressad.foundation.g.f.c.c cVarB = b(list, str);
        return cVarB != null ? cVarB.b() : "";
    }

    private static boolean c(List<com.tkay.expressad.foundation.g.f.c.c> list) {
        if (TextUtils.equals(a(list, "Accept-Ranges"), "bytes")) {
            return true;
        }
        String strA = a(list, "Content-Range");
        return strA != null && strA.startsWith("bytes");
    }

    public static boolean b(List<com.tkay.expressad.foundation.g.f.c.c> list) {
        return TextUtils.equals(a(list, "Content-Encoding"), "gzip");
    }

    private static void a(com.tkay.expressad.foundation.g.f.h.b bVar, String str, String str2) {
        if (bVar != null) {
            try {
                if (!w.a(str) && !w.a(str2)) {
                    bVar.a(str, str2);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
