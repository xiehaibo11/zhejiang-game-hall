package com.cmic.gen.sdk.auth;

import android.content.Context;
import com.cmic.gen.sdk.b;
import com.cmic.gen.sdk.e.l;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import java.util.UUID;
import org.json.JSONObject;

/* JADX INFO: compiled from: AuthnBusiness.java */
/* JADX INFO: loaded from: classes.dex */
public class a {
    private static a c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final com.cmic.gen.sdk.c.c.a f1620a = com.cmic.gen.sdk.c.c.a.a();
    private final Context b;

    private a(Context context) {
        this.b = context.getApplicationContext();
    }

    public static a a(Context context) {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a(context);
                }
            }
        }
        return c;
    }

    public void a(com.cmic.gen.sdk.a aVar, b bVar) {
        com.cmic.gen.sdk.e.c.b("AuthnBusiness", "LoginCheck method start");
        int iC = aVar.c("logintype");
        if (aVar.b("isCacheScrip", false)) {
            String strB = aVar.b("securityphone", "");
            if (iC == 3) {
                bVar.a("103000", "true", aVar, d.a(strB));
                return;
            } else {
                b(aVar, bVar);
                return;
            }
        }
        b(aVar, bVar);
    }

    public void b(final com.cmic.gen.sdk.a aVar, final b bVar) {
        com.cmic.gen.sdk.e.c.b("AuthnBusiness", "getScripAndToken start");
        boolean zB = aVar.b("isGotScrip", false);
        com.cmic.gen.sdk.e.c.b("AuthnBusiness", "isGotScrip = " + zB);
        if (!zB) {
            a(aVar);
            if (!aVar.b("isCacheScrip", false)) {
                b(aVar);
                if (aVar.c("networktype") == 3 && !"loginAuth".equals(aVar.b("loginMethod")) && aVar.c("logintype") != 3) {
                    aVar.a("isRisk", true);
                }
            }
            if (aVar.c("logintype") == 1) {
                aVar.a("userCapaid", BasicPushStatus.SUCCESS_CODE);
            } else if (aVar.c("logintype") == 0) {
                aVar.a("userCapaid", "50");
            }
        }
        this.f1620a.a(aVar, new com.cmic.gen.sdk.c.c.d() { // from class: com.cmic.gen.sdk.auth.a.1
            @Override // com.cmic.gen.sdk.c.c.d
            public void a(String str, String str2, JSONObject jSONObject) {
                a.this.a(aVar, bVar, str, str2, jSONObject);
            }
        });
    }

    private void a(com.cmic.gen.sdk.a aVar) {
        String packageName = this.b.getPackageName();
        String strA = com.cmic.gen.sdk.e.d.a(l.a(this.b, packageName));
        aVar.a("apppackage", packageName);
        aVar.a("appsign", strA);
    }

    private void b(com.cmic.gen.sdk.a aVar) {
        byte[] bytes = new byte[0];
        if (aVar.b("use2048PublicKey", false)) {
            com.cmic.gen.sdk.e.c.a("AuthnBusiness", "使用2048公钥对应的对称秘钥生成方式");
            bytes = com.cmic.gen.sdk.e.a.a();
        } else {
            com.cmic.gen.sdk.e.c.a("AuthnBusiness", "使用1024公钥对应的对称秘钥生成方式");
            try {
                bytes = UUID.randomUUID().toString().substring(0, 16).getBytes("utf-8");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        byte[] bArrA = com.cmic.gen.sdk.e.a.a();
        aVar.a(b.a.f1632a, bytes);
        aVar.a(b.a.b, bArrA);
        aVar.a("authType", "3");
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00f3  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.cmic.gen.sdk.a r21, com.cmic.gen.sdk.auth.b r22, java.lang.String r23, java.lang.String r24, org.json.JSONObject r25) {
        /*
            Method dump skipped, instruction units count: 291
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.cmic.gen.sdk.auth.a.a(com.cmic.gen.sdk.a, com.cmic.gen.sdk.auth.b, java.lang.String, java.lang.String, org.json.JSONObject):void");
    }
}
