package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.push.al;
import com.xiaomi.push.cj;

/* JADX INFO: loaded from: classes4.dex */
public class bx {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile bx f8069a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f163a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private cm f165a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private cn f166a;
    private String e;
    private String f;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final String f167a = "push_stat_sp";

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private final String f168b = "upload_time";

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    private final String f169c = "delete_time";
    private final String d = "check_time";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private al.a f164a = new by(this);
    private al.a b = new bz(this);
    private al.a c = new ca(this);

    private bx(Context context) {
        this.f163a = context;
    }

    public static bx a(Context context) {
        if (f8069a == null) {
            synchronized (bx.class) {
                if (f8069a == null) {
                    f8069a = new bx(context);
                }
            }
        }
        return f8069a;
    }

    private boolean a() {
        return com.xiaomi.push.service.ba.a(this.f163a).a(ho.StatDataSwitch.a(), true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        SharedPreferences.Editor editorEdit = this.f163a.getSharedPreferences("push_stat_sp", 0).edit();
        editorEdit.putLong(str, System.currentTimeMillis());
        t.a(editorEdit);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String c() {
        return this.f163a.getDatabasePath(cb.f173a).getAbsolutePath();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m170a() {
        return this.e;
    }

    public void a(cj.a aVar) {
        cj.a(this.f163a).a(aVar);
    }

    public void a(hn hnVar) {
        if (a() && com.xiaomi.push.service.bz.a(hnVar.e())) {
            a(cg.a(this.f163a, c(), hnVar));
        }
    }

    public void a(String str) {
        if (a() && !TextUtils.isEmpty(str)) {
            a(co.a(this.f163a, str));
        }
    }

    public void a(String str, String str2, Boolean bool) {
        if (this.f165a != null) {
            if (bool.booleanValue()) {
                this.f165a.a(this.f163a, str2, str);
            } else {
                this.f165a.b(this.f163a, str2, str);
            }
        }
    }

    public String b() {
        return this.f;
    }
}
