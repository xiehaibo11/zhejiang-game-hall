package com.meizu.cloud.pushsdk.b.b;

import com.meizu.cloud.pushinternal.DebugLogger;
import java.lang.reflect.Constructor;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final a f4492a;
    private final Class<?>[] b;

    b(a aVar, Class<?>... clsArr) {
        this.f4492a = aVar;
        this.b = clsArr;
    }

    public <T> d<T> a(Object... objArr) {
        d<T> dVar = new d<>();
        try {
            Constructor<?> declaredConstructor = this.f4492a.a().getDeclaredConstructor(this.b);
            declaredConstructor.setAccessible(true);
            dVar.b = (T) declaredConstructor.newInstance(objArr);
            dVar.f4494a = true;
        } catch (Exception e) {
            DebugLogger.e("ReflectConstructor", "newInstance", e);
        }
        return dVar;
    }
}
