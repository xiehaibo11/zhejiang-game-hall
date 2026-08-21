package com.tkay.expressad.atsignalcommon.bridge;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class CommonBannerJSBridgeImp implements IBannerJSBridge {
    public static final String a = CommonBannerJSBridgeImp.class.getSimpleName();

    @Override
    public void click(Object obj, String str) {
    }

    @Override
    public void getFileInfo(Object obj, String str) {
    }

    @Override
    public void handlerH5Exception(Object obj, String str) {
    }

    @Override
    public void init(Object obj, String str) {
    }

    @Override
    public void install(Object obj, String str) {
    }

    @Override
    public void readyStatus(Object obj, String str) {
    }

    @Override
    public void resetCountdown(Object obj, String str) {
    }

    @Override
    public void sendImpressions(Object obj, String str) {
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
    }

    @Override
    public void onJSBridgeConnect(Object obj, String str) {
        try {
            if (obj instanceof a) {
                j.a();
                j.b(((a) obj).a);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void reportUrls(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObject = jSONArray.getJSONObject(i);
                int iOptInt = jSONObject.optInt("type");
                String strOptString = jSONObject.optString("url");
                int iOptInt2 = jSONObject.optInt(PointCategory.REPORT);
                boolean z = true;
                if (iOptInt2 == 0) {
                    Context contextF = m.a().f();
                    if (iOptInt == 0) {
                        z = false;
                    }
                    com.tkay.expressad.a.a.a(contextF, (c) null, "", strOptString, z);
                } else {
                    com.tkay.expressad.a.a.a(m.a().f(), null, "", strOptString, false, iOptInt != 0, iOptInt2);
                }
            }
            j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(0));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void increaseOfferFrequence(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
        } else {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                CommonJSBridgeImpUtils.increaseOfferFrequence(obj, new JSONObject(str));
            } catch (Throwable unused) {
            }
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        Context contextF = m.a().f();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextF == null) {
            try {
                if ((obj instanceof a) && (windVaneWebView = ((a) obj).a) != null) {
                    contextF = windVaneWebView.getContext();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
        if (contextF == null) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                l.a(strOptString);
            } else if (iOptInt == 2) {
                l.a(contextF, strOptString);
            }
        } catch (JSONException e2) {
            e2.getMessage();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override
    public void getNetstat(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        Context contextF = m.a().f();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextF == null) {
            try {
                if ((obj instanceof a) && (windVaneWebView = ((a) obj).a) != null) {
                    contextF = windVaneWebView.getContext();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
        if (contextF == null) {
            j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(1));
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NativeAdvancedJsUtils.m, k.a());
            String string = jSONObject.toString();
            if (!TextUtils.isEmpty(string)) {
                string = Base64.encodeToString(string.getBytes(), 2);
            }
            j.a().a(obj, string);
        } catch (Throwable th) {
            th.getMessage();
            j.a().a(obj, CommonJSBridgeImpUtils.codeToJsonString(1));
        }
    }

    @Override
    public void cai(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                CommonJSBridgeImpUtils.callbackExcep(obj, "packageName is empty");
            }
            int i = t.a(m.a().f(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", CommonJSBridgeImpUtils.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e) {
                CommonJSBridgeImpUtils.callbackExcep(obj, e.getMessage());
                e.getMessage();
            }
        } catch (JSONException e2) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "exception: " + e2.getLocalizedMessage());
        } catch (Throwable th) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "exception: " + th.getLocalizedMessage());
        }
    }

    @Override
    public void gial(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", CommonJSBridgeImpUtils.b);
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            CommonJSBridgeImpUtils.callbackExcep(obj, e.getMessage());
            e.getMessage();
        } catch (Throwable th) {
            CommonJSBridgeImpUtils.callbackExcep(obj, th.getMessage());
            th.getMessage();
        }
    }
}
