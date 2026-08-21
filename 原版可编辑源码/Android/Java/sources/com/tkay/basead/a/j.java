package com.tkay.basead.a;

import android.text.TextUtils;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.f.z;
import com.tkay.core.common.h.k;
import java.net.URLEncoder;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public final class j {
    protected static void a(int i, z zVar, com.tkay.basead.c.i iVar) {
        String strC;
        String[] strArrG;
        ab abVarX = zVar.X();
        if (abVarX == null) {
            return;
        }
        Map<String, Object> mapC = com.tkay.core.common.l.h.c(abVarX.c());
        try {
            switch (i) {
                case 1:
                    strArrG = abVarX.g();
                    break;
                case 2:
                    strArrG = abVarX.h();
                    break;
                case 3:
                    strArrG = abVarX.i();
                    break;
                case 4:
                    strArrG = abVarX.j();
                    break;
                case 5:
                    strArrG = abVarX.k();
                    break;
                case 6:
                    strArrG = abVarX.p();
                    break;
                case 7:
                    strArrG = abVarX.q();
                    break;
                case 8:
                    strArrG = abVarX.e();
                    break;
                case 9:
                    strArrG = abVarX.f();
                    break;
                case 10:
                    strArrG = abVarX.d();
                    break;
                case 11:
                    strArrG = abVarX.l();
                    break;
                case 12:
                    strArrG = abVarX.n();
                    break;
                case 13:
                    strArrG = abVarX.o();
                    break;
                case 14:
                    strArrG = abVarX.m();
                    break;
                case 15:
                    strArrG = abVarX.Q();
                    break;
                case 16:
                    strArrG = abVarX.R();
                    break;
                case 17:
                    strArrG = abVarX.S();
                    break;
                case 18:
                    strArrG = abVarX.r();
                    break;
                case 19:
                    strArrG = abVarX.s();
                    break;
                case 20:
                    strArrG = abVarX.T();
                    break;
                case 21:
                    strArrG = abVarX.t();
                    break;
                case 22:
                default:
                    strArrG = null;
                    break;
                case 23:
                    strArrG = abVarX.U();
                    break;
                case 24:
                    strArrG = abVarX.V();
                    break;
                case 25:
                    strArrG = abVarX.W();
                    break;
                case 26:
                    strArrG = abVarX.X();
                    break;
                case 27:
                    strArrG = abVarX.Y();
                    break;
                case 28:
                    strArrG = abVarX.v();
                    break;
                case 29:
                    strArrG = abVarX.u();
                    break;
                case 30:
                    strArrG = abVarX.w();
                    break;
                case 31:
                    strArrG = abVarX.x();
                    break;
                case 32:
                    com.tkay.basead.c.j jVar = iVar.h;
                    Map<Integer, String[]> mapY = abVarX.y();
                    strArrG = (jVar != null && mapY != null) ? mapY.get(Integer.valueOf(jVar.i)) : null;
                    break;
                case 33:
                    strArrG = abVarX.a();
                    break;
                case 34:
                    strArrG = abVarX.b();
                    break;
                case 35:
                    strArrG = abVarX.ao();
                    break;
            }
            if (strArrG != null) {
                boolean zW = (i == 8 || i == 9) ? zVar.k().W() : false;
                long jCurrentTimeMillis = System.currentTimeMillis();
                for (String str : strArrG) {
                    com.tkay.basead.g.e eVar = new com.tkay.basead.g.e(i, a(str, iVar, jCurrentTimeMillis), zVar, mapC);
                    eVar.a(zW);
                    eVar.a(0, (k) null);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        switch (i) {
            case 1:
                strC = abVarX.C();
                break;
            case 2:
                strC = abVarX.D();
                break;
            case 3:
                strC = abVarX.E();
                break;
            case 4:
                strC = abVarX.F();
                break;
            case 5:
                strC = abVarX.G();
                break;
            case 6:
                strC = abVarX.L();
                break;
            case 7:
                strC = abVarX.M();
                break;
            case 8:
                strC = abVarX.A();
                break;
            case 9:
                strC = abVarX.B();
                break;
            case 10:
                strC = abVarX.z();
                break;
            case 11:
                strC = abVarX.H();
                break;
            case 12:
                strC = abVarX.J();
                break;
            case 13:
                strC = abVarX.K();
                break;
            case 14:
                strC = abVarX.I();
                break;
            case 15:
                strC = abVarX.Z();
                break;
            case 16:
                strC = abVarX.aa();
                break;
            case 17:
                strC = abVarX.ab();
                break;
            case 18:
                strC = abVarX.N();
                break;
            case 19:
                strC = abVarX.O();
                break;
            case 20:
                strC = abVarX.ac();
                break;
            case 21:
                strC = abVarX.P();
                break;
            case 22:
            case 32:
            default:
                strC = "";
                break;
            case 23:
                strC = abVarX.ad();
                break;
            case 24:
                strC = abVarX.ae();
                break;
            case 25:
                strC = abVarX.af();
                break;
            case 26:
                strC = abVarX.ag();
                break;
            case 27:
                strC = abVarX.ah();
                break;
            case 28:
                strC = abVarX.aj();
                break;
            case 29:
                strC = abVarX.ai();
                break;
            case 30:
                strC = abVarX.ak();
                break;
            case 31:
                strC = abVarX.al();
                break;
            case 33:
                strC = abVarX.am();
                break;
            case 34:
                strC = abVarX.an();
                break;
            case 35:
                strC = abVarX.ap();
                break;
        }
        if (a(strC)) {
            return;
        }
        com.tkay.basead.g.f fVar = new com.tkay.basead.g.f(i, zVar, strC, mapC);
        fVar.b(iVar.b);
        fVar.a(0, (k) null);
    }

    private static void a(int i, z zVar, ab abVar, Map<String, Object> map, com.tkay.basead.c.i iVar) {
        String[] strArrG;
        try {
            switch (i) {
                case 1:
                    strArrG = abVar.g();
                    break;
                case 2:
                    strArrG = abVar.h();
                    break;
                case 3:
                    strArrG = abVar.i();
                    break;
                case 4:
                    strArrG = abVar.j();
                    break;
                case 5:
                    strArrG = abVar.k();
                    break;
                case 6:
                    strArrG = abVar.p();
                    break;
                case 7:
                    strArrG = abVar.q();
                    break;
                case 8:
                    strArrG = abVar.e();
                    break;
                case 9:
                    strArrG = abVar.f();
                    break;
                case 10:
                    strArrG = abVar.d();
                    break;
                case 11:
                    strArrG = abVar.l();
                    break;
                case 12:
                    strArrG = abVar.n();
                    break;
                case 13:
                    strArrG = abVar.o();
                    break;
                case 14:
                    strArrG = abVar.m();
                    break;
                case 15:
                    strArrG = abVar.Q();
                    break;
                case 16:
                    strArrG = abVar.R();
                    break;
                case 17:
                    strArrG = abVar.S();
                    break;
                case 18:
                    strArrG = abVar.r();
                    break;
                case 19:
                    strArrG = abVar.s();
                    break;
                case 20:
                    strArrG = abVar.T();
                    break;
                case 21:
                    strArrG = abVar.t();
                    break;
                case 22:
                default:
                    strArrG = null;
                    break;
                case 23:
                    strArrG = abVar.U();
                    break;
                case 24:
                    strArrG = abVar.V();
                    break;
                case 25:
                    strArrG = abVar.W();
                    break;
                case 26:
                    strArrG = abVar.X();
                    break;
                case 27:
                    strArrG = abVar.Y();
                    break;
                case 28:
                    strArrG = abVar.v();
                    break;
                case 29:
                    strArrG = abVar.u();
                    break;
                case 30:
                    strArrG = abVar.w();
                    break;
                case 31:
                    strArrG = abVar.x();
                    break;
                case 32:
                    com.tkay.basead.c.j jVar = iVar.h;
                    Map<Integer, String[]> mapY = abVar.y();
                    strArrG = (jVar != null && mapY != null) ? mapY.get(Integer.valueOf(jVar.i)) : null;
                    break;
                case 33:
                    strArrG = abVar.a();
                    break;
                case 34:
                    strArrG = abVar.b();
                    break;
                case 35:
                    strArrG = abVar.ao();
                    break;
            }
            if (strArrG != null) {
                boolean zW = (i == 8 || i == 9) ? zVar.k().W() : false;
                long jCurrentTimeMillis = System.currentTimeMillis();
                for (String str : strArrG) {
                    com.tkay.basead.g.e eVar = new com.tkay.basead.g.e(i, a(str, iVar, jCurrentTimeMillis), zVar, map);
                    eVar.a(zW);
                    eVar.a(0, (k) null);
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static void a(int i, com.tkay.basead.c.i iVar, z zVar, ab abVar, Map<String, Object> map) {
        String strC;
        switch (i) {
            case 1:
                strC = abVar.C();
                break;
            case 2:
                strC = abVar.D();
                break;
            case 3:
                strC = abVar.E();
                break;
            case 4:
                strC = abVar.F();
                break;
            case 5:
                strC = abVar.G();
                break;
            case 6:
                strC = abVar.L();
                break;
            case 7:
                strC = abVar.M();
                break;
            case 8:
                strC = abVar.A();
                break;
            case 9:
                strC = abVar.B();
                break;
            case 10:
                strC = abVar.z();
                break;
            case 11:
                strC = abVar.H();
                break;
            case 12:
                strC = abVar.J();
                break;
            case 13:
                strC = abVar.K();
                break;
            case 14:
                strC = abVar.I();
                break;
            case 15:
                strC = abVar.Z();
                break;
            case 16:
                strC = abVar.aa();
                break;
            case 17:
                strC = abVar.ab();
                break;
            case 18:
                strC = abVar.N();
                break;
            case 19:
                strC = abVar.O();
                break;
            case 20:
                strC = abVar.ac();
                break;
            case 21:
                strC = abVar.P();
                break;
            case 22:
            case 32:
            default:
                strC = "";
                break;
            case 23:
                strC = abVar.ad();
                break;
            case 24:
                strC = abVar.ae();
                break;
            case 25:
                strC = abVar.af();
                break;
            case 26:
                strC = abVar.ag();
                break;
            case 27:
                strC = abVar.ah();
                break;
            case 28:
                strC = abVar.aj();
                break;
            case 29:
                strC = abVar.ai();
                break;
            case 30:
                strC = abVar.ak();
                break;
            case 31:
                strC = abVar.al();
                break;
            case 33:
                strC = abVar.am();
                break;
            case 34:
                strC = abVar.an();
                break;
            case 35:
                strC = abVar.ap();
                break;
        }
        if (a(strC)) {
            return;
        }
        com.tkay.basead.g.f fVar = new com.tkay.basead.g.f(i, zVar, strC, map);
        fVar.b(iVar.b);
        fVar.a(0, (k) null);
    }

    protected static String a(String str, com.tkay.basead.c.i iVar, long j) {
        String string;
        String string2;
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        if (iVar.g != null) {
            str = a(str, iVar);
        }
        if (iVar.h != null) {
            str = a(str, iVar.h);
        }
        if (iVar.i != null) {
            str = a(str, iVar.i);
        }
        long j2 = j / 1000;
        if (iVar.c == 0) {
            string = "__REQ_WIDTH__";
        } else {
            StringBuilder sb = new StringBuilder();
            sb.append(iVar.c);
            string = sb.toString();
        }
        String strReplaceAll = str.replaceAll("\\{__REQ_WIDTH__\\}", string);
        if (iVar.d == 0) {
            string2 = "__REQ_HEIGHT__";
        } else {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(iVar.d);
            string2 = sb2.toString();
        }
        String strReplaceAll2 = strReplaceAll.replaceAll("\\{__REQ_HEIGHT__\\}", string2);
        StringBuilder sb3 = new StringBuilder();
        sb3.append(iVar.e);
        String strReplaceAll3 = strReplaceAll2.replaceAll("\\{__WIDTH__\\}", sb3.toString());
        StringBuilder sb4 = new StringBuilder();
        sb4.append(iVar.f);
        return strReplaceAll3.replaceAll("\\{__HEIGHT__\\}", sb4.toString()).replaceAll("\\{__TS__\\}", String.valueOf(j2)).replaceAll("\\{__TS_MSEC__\\}", String.valueOf(j)).replaceAll("\\{__END_TS__\\}", String.valueOf(j2)).replaceAll("\\{__END_TS_MSEC__\\}", String.valueOf(j)).replaceAll("\\{__PLAY_SEC__\\}", "0").replaceAll("\\{", "").replaceAll("\\}", "");
    }

    private static String a(String str, com.tkay.basead.c.j jVar) {
        StringBuilder sb = new StringBuilder();
        sb.append(jVar.a);
        String strReplaceAll = str.replaceAll("\\{__VIDEO_TIME__\\}", sb.toString());
        StringBuilder sb2 = new StringBuilder();
        sb2.append(jVar.b);
        String strReplaceAll2 = strReplaceAll.replaceAll("\\{__BEGIN_TIME__\\}", sb2.toString());
        StringBuilder sb3 = new StringBuilder();
        sb3.append(jVar.c);
        String strReplaceAll3 = strReplaceAll2.replaceAll("\\{__END_TIME__\\}", sb3.toString());
        StringBuilder sb4 = new StringBuilder();
        sb4.append(jVar.d);
        String strReplaceAll4 = strReplaceAll3.replaceAll("\\{__PLAY_FIRST_FRAME__\\}", sb4.toString());
        StringBuilder sb5 = new StringBuilder();
        sb5.append(jVar.e);
        String strReplaceAll5 = strReplaceAll4.replaceAll("\\{__PLAY_LAST_FRAME__\\}", sb5.toString());
        StringBuilder sb6 = new StringBuilder();
        sb6.append(jVar.l);
        String strReplaceAll6 = strReplaceAll5.replaceAll("\\{__SCENE__\\}", sb6.toString());
        StringBuilder sb7 = new StringBuilder();
        sb7.append(jVar.o);
        String strReplaceAll7 = strReplaceAll6.replaceAll("\\{__TYPE__\\}", sb7.toString());
        StringBuilder sb8 = new StringBuilder();
        sb8.append(jVar.r);
        String strReplaceAll8 = strReplaceAll7.replaceAll("\\{__BEHAVIOR__\\}", sb8.toString());
        StringBuilder sb9 = new StringBuilder();
        sb9.append(jVar.u);
        String strReplaceAll9 = strReplaceAll8.replaceAll("\\{__STATUS__\\}", sb9.toString());
        StringBuilder sb10 = new StringBuilder();
        sb10.append(jVar.h);
        String strReplaceAll10 = strReplaceAll9.replaceAll("\\{__PLAY_SEC__\\}", sb10.toString());
        StringBuilder sb11 = new StringBuilder();
        sb11.append(jVar.f / 1000);
        String strReplaceAll11 = strReplaceAll10.replaceAll("\\{__TS__\\}", sb11.toString());
        StringBuilder sb12 = new StringBuilder();
        sb12.append(jVar.f);
        String strReplaceAll12 = strReplaceAll11.replaceAll("\\{__TS_MSEC__\\}", sb12.toString());
        StringBuilder sb13 = new StringBuilder();
        sb13.append(jVar.g / 1000);
        String strReplaceAll13 = strReplaceAll12.replaceAll("\\{__END_TS__\\}", sb13.toString());
        StringBuilder sb14 = new StringBuilder();
        sb14.append(jVar.g);
        String strReplaceAll14 = strReplaceAll13.replaceAll("\\{__END_TS_MSEC__\\}", sb14.toString());
        StringBuilder sb15 = new StringBuilder();
        sb15.append(jVar.h / 1000);
        String strReplaceAll15 = strReplaceAll14.replaceAll("\\{__PLAY_SEC__\\}", sb15.toString());
        StringBuilder sb16 = new StringBuilder();
        sb16.append(jVar.h);
        return strReplaceAll15.replaceAll("\\{__PLAY_MSEC__\\}", sb16.toString());
    }

    private static String a(String str, com.tkay.basead.c.b bVar) {
        return str.replaceAll("\\{__CLICK_ID__\\}", bVar.a == null ? "" : bVar.a);
    }

    private static String a(String str, com.tkay.basead.c.i iVar) {
        String strEncode;
        String strReplaceAll;
        String strEncode2 = "{}";
        com.tkay.basead.c.a aVar = iVar.g;
        int i = iVar.e;
        int i2 = iVar.f;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("down_x", aVar.e);
            jSONObject.put("down_y", aVar.f);
            jSONObject.put("up_x", aVar.g);
            jSONObject.put("up_y", aVar.h);
        } catch (JSONException unused) {
        }
        JSONObject jSONObject2 = new JSONObject();
        try {
            float f = i;
            jSONObject2.put("down_x", (int) ((aVar.e / f) * 1000.0f));
            float f2 = i2;
            jSONObject2.put("down_y", (int) ((aVar.e / f2) * 1000.0f));
            jSONObject2.put("up_x", (int) ((aVar.g / f) * 1000.0f));
            jSONObject2.put("up_y", (int) ((aVar.h / f2) * 1000.0f));
        } catch (JSONException unused2) {
        }
        try {
            strEncode = URLEncoder.encode(jSONObject.toString(), "utf-8");
        } catch (Throwable th) {
            th.printStackTrace();
            strEncode = "{}";
        }
        try {
            strEncode2 = URLEncoder.encode(jSONObject2.toString(), "utf-8");
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
        int i3 = aVar.i ? 1 : 2;
        StringBuilder sb = new StringBuilder();
        sb.append(aVar.a);
        String strReplaceAll2 = str.replaceAll("\\{__DOWN_X__\\}", sb.toString());
        StringBuilder sb2 = new StringBuilder();
        sb2.append(aVar.b);
        String strReplaceAll3 = strReplaceAll2.replaceAll("\\{__DOWN_Y__\\}", sb2.toString());
        StringBuilder sb3 = new StringBuilder();
        sb3.append(aVar.c);
        String strReplaceAll4 = strReplaceAll3.replaceAll("\\{__UP_X__\\}", sb3.toString());
        StringBuilder sb4 = new StringBuilder();
        sb4.append(aVar.d);
        String strReplaceAll5 = strReplaceAll4.replaceAll("\\{__UP_Y__\\}", sb4.toString());
        StringBuilder sb5 = new StringBuilder();
        sb5.append(aVar.e);
        String strReplaceAll6 = strReplaceAll5.replaceAll("\\{__RE_DOWN_X__\\}", sb5.toString());
        StringBuilder sb6 = new StringBuilder();
        sb6.append(aVar.f);
        String strReplaceAll7 = strReplaceAll6.replaceAll("\\{__RE_DOWN_Y__\\}", sb6.toString());
        StringBuilder sb7 = new StringBuilder();
        sb7.append(aVar.g);
        String strReplaceAll8 = strReplaceAll7.replaceAll("\\{__RE_UP_X__\\}", sb7.toString());
        StringBuilder sb8 = new StringBuilder();
        sb8.append(aVar.h);
        String strReplaceAll9 = strReplaceAll8.replaceAll("\\{__RE_UP_Y__\\}", sb8.toString()).replaceAll("\\{ABSOLUTE_COORD\\}", strEncode).replaceAll("\\{RELATIVE_COORD\\}", strEncode2).replaceAll("\\{__DPLINK_TYPE__\\}", String.valueOf(i3));
        if (aVar.i) {
            strReplaceAll9 = strReplaceAll9.replaceAll("&apk_ptype=\\{apk_ptype\\}", "");
        }
        if (aVar.j == -1) {
            strReplaceAll = strReplaceAll9.replaceAll("&apk_ptype=\\{apk_ptype\\}", "");
        } else {
            strReplaceAll = strReplaceAll9.replaceAll("\\{apk_ptype\\}", String.valueOf(aVar.j));
        }
        return strReplaceAll.replaceAll("\\{opdptype\\}", aVar.i ? "1" : "0");
    }

    private static boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return true;
        }
        return new JSONObject(str).length() <= 0;
    }
}
