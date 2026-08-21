package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.push.al;
import com.xiaomi.push.cj;

public class bx {
    private static volatile bx a;
    private Context a;
    private cm a;
    private cn a;
    private String e;
    private String f;
    private final String a = "push_stat_sp";
    private final String b = "upload_time";
    private final String c = "delete_time";
    private final String d = "check_time";
    private al.a a = new by(this);
    private al.a b = new bz(this);
    private al.a c = new ca(this);

    private bx(Context context) {
        this.a = context;
    }

    public static bx a(Context context) {
        if (a == null) {
            synchronized (bx.class) {
                if (a == null) {
                    a = new bx(context);
                }
            }
        }
        return a;
    }

    private boolean a() {
        return com.xiaomi.push.service.ba.a(this.a).a(ho.bn.a(), true);
    }

    private void b(String str) {
        SharedPreferences.Editor editorEdit = this.a.getSharedPreferences("push_stat_sp", 0).edit();
        editorEdit.putLong(str, System.currentTimeMillis());
        t.a(editorEdit);
    }

    private String c() {
        return this.a.getDatabasePath(cb.a).getAbsolutePath();
    }

    public String a() {
        return this.e;
    }

    public void a(cj.a aVar) {
        cj.a(this.a).a(aVar);
    }

    public void a(hn hnVar) {
        if (a() && com.xiaomi.push.service.bz.a(hnVar.e())) {
            a(cg.a(this.a, c(), hnVar));
        }
    }

    public void a(String str) {
        if (a() && !TextUtils.isEmpty(str)) {
            a(co.a(this.a, str));
        }
    }

    public void a(String str, String str2, Boolean bool) {
        if (this.a != null) {
            if (bool.booleanValue()) {
                this.a.a(this.a, str2, str);
            } else {
                this.a.b(this.a, str2, str);
            }
        }
    }

    public String b() {
        return this.f;
    }
}
