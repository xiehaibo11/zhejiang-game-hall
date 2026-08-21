package com.kwad.sdk.api.loader;

import android.content.Context;
import android.text.TextUtils;
import dalvik.system.DexClassLoader;
import java.util.ArrayList;
import java.util.List;

final class e {
    private static final List<String> aim;

    static class a extends DexClassLoader {
        private final ClassLoader ain;

        public a(String str, String str2, String str3, ClassLoader classLoader) {
            super(str, str2, str3, classLoader);
            this.ain = classLoader;
            new StringBuilder("pcl").append(this.ain.getClass().getName());
        }

        private static boolean bV(String str) {
            return !TextUtils.isEmpty(str) && str.startsWith("com.kwad.sdk.api");
        }

        @Override
        protected final Class<?> loadClass(String str, boolean z) {
            if (bV(str)) {
                return getParent().loadClass(str);
            }
            Class<?> clsFindLoadedClass = findLoadedClass(str);
            if (clsFindLoadedClass != null) {
                return clsFindLoadedClass;
            }
            try {
                clsFindLoadedClass = findClass(str);
            } catch (ClassNotFoundException unused) {
            }
            return clsFindLoadedClass != null ? clsFindLoadedClass : super.loadClass(str, z);
        }
    }

    static {
        ArrayList arrayList = new ArrayList();
        aim = arrayList;
        arrayList.add("com.kwad.sdk");
        aim.add("com.ksad");
        aim.add("com.kwai");
        aim.add("kwad.support");
        aim.add("android.support.rastermill");
    }

    static ClassLoader a(Context context, ClassLoader classLoader, String str, String str2, String str3) {
        if (t.b(context, "useContextClassLoader", false)) {
            classLoader = context.getClassLoader();
        }
        return new a(str, str2, str3, classLoader);
    }
}
