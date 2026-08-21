package com.mbridge.msdk.mbjscommon.a;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.d.b;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    private static final String c = a.class.getSimpleName();
    private String d = "handlerNativeResult";
    int a = 0;
    int b = 1;

    private static final class a {
        private static a a = new a();
    }

    public static a a() {
        return a.a;
    }

    public final void a(Object obj, String str, JSONArray jSONArray, int i) {
        JSONObject jSONObjectOptJSONObject;
        JSONObject jSONObjectOptJSONObject2;
        JSONObject jSONObjectOptJSONObject3;
        JSONObject jSONObjectOptJSONObject4;
        JSONObject jSONObjectOptJSONObject5;
        JSONObject jSONObjectOptJSONObject6;
        JSONObject jSONObjectOptJSONObject7;
        JSONObject jSONObjectOptJSONObject8;
        JSONObject jSONObjectOptJSONObject9;
        JSONObject jSONObjectOptJSONObject10;
        JSONObject jSONObjectOptJSONObject11;
        int i2;
        try {
            if (jSONArray == null) {
                a(this.b, "called reporter failed, params empty", obj);
                return;
            }
            int length = jSONArray.length();
            if (length == 0) {
                a(this.b, "called reporter failed, params empty", obj);
                return;
            }
            if ("reportMessageR".equalsIgnoreCase(str)) {
                StringBuffer stringBuffer = new StringBuffer();
                int i3 = 0;
                while (true) {
                    i2 = length - 1;
                    if (i3 >= i2) {
                        break;
                    }
                    JSONObject jSONObjectOptJSONObject12 = jSONArray.optJSONObject(i3);
                    if (jSONObjectOptJSONObject12 != null) {
                        stringBuffer.append(jSONObjectOptJSONObject12.optString("key"));
                        stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                        stringBuffer.append(jSONObjectOptJSONObject12.opt("value"));
                        stringBuffer.append("&");
                    }
                    i3++;
                }
                JSONObject jSONObjectOptJSONObject13 = jSONArray.optJSONObject(i2);
                if (jSONObjectOptJSONObject13 != null) {
                    stringBuffer.append(jSONObjectOptJSONObject13.optString("key"));
                    stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    stringBuffer.append(jSONObjectOptJSONObject13.opt("value"));
                }
                String string = stringBuffer.toString();
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                if (contextJ != null && !TextUtils.isEmpty(string)) {
                    try {
                        new com.mbridge.msdk.foundation.same.report.d.a(contextJ).post(0, d.a().a, e.a(string, contextJ), new b() {
                            @Override
                            public final void onSuccess(String str2) {
                                z.d(a.c, str2);
                            }

                            @Override
                            public final void onFailed(String str2) {
                                z.d(a.c, str2);
                            }
                        });
                    } catch (Exception e) {
                        z.d(c, e.getMessage());
                    }
                }
            } else if ("reportMessageD".equalsIgnoreCase(str)) {
                String string2 = "";
                String string3 = (length <= 0 || (jSONObjectOptJSONObject11 = jSONArray.optJSONObject(0)) == null) ? "" : jSONObjectOptJSONObject11.getString("value");
                int i4 = -1;
                int i5 = (length <= 1 || (jSONObjectOptJSONObject10 = jSONArray.optJSONObject(1)) == null) ? -1 : jSONObjectOptJSONObject10.getInt("value");
                int i6 = (length <= 2 || (jSONObjectOptJSONObject9 = jSONArray.optJSONObject(2)) == null) ? -1 : jSONObjectOptJSONObject9.getInt("value");
                int i7 = (length <= 3 || (jSONObjectOptJSONObject8 = jSONArray.optJSONObject(3)) == null) ? -1 : jSONObjectOptJSONObject8.getInt("value");
                int i8 = (length <= 4 || (jSONObjectOptJSONObject7 = jSONArray.optJSONObject(4)) == null) ? -1 : jSONObjectOptJSONObject7.getInt("value");
                String string4 = (length <= 5 || (jSONObjectOptJSONObject6 = jSONArray.optJSONObject(5)) == null) ? "" : jSONObjectOptJSONObject6.getString("value");
                String string5 = (length <= 6 || (jSONObjectOptJSONObject5 = jSONArray.optJSONObject(6)) == null) ? "" : jSONObjectOptJSONObject5.getString("value");
                int i9 = (length <= 7 || (jSONObjectOptJSONObject4 = jSONArray.optJSONObject(7)) == null) ? -1 : jSONObjectOptJSONObject4.getInt("value");
                String string6 = (length <= 8 || (jSONObjectOptJSONObject3 = jSONArray.optJSONObject(8)) == null) ? "" : jSONObjectOptJSONObject3.getString("value");
                if (length > 9 && (jSONObjectOptJSONObject2 = jSONArray.optJSONObject(9)) != null) {
                    i4 = jSONObjectOptJSONObject2.getInt("value");
                }
                int i10 = i4;
                if (length > 10 && (jSONObjectOptJSONObject = jSONArray.optJSONObject(10)) != null) {
                    string2 = jSONObjectOptJSONObject.getString("value");
                }
                String str2 = string2;
                try {
                    Context contextJ2 = com.mbridge.msdk.foundation.controller.a.f().j();
                    if (contextJ2 != null) {
                        t.a(i.a(contextJ2)).a(new p(string3, i5, i6, i7, i8, string4, string5, i9, string6, i10, str2));
                    }
                } catch (Throwable th) {
                    z.a(c, th.getMessage());
                }
            }
            a(this.a, "called reporter success", obj);
        } catch (Throwable th2) {
            z.a(c, th2.getMessage());
            a(this.b, "exception: " + th2.getMessage(), obj);
        }
    }

    private void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e) {
            z.a(c, e.getMessage());
        } catch (Throwable th) {
            z.a(c, th.getMessage());
        }
    }
}
