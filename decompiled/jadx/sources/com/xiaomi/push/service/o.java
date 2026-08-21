package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.NetworkInfo;
import android.os.Build;
import android.text.TextUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.xiaomi.push.gc;
import com.xiaomi.push.hg;
import com.xiaomi.push.hn;
import com.xiaomi.push.ho;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile o f8380a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f996a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Context f997a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final SharedPreferences f998a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private final boolean f1003b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    private final boolean f1004c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final AtomicInteger f1000a = new AtomicInteger(0);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f999a = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile boolean f1001a = false;
    private String b = null;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private final AtomicInteger f1002b = new AtomicInteger(0);
    private final AtomicInteger c = new AtomicInteger(0);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f995a = -1;

    class a {
        public static String a() {
            return "support_wifi_digest";
        }

        public static String a(String str) {
            return String.format("HB_%s", str);
        }

        public static String b() {
            return "record_support_wifi_digest_reported";
        }

        public static String b(String str) {
            return String.format("HB_dead_time_%s", str);
        }

        public static String c() {
            return "record_hb_count_start";
        }

        public static String d() {
            return "record_short_hb_count";
        }

        public static String e() {
            return "record_long_hb_count";
        }

        public static String f() {
            return "record_hb_change";
        }

        public static String g() {
            return "record_mobile_ptc";
        }

        public static String h() {
            return "record_wifi_ptc";
        }

        public static String i() {
            return "record_ptc_start";
        }

        public static String j() {
            return "keep_short_hb_effective_time";
        }
    }

    private o(Context context) {
        this.f997a = context;
        this.f1004c = com.xiaomi.push.m.m575a(context);
        this.f1003b = ba.a(this.f997a).a(ho.IntelligentHeartbeatSwitchBoolean.a(), true);
        this.f998a = this.f997a.getSharedPreferences("hb_record", 0);
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (this.f998a.getLong(a.c(), -1L) == -1) {
            this.f998a.edit().putLong(a.c(), jCurrentTimeMillis).apply();
        }
        long j = this.f998a.getLong(a.i(), -1L);
        this.f996a = j;
        if (j == -1) {
            this.f996a = jCurrentTimeMillis;
            this.f998a.edit().putLong(a.i(), jCurrentTimeMillis).apply();
        }
    }

    private int a() {
        if (TextUtils.isEmpty(this.f999a)) {
            return -1;
        }
        try {
            return this.f998a.getInt(a.a(this.f999a), -1);
        } catch (Throwable unused) {
            return -1;
        }
    }

    public static o a(Context context) {
        if (f8380a == null) {
            synchronized (o.class) {
                if (f8380a == null) {
                    f8380a = new o(context);
                }
            }
        }
        return f8380a;
    }

    private void a(String str, String str2, Map<String, String> map) {
        hn hnVar = new hn();
        hnVar.d(str);
        hnVar.c("hb_name");
        hnVar.a("hb_channel");
        hnVar.a(1L);
        hnVar.b(str2);
        hnVar.a(false);
        hnVar.b(System.currentTimeMillis());
        hnVar.g(this.f997a.getPackageName());
        hnVar.e("com.xiaomi.xmsf");
        if (map == null) {
            map = new HashMap<>();
        }
        String str3 = null;
        t tVarM694a = u.m694a(this.f997a);
        if (tVarM694a != null && !TextUtils.isEmpty(tVarM694a.f1018a)) {
            String[] strArrSplit = tVarM694a.f1018a.split("@");
            if (strArrSplit.length > 0) {
                str3 = strArrSplit[0];
            }
        }
        map.put("uuid", str3);
        map.put("model", Build.MODEL);
        Context context = this.f997a;
        map.put("avc", String.valueOf(com.xiaomi.push.h.a(context, context.getPackageName())));
        map.put("pvc", String.valueOf(40090));
        map.put("cvc", String.valueOf(48));
        hnVar.a(map);
        hg hgVarA = hg.a(this.f997a);
        if (hgVarA != null) {
            hgVarA.a(hnVar, this.f997a.getPackageName());
        }
    }

    private void a(boolean z) {
        if (m674c()) {
            int iIncrementAndGet = (z ? this.f1002b : this.c).incrementAndGet();
            Object[] objArr = new Object[2];
            objArr[0] = z ? "short" : "long";
            objArr[1] = Integer.valueOf(iIncrementAndGet);
            com.xiaomi.channel.commonutils.logger.b.b(String.format("[HB] %s ping interval count: %s", objArr));
            if (iIncrementAndGet >= 5) {
                String strD = z ? a.d() : a.e();
                int i = this.f998a.getInt(strD, 0) + iIncrementAndGet;
                this.f998a.edit().putInt(strD, i).apply();
                Object[] objArr2 = new Object[2];
                objArr2[0] = z ? "short" : "long";
                objArr2[1] = Integer.valueOf(i);
                com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[HB] accumulate %s hb count(%s) and write to file. ", objArr2));
                (z ? this.f1002b : this.c).set(0);
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private boolean m672a() {
        return this.f1000a.get() >= Math.max(ba.a(this.f997a).a(ho.IntelligentHeartbeatNATCountInt.a(), 5), 3);
    }

    private boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return str.startsWith("W-") || str.startsWith("M-");
    }

    private long b() {
        return this.f998a.getLong(a.j(), -1L);
    }

    private void b(String str) {
        SharedPreferences.Editor editorRemove;
        if ("WIFI-ID-UNKNOWN".equals(str)) {
            String str2 = this.f999a;
            if (str2 == null || !str2.startsWith("W-")) {
                str = null;
                this.f999a = str;
            }
        } else {
            this.f999a = str;
        }
        int i = this.f998a.getInt(a.a(this.f999a), -1);
        long j = this.f998a.getLong(a.b(this.f999a), -1L);
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (i != -1) {
            if (j == -1) {
                editorRemove = this.f998a.edit().putLong(a.b(this.f999a), jCurrentTimeMillis + c());
            } else if (jCurrentTimeMillis > j) {
                editorRemove = this.f998a.edit().remove(a.a(this.f999a)).remove(a.b(this.f999a));
            }
            editorRemove.apply();
        }
        this.f1000a.getAndSet(0);
        if (TextUtils.isEmpty(this.f999a) || a() != -1) {
            this.f1001a = false;
        } else {
            this.f1001a = true;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[HB] network changed, netid:%s, %s", this.f999a, Boolean.valueOf(this.f1001a)));
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    private boolean m673b() {
        return (TextUtils.isEmpty(this.f999a) || !this.f999a.startsWith("M-") || ba.a(this.f997a).a(ho.IntelligentHeartbeatUseInMobileNetworkBoolean.a(), false)) ? false : true;
    }

    private long c() {
        return ba.a(this.f997a).a(ho.ShortHeartbeatEffectivePeriodMsLong.a(), 777600000L);
    }

    private void c(String str) {
        if (a(str)) {
            this.f998a.edit().putInt(a.a(str), 235000).apply();
            this.f998a.edit().putLong(a.b(this.f999a), System.currentTimeMillis() + c()).apply();
        }
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    private boolean m674c() {
        return d() && ba.a(this.f997a).a(ho.IntelligentHeartbeatDataCollectSwitchBoolean.a(), true) && com.xiaomi.push.q.China.name().equals(com.xiaomi.push.service.a.a(this.f997a).a());
    }

    private void d(String str) {
        String str2;
        String string;
        if (m674c() && !TextUtils.isEmpty(str)) {
            if (str.startsWith("W-")) {
                str2 = "W";
            } else if (!str.startsWith("M-")) {
                return;
            } else {
                str2 = "M";
            }
            String strValueOf = String.valueOf(235000);
            String strValueOf2 = String.valueOf(System.currentTimeMillis() / 1000);
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(":::");
            sb.append(str2);
            sb.append(":::");
            sb.append(strValueOf);
            sb.append(":::");
            sb.append(strValueOf2);
            String string2 = this.f998a.getString(a.f(), null);
            if (TextUtils.isEmpty(string2)) {
                string = sb.toString();
            } else {
                string = string2 + "###" + sb.toString();
            }
            this.f998a.edit().putString(a.f(), string).apply();
        }
    }

    private boolean d() {
        return this.f1004c && (this.f1003b || ((b() > System.currentTimeMillis() ? 1 : (b() == System.currentTimeMillis() ? 0 : -1)) >= 0));
    }

    private void e() {
        if (this.f998a.getBoolean(a.a(), false)) {
            return;
        }
        this.f998a.edit().putBoolean(a.a(), true).apply();
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    private boolean m675e() {
        long j = this.f998a.getLong(a.c(), -1L);
        if (j == -1) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        return j > jCurrentTimeMillis || jCurrentTimeMillis - j >= 259200000;
    }

    private void f() {
        int i = this.f995a;
        String strH = i != 0 ? i != 1 ? null : a.h() : a.g();
        if (TextUtils.isEmpty(strH)) {
            return;
        }
        if (this.f998a.getLong(a.i(), -1L) == -1) {
            this.f996a = System.currentTimeMillis();
            this.f998a.edit().putLong(a.i(), this.f996a).apply();
        }
        this.f998a.edit().putInt(strH, this.f998a.getInt(strH, 0) + 1).apply();
    }

    /* JADX INFO: renamed from: f, reason: collision with other method in class */
    private boolean m676f() {
        if (this.f996a == -1) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = this.f996a;
        return j > jCurrentTimeMillis || jCurrentTimeMillis - j >= 259200000;
    }

    private void g() {
        int i;
        String[] strArrSplit;
        String[] strArrSplit2;
        if (m674c()) {
            String string = this.f998a.getString(a.f(), null);
            char c = 1;
            char c2 = 0;
            if (!TextUtils.isEmpty(string) && (strArrSplit = string.split("###")) != null) {
                int i2 = 0;
                while (i2 < strArrSplit.length) {
                    if (!TextUtils.isEmpty(strArrSplit[i2]) && (strArrSplit2 = strArrSplit[i2].split(":::")) != null && strArrSplit2.length >= 4) {
                        String str = strArrSplit2[c2];
                        String str2 = strArrSplit2[c];
                        String str3 = strArrSplit2[2];
                        String str4 = strArrSplit2[3];
                        HashMap map = new HashMap();
                        map.put("event", "change");
                        map.put("model", Build.MODEL);
                        map.put(HiAnalyticsConstant.BI_KEY_NET_TYPE, str2);
                        map.put("net_name", str);
                        map.put("interval", str3);
                        map.put("timestamp", str4);
                        a("category_hb_change", null, map);
                        com.xiaomi.channel.commonutils.logger.b.m43a("[HB] report hb changed events.");
                    }
                    i2++;
                    c = 1;
                    c2 = 0;
                }
                this.f998a.edit().remove(a.f()).apply();
            }
            if (this.f998a.getBoolean(a.a(), false) && !this.f998a.getBoolean(a.b(), false)) {
                HashMap map2 = new HashMap();
                map2.put("event", "support");
                map2.put("model", Build.MODEL);
                map2.put("timestamp", String.valueOf(System.currentTimeMillis() / 1000));
                a("category_hb_change", null, map2);
                com.xiaomi.channel.commonutils.logger.b.m43a("[HB] report support wifi digest events.");
                this.f998a.edit().putBoolean(a.b(), true).apply();
            }
            if (m675e()) {
                int i3 = this.f998a.getInt(a.d(), 0);
                int i4 = this.f998a.getInt(a.e(), 0);
                if (i3 > 0 || i4 > 0) {
                    long j = this.f998a.getLong(a.c(), -1L);
                    String strValueOf = String.valueOf(235000);
                    String strValueOf2 = String.valueOf(j);
                    String strValueOf3 = String.valueOf(System.currentTimeMillis());
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("interval", strValueOf);
                        jSONObject.put("c_short", String.valueOf(i3));
                        jSONObject.put("c_long", String.valueOf(i4));
                        jSONObject.put("count", String.valueOf(i3 + i4));
                        jSONObject.put(com.tkay.core.common.b.d.f6043a, strValueOf2);
                        jSONObject.put(com.tkay.core.common.b.d.b, strValueOf3);
                        String string2 = jSONObject.toString();
                        HashMap map3 = new HashMap();
                        map3.put("event", "long_and_short_hb_count");
                        a("category_hb_count", string2, map3);
                        com.xiaomi.channel.commonutils.logger.b.m43a("[HB] report short/long hb count events.");
                    } catch (Throwable unused) {
                    }
                }
                this.f998a.edit().putInt(a.d(), 0).putInt(a.e(), 0).putLong(a.c(), System.currentTimeMillis()).apply();
            }
            if (m676f()) {
                String strValueOf4 = String.valueOf(this.f996a);
                String strValueOf5 = String.valueOf(System.currentTimeMillis());
                int i5 = this.f998a.getInt(a.g(), 0);
                if (i5 > 0) {
                    try {
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put(HiAnalyticsConstant.BI_KEY_NET_TYPE, "M");
                        jSONObject2.put("ptc", i5);
                        jSONObject2.put(com.tkay.core.common.b.d.f6043a, strValueOf4);
                        jSONObject2.put(com.tkay.core.common.b.d.b, strValueOf5);
                        String string3 = jSONObject2.toString();
                        HashMap map4 = new HashMap();
                        map4.put("event", "ptc_event");
                        a("category_lc_ptc", string3, map4);
                        com.xiaomi.channel.commonutils.logger.b.m43a("[HB] report ping timeout count events of mobile network.");
                        this.f998a.edit().putInt(a.g(), 0).apply();
                        i = 0;
                    } catch (Throwable unused2) {
                        i = 0;
                        this.f998a.edit().putInt(a.g(), 0).apply();
                    }
                } else {
                    i = 0;
                }
                int i6 = this.f998a.getInt(a.h(), i);
                if (i6 > 0) {
                    try {
                        JSONObject jSONObject3 = new JSONObject();
                        jSONObject3.put(HiAnalyticsConstant.BI_KEY_NET_TYPE, "W");
                        jSONObject3.put("ptc", i6);
                        jSONObject3.put(com.tkay.core.common.b.d.f6043a, strValueOf4);
                        jSONObject3.put(com.tkay.core.common.b.d.b, strValueOf5);
                        String string4 = jSONObject3.toString();
                        HashMap map5 = new HashMap();
                        map5.put("event", "ptc_event");
                        a("category_lc_ptc", string4, map5);
                        com.xiaomi.channel.commonutils.logger.b.m43a("[HB] report ping timeout count events of wifi network.");
                    } catch (Throwable unused3) {
                    }
                    this.f998a.edit().putInt(a.h(), 0).apply();
                }
                this.f996a = System.currentTimeMillis();
                this.f998a.edit().putLong(a.i(), this.f996a).apply();
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public long m677a() {
        int iA;
        long jB = gc.b();
        if (this.f1004c && !m673b() && ((ba.a(this.f997a).a(ho.IntelligentHeartbeatSwitchBoolean.a(), true) || b() >= System.currentTimeMillis()) && (iA = a()) != -1)) {
            jB = iA;
        }
        if (!TextUtils.isEmpty(this.f999a) && !"WIFI-ID-UNKNOWN".equals(this.f999a) && this.f995a == 1) {
            a(jB < 300000);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("[HB] ping interval:" + jB);
        return jB;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m678a() {
    }

    public void a(int i) {
        this.f998a.edit().putLong(a.j(), System.currentTimeMillis() + ((long) (i * 1000))).apply();
    }

    public synchronized void a(NetworkInfo networkInfo) {
        if (d()) {
            String str = null;
            if (networkInfo == null) {
                b(null);
            } else if (networkInfo.getType() == 0) {
                String subtypeName = networkInfo.getSubtypeName();
                if (!TextUtils.isEmpty(subtypeName) && !"UNKNOWN".equalsIgnoreCase(subtypeName)) {
                    str = "M-" + subtypeName;
                }
                b(str);
                this.f995a = 0;
            } else {
                if (networkInfo.getType() != 1 && networkInfo.getType() != 6) {
                    b(null);
                }
                b("WIFI-ID-UNKNOWN");
                this.f995a = 1;
            }
            this.f995a = -1;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m679a(String str) {
        if (!TextUtils.isEmpty(str)) {
            e();
        }
        if (d() && !TextUtils.isEmpty(str)) {
            b("W-" + str);
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m680b() {
        if (d()) {
            f();
            if (this.f1001a && !TextUtils.isEmpty(this.f999a) && this.f999a.equals(this.b)) {
                this.f1000a.getAndIncrement();
                com.xiaomi.channel.commonutils.logger.b.m43a("[HB] ping timeout count:" + this.f1000a);
                if (m672a()) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("[HB] change hb interval for net:" + this.f999a);
                    c(this.f999a);
                    this.f1001a = false;
                    this.f1000a.getAndSet(0);
                    d(this.f999a);
                }
            }
        }
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public void m681c() {
        if (d()) {
            this.b = this.f999a;
        }
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public void m682d() {
        if (d()) {
            g();
            if (this.f1001a) {
                this.f1000a.getAndSet(0);
            }
        }
    }
}
