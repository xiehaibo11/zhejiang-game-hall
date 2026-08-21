package com.mbridge.msdk.foundation.same.net.f;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.tools.ai;
import java.util.List;

public class b {
    private static final String a = b.class.getSimpleName();

    public static String a(List<com.mbridge.msdk.foundation.same.net.c.b> list) {
        com.mbridge.msdk.foundation.same.net.c.b bVarB = b(list, "Content-Type");
        if (bVarB != null) {
            String strB = bVarB.b();
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

    private static com.mbridge.msdk.foundation.same.net.c.b b(List<com.mbridge.msdk.foundation.same.net.c.b> list, String str) {
        if (list != null) {
            for (int i = 0; i < list.size(); i++) {
                com.mbridge.msdk.foundation.same.net.c.b bVar = list.get(i);
                if (bVar != null && str.equals(bVar.a())) {
                    return bVar;
                }
            }
        }
        return null;
    }

    public static String a(List<com.mbridge.msdk.foundation.same.net.c.b> list, String str) {
        com.mbridge.msdk.foundation.same.net.c.b bVarB = b(list, str);
        return bVarB != null ? bVarB.b() : "";
    }

    public static boolean b(List<com.mbridge.msdk.foundation.same.net.c.b> list) {
        return TextUtils.equals(a(list, "Content-Encoding"), "gzip");
    }

    public static void a(com.mbridge.msdk.foundation.same.net.g.d dVar, String str, String str2) {
        if (dVar != null) {
            try {
                if (!ai.a(str) && !ai.a(str2)) {
                    dVar.a(str, str2);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
