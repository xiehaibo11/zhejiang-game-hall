package com.xiaomi.push;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.service.module.PushChannelRegion;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.UnsupportedEncodingException;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class cv {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static Context f8092a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static a f200a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static cv f201a;
    private static String c;
    private static String d;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f203a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private cu f204a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected b f205a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f206a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected final Map<String, cs> f207a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private final long f208b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private String f209b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    private long f210c;
    protected static final Map<String, cr> b = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected static boolean f202a = false;

    public interface a {
        cv a(Context context, cu cuVar, b bVar, String str);
    }

    public interface b {
        String a(String str);
    }

    protected cv(Context context, cu cuVar, b bVar, String str) {
        this(context, cuVar, bVar, str, null, null);
    }

    protected cv(Context context, cu cuVar, b bVar, String str, String str2, String str3) {
        this.f207a = new HashMap();
        this.f206a = "0";
        this.f203a = 0L;
        this.f208b = 15L;
        this.f210c = 0L;
        this.f209b = "isp_prov_city_country_ip";
        this.f205a = bVar;
        this.f204a = cuVar == null ? new cw(this) : cuVar;
        this.f206a = str;
        c = str2 == null ? context.getPackageName() : str2;
        d = str3 == null ? f() : str3;
    }

    public static synchronized cv a() {
        if (f201a == null) {
            throw new IllegalStateException("the host manager is not initialized yet.");
        }
        return f201a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    static String m206a() {
        NetworkInfo activeNetworkInfo;
        Context context = f8092a;
        if (context == null) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null || (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) == null) {
                return EnvironmentCompat.MEDIA_UNKNOWN;
            }
            if (activeNetworkInfo.getType() == 1) {
                return "WIFI-UNKNOWN";
            }
            return activeNetworkInfo.getTypeName() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + activeNetworkInfo.getSubtypeName();
        } catch (Throwable unused) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    static String a(String str) {
        try {
            int length = str.length();
            byte[] bytes = str.getBytes("UTF-8");
            for (int i = 0; i < bytes.length; i++) {
                byte b2 = bytes[i];
                int i2 = b2 & 240;
                if (i2 != 240) {
                    bytes[i] = (byte) (((b2 & 15) ^ ((byte) (((b2 >> 4) + length) & 15))) | i2);
                }
            }
            return new String(bytes);
        } catch (UnsupportedEncodingException unused) {
            return str;
        }
    }

    private ArrayList<cr> a(ArrayList<String> arrayList) {
        JSONObject jSONObject;
        JSONObject jSONObject2;
        m215d();
        synchronized (this.f207a) {
            m211a();
            for (String str : this.f207a.keySet()) {
                if (!arrayList.contains(str)) {
                    arrayList.add(str);
                }
            }
        }
        synchronized (b) {
            for (Object obj : b.values().toArray()) {
                cr crVar = (cr) obj;
                if (!crVar.b()) {
                    b.remove(crVar.f197b);
                }
            }
        }
        if (!arrayList.contains(b())) {
            arrayList.add(b());
        }
        ArrayList<cr> arrayList2 = new ArrayList<>(arrayList.size());
        for (int i = 0; i < arrayList.size(); i++) {
            arrayList2.add(null);
        }
        try {
            String str2 = bj.e(f8092a) ? Device.NETWORN_WIFI : "wap";
            String strA = a(arrayList, str2, this.f206a, true);
            if (!TextUtils.isEmpty(strA)) {
                JSONObject jSONObject3 = new JSONObject(strA);
                com.xiaomi.channel.commonutils.logger.b.b(strA);
                if ("OK".equalsIgnoreCase(jSONObject3.getString("S"))) {
                    JSONObject jSONObject4 = jSONObject3.getJSONObject("R");
                    String string = jSONObject4.getString("province");
                    String string2 = jSONObject4.getString("city");
                    String string3 = jSONObject4.getString("isp");
                    String string4 = jSONObject4.getString("ip");
                    String string5 = jSONObject4.getString("country");
                    JSONObject jSONObject5 = jSONObject4.getJSONObject(str2);
                    com.xiaomi.channel.commonutils.logger.b.c("get bucket: net=" + string3 + ", hosts=" + jSONObject5.toString());
                    int i2 = 0;
                    while (i2 < arrayList.size()) {
                        String str3 = arrayList.get(i2);
                        JSONArray jSONArrayOptJSONArray = jSONObject5.optJSONArray(str3);
                        if (jSONArrayOptJSONArray == null) {
                            com.xiaomi.channel.commonutils.logger.b.m43a("no bucket found for " + str3);
                            jSONObject = jSONObject5;
                        } else {
                            cr crVar2 = new cr(str3);
                            int i3 = 0;
                            while (i3 < jSONArrayOptJSONArray.length()) {
                                String string6 = jSONArrayOptJSONArray.getString(i3);
                                if (TextUtils.isEmpty(string6)) {
                                    jSONObject2 = jSONObject5;
                                } else {
                                    jSONObject2 = jSONObject5;
                                    crVar2.a(new da(string6, jSONArrayOptJSONArray.length() - i3));
                                }
                                i3++;
                                jSONObject5 = jSONObject2;
                            }
                            jSONObject = jSONObject5;
                            arrayList2.set(i2, crVar2);
                            crVar2.g = string5;
                            crVar2.c = string;
                            crVar2.e = string3;
                            crVar2.f = string4;
                            crVar2.d = string2;
                            if (jSONObject4.has("stat-percent")) {
                                crVar2.a(jSONObject4.getDouble("stat-percent"));
                            }
                            if (jSONObject4.has("stat-domain")) {
                                crVar2.b(jSONObject4.getString("stat-domain"));
                            }
                            if (jSONObject4.has(RemoteMessageConst.TTL)) {
                                crVar2.a(((long) jSONObject4.getInt(RemoteMessageConst.TTL)) * 1000);
                            }
                            m210a(crVar2.a());
                        }
                        i2++;
                        jSONObject5 = jSONObject;
                    }
                    JSONObject jSONObjectOptJSONObject = jSONObject4.optJSONObject("reserved");
                    if (jSONObjectOptJSONObject != null) {
                        long j = jSONObject4.has("reserved-ttl") ? ((long) jSONObject4.getInt("reserved-ttl")) * 1000 : 604800000L;
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            JSONArray jSONArrayOptJSONArray2 = jSONObjectOptJSONObject.optJSONArray(next);
                            if (jSONArrayOptJSONArray2 == null) {
                                com.xiaomi.channel.commonutils.logger.b.m43a("no bucket found for " + next);
                            } else {
                                cr crVar3 = new cr(next);
                                crVar3.a(j);
                                for (int i4 = 0; i4 < jSONArrayOptJSONArray2.length(); i4++) {
                                    String string7 = jSONArrayOptJSONArray2.getString(i4);
                                    if (!TextUtils.isEmpty(string7)) {
                                        crVar3.a(new da(string7, jSONArrayOptJSONArray2.length() - i4));
                                    }
                                }
                                synchronized (b) {
                                    if (this.f204a.a(next)) {
                                        b.put(next, crVar3);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("failed to get bucket " + e.getMessage());
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            cr crVar4 = arrayList2.get(i5);
            if (crVar4 != null) {
                a(arrayList.get(i5), crVar4);
            }
        }
        m214c();
        return arrayList2;
    }

    public static synchronized void a(Context context, cu cuVar, b bVar, String str, String str2, String str3) {
        Context applicationContext = context.getApplicationContext();
        f8092a = applicationContext;
        if (applicationContext == null) {
            f8092a = context;
        }
        if (f201a == null) {
            if (f200a == null) {
                f201a = new cv(context, cuVar, bVar, str, str2, str3);
            } else {
                f201a = f200a.a(context, cuVar, bVar, str);
            }
        }
    }

    public static synchronized void a(a aVar) {
        f200a = aVar;
        f201a = null;
    }

    public static void a(String str, String str2) {
        cr crVar = b.get(str);
        synchronized (b) {
            if (crVar == null) {
                cr crVar2 = new cr(str);
                crVar2.a(604800000L);
                crVar2.m199a(str2);
                b.put(str, crVar2);
            } else {
                crVar.m199a(str2);
            }
        }
    }

    private String f() {
        try {
            PackageInfo packageInfo = f8092a.getPackageManager().getPackageInfo(f8092a.getPackageName(), 16384);
            return packageInfo != null ? packageInfo.versionName : "0";
        } catch (Exception unused) {
            return "0";
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public cr m207a(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the url is empty");
        }
        return a(new URL(str).getHost(), true);
    }

    public cr a(String str, boolean z) {
        cr crVarE;
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("the host is empty");
        }
        if (!this.f204a.a(str)) {
            return null;
        }
        cr crVarC = c(str);
        return (crVarC == null || !crVarC.b()) ? (z && bj.b(f8092a) && (crVarE = e(str)) != null) ? crVarE : new cx(this, str, crVarC) : crVarC;
    }

    protected String a(ArrayList<String> arrayList, String str, String str2, boolean z) throws IOException {
        ArrayList<String> arrayList2 = new ArrayList<>();
        ArrayList<bi> arrayList3 = new ArrayList();
        arrayList3.add(new bg("type", str));
        if (str.equals("wap")) {
            arrayList3.add(new bg("conpt", a(bj.m149a(f8092a))));
        }
        if (z) {
            arrayList3.add(new bg("reserved", "1"));
        }
        arrayList3.add(new bg("uuid", str2));
        arrayList3.add(new bg("list", bp.a(arrayList, Constants.ACCEPT_TIME_SEPARATOR_SP)));
        arrayList3.add(new bg("countrycode", com.xiaomi.push.service.a.a(f8092a).b()));
        String strB = b();
        cr crVarC = c(strB);
        String str3 = String.format(Locale.US, "https://%1$s/gslb/?ver=4.0", strB);
        if (crVarC == null) {
            arrayList2.add(str3);
            synchronized (b) {
                cr crVar = b.get(strB);
                if (crVar != null) {
                    Iterator<String> it = crVar.a(true).iterator();
                    while (it.hasNext()) {
                        arrayList2.add(String.format(Locale.US, "https://%1$s/gslb/?ver=4.0", it.next()));
                    }
                }
            }
        } else {
            arrayList2 = crVarC.a(str3);
        }
        Iterator<String> it2 = arrayList2.iterator();
        IOException e = null;
        while (it2.hasNext()) {
            Uri.Builder builderBuildUpon = Uri.parse(it2.next()).buildUpon();
            for (bi biVar : arrayList3) {
                builderBuildUpon.appendQueryParameter(biVar.a(), biVar.b());
            }
            try {
                return this.f205a == null ? bj.a(f8092a, new URL(builderBuildUpon.toString())) : this.f205a.a(builderBuildUpon.toString());
            } catch (IOException e2) {
                e = e2;
            }
        }
        if (e == null) {
            return null;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("network exception: " + e.getMessage());
        throw e;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected JSONObject m208a() {
        JSONObject jSONObject;
        synchronized (this.f207a) {
            jSONObject = new JSONObject();
            jSONObject.put(PluginInfo.PI_VER, 2);
            JSONArray jSONArray = new JSONArray();
            Iterator<cs> it = this.f207a.values().iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().m203a());
            }
            jSONObject.put("data", jSONArray);
            JSONArray jSONArray2 = new JSONArray();
            Iterator<cr> it2 = b.values().iterator();
            while (it2.hasNext()) {
                jSONArray2.put(it2.next().m198a());
            }
            jSONObject.put("reserved", jSONArray2);
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m209a() {
        synchronized (this.f207a) {
            this.f207a.clear();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m210a(String str) {
        this.f209b = str;
    }

    public void a(String str, cr crVar) {
        if (TextUtils.isEmpty(str) || crVar == null) {
            throw new IllegalArgumentException("the argument is invalid " + str + ", " + crVar);
        }
        if (this.f204a.a(str)) {
            synchronized (this.f207a) {
                m211a();
                if (this.f207a.containsKey(str)) {
                    this.f207a.get(str).a(crVar);
                } else {
                    cs csVar = new cs(str);
                    csVar.a(crVar);
                    this.f207a.put(str, csVar);
                }
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected boolean m211a() {
        synchronized (this.f207a) {
            if (f202a) {
                return true;
            }
            f202a = true;
            this.f207a.clear();
            try {
                String strD = d();
                if (!TextUtils.isEmpty(strD)) {
                    m213b(strD);
                    com.xiaomi.channel.commonutils.logger.b.b("loading the new hosts succeed");
                    return true;
                }
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.m43a("load bucket failure: " + th.getMessage());
            }
            return false;
        }
    }

    public cr b(String str) {
        return a(str, true);
    }

    protected String b() {
        String strA = com.xiaomi.push.service.a.a(f8092a).a();
        return (TextUtils.isEmpty(strA) || PushChannelRegion.China.name().equals(strA)) ? "resolver.msg.xiaomi.net" : "resolver.msg.global.xiaomi.net";
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m212b() {
        ArrayList<String> arrayList;
        synchronized (this.f207a) {
            m211a();
            arrayList = new ArrayList<>(this.f207a.keySet());
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                cs csVar = this.f207a.get(arrayList.get(size));
                if (csVar != null && csVar.a() != null) {
                    arrayList.remove(size);
                }
            }
        }
        ArrayList<cr> arrayListA = a(arrayList);
        for (int i = 0; i < arrayList.size(); i++) {
            if (arrayListA.get(i) != null) {
                a(arrayList.get(i), arrayListA.get(i));
            }
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    protected void m213b(String str) {
        synchronized (this.f207a) {
            this.f207a.clear();
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.optInt(PluginInfo.PI_VER) != 2) {
                throw new JSONException("Bad version");
            }
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("data");
            if (jSONArrayOptJSONArray != null) {
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    cs csVarA = new cs().a(jSONArrayOptJSONArray.getJSONObject(i));
                    this.f207a.put(csVarA.m201a(), csVarA);
                }
            }
            JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("reserved");
            if (jSONArrayOptJSONArray2 != null) {
                for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                    JSONObject jSONObject2 = jSONArrayOptJSONArray2.getJSONObject(i2);
                    String strOptString = jSONObject2.optString("host");
                    if (!TextUtils.isEmpty(strOptString)) {
                        try {
                            cr crVarA = new cr(strOptString).a(jSONObject2);
                            b.put(crVarA.f197b, crVarA);
                            com.xiaomi.channel.commonutils.logger.b.m43a("load local reserved host for " + crVarA.f197b);
                        } catch (JSONException unused) {
                            com.xiaomi.channel.commonutils.logger.b.m43a("parse reserved host fail.");
                        }
                    }
                }
            }
        }
    }

    protected cr c(String str) {
        cs csVar;
        cr crVarA;
        synchronized (this.f207a) {
            m211a();
            csVar = this.f207a.get(str);
        }
        if (csVar == null || (crVarA = csVar.a()) == null) {
            return null;
        }
        return crVarA;
    }

    public String c() {
        StringBuilder sb = new StringBuilder();
        synchronized (this.f207a) {
            for (Map.Entry<String, cs> entry : this.f207a.entrySet()) {
                sb.append(entry.getKey());
                sb.append(":\n");
                sb.append(entry.getValue().toString());
                sb.append("\n");
            }
        }
        return sb.toString();
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public void m214c() {
        synchronized (this.f207a) {
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(f8092a.openFileOutput(e(), 0)));
                String string = m208a().toString();
                if (!TextUtils.isEmpty(string)) {
                    bufferedWriter.write(string);
                }
                bufferedWriter.close();
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.m43a("persist bucket failure: " + e.getMessage());
            }
        }
    }

    public cr d(String str) {
        cr crVar;
        synchronized (b) {
            crVar = b.get(str);
        }
        return crVar;
    }

    protected String d() {
        BufferedReader bufferedReader;
        File file;
        try {
            file = new File(f8092a.getFilesDir(), e());
        } catch (Throwable th) {
            th = th;
            bufferedReader = null;
        }
        try {
            if (!file.isFile()) {
                ab.a((Closeable) null);
                return null;
            }
            bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
            try {
                StringBuilder sb = new StringBuilder();
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        return sb.toString();
                    }
                    sb.append(line);
                }
            } catch (Throwable th2) {
                th = th2;
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("load host exception " + th.getMessage());
            return null;
        } finally {
            ab.a(bufferedReader);
        }
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public void m215d() {
        String next;
        synchronized (this.f207a) {
            Iterator<cs> it = this.f207a.values().iterator();
            while (it.hasNext()) {
                it.next().a(true);
            }
            while (true) {
                for (boolean z = false; !z; z = true) {
                    Iterator<String> it2 = this.f207a.keySet().iterator();
                    while (it2.hasNext()) {
                        next = it2.next();
                        if (this.f207a.get(next).m202a().isEmpty()) {
                            break;
                        }
                    }
                }
                this.f207a.remove(next);
            }
        }
    }

    protected cr e(String str) {
        if (System.currentTimeMillis() - this.f210c <= this.f203a * 60 * 1000) {
            return null;
        }
        this.f210c = System.currentTimeMillis();
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add(str);
        cr crVar = a(arrayList).get(0);
        if (crVar != null) {
            this.f203a = 0L;
            return crVar;
        }
        long j = this.f203a;
        if (j >= 15) {
            return null;
        }
        this.f203a = j + 1;
        return null;
    }

    protected String e() {
        if ("com.xiaomi.xmsf".equals(c)) {
            return c;
        }
        return c + ":pushservice";
    }
}
