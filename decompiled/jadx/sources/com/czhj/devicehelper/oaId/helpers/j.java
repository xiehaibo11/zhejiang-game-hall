package com.czhj.devicehelper.oaId.helpers;

import android.content.Context;
import com.czhj.sdk.logger.SigmobLog;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f1737a;
    private Class b;
    private Object c;
    private Method d;
    private Method e;
    private Method f;
    private Method g;

    public j(Context context) {
        try {
            Class<?> cls = Class.forName("com.android.id.impl.IdProviderImpl");
            this.b = cls;
            this.c = cls.newInstance();
            this.f1737a = context;
            this.e = this.b.getMethod("getOAID", Context.class);
        } catch (Exception e) {
            SigmobLog.e(e.getMessage());
        }
    }

    private String a(Context context, Method method) {
        Object obj = this.c;
        if (obj != null && method != null) {
            try {
                return (String) method.invoke(obj, context);
            } catch (Exception e) {
                SigmobLog.e(e.getMessage());
            }
        }
        return null;
    }

    public String a() {
        return a(this.f1737a, this.e);
    }
}
