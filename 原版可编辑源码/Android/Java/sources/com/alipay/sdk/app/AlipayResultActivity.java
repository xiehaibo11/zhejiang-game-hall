package com.alipay.sdk.app;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Base64;
import com.alipay.sdk.m.s.a;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public class AlipayResultActivity extends Activity {
    public static final ConcurrentHashMap<String, a> a = new ConcurrentHashMap<>();

    public interface a {
        void a(int i, String str, String str2);
    }

    public interface b {
        void a(int i, String str, String str2);
    }

    private void a(String str, Bundle bundle) {
        a aVarRemove = a.remove(str);
        if (aVarRemove == null) {
            return;
        }
        try {
            aVarRemove.a(bundle.getInt("endCode"), bundle.getString("memo"), bundle.getString("result"));
        } finally {
            finish();
        }
    }

    @Override
    public void onCreate(Bundle bundle) {
        Throwable th;
        super.onCreate(bundle);
        try {
            Intent intent = getIntent();
            try {
                String stringExtra = intent.getStringExtra(IUserFeature.LOGIN_SUC_RS_SESSION);
                Bundle bundleExtra = intent.getBundleExtra("result");
                String stringExtra2 = intent.getStringExtra("scene");
                com.alipay.sdk.m.s.a aVarA = a.a.a(stringExtra);
                if (aVarA == null) {
                    finish();
                    return;
                }
                com.alipay.sdk.m.k.a.a(aVarA, "biz", "BSPSession", stringExtra + "|" + SystemClock.elapsedRealtime());
                if (TextUtils.equals("mqpSchemePay", stringExtra2)) {
                    a(stringExtra, bundleExtra);
                    return;
                }
                if ((TextUtils.isEmpty(stringExtra) || bundleExtra == null) && intent.getData() != null) {
                    try {
                        JSONObject jSONObject = new JSONObject(new String(Base64.decode(intent.getData().getQuery(), 2), "UTF-8"));
                        JSONObject jSONObject2 = jSONObject.getJSONObject("result");
                        stringExtra = jSONObject.getString(IUserFeature.LOGIN_SUC_RS_SESSION);
                        com.alipay.sdk.m.k.a.a(aVarA, "biz", "BSPUriSession", stringExtra);
                        Bundle bundle2 = new Bundle();
                        try {
                            Iterator<String> itKeys = jSONObject2.keys();
                            while (itKeys.hasNext()) {
                                String next = itKeys.next();
                                bundle2.putString(next, jSONObject2.getString(next));
                            }
                            bundleExtra = bundle2;
                        } catch (Throwable th2) {
                            th = th2;
                            bundleExtra = bundle2;
                            com.alipay.sdk.m.k.a.a(aVarA, "biz", "BSPResEx", th);
                            com.alipay.sdk.m.k.a.a(aVarA, "biz", com.alipay.sdk.m.k.b.s0, th);
                        }
                    } catch (Throwable th3) {
                        th = th3;
                    }
                }
                if (TextUtils.isEmpty(stringExtra) || bundleExtra == null) {
                    com.alipay.sdk.m.k.a.b(this, aVarA, "", aVarA.d);
                    finish();
                    return;
                }
                try {
                    com.alipay.sdk.m.k.a.a(aVarA, "biz", com.alipay.sdk.m.k.b.V, "" + SystemClock.elapsedRealtime());
                    com.alipay.sdk.m.k.a.a(aVarA, "biz", com.alipay.sdk.m.k.b.W, bundleExtra.getInt("endCode", -1) + "|" + bundleExtra.getString("memo", Constants.ACCEPT_TIME_SEPARATOR_SERVER));
                    OpenAuthTask.a(stringExtra, 9000, "OK", bundleExtra);
                    com.alipay.sdk.m.k.a.b(this, aVarA, "", aVarA.d);
                    finish();
                } catch (Throwable th4) {
                    com.alipay.sdk.m.k.a.b(this, aVarA, "", aVarA.d);
                    finish();
                    throw th4;
                }
            } catch (Throwable th5) {
                com.alipay.sdk.m.k.a.a((com.alipay.sdk.m.s.a) null, "biz", "BSPSerError", th5);
                com.alipay.sdk.m.k.a.a((com.alipay.sdk.m.s.a) null, "biz", com.alipay.sdk.m.k.b.r0, th5);
                finish();
            }
        } catch (Throwable unused) {
            finish();
        }
    }
}
