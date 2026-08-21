package com.xiaomi.push;

import android.content.Context;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes4.dex */
class ay implements au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8046a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Class<?> f137a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Object f138a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Method f139a = null;
    private Method b = null;
    private Method c = null;
    private Method d = null;

    public ay(Context context) {
        this.f8046a = context;
        a(context);
    }

    private String a(Context context, Method method) {
        Object obj = this.f138a;
        if (obj == null || method == null) {
            return null;
        }
        try {
            Object objInvoke = method.invoke(obj, context);
            if (objInvoke != null) {
                return (String) objInvoke;
            }
            return null;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("miui invoke error", e);
            return null;
        }
    }

    private void a(Context context) {
        try {
            Class<?> clsA = v.a(context, "com.android.id.impl.IdProviderImpl");
            this.f137a = clsA;
            this.f138a = clsA.newInstance();
            this.f139a = this.f137a.getMethod("getUDID", Context.class);
            this.b = this.f137a.getMethod("getOAID", Context.class);
            this.c = this.f137a.getMethod("getVAID", Context.class);
            this.d = this.f137a.getMethod("getAAID", Context.class);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("miui load class error", e);
        }
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public String mo126a() {
        return a(this.f8046a, this.b);
    }

    @Override // com.xiaomi.push.au
    /* JADX INFO: renamed from: a */
    public boolean mo127a() {
        return (this.f137a == null || this.f138a == null) ? false : true;
    }
}
