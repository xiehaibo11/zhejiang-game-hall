package com.igexin.push.core.bean;

import android.os.Build;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.x;
import com.igexin.sdk.PushBuildConfig;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2552a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f = PushBuildConfig.sdk_conf_channelid;
    public String g;
    public String h;
    public String i;
    public String j;
    public String k;
    public String l;
    public String m;
    public long n;

    public a() {
        if (com.igexin.push.core.d.e != null) {
            this.f += Constants.COLON_SEPARATOR + com.igexin.push.core.d.e;
        }
        this.e = PushBuildConfig.sdk_conf_version;
        this.b = com.igexin.push.core.d.x;
        this.c = com.igexin.push.core.d.w;
        this.d = com.igexin.push.core.d.z;
        this.f2552a = com.igexin.push.core.d.y;
        this.h = "ANDROID";
        this.j = "android" + Build.VERSION.RELEASE;
        this.k = "MDP";
        this.g = com.igexin.push.core.d.A;
        this.n = System.currentTimeMillis();
        this.l = com.igexin.push.core.d.B;
        this.m = com.igexin.push.util.j.a();
        if (com.igexin.assist.sdk.a.h(com.igexin.push.core.d.g) && com.igexin.push.config.j.u) {
            StringBuilder sb = new StringBuilder();
            sb.append("FCM-");
            String str = this.m;
            sb.append(str == null ? "" : str);
            this.m = sb.toString();
        }
    }

    public static String a(a aVar) {
        JSONObject jSONObject = new JSONObject();
        String str = aVar.f2552a;
        if (str == null) {
            str = "";
        }
        jSONObject.put("model", str);
        String str2 = aVar.b;
        if (str2 == null) {
            str2 = "";
        }
        jSONObject.put("sim", str2);
        String str3 = aVar.c;
        if (str3 == null) {
            str3 = "";
        }
        jSONObject.put("imei", str3);
        String str4 = aVar.d;
        if (str4 == null) {
            str4 = "";
        }
        jSONObject.put("mac", str4);
        String str5 = aVar.e;
        if (str5 == null) {
            str5 = "";
        }
        jSONObject.put("version", str5);
        String str6 = aVar.f;
        if (str6 == null) {
            str6 = "";
        }
        jSONObject.put("channelid", str6);
        jSONObject.put("type", "ANDROID");
        String str7 = aVar.k;
        if (str7 == null) {
            str7 = "";
        }
        jSONObject.put("app", str7);
        StringBuilder sb = new StringBuilder();
        sb.append("ANDROID-");
        String str8 = aVar.g;
        if (str8 == null) {
            str8 = "";
        }
        sb.append(str8);
        jSONObject.put("deviceid", sb.toString());
        String str9 = aVar.l;
        if (str9 == null) {
            str9 = "";
        }
        jSONObject.put(RemoteMessageConst.DEVICE_TOKEN, str9);
        String str10 = aVar.m;
        if (str10 == null) {
            str10 = "";
        }
        jSONObject.put("brand", str10);
        String str11 = aVar.j;
        if (str11 == null) {
            str11 = "";
        }
        jSONObject.put("system_version", str11);
        String str12 = aVar.i;
        if (str12 == null) {
            str12 = "";
        }
        jSONObject.put("cell", str12);
        jSONObject.put("aid", "");
        jSONObject.put("adid", "");
        String name = x.a().c(com.igexin.push.core.d.g).getName();
        if (!CoreConsts.n.equals(name)) {
            jSONObject.put("us", name);
        }
        jSONObject.put("ua", x.a().e(com.igexin.push.core.d.g));
        jSONObject.put("oaid", "");
        jSONObject.put("notification_enabled", com.igexin.push.util.a.b(com.igexin.push.core.d.g) ? 1 : 0);
        JSONObject jSONObject2 = new JSONObject();
        jSONObject2.put("action", "addphoneinfo");
        jSONObject2.put("id", String.valueOf(aVar.n));
        jSONObject2.put(DBDefinition.SEGMENT_INFO, jSONObject);
        return jSONObject2.toString();
    }
}
