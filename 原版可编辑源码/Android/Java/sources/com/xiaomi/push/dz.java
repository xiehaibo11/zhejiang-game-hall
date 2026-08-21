package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import java.util.HashMap;

public class dz {
    public static void a(Context context, String str, int i, String str2) {
        al.a(context).a(new ea(context, str, i, str2));
    }

    private static void a(Context context, HashMap<String, String> map) {
        eh ehVarA = ed.a(context).a();
        if (ehVarA != null) {
            ehVarA.a(context, map);
        }
    }

    private static void b(Context context, HashMap<String, String> map) {
        eh ehVarA = ed.a(context).a();
        if (ehVarA != null) {
            ehVarA.c(context, map);
        }
    }

    private static void c(Context context, String str, int i, String str2) {
        if (context == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            HashMap map = new HashMap();
            map.put("awake_info", str);
            map.put("event_type", String.valueOf(i));
            map.put("description", str2);
            int iA = ed.a(context).a();
            if (iA == 1) {
                a(context, map);
            } else if (iA == 2) {
                c(context, map);
            } else if (iA == 3) {
                a(context, map);
                c(context, map);
            }
            b(context, map);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    private static void c(Context context, HashMap<String, String> map) {
        eh ehVarA = ed.a(context).a();
        if (ehVarA != null) {
            ehVarA.b(context, map);
        }
    }
}
