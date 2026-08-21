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

public class df {
    private static volatile df a;
    private Context a;
    private final ConcurrentLinkedQueue<b> a;

    class a extends b {
        a() {
            super();
        }

        @Override
        public void b() {
            df.this.b();
        }
    }

    class b extends ao.b {
        long a = System.currentTimeMillis();

        b() {
        }

        public boolean a() {
            return true;
        }

        @Override
        public void b() {
        }

        final boolean b() {
            return System.currentTimeMillis() - this.a > 172800000;
        }
    }

    class c extends b {
        int a;
        File a;
        String a;
        boolean a;
        String b;
        boolean b;

        c(String str, String str2, File file, boolean z) {
            super();
            this.a = str;
            this.b = str2;
            this.a = file;
            this.b = z;
        }

        private boolean c() {
            int i;
            int i2 = 0;
            SharedPreferences sharedPreferences = df.this.a.getSharedPreferences("log.timestamp", 0);
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

        @Override
        public boolean a() {
            return bj.e(df.this.a) || (this.b && bj.b(df.this.a));
        }

        @Override
        public void b() {
            try {
                if (c()) {
                    HashMap map = new HashMap();
                    map.put(IUserFeature.LOGIN_SUC_RS_UID, com.xiaomi.push.service.bv.a());
                    map.put("token", this.b);
                    map.put("net", bj.a(df.this.a));
                    bj.a(this.a, map, this.a, com.sigmob.sdk.base.h.x);
                }
                this.a = true;
            } catch (IOException unused) {
            }
        }

        @Override
        public void c() {
            if (!this.a) {
                int i = this.a + 1;
                this.a = i;
                if (i < 3) {
                    df.this.a.add(this);
                }
            }
            if (this.a || this.a >= 3) {
                this.a.delete();
            }
            df.this.a((1 << this.a) * 1000);
        }
    }

    private df(Context context) {
        ConcurrentLinkedQueue<b> concurrentLinkedQueue = new ConcurrentLinkedQueue<>();
        this.a = concurrentLinkedQueue;
        this.a = context;
        concurrentLinkedQueue.add(new a());
        b(0L);
    }

    public static df a(Context context) {
        if (a == null) {
            synchronized (df.class) {
                if (a == null) {
                    a = new df(context);
                }
            }
        }
        a.a = context;
        return a;
    }

    private void a(long j) {
        b bVarPeek = this.a.peek();
        if (bVarPeek == null || !bVarPeek.a()) {
            return;
        }
        b(j);
    }

    private void b() {
        if (ad.b() || ad.a()) {
            return;
        }
        try {
            File file = new File(this.a.getExternalFilesDir(null) + "/.logcache");
            if (file.exists() && file.isDirectory()) {
                for (File file2 : file.listFiles()) {
                    file2.delete();
                }
            }
        } catch (NullPointerException unused) {
        }
    }

    private void b(long j) {
        if (this.a.isEmpty()) {
            return;
        }
        gz.a(new dh(this), j);
    }

    private void c() {
        while (!this.a.isEmpty()) {
            b bVarPeek = this.a.peek();
            if (bVarPeek != null) {
                if (!bVarPeek.b() && this.a.size() <= 6) {
                    return;
                }
                com.xiaomi.channel.commonutils.logger.b.c("remove Expired task");
                this.a.remove(bVarPeek);
            }
        }
    }

    public void a() {
        c();
        a(0L);
    }

    public void a(String str, String str2, Date date, Date date2, int i, boolean z) {
        this.a.add(new dg(this, i, date, date2, str, str2, z));
        b(0L);
    }
}
