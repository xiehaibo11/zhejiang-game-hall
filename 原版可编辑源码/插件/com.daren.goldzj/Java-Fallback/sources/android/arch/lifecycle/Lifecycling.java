package android.arch.lifecycle;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class Lifecycling {
    private static final int GENERATED_CALLBACK = 2;
    private static final int REFLECTIVE_CALLBACK = 1;
    private static Map<Class, Integer> sCallbackCache;
    private static Map<Class, List<Constructor<? extends GeneratedAdapter>>> sClassToAdapters;

    public Lifecycling() {
    }

    static {
        sCallbackCache = new HashMap();
        sClassToAdapters = new HashMap();
    }

    @NonNull
    static GenericLifecycleObserver getCallback(Object r4) {
        if ((r4 instanceof FullLifecycleObserver) == false) goto L7;
        return new FullLifecycleObserverAdapter((FullLifecycleObserver) r4);
    L7:
        if ((r4 instanceof GenericLifecycleObserver) == true) goto L9;
        Class<?> r0 = r4.getClass();
        if (getObserverConstructorType(r0) != 2) goto L23;
        List<Constructor<? extends GeneratedAdapter>> r02 = sClassToAdapters.get(r0);
        int r2 = 0;
        if (r02.size() == 1) goto L15;
        GeneratedAdapter[] r1 = new GeneratedAdapter[r02.size()];
    L18:
        if (r2 >= r02.size()) goto L21;
        r1[r2] = createGeneratedAdapter(r02.get(r2), r4);
        r2 = r2 + 1;
        goto L18
    L21:
        return new CompositeGeneratedAdaptersObserver(r1);
    L15:
        return new SingleGeneratedAdapterObserver(createGeneratedAdapter(r02.get(0), r4));
    L23:
        return new ReflectiveGenericLifecycleObserver(r4);
    L9:
        return (GenericLifecycleObserver) r4;
    }

    private static GeneratedAdapter createGeneratedAdapter(Constructor<? extends GeneratedAdapter> r2, Object r3) {
        return r2.newInstance(new Object[]{r3});
    L11:
        e = move-exception;
        throw new RuntimeException(e);
    L8:
        e = move-exception;
        throw new RuntimeException(e);
    L5:
        e = move-exception;
        throw new RuntimeException(e);
    }

    @Nullable
    private static Constructor<? extends GeneratedAdapter> generatedConstructor(Class<?> r4) {
        Package r0 = r4.getPackage();     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
        String r1 = r4.getCanonicalName();     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
        if (r0 == null) goto L5;
        String r02 = r0.getName();     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
    L7:
        if (r02.isEmpty() == true) goto L10;
        r1 = r1.substring(r02.length() + 1);     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
    L10:
        String r12 = getAdapterName(r1);     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
        if (r02.isEmpty() == true) goto L14;
        r12 = r02 + "." + r12;     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
    L14:
        Constructor r42 = Class.forName(r12).getDeclaredConstructor(new Class[]{r4});     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
        if (r42.isAccessible() == true) goto L17;
        r42.setAccessible(true);     // Catch: NoSuchMethodException -> L18 ClassNotFoundException -> L21
    L17:
        return r42;
    L5:
        r02 = "";
    L21:
        return null;
    L18:
        e = move-exception;
        throw new RuntimeException(e);
    }

    private static int getObserverConstructorType(Class<?> r3) {
        if (sCallbackCache.containsKey(r3) == true) goto L5;
        int r0 = resolveObserverCallbackType(r3);
        sCallbackCache.put(r3, Integer.valueOf(r0));
        return r0;
    L5:
        return sCallbackCache.get(r3).intValue();
    }

    private static int resolveObserverCallbackType(Class<?> r8) {
        if (r8.getCanonicalName() != null) goto L5;
        return 1;
    L5:
        Constructor<? extends GeneratedAdapter> r0 = generatedConstructor(r8);
        if (r0 == null) goto L10;
        sClassToAdapters.put(r8, Collections.singletonList(r0));
        return 2;
    L10:
        if (ClassesInfoCache.sInstance.hasLifecycleMethods(r8) == false) goto L12;
        return 1;
    L12:
        Class<? super Object> r02 = r8.getSuperclass();
        ArrayList r3 = null;
        if (isLifecycleParent(r02) == true) goto L15;
    L18:
        Class<?>[] r03 = r8.getInterfaces();
        int r4 = r03.length;
        int r5 = 0;
    L19:
        if (r5 >= r4) goto L30;
        Class<?> r6 = r03[r5];
        if (isLifecycleParent(r6) == false) goto L29;
        if (getObserverConstructorType(r6) == 1) goto L25;
        if (r3 != null) goto L28;
        r3 = new ArrayList();
    L28:
        r3.addAll(sClassToAdapters.get(r6));
        goto L29
    L25:
        return 1;
    L29:
        r5 = r5 + 1;
        goto L19
    L30:
        if (r3 == null) goto L33;
        sClassToAdapters.put(r8, r3);
        return 2;
    L33:
        return 1;
    L15:
        if (getObserverConstructorType(r02) != 1) goto L17;
        return 1;
    L17:
        r3 = new ArrayList(sClassToAdapters.get(r02));
        goto L18
    }

    private static boolean isLifecycleParent(Class<?> r1) {
        if (r1 != null) goto L4;
    L6:
        return false;
    L4:
        if (LifecycleObserver.class.isAssignableFrom(r1) == false) goto L6;
        return true;
    }

    public static String getAdapterName(String r3) {
        return r3.replace(".", "_") + "_LifecycleAdapter";
    }
}
