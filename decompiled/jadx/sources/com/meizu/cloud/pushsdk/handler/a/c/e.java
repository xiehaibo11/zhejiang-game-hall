package com.meizu.cloud.pushsdk.handler.a.c;

import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.handler.MessageV3;
import com.meizu.cloud.pushsdk.handler.MzPushMessage;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4607a;
    private String b = String.valueOf(-1);
    private String c = "";
    private String d = "";
    private int e = -1;
    private String f = "";

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f4608a;
        public String b;
        String c;

        public a(String str) {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (!jSONObject.isNull("code")) {
                    a(jSONObject.getString("code"));
                }
                if (!jSONObject.isNull("message")) {
                    b(jSONObject.getString("message"));
                }
                if (jSONObject.isNull("value")) {
                    return;
                }
                c(jSONObject.getString("value"));
            } catch (JSONException e) {
                DebugLogger.e("SecurityMessage", "covert json error " + e.getMessage());
            }
        }

        public String a() {
            return this.c;
        }

        public void a(String str) {
            this.f4608a = str;
        }

        public void b(String str) {
            this.b = str;
        }

        public void c(String str) {
            this.c = str;
        }

        public String toString() {
            return "PublicKeyStatus{code='" + this.f4608a + "', message='" + this.b + "', publicKey='" + this.c + "'}";
        }
    }

    public static String a(MessageV3 messageV3) {
        JSONObject jSONObject;
        String notificationMessage = messageV3.getNotificationMessage();
        String string = null;
        try {
            try {
                if (!TextUtils.isEmpty(notificationMessage)) {
                    try {
                        JSONObject jSONObject2 = new JSONObject(notificationMessage).getJSONObject("data");
                        if (!jSONObject2.isNull("extra")) {
                            JSONObject jSONObject3 = jSONObject2.getJSONObject("extra");
                            if (!jSONObject3.isNull("se")) {
                                string = jSONObject3.getString("se");
                            }
                        }
                    } catch (JSONException e) {
                        DebugLogger.e("SecurityMessage", "parse notification message error " + e.getMessage());
                        if (TextUtils.isEmpty(null)) {
                            jSONObject = new JSONObject(notificationMessage);
                            string = jSONObject.getString("se");
                        }
                    }
                    if (TextUtils.isEmpty(string)) {
                        jSONObject = new JSONObject(notificationMessage);
                        string = jSONObject.getString("se");
                    }
                }
            } catch (Throwable th) {
                if (TextUtils.isEmpty(null)) {
                    try {
                        new JSONObject(notificationMessage).getString("se");
                    } catch (Exception unused) {
                    }
                }
                throw th;
            }
        } catch (Exception unused2) {
        }
        DebugLogger.i("SecurityMessage", "encrypt message " + string);
        return string;
    }

    public static boolean a(String str, MessageV3 messageV3) {
        String str2;
        e eVarE = e(str);
        DebugLogger.e("SecurityMessage", "securityMessage " + eVarE);
        if (System.currentTimeMillis() / 1000 > eVarE.a()) {
            str2 = "message expire";
        } else if (!messageV3.getTitle().contains(eVarE.c())) {
            str2 = "invalid title";
        } else if (!messageV3.getContent().contains(eVarE.d())) {
            str2 = "invalid content";
        } else if (!String.valueOf(-1).equals(eVarE.b()) && !eVarE.b().equals(messageV3.getTaskId())) {
            str2 = "invalid taskId";
        } else {
            if (eVarE.e() != -1) {
                int iE = eVarE.e();
                if (iE == 1) {
                    if (!messageV3.getActivity().contains(eVarE.f())) {
                        str2 = "invalid click activity";
                    }
                    return true;
                }
                if (iE == 2) {
                    if (!messageV3.getWebUrl().contains(eVarE.f())) {
                        str2 = "invalid web url";
                    }
                    return true;
                }
                if (iE == 3 && !MzPushMessage.fromMessageV3(messageV3).getSelfDefineContentString().contains(eVarE.f())) {
                    str2 = "invalid self define";
                }
                return true;
            }
            str2 = "invalid click type";
        }
        DebugLogger.e("SecurityMessage", str2);
        return false;
    }

    private static e e(String str) {
        e eVar = new e();
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (!jSONObject.isNull("tt")) {
                eVar.a(jSONObject.getInt("tt"));
            }
            if (!jSONObject.isNull("ti")) {
                eVar.a(jSONObject.getString("ti"));
            }
            if (!jSONObject.isNull("tl")) {
                eVar.b(jSONObject.getString("tl"));
            }
            if (!jSONObject.isNull("cont")) {
                eVar.c(jSONObject.getString("cont"));
            }
            if (!jSONObject.isNull(com.tkay.expressad.d.a.b.dx)) {
                eVar.b(jSONObject.getInt(com.tkay.expressad.d.a.b.dx));
            }
            if (!jSONObject.isNull("pm")) {
                eVar.d(jSONObject.getString("pm"));
            }
        } catch (Exception e) {
            DebugLogger.e("SecurityMessage", "parse decryptSign error " + e.getMessage());
        }
        return eVar;
    }

    public int a() {
        return this.f4607a;
    }

    public void a(int i) {
        this.f4607a = i;
    }

    public void a(String str) {
        this.b = str;
    }

    public String b() {
        return this.b;
    }

    public void b(int i) {
        this.e = i;
    }

    public void b(String str) {
        this.c = str;
    }

    public String c() {
        return this.c;
    }

    public void c(String str) {
        this.d = str;
    }

    public String d() {
        return this.d;
    }

    public void d(String str) {
        this.f = str;
    }

    public int e() {
        return this.e;
    }

    public String f() {
        return this.f;
    }

    public String toString() {
        return "SecurityMessage{timestamp=" + this.f4607a + ", taskId='" + this.b + "', title='" + this.c + "', content='" + this.d + "', clickType=" + this.e + ", params='" + this.f + "'}";
    }
}
