package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.xiaomi.push.ao;
import java.io.File;
import java.io.IOException;
import java.util.Date;
import java.util.HashMap;
import java.util.concurrent.ConcurrentLinkedQueue;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class df {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile df f8100a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f220a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final ConcurrentLinkedQueue<b> f221a;

    class a extends b {
        a() {
            super();
        }

        @Override // com.xiaomi.push.df.b, com.xiaomi.push.ao.b
        public void b() {
            df.this.b();
        }
    }

    class b extends ao.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f8102a = System.currentTimeMillis();

        b() {
        }

        public boolean a() {
            return true;
        }

        @Override // com.xiaomi.push.ao.b
        public void b() {
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        final boolean m220b() {
            return System.currentTimeMillis() - this.f8102a > 172800000;
        }
    }

    class c extends b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f8103a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        File f223a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f224a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        boolean f225a;
        String b;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        boolean f226b;

        c(String str, String str2, File file, boolean z) {
            super();
            this.f224a = str;
            this.b = str2;
            this.f223a = file;
            this.f226b = z;
        }

        private boolean c() {
            int i;
            int i2 = 0;
            SharedPreferences sharedPreferences = df.this.f220a.getSharedPreferences("log.timestamp", 0);
            String string = sharedPreferences.getString("log.requst", "");
            long jCurrentTimeMillis = System.currentTimeMillis();
            try {
                JSONObject jSONObject = new JSONObject(string);
                jCurrentTimeMillis = jSONObject.getLong("time");
                i = jSONObject.getInt("times");
            } catch (JSONException unused) {
                i = 0;
            }
            if (System.currentTimeMillis() - jCurrentTimeMillis >= 86400000) {
                jCurrentTimeMillis = System.currentTimeMillis();
            } else {
                if (i > 10) {
                    return false;
                }
                i2 = i;
            }
            JSONObject jSONObject2 = new JSONObject();
            try {
                jSONObject2.put("time", jCurrentTimeMillis);
                jSONObject2.put("times", i2 + 1);
                sharedPreferences.edit().putString("log.requst", jSONObject2.toString()).commit();
            } catch (JSONException e) {
                com.xiaomi.channel.commonutils.logger.b.c("JSONException on put " + e.getMessage());
            }
            return true;
        }

        @Override // com.xiaomi.push.df.b
        public boolean a() {
            return bj.e(df.this.f220a) || (this.f226b && bj.b(df.this.f220a));
        }

        @Override // com.xiaomi.push.df.b, com.xiaomi.push.ao.b
        public void b() {
            try {
                if (c()) {
                    HashMap map = new HashMap();
                    map.put(IUserFeature.LOGIN_SUC_RS_UID, com.xiaomi.push.service.bv.m662a());
                    map.put("token", this.b);
                    map.put("net", bj.m149a(df.this.f220a));
                    bj.a(this.f224a, map, this.f223a, com.sigmob.sdk.base.h.x);
                }
                this.f225a = true;
            } catch (IOException unused) {
            }
        }

        @Override // com.xiaomi.push.ao.b
        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public void mo221c() {
            if (!this.f225a) {
                int i = this.f8103a + 1;
                this.f8103a = i;
                if (i < 3) {
                    df.this.f221a.add(this);
                }
            }
            if (this.f225a || this.f8103a >= 3) {
                this.f223a.delete();
            }
            df.this.a((1 << this.f8103a) * 1000);
        }
    }

    private df(Context context) {
        ConcurrentLinkedQueue<b> concurrentLinkedQueue = new ConcurrentLinkedQueue<>();
        this.f221a = concurrentLinkedQueue;
        this.f220a = context;
        concurrentLinkedQueue.add(new a());
        b(0L);
    }

    public static df a(Context context) {
        if (f8100a == null) {
            synchronized (df.class) {
                if (f8100a == null) {
                    f8100a = new df(context);
                }
            }
        }
        f8100a.f220a = context;
        return f8100a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(long j) {
        b bVarPeek = this.f221a.peek();
        if (bVarPeek == null || !bVarPeek.a()) {
            return;
        }
        b(j);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        if (ad.b() || ad.m116a()) {
            return;
        }
        try {
            File file = new File(this.f220a.getExternalFilesDir(null) + "/.logcache");
            if (file.exists() && file.isDirectory()) {
                for (File file2 : file.listFiles()) {
                    file2.delete();
                }
            }
        } catch (NullPointerException unused) {
        }
    }

    private void b(long j) {
        if (this.f221a.isEmpty()) {
            return;
        }
        gz.a(new dh(this), j);
    }

    private void c() {
        while (!this.f221a.isEmpty()) {
            b bVarPeek = this.f221a.peek();
            if (bVarPeek != null) {
                if (!bVarPeek.m220b() && this.f221a.size() <= 6) {
                    return;
                }
                com.xiaomi.channel.commonutils.logger.b.c("remove Expired task");
                this.f221a.remove(bVarPeek);
            }
        }
    }

    public void a() {
        c();
        a(0L);
    }

    public void a(String str, String str2, Date date, Date date2, int i, boolean z) {
        this.f221a.add(new dg(this, i, date, date2, str, str2, z));
        b(0L);
    }
}
