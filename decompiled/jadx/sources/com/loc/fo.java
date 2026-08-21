package com.loc;

import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import com.amap.api.location.AMapLocationClientOption;
import com.qihoo360.replugin.RePlugin;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import okhttp3.HttpUrl;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: Parser.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private StringBuilder f2981a = new StringBuilder();
    private AMapLocationClientOption b = new AMapLocationClientOption();

    private void a(ew ewVar, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        StringBuilder sb = new StringBuilder();
        if (!TextUtils.isEmpty(str)) {
            sb.append(str);
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(str2)) {
            a(str, str2, sb);
        }
        if (!TextUtils.isEmpty(str3)) {
            sb.append(str3);
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(str4)) {
            sb.append(str4);
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(str5)) {
            sb.append(str5);
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(str6)) {
            a(str7, str6, sb, ewVar);
        }
        Bundle bundle = new Bundle();
        bundle.putString("citycode", ewVar.getCityCode());
        bundle.putString("desc", sb.toString());
        bundle.putString("adcode", ewVar.getAdCode());
        ewVar.setExtras(bundle);
        ewVar.g(sb.toString());
        String adCode = ewVar.getAdCode();
        ewVar.setAddress((adCode == null || adCode.trim().length() <= 0 || this.b.getGeoLanguage() == AMapLocationClientOption.GeoLanguage.EN) ? sb.toString() : sb.toString().replace(" ", ""));
    }

    private static void a(ew ewVar, short s) {
        if (RePlugin.PROCESS_UI.equals(ewVar.d())) {
            if (s == 101) {
                s = 100;
            }
            ewVar.setConScenario(s);
        } else {
            if (s == -1) {
                s = 0;
            } else if (s == 0) {
                s = -1;
            }
            ewVar.setConScenario(s);
        }
    }

    private void a(String str, String str2, StringBuilder sb) {
        if (this.b.getGeoLanguage() == AMapLocationClientOption.GeoLanguage.EN) {
            if (str2.equals(str)) {
                return;
            }
            sb.append(str2);
            sb.append(" ");
            return;
        }
        if (str.contains("市") && str.equals(str2)) {
            return;
        }
        sb.append(str2);
        sb.append(" ");
    }

    private void a(String str, String str2, StringBuilder sb, ew ewVar) {
        String strConcat;
        if (TextUtils.isEmpty(str) || this.b.getGeoLanguage() == AMapLocationClientOption.GeoLanguage.EN) {
            sb.append("Near ".concat(String.valueOf(str2)));
            strConcat = "Near ".concat(String.valueOf(str2));
        } else {
            sb.append("靠近");
            sb.append(str2);
            sb.append(" ");
            strConcat = "在" + str2 + "附近";
        }
        ewVar.setDescription(strConcat);
    }

    private static String b(String str) {
        return HttpUrl.PATH_SEGMENT_ENCODE_SET_URI.equals(str) ? "" : str;
    }

    /* JADX WARN: Removed duplicated region for block: B:116:0x0291  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x029d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.loc.ew a(com.loc.ew r22, byte[] r23, com.loc.eq r24) {
        /*
            Method dump skipped, instruction units count: 686
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fo.a(com.loc.ew, byte[], com.loc.eq):com.loc.ew");
    }

    public final ew a(String str) {
        String str2;
        try {
            ew ewVar = new ew("");
            JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject("regeocode");
            JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("addressComponent");
            ewVar.setCountry(b(jSONObjectOptJSONObject2.optString("country")));
            String strB = b(jSONObjectOptJSONObject2.optString("province"));
            ewVar.setProvince(strB);
            String strB2 = b(jSONObjectOptJSONObject2.optString("citycode"));
            ewVar.setCityCode(strB2);
            String strOptString = jSONObjectOptJSONObject2.optString("city");
            if (!strB2.endsWith("010") && !strB2.endsWith("021") && !strB2.endsWith("022") && !strB2.endsWith("023")) {
                strOptString = b(strOptString);
                ewVar.setCity(strOptString);
            } else if (strB != null && strB.length() > 0) {
                ewVar.setCity(strB);
                strOptString = strB;
            }
            if (TextUtils.isEmpty(strOptString)) {
                ewVar.setCity(strB);
                strOptString = strB;
            }
            String strB3 = b(jSONObjectOptJSONObject2.optString("district"));
            ewVar.setDistrict(strB3);
            String strB4 = b(jSONObjectOptJSONObject2.optString("adcode"));
            ewVar.setAdCode(strB4);
            JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject2.optJSONObject("streetNumber");
            String strB5 = b(jSONObjectOptJSONObject3.optString("street"));
            ewVar.setStreet(strB5);
            ewVar.setRoad(strB5);
            String strB6 = b(jSONObjectOptJSONObject3.optString("number"));
            ewVar.setNumber(strB6);
            JSONArray jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray("pois");
            if (jSONArrayOptJSONArray.length() > 0) {
                String strB7 = b(jSONArrayOptJSONArray.getJSONObject(0).optString("name"));
                ewVar.setPoiName(strB7);
                str2 = strB7;
            } else {
                str2 = null;
            }
            JSONArray jSONArrayOptJSONArray2 = jSONObjectOptJSONObject.optJSONArray("aois");
            if (jSONArrayOptJSONArray2.length() > 0) {
                ewVar.setAoiName(b(jSONArrayOptJSONArray2.getJSONObject(0).optString("name")));
            }
            a(ewVar, strB, strOptString, strB3, strB5, strB6, str2, strB4);
            return ewVar;
        } catch (Throwable unused) {
            return null;
        }
    }

    public final ew a(String str, Context context, bu buVar, eq eqVar) {
        ew ewVar = new ew("");
        ewVar.setErrorCode(7);
        StringBuffer stringBuffer = new StringBuffer();
        try {
            stringBuffer.append("#SHA1AndPackage#");
            stringBuffer.append(l.e(context));
            String str2 = buVar.b.get("gsid").get(0);
            if (!TextUtils.isEmpty(str2)) {
                stringBuffer.append("#gsid#");
                stringBuffer.append(str2);
            }
            String str3 = buVar.c;
            if (!TextUtils.isEmpty(str3)) {
                stringBuffer.append("#csid#".concat(String.valueOf(str3)));
            }
        } catch (Throwable unused) {
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (!jSONObject.has("status") || !jSONObject.has(DBDefinition.SEGMENT_INFO)) {
                eqVar.f("#0702");
                StringBuilder sb = this.f2981a;
                sb.append("json is error:");
                sb.append(str);
                sb.append(stringBuffer);
                sb.append("#0702");
            }
            String string = jSONObject.getString("status");
            String string2 = jSONObject.getString(DBDefinition.SEGMENT_INFO);
            String string3 = jSONObject.getString("infocode");
            if ("0".equals(string)) {
                eqVar.f("#0701");
                StringBuilder sb2 = this.f2981a;
                sb2.append("auth fail:");
                sb2.append(string2);
                sb2.append(stringBuffer);
                sb2.append("#0701");
                fx.a(buVar.d, string3, string2);
            }
        } catch (Throwable th) {
            eqVar.f("#0703");
            StringBuilder sb3 = this.f2981a;
            sb3.append("json exception error:");
            sb3.append(th.getMessage());
            sb3.append(stringBuffer);
            sb3.append("#0703");
            fr.a(th, "parser", "paseAuthFailurJson");
        }
        ewVar.setLocationDetail(this.f2981a.toString());
        if (this.f2981a.length() > 0) {
            StringBuilder sb4 = this.f2981a;
            sb4.delete(0, sb4.length());
        }
        return ewVar;
    }

    public final void a(AMapLocationClientOption aMapLocationClientOption) {
        if (aMapLocationClientOption == null) {
            this.b = new AMapLocationClientOption();
        } else {
            this.b = aMapLocationClientOption;
        }
    }
}
