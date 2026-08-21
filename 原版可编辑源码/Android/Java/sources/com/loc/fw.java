package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.amap.api.location.AMapLocation;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.UnsupportedEncodingException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONObject;

public final class fw {
    private static fw f;
    private static long i;
    private File d;
    private String e;
    private Context g;
    private boolean h;
    private LinkedHashMap<String, Long> c = new LinkedHashMap<>();
    String a = "";
    String b = null;

    private fw(Context context) {
        this.e = null;
        Context applicationContext = context.getApplicationContext();
        this.g = applicationContext;
        String path = applicationContext.getFilesDir().getPath();
        if (this.e == null) {
            this.e = fz.l(this.g);
        }
        try {
            this.d = new File(path, "reportRecorder");
        } catch (Throwable th) {
            ej.a(th);
        }
        c();
    }

    public static synchronized fw a(Context context) {
        if (f == null) {
            f = new fw(context);
        }
        return f;
    }

    private boolean b(Context context) {
        if (this.b == null) {
            this.b = fy.a(context, "pref", "lastavedate", "0");
        }
        if (this.b.equals(this.a)) {
            return false;
        }
        SharedPreferences.Editor editorA = fy.a(context, "pref");
        fy.a(editorA, "lastavedate", this.a);
        fy.a(editorA);
        this.b = this.a;
        return true;
    }

    private synchronized void c() {
        if (this.c == null || this.c.size() <= 0) {
            try {
                this.a = new SimpleDateFormat("yyyyMMdd").format(new Date(System.currentTimeMillis()));
                Iterator<String> it = fz.a(this.d).iterator();
                while (it.hasNext()) {
                    try {
                        try {
                            String[] strArrSplit = new String(fg.b(p.b(it.next()), this.e), "UTF-8").split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                            if (strArrSplit != null && strArrSplit.length > 1) {
                                this.c.put(strArrSplit[0], Long.valueOf(Long.parseLong(strArrSplit[1])));
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    } catch (UnsupportedEncodingException e) {
                        e.printStackTrace();
                    }
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
        }
    }

    private void d() {
        try {
            StringBuilder sb = new StringBuilder();
            for (Map.Entry<String, Long> entry : this.c.entrySet()) {
                try {
                    sb.append(p.b(fg.a((entry.getKey() + Constants.ACCEPT_TIME_SEPARATOR_SP + entry.getValue()).getBytes("UTF-8"), this.e)) + "\n");
                } catch (UnsupportedEncodingException e) {
                    e.printStackTrace();
                }
            }
            String string = sb.toString();
            if (TextUtils.isEmpty(string)) {
                return;
            }
            fz.a(this.d, string);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public final synchronized void a() {
        if (this.h) {
            d();
            this.h = false;
        }
    }

    public final synchronized void a(AMapLocation aMapLocation) {
        try {
            if ((!this.c.containsKey(this.a) && this.c.size() >= 8) || (this.c.containsKey(this.a) && this.c.size() >= 9)) {
                ArrayList arrayList = new ArrayList();
                Iterator<Map.Entry<String, Long>> it = this.c.entrySet().iterator();
                while (it.hasNext()) {
                    try {
                        arrayList.add(it.next().getKey());
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    if (arrayList.size() == this.c.size() - 7) {
                        break;
                    }
                }
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    this.c.remove((String) it2.next());
                }
            }
            if (aMapLocation.getErrorCode() != 0) {
                return;
            }
            if (aMapLocation.getLocationType() != 6 && aMapLocation.getLocationType() != 5) {
                if (this.c.containsKey(this.a)) {
                    long jLongValue = this.c.get(this.a).longValue() + 1;
                    i = jLongValue;
                    this.c.put(this.a, Long.valueOf(jLongValue));
                } else {
                    this.c.put(this.a, 1L);
                    i = 1L;
                }
                if (i != 0 && i % 100 == 0) {
                    a();
                }
                this.h = true;
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }

    public final synchronized void b() {
        try {
            if (b(this.g)) {
                for (Map.Entry<String, Long> entry : this.c.entrySet()) {
                    try {
                        if (!this.a.equals(entry.getKey())) {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("param_long_first", entry.getKey());
                            jSONObject.put("param_long_second", entry.getValue());
                            fx.a(this.g, "O023", jSONObject);
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            }
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
    }
}
