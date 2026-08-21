package com.xiaomi.mipush.sdk;

import android.content.Context;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.service.bd;

/* JADX INFO: loaded from: classes4.dex */
public class MiPushClient4VR {
    public static void uploadData(Context context, String str) {
        ii iiVar = new ii();
        iiVar.c(ht.VRUpload.f519a);
        iiVar.b(b.m85a(context).m86a());
        iiVar.d(context.getPackageName());
        iiVar.a("data", str);
        iiVar.a(bd.a());
        ao.a(context).a(iiVar, hj.Notification, (hw) null);
    }
}
