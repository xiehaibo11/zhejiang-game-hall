package com.meizu.cloud.pushsdk.platform.a;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.c.a.c;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;
import java.io.File;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4632a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;
    private String h;
    private String i;
    private String j;
    private String k;
    private String l;
    private String m;
    private String n;
    private String o;

    public a(Context context) {
        this.f4632a = "https://api-push.meizu.com/garcia/api/client/";
        this.b = this.f4632a + "message/registerPush";
        this.c = this.f4632a + "message/unRegisterPush";
        this.d = this.f4632a + "advance/unRegisterPush";
        this.e = this.f4632a + "message/getRegisterSwitch";
        this.f = this.f4632a + "message/changeRegisterSwitch";
        this.g = this.f4632a + "message/changeAllSwitch";
        this.h = this.f4632a + "message/subscribeTags";
        this.i = this.f4632a + "message/unSubscribeTags";
        this.j = this.f4632a + "message/unSubAllTags";
        this.k = this.f4632a + "message/getSubTags";
        this.l = this.f4632a + "message/subscribeAlias";
        this.m = this.f4632a + "message/unSubscribeAlias";
        this.n = this.f4632a + "message/getSubAlias";
        this.o = this.f4632a + "advance/changeRegisterSwitch";
        com.meizu.cloud.pushsdk.c.a.a();
        if (MzSystemUtils.isOverseas()) {
            this.f4632a = "https://api-push.in.meizu.com/garcia/api/client/";
            this.b = this.f4632a + "message/registerPush";
            this.c = this.f4632a + "message/unRegisterPush";
            this.d = this.f4632a + "advance/unRegisterPush";
            this.e = this.f4632a + "message/getRegisterSwitch";
            this.f = this.f4632a + "message/changeRegisterSwitch";
            this.g = this.f4632a + "message/changeAllSwitch";
            this.h = this.f4632a + "message/subscribeTags";
            this.i = this.f4632a + "message/unSubscribeTags";
            this.j = this.f4632a + "message/unSubAllTags";
            this.k = this.f4632a + "message/getSubTags";
            this.l = this.f4632a + "message/subscribeAlias";
            this.m = this.f4632a + "message/unSubscribeAlias";
            this.n = this.f4632a + "message/getSubAlias";
            this.o = this.f4632a + "advance/changeRegisterSwitch";
        }
    }

    public c a(String str, String str2, String str3) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put("deviceId", str3);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "register post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.b).a(linkedHashMap2).a().a();
    }

    public c a(String str, String str2, String str3, int i, boolean z) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put(com.alipay.sdk.authjs.a.g, String.valueOf(i));
        linkedHashMap.put("subSwitch", z ? "1" : "0");
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", this.f + " switchPush post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.f).a(linkedHashMap2).a().a();
    }

    public c<String> a(String str, String str2, String str3, File file) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(RemoteMessageConst.MSGID, str);
        linkedHashMap.put("deviceId", str2);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, "4a2ca769d79f4856bb3bd982d30de790"));
        if (!TextUtils.isEmpty(str3)) {
            linkedHashMap2.put("errorMsg", str3);
        }
        DebugLogger.i("PushAPI", "uploadLogFile post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.c("https://api-push.meizu.com/garcia/api/client/log/upload").a(linkedHashMap2).a("logFile", file).a().a();
    }

    public c a(String str, String str2, String str3, String str4) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put("tags", str4);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "subScribeTags post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.h).a(linkedHashMap2).a().a();
    }

    public c a(String str, String str2, String str3, boolean z) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put("subSwitch", z ? "1" : "0");
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", this.g + " switchPush post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.g).a(linkedHashMap2).a().a();
    }

    public c b(String str, String str2, String str3) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put("deviceId", str3);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "unregister post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.a(this.c).a(linkedHashMap2).a().a();
    }

    public c b(String str, String str2, String str3, String str4) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put("tags", str4);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "subScribeTags post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.i).a(linkedHashMap2).a().a();
    }

    public c c(String str, String str2, String str3) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "checkPush post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.a(this.e).a(linkedHashMap2).a().a();
    }

    public c c(String str, String str2, String str3, String str4) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(com.heytap.mcssdk.constant.b.z, str2);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put(PushConstants.SUB_ALIAS_STATUS_NAME, str4);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "subScribeTags post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.l).a(linkedHashMap2).a().a();
    }

    public c d(String str, String str2, String str3) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "subScribeAllTags post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.j).a(linkedHashMap2).a().a();
    }

    public c d(String str, String str2, String str3, String str4) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        linkedHashMap.put(PushConstants.SUB_ALIAS_STATUS_NAME, str4);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "subScribeTags post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.b(this.m).a(linkedHashMap2).a().a();
    }

    public c e(String str, String str2, String str3) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put(com.tkay.expressad.videocommon.e.b.u, str);
        linkedHashMap.put(PushConstants.KEY_PUSH_ID, str3);
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap);
        linkedHashMap2.put("sign", com.meizu.cloud.pushsdk.platform.b.a(linkedHashMap, str2));
        DebugLogger.i("PushAPI", "checkPush post map " + linkedHashMap2);
        return com.meizu.cloud.pushsdk.c.a.a(this.k).a(linkedHashMap2).a().a();
    }
}
