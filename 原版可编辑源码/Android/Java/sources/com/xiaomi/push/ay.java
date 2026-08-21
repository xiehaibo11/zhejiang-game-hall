package com.xiaomi.push;

import android.content.Context;
import java.lang.reflect.Method;

class ay implements au {
    private Context a;
    private Class<?> a;
    private Object a;
    private Method a = null;
    private Method b = null;
    private Method c = null;
    private Method d = null;

    public ay(Context context) {
        this.a = context;
        a(context);
    }

    private String a(Context context, Method method) {
        Object obj = this.a;
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
            this.a = clsA;
            this.a = clsA.newInstance();
            this.a = this.a.getMethod("getUDID", Context.class);
            this.b = this.a.getMethod("getOAID", Context.class);
            this.c = this.a.getMethod("getVAID", Context.class);
            this.d = this.a.getMethod("getAAID", Context.class);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("miui load class error", e);
        }
    }

    @Override
    public String a() {
        return a(this.a, this.b);
    }

    @Override
    public boolean a() {
        return (this.a == null || this.a == null) ? false : true;
    }
}
