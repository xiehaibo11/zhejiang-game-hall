package com.loc;

import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.amap.api.location.AMapLocationClientOption;
import com.qihoo360.replugin.RePlugin;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.nio.ByteBuffer;
import kotlin.UByte;
import okhttp3.HttpUrl;
import org.json.JSONArray;
import org.json.JSONObject;

public final class fo {
    private StringBuilder a = new StringBuilder();
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
    */
    public final ew a(ew ewVar, byte[] bArr, eq eqVar) {
        String str;
        ByteBuffer byteBufferWrap;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        byte b;
        ByteBuffer byteBuffer;
        ByteBuffer byteBuffer2;
        ew ewVar2 = ewVar;
        try {
        } catch (Throwable th) {
            th = th;
            str = "";
            byteBufferWrap = null;
        }
        if (bArr == null) {
            ewVar2.setErrorCode(5);
            eqVar.f("#0504");
            this.a.append("binaryResult is null#0504");
            ewVar2.setLocationDetail(this.a.toString());
            this.a.delete(0, this.a.length());
            return ewVar2;
        }
        byteBufferWrap = ByteBuffer.wrap(bArr);
        try {
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            if (byteBufferWrap.get() != 0) {
                ewVar2.setLongitude(fz.a(((double) byteBufferWrap.getInt()) / 1000000.0d));
                ewVar2.setLatitude(fz.a(((double) byteBufferWrap.getInt()) / 1000000.0d));
                ewVar2.setAccuracy(byteBufferWrap.getShort());
                ewVar2.c(String.valueOf((int) byteBufferWrap.get()));
                ewVar2.d(String.valueOf((int) byteBufferWrap.get()));
                if (byteBufferWrap.get() == 1) {
                    try {
                        byte[] bArr2 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr2);
                        try {
                            ewVar2.setCountry(new String(bArr2, "UTF-8"));
                        } catch (Throwable unused) {
                        }
                        byte[] bArr3 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr3);
                        try {
                            str2 = new String(bArr3, "UTF-8");
                            try {
                                ewVar2.setProvince(str2);
                            } catch (Throwable unused2) {
                            }
                        } catch (Throwable unused3) {
                            str2 = "";
                        }
                        String str10 = str2;
                        byte[] bArr4 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr4);
                        try {
                            str3 = new String(bArr4, "UTF-8");
                            try {
                                ewVar2.setCity(str3);
                            } catch (Throwable unused4) {
                            }
                        } catch (Throwable unused5) {
                            str3 = "";
                        }
                        String str11 = str3;
                        byte[] bArr5 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr5);
                        try {
                            str4 = new String(bArr5, "UTF-8");
                            try {
                                ewVar2.setDistrict(str4);
                            } catch (Throwable unused6) {
                            }
                        } catch (Throwable unused7) {
                            str4 = "";
                        }
                        String str12 = str4;
                        byte[] bArr6 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr6);
                        try {
                            str5 = new String(bArr6, "UTF-8");
                            try {
                                ewVar2.setStreet(str5);
                                ewVar2.setRoad(str5);
                            } catch (Throwable unused8) {
                            }
                        } catch (Throwable unused9) {
                            str5 = "";
                        }
                        String str13 = str5;
                        byte[] bArr7 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr7);
                        try {
                            str6 = new String(bArr7, "UTF-8");
                            try {
                                ewVar2.setNumber(str6);
                            } catch (Throwable unused10) {
                            }
                        } catch (Throwable unused11) {
                            str6 = "";
                        }
                        String str14 = str6;
                        byte[] bArr8 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr8);
                        try {
                            str7 = new String(bArr8, "UTF-8");
                            try {
                                ewVar2.setPoiName(str7);
                            } catch (Throwable unused12) {
                            }
                        } catch (Throwable unused13) {
                            str7 = "";
                        }
                        String str15 = str7;
                        byte[] bArr9 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr9);
                        try {
                            ewVar2.setAoiName(new String(bArr9, "UTF-8"));
                        } catch (Throwable unused14) {
                        }
                        byte[] bArr10 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr10);
                        try {
                            str8 = new String(bArr10, "UTF-8");
                            try {
                                ewVar2.setAdCode(str8);
                            } catch (Throwable unused15) {
                            }
                        } catch (Throwable unused16) {
                            str8 = "";
                        }
                        String str16 = str8;
                        byte[] bArr11 = new byte[byteBufferWrap.get() & UByte.MAX_VALUE];
                        byteBufferWrap.get(bArr11);
                        try {
                            ewVar2.setCityCode(new String(bArr11, "UTF-8"));
                        } catch (Throwable unused17) {
                        }
                        str9 = "UTF-8";
                        b = 1;
                        byteBuffer = byteBufferWrap;
                        str = "";
                        try {
                            a(ewVar, str10, str11, str12, str13, str14, str15, str16);
                        } catch (Throwable th3) {
                            th = th3;
                            byteBufferWrap = byteBuffer;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        str = "";
                    }
                } else {
                    str9 = "UTF-8";
                    byteBuffer = byteBufferWrap;
                    str = "";
                    b = 1;
                }
                try {
                    byteBuffer2 = byteBuffer;
                    try {
                        byteBuffer2.get(new byte[byteBuffer.get() & UByte.MAX_VALUE]);
                        if (byteBuffer2.get() == b) {
                            byteBuffer2.getInt();
                            byteBuffer2.getInt();
                            byteBuffer2.getShort();
                        }
                        if (byteBuffer2.get() == b) {
                            byte[] bArr12 = new byte[byteBuffer2.get() & UByte.MAX_VALUE];
                            byteBuffer2.get(bArr12);
                            try {
                                ewVar2.setBuildingId(new String(bArr12, str9));
                            } catch (Throwable unused18) {
                            }
                            byte[] bArr13 = new byte[byteBuffer2.get() & UByte.MAX_VALUE];
                            byteBuffer2.get(bArr13);
                            try {
                                ewVar2.setFloor(new String(bArr13, str9));
                            } catch (Throwable unused19) {
                            }
                        }
                        if (byteBuffer2.get() == b) {
                            byteBuffer2.get();
                            byteBuffer2.getInt();
                            byteBuffer2.get();
                        }
                        if (byteBuffer2.get() == b) {
                            ewVar2.setTime(byteBuffer2.getLong());
                        }
                        int i = byteBuffer2.getShort();
                        if (i > 0) {
                            byte[] bArr14 = new byte[i];
                            byteBuffer2.get(bArr14);
                            if (i > 0) {
                                try {
                                    ewVar2.a(new String(Base64.decode(bArr14, 0), str9));
                                } catch (Throwable unused20) {
                                }
                            }
                        }
                        int i2 = byteBuffer2.getShort();
                        if (i2 > 0) {
                            byteBuffer2.get(new byte[i2]);
                        }
                        if (Double.valueOf(fr.a).doubleValue() >= 5.1d) {
                            a(ewVar2, byteBuffer2.getShort());
                            ewVar2.a(byteBuffer2.get());
                        }
                        if (byteBuffer2 != null) {
                            byteBuffer2.clear();
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        byteBufferWrap = byteBuffer2;
                        ew ewVar3 = new ew(str);
                        ewVar3.setErrorCode(5);
                        eqVar.f("#0505");
                        this.a.append("parser data error:" + th.getMessage() + "#0505");
                        fx.a((String) null, 2054);
                        ewVar3.setLocationDetail(this.a.toString());
                        if (byteBufferWrap != null) {
                        }
                        ewVar2 = ewVar3;
                    }
                } catch (Throwable th6) {
                    th = th6;
                    byteBuffer2 = byteBuffer;
                }
                if (this.a.length() > 0) {
                    StringBuilder sb = this.a;
                    sb.delete(0, sb.length());
                }
                return ewVar2;
            }
            try {
                ewVar2.b(String.valueOf((int) byteBufferWrap.getShort()));
                byteBufferWrap.clear();
                return ewVar2;
            } catch (Throwable th7) {
                th = th7;
            }
            ew ewVar32 = new ew(str);
            ewVar32.setErrorCode(5);
            eqVar.f("#0505");
            this.a.append("parser data error:" + th.getMessage() + "#0505");
            fx.a((String) null, 2054);
            ewVar32.setLocationDetail(this.a.toString());
            if (byteBufferWrap != null) {
                byteBufferWrap.clear();
            }
            ewVar2 = ewVar32;
            if (this.a.length() > 0) {
            }
            return ewVar2;
        } finally {
            if (byteBufferWrap != null) {
                byteBufferWrap.clear();
            }
        }
        str = "";
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
                StringBuilder sb = this.a;
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
                StringBuilder sb2 = this.a;
                sb2.append("auth fail:");
                sb2.append(string2);
                sb2.append(stringBuffer);
                sb2.append("#0701");
                fx.a(buVar.d, string3, string2);
            }
        } catch (Throwable th) {
            eqVar.f("#0703");
            StringBuilder sb3 = this.a;
            sb3.append("json exception error:");
            sb3.append(th.getMessage());
            sb3.append(stringBuffer);
            sb3.append("#0703");
            fr.a(th, "parser", "paseAuthFailurJson");
        }
        ewVar.setLocationDetail(this.a.toString());
        if (this.a.length() > 0) {
            StringBuilder sb4 = this.a;
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
