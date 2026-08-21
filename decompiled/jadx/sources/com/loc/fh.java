package com.loc;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.bianfeng.libuniverse.Device;
import com.sigmob.sdk.base.mta.PointCategory;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.Set;
import org.json.JSONObject;

/* JADX INFO: compiled from: Cache.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Hashtable<String, ArrayList<a>> f2974a = new Hashtable<>();
    private long i = 0;
    private boolean j = false;
    private String k = "2.0.201501131131".replace(".", "");
    private String l = null;
    boolean b = true;
    long c = 0;
    String d = null;
    fa e = null;
    private String m = null;
    private long n = 0;
    boolean f = true;
    boolean g = true;
    String h = String.valueOf(AMapLocationClientOption.GeoLanguage.DEFAULT);

    /* JADX INFO: compiled from: Cache.java */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private ew f2975a = null;
        private String b = null;

        protected a() {
        }

        public final ew a() {
            return this.f2975a;
        }

        public final void a(ew ewVar) {
            this.f2975a = ewVar;
        }

        public final void a(String str) {
            this.b = TextUtils.isEmpty(str) ? null : str.replace("##", "#");
        }

        public final String b() {
            return this.b;
        }
    }

    private ew a(String str, StringBuilder sb, boolean z) {
        try {
            a aVarA = (str.contains("cgiwifi") || str.contains(Device.NETWORN_WIFI)) ? a(sb, str) : (str.contains("cgi") && this.f2974a.containsKey(str) && this.f2974a.get(str).size() > 0) ? this.f2974a.get(str).get(0) : null;
            if (aVarA != null && fz.a(aVarA.a())) {
                ew ewVarA = aVarA.a();
                ewVarA.e("mem");
                ewVarA.h(aVarA.b());
                if (!z && !fq.a(ewVarA.getTime())) {
                    if (this.f2974a != null && this.f2974a.containsKey(str)) {
                        this.f2974a.get(str).remove(aVarA);
                    }
                }
                if (fz.a(ewVarA)) {
                    this.c = 0L;
                }
                ewVarA.setLocationType(4);
                return ewVarA;
            }
        } catch (Throwable th) {
            fr.a(th, "Cache", "get1");
        }
        return null;
    }

    private a a(StringBuilder sb, String str) {
        a aVar;
        boolean z;
        a aVar2;
        if (this.f2974a.isEmpty() || TextUtils.isEmpty(sb)) {
            return null;
        }
        if (!this.f2974a.containsKey(str)) {
            return null;
        }
        Hashtable hashtable = new Hashtable();
        Hashtable hashtable2 = new Hashtable();
        Hashtable hashtable3 = new Hashtable();
        ArrayList<a> arrayList = this.f2974a.get(str);
        char c = 1;
        int size = arrayList.size() - 1;
        while (size >= 0) {
            a aVar3 = arrayList.get(size);
            if (!TextUtils.isEmpty(aVar3.b())) {
                if (!a(aVar3.b(), sb)) {
                    z = false;
                } else {
                    if (fz.a(aVar3.b(), sb.toString())) {
                        aVar2 = aVar3;
                        aVar = aVar2;
                        break;
                    }
                    z = true;
                }
                a(aVar3.b(), (Hashtable<String, String>) hashtable);
                a(sb.toString(), (Hashtable<String, String>) hashtable2);
                hashtable3.clear();
                Iterator it = hashtable.keySet().iterator();
                while (it.hasNext()) {
                    hashtable3.put((String) it.next(), "");
                }
                Iterator it2 = hashtable2.keySet().iterator();
                while (it2.hasNext()) {
                    hashtable3.put((String) it2.next(), "");
                }
                Set setKeySet = hashtable3.keySet();
                double[] dArr = new double[setKeySet.size()];
                double[] dArr2 = new double[setKeySet.size()];
                Iterator it3 = setKeySet.iterator();
                int i = 0;
                while (it3 != null && it3.hasNext()) {
                    String str2 = (String) it3.next();
                    double d = 1.0d;
                    dArr[i] = hashtable.containsKey(str2) ? 1.0d : 0.0d;
                    if (!hashtable2.containsKey(str2)) {
                        d = 0.0d;
                    }
                    dArr2[i] = d;
                    i++;
                }
                setKeySet.clear();
                double[] dArrA = a(dArr, dArr2);
                if (dArrA[0] < 0.800000011920929d) {
                    aVar2 = aVar3;
                    if (dArrA[c] >= Math.min(fq.g(), 0.618d) || (z && dArrA[0] >= Math.min(fq.g(), 0.618d))) {
                        aVar = aVar2;
                        break;
                    }
                } else {
                    aVar2 = aVar3;
                    aVar = aVar2;
                    break;
                }
            }
            size--;
            c = 1;
        }
        aVar = null;
        hashtable.clear();
        hashtable2.clear();
        hashtable3.clear();
        return aVar;
    }

    private String a(String str, StringBuilder sb, Context context) {
        if (context == null) {
            return null;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            this.l = fz.l(context);
            if (str.contains("&")) {
                str = str.substring(0, str.indexOf("&"));
            }
            String strSubstring = str.substring(str.lastIndexOf("#") + 1);
            if (strSubstring.equals("cgi")) {
                jSONObject.put("cgi", str.substring(0, str.length() - 12));
            } else if (!TextUtils.isEmpty(sb) && sb.indexOf(",access") != -1) {
                jSONObject.put("cgi", str.substring(0, str.length() - (strSubstring.length() + 9)));
                String[] strArrSplit = sb.toString().split(",access");
                jSONObject.put("mmac", strArrSplit[0].contains("#") ? strArrSplit[0].substring(strArrSplit[0].lastIndexOf("#") + 1) : strArrSplit[0]);
            }
            return p.b(fg.a(jSONObject.toString().getBytes("UTF-8"), this.l));
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:113:0x029d A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:115:0x02a2 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:129:0x00bd A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0261 A[EDGE_INSN: B:140:0x0261->B:91:0x0261 BREAK  A[LOOP:0: B:42:0x00cf->B:93:0x0271], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:145:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0129 A[Catch: all -> 0x00c4, TRY_LEAVE, TryCatch #1 {all -> 0x00c4, blocks: (B:35:0x00bd, B:45:0x00e6, B:47:0x0100, B:48:0x0104, B:52:0x0119, B:54:0x0129, B:73:0x01b8, B:75:0x01be, B:77:0x01ea, B:78:0x01f7, B:79:0x01fc, B:49:0x0108, B:51:0x010e, B:58:0x0159, B:59:0x016c, B:68:0x01a0, B:63:0x0176), top: B:129:0x00bd }] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x01a0 A[Catch: all -> 0x00c4, TRY_ENTER, TRY_LEAVE, TryCatch #1 {all -> 0x00c4, blocks: (B:35:0x00bd, B:45:0x00e6, B:47:0x0100, B:48:0x0104, B:52:0x0119, B:54:0x0129, B:73:0x01b8, B:75:0x01be, B:77:0x01ea, B:78:0x01f7, B:79:0x01fc, B:49:0x0108, B:51:0x010e, B:58:0x0159, B:59:0x016c, B:68:0x01a0, B:63:0x0176), top: B:129:0x00bd }] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0271 A[LOOP:0: B:42:0x00cf->B:93:0x0271, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0278  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x027b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(android.content.Context r20, java.lang.String r21, boolean r22) throws java.lang.Exception {
        /*
            Method dump skipped, instruction units count: 702
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fh.a(android.content.Context, java.lang.String, boolean):void");
    }

    private void a(String str, AMapLocation aMapLocation, StringBuilder sb, Context context) throws Exception {
        if (context == null) {
            return;
        }
        if (this.l == null) {
            this.l = fz.l(context);
        }
        String strA = a(str, sb, context);
        StringBuilder sb2 = new StringBuilder();
        SQLiteDatabase sQLiteDatabaseOpenOrCreateDatabase = null;
        try {
            sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase("hmdb", 0, null);
            sb2.append("CREATE TABLE IF NOT EXISTS hist");
            sb2.append(this.k);
            sb2.append(" (feature VARCHAR PRIMARY KEY, nb VARCHAR, loc VARCHAR, time VARCHAR);");
            sQLiteDatabaseOpenOrCreateDatabase.execSQL(sb2.toString());
            sb2.delete(0, sb2.length());
            sb2.append("REPLACE INTO ");
            sb2.append("hist");
            sb2.append(this.k);
            sb2.append(" VALUES (?, ?, ?, ?)");
            Object[] objArr = new Object[4];
            objArr[0] = strA;
            byte[] bArrA = fg.a(sb.toString().getBytes("UTF-8"), this.l);
            objArr[1] = bArrA;
            objArr[2] = fg.a(aMapLocation.toStr().getBytes("UTF-8"), this.l);
            objArr[3] = Long.valueOf(aMapLocation.getTime());
            for (int i = 1; i < 3; i++) {
                objArr[i] = p.b((byte[]) objArr[i]);
            }
            sQLiteDatabaseOpenOrCreateDatabase.execSQL(sb2.toString(), objArr);
            sb2.delete(0, sb2.length());
        } catch (Throwable th) {
            try {
                fr.a(th, "DB", "updateHist");
                sb2.delete(0, sb2.length());
                if (sQLiteDatabaseOpenOrCreateDatabase == null || !sQLiteDatabaseOpenOrCreateDatabase.isOpen()) {
                    return;
                }
                sQLiteDatabaseOpenOrCreateDatabase.close();
            } finally {
                sb2.delete(0, sb2.length());
                if (sQLiteDatabaseOpenOrCreateDatabase != null && sQLiteDatabaseOpenOrCreateDatabase.isOpen()) {
                    sQLiteDatabaseOpenOrCreateDatabase.close();
                }
            }
        }
    }

    private static void a(String str, Hashtable<String, String> hashtable) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        hashtable.clear();
        for (String str2 : str.split("#")) {
            if (!TextUtils.isEmpty(str2) && !str2.contains("|")) {
                hashtable.put(str2, "");
            }
        }
    }

    private boolean a(ew ewVar, boolean z) {
        if (a(z)) {
            return ewVar == null || fq.a(ewVar.getTime()) || z;
        }
        return false;
    }

    private static boolean a(String str, ew ewVar) {
        if (TextUtils.isEmpty(str) || !fz.a(ewVar) || str.startsWith("#")) {
            return false;
        }
        return str.contains(PointCategory.NETWORK);
    }

    private static boolean a(String str, StringBuilder sb) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(sb) || !str.contains(",access") || sb.indexOf(",access") == -1) {
            return false;
        }
        String[] strArrSplit = str.split(",access");
        String strSubstring = strArrSplit[0].contains("#") ? strArrSplit[0].substring(strArrSplit[0].lastIndexOf("#") + 1) : strArrSplit[0];
        if (TextUtils.isEmpty(strSubstring)) {
            return false;
        }
        return sb.toString().contains(strSubstring + ",access");
    }

    private boolean a(boolean z) {
        if (fq.e() || z) {
            return this.b || fq.f() || z;
        }
        return false;
    }

    private static double[] a(double[] dArr, double[] dArr2) {
        double[] dArr3 = new double[3];
        double d = 0.0d;
        double d2 = 0.0d;
        double d3 = 0.0d;
        int i = 0;
        int i2 = 0;
        for (int i3 = 0; i3 < dArr.length; i3++) {
            d2 += dArr[i3] * dArr[i3];
            d3 += dArr2[i3] * dArr2[i3];
            d += dArr[i3] * dArr2[i3];
            if (dArr2[i3] == 1.0d) {
                i2++;
                if (dArr[i3] == 1.0d) {
                    i++;
                }
            }
        }
        dArr3[0] = d / (Math.sqrt(d2) * Math.sqrt(d3));
        double d4 = i;
        dArr3[1] = (d4 * 1.0d) / ((double) i2);
        dArr3[2] = d4;
        for (int i4 = 0; i4 < 2; i4++) {
            if (dArr3[i4] > 1.0d) {
                dArr3[i4] = 1.0d;
            }
        }
        return dArr3;
    }

    private boolean b() {
        long jB = fz.b();
        long j = this.i;
        long j2 = jB - j;
        if (j == 0) {
            return false;
        }
        return this.f2974a.size() > 360 || j2 > 172800000;
    }

    private void c() {
        this.i = 0L;
        if (!this.f2974a.isEmpty()) {
            this.f2974a.clear();
        }
        this.j = false;
    }

    private void c(Context context) throws Exception {
        boolean zIsOpen;
        if (context == null) {
            return;
        }
        SQLiteDatabase sQLiteDatabaseOpenOrCreateDatabase = null;
        try {
            sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase("hmdb", 0, null);
            if (!fz.a(sQLiteDatabaseOpenOrCreateDatabase, "hist")) {
                if (sQLiteDatabaseOpenOrCreateDatabase != null) {
                    if (zIsOpen) {
                        return;
                    } else {
                        return;
                    }
                }
                return;
            }
            try {
                sQLiteDatabaseOpenOrCreateDatabase.delete("hist" + this.k, "time<?", new String[]{String.valueOf(fz.a() - 172800000)});
            } catch (Throwable th) {
                fr.a(th, "DB", "clearHist");
                String message = th.getMessage();
                if (!TextUtils.isEmpty(message)) {
                    message.contains("no such table");
                }
            }
            if (sQLiteDatabaseOpenOrCreateDatabase == null || !sQLiteDatabaseOpenOrCreateDatabase.isOpen()) {
                return;
            }
            sQLiteDatabaseOpenOrCreateDatabase.close();
        } catch (Throwable th2) {
            try {
                fr.a(th2, "DB", "clearHist p2");
                if (sQLiteDatabaseOpenOrCreateDatabase == null || !sQLiteDatabaseOpenOrCreateDatabase.isOpen()) {
                    return;
                }
                sQLiteDatabaseOpenOrCreateDatabase.close();
            } finally {
                if (sQLiteDatabaseOpenOrCreateDatabase != null && sQLiteDatabaseOpenOrCreateDatabase.isOpen()) {
                    sQLiteDatabaseOpenOrCreateDatabase.close();
                }
            }
        }
    }

    public final ew a(Context context, String str, StringBuilder sb, boolean z, boolean z2) {
        if (TextUtils.isEmpty(str) || !fq.e()) {
            return null;
        }
        String str2 = str + "&" + this.f + "&" + this.g + "&" + this.h;
        if (str2.contains("gps") || !fq.e() || sb == null) {
            return null;
        }
        if (b()) {
            c();
            return null;
        }
        if (z && !this.j) {
            try {
                String strA = a(str2, sb, context);
                c();
                a(context, strA, z2);
            } catch (Throwable unused) {
            }
        }
        if (this.f2974a.isEmpty()) {
            return null;
        }
        return a(str2, sb, z2);
    }

    /* JADX WARN: Removed duplicated region for block: B:62:0x00c9 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:64:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x00e2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.loc.ew a(com.loc.fb r16, boolean r17, com.loc.ew r18, com.loc.ff r19, java.lang.StringBuilder r20, java.lang.String r21, android.content.Context r22, boolean r23) {
        /*
            Method dump skipped, instruction units count: 243
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fh.a(com.loc.fb, boolean, com.loc.ew, com.loc.ff, java.lang.StringBuilder, java.lang.String, android.content.Context, boolean):com.loc.ew");
    }

    public final void a() {
        this.c = 0L;
        this.d = null;
    }

    public final void a(Context context) {
        if (this.j) {
            return;
        }
        try {
            c();
            a(context, (String) null, false);
        } catch (Throwable th) {
            fr.a(th, "Cache", "loadDB");
        }
        this.j = true;
    }

    public final void a(AMapLocationClientOption aMapLocationClientOption) {
        this.g = aMapLocationClientOption.isNeedAddress();
        this.f = aMapLocationClientOption.isOffset();
        this.b = aMapLocationClientOption.isLocationCacheEnable();
        this.h = String.valueOf(aMapLocationClientOption.getGeoLanguage());
    }

    public final void a(fa faVar) {
        this.e = faVar;
    }

    public final void a(String str) {
        this.d = str;
    }

    public final void a(String str, StringBuilder sb, ew ewVar, Context context, boolean z) {
        try {
            if (fz.a(ewVar)) {
                String str2 = str + "&" + ewVar.isOffset() + "&" + ewVar.i() + "&" + ewVar.j();
                if (!a(str2, ewVar) || ewVar.e().equals("mem") || ewVar.e().equals(com.sigmob.sdk.base.h.x) || ewVar.e().equals("wifioff") || "-3".equals(ewVar.d())) {
                    return;
                }
                if (b()) {
                    c();
                }
                JSONObject jSONObjectF = ewVar.f();
                if (fz.a(jSONObjectF, "offpct")) {
                    jSONObjectF.remove("offpct");
                    ewVar.a(jSONObjectF);
                }
                if (str2.contains(Device.NETWORN_WIFI)) {
                    if (TextUtils.isEmpty(sb)) {
                        return;
                    }
                    if (ewVar.getAccuracy() >= 300.0f) {
                        int i = 0;
                        for (String str3 : sb.toString().split("#")) {
                            if (str3.contains(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                                i++;
                            }
                        }
                        if (i >= 8) {
                            return;
                        }
                    } else if (ewVar.getAccuracy() <= 3.0f) {
                        return;
                    }
                    if (str2.contains("cgiwifi") && !TextUtils.isEmpty(ewVar.g())) {
                        String strReplace = str2.replace("cgiwifi", "cgi");
                        ew ewVarH = ewVar.h();
                        if (fz.a(ewVarH)) {
                            a(strReplace, new StringBuilder(), ewVarH, context, true);
                        }
                    }
                } else if (str2.contains("cgi") && ((sb != null && sb.indexOf(Constants.ACCEPT_TIME_SEPARATOR_SP) != -1) || "4".equals(ewVar.d()))) {
                    return;
                }
                ew ewVarA = a(str2, sb, false);
                if (fz.a(ewVarA) && ewVarA.toStr().equals(ewVar.toStr(3))) {
                    return;
                }
                this.i = fz.b();
                a aVar = new a();
                aVar.a(ewVar);
                aVar.a(TextUtils.isEmpty(sb) ? null : sb.toString());
                if (this.f2974a.containsKey(str2)) {
                    this.f2974a.get(str2).add(aVar);
                } else {
                    ArrayList<a> arrayList = new ArrayList<>();
                    arrayList.add(aVar);
                    this.f2974a.put(str2, arrayList);
                }
                if (z) {
                    try {
                        a(str2, ewVar, sb, context);
                    } catch (Throwable th) {
                        fr.a(th, "Cache", com.tkay.expressad.d.a.b.ay);
                    }
                }
            }
        } catch (Throwable th2) {
            fr.a(th2, "Cache", com.tkay.expressad.d.a.b.ay);
        }
    }

    public final void b(Context context) {
        try {
            c();
            c(context);
            this.j = false;
            this.d = null;
            this.n = 0L;
        } catch (Throwable th) {
            fr.a(th, "Cache", "destroy part");
        }
    }
}
