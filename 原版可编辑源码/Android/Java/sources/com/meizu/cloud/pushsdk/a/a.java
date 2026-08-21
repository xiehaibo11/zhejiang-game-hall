package com.meizu.cloud.pushsdk.a;

import android.content.Context;
import com.meizu.cloud.pushsdk.a.b;
import com.meizu.cloud.pushsdk.d.a.c;
import com.meizu.cloud.pushsdk.notification.model.AppIconSetting;
import java.util.Map;

public class a {
    public static c a(Context context) {
        c cVar = new c();
        b bVarC = c(context);
        Map<String, String> mapA = bVarC.a();
        Map<String, Object> mapB = bVarC.b();
        Map<String, Object> mapC = bVarC.c();
        if (mapA.size() > 0) {
            cVar.a(AppIconSetting.DEFAULT_LARGE_ICON, mapA);
        }
        if (mapB.size() > 0) {
            cVar.a(com.tkay.expressad.d.a.b.cZ, mapB);
        }
        if (mapC.size() > 0) {
            cVar.a(AppIconSetting.LARGE_ICON_URL, mapC);
        }
        return cVar;
    }

    public static void b(final Context context) {
        com.meizu.cloud.pushsdk.b.c.a.a().execute(new Runnable() {
            @Override
            public void run() {
                com.meizu.cloud.pushsdk.a.a.b.a(context).a("POST", null, a.a(context).toString());
            }
        });
    }

    private static b c(Context context) {
        return new b.a().a(context).a();
    }
}
