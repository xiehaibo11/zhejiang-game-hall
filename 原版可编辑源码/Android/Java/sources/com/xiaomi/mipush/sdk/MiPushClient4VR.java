package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;

public class MiPushClient4VR {
    public static void uploadData(Context context, String str) {
        ii iiVar = new ii();
        iiVar.c(ht.O.a);
        iiVar.b(b.a(context).a());
        iiVar.d(context.getPackageName());
        iiVar.a("data", str);
        iiVar.a(bd.a());
        ao.a(context).a(iiVar, hj.i, (hw) null);
    }
}
