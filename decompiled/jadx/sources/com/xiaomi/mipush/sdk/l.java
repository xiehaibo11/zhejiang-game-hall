package com.xiaomi.mipush.sdk;

import com.xiaomi.push.ho;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HashMap<e, a> f8014a = new HashMap<>();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f8015a;
        public String b;

        public a(String str, String str2) {
            this.f8015a = str;
            this.b = str2;
        }
    }

    static {
        a(e.ASSEMBLE_PUSH_HUAWEI, new a("com.xiaomi.assemble.control.HmsPushManager", "newInstance"));
        a(e.ASSEMBLE_PUSH_FCM, new a("com.xiaomi.assemble.control.FCMPushManager", "newInstance"));
        a(e.ASSEMBLE_PUSH_COS, new a("com.xiaomi.assemble.control.COSPushManager", "newInstance"));
        a(e.ASSEMBLE_PUSH_FTOS, new a("com.xiaomi.assemble.control.FTOSPushManager", "newInstance"));
    }

    public static au a(e eVar) {
        int i = m.f8016a[eVar.ordinal()];
        if (i == 1) {
            return au.UPLOAD_HUAWEI_TOKEN;
        }
        if (i == 2) {
            return au.UPLOAD_FCM_TOKEN;
        }
        if (i == 3) {
            return au.UPLOAD_COS_TOKEN;
        }
        if (i != 4) {
            return null;
        }
        return au.UPLOAD_FTOS_TOKEN;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static a m111a(e eVar) {
        return f8014a.get(eVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static ho m112a(e eVar) {
        return ho.AggregatePushSwitch;
    }

    private static void a(e eVar, a aVar) {
        if (aVar != null) {
            f8014a.put(eVar, aVar);
        }
    }
}
