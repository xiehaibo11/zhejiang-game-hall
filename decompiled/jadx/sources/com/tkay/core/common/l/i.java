package com.tkay.core.common.l;

import android.util.Log;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.aj;
import java.lang.reflect.Constructor;

/* JADX INFO: loaded from: classes3.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static i f6245a = new i();

    public static TYBaseAdAdapter a(String str) throws NoSuchMethodException {
        if (str == null) {
            return null;
        }
        Class<? extends U> clsAsSubclass = Class.forName(str).asSubclass(TYBaseAdAdapter.class);
        if (clsAsSubclass == 0) {
            Log.w("tkay", "can not find adapter");
        }
        Constructor declaredConstructor = clsAsSubclass.getDeclaredConstructor((Class[]) null);
        declaredConstructor.setAccessible(true);
        return (TYBaseAdAdapter) declaredConstructor.newInstance(new Object[0]);
    }

    private static TYBaseAdAdapter a(Class<? extends com.tkay.core.common.b.n> cls) throws NoSuchMethodException {
        if (cls == null) {
            Log.w("tkay", "can not find adapter");
        }
        Constructor<? extends com.tkay.core.common.b.n> declaredConstructor = cls.getDeclaredConstructor((Class[]) null);
        declaredConstructor.setAccessible(true);
        return (TYBaseAdAdapter) declaredConstructor.newInstance(new Object[0]);
    }

    public static TYBaseAdAdapter a(aj ajVar) {
        try {
            return a(ajVar.h());
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }
}
