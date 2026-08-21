package com.kwad.library.b.a;

import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import dalvik.system.BaseDexClassLoader;
import java.io.File;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends BaseDexClassLoader {
    private final List<String> afb;
    private final List<String> afc;
    private final ClassLoader afd;

    public b(ClassLoader classLoader, String str, File file, String str2, List<String> list, List<String> list2) {
        super(str, file, str2, classLoader);
        this.afd = classLoader;
        this.afb = list;
        this.afc = list2;
        while (classLoader.getParent() != null) {
            classLoader = classLoader.getParent();
        }
        Log.i("PluginClassLoader", "mParent is " + classLoader.getClass().getName());
    }

    @Override // dalvik.system.BaseDexClassLoader, java.lang.ClassLoader
    public final String findLibrary(String str) {
        String strFindLibrary = super.findLibrary(str);
        if (!TextUtils.isEmpty(strFindLibrary) || !(this.afd instanceof BaseDexClassLoader)) {
            return strFindLibrary;
        }
        StringBuilder sb = new StringBuilder("load so ");
        sb.append(str);
        sb.append(" from parent");
        return ((BaseDexClassLoader) this.afd).findLibrary(str);
    }

    @Override // java.lang.ClassLoader
    protected final Class<?> loadClass(String str, boolean z) throws ClassNotFoundException {
        List<String> list = this.afb;
        if (list != null && list.contains(str)) {
            Log.i("PluginClassLoader", "loadClass " + str + " from host by interface");
            return super.loadClass(str, z);
        }
        List<String> list2 = this.afc;
        if (list2 != null) {
            Iterator<String> it = list2.iterator();
            while (it.hasNext()) {
                if (str.startsWith(it.next() + ".")) {
                    return super.loadClass(str, z);
                }
            }
        }
        Class<?> clsFindLoadedClass = findLoadedClass(str);
        if (clsFindLoadedClass != null) {
            return clsFindLoadedClass;
        }
        try {
            return findClass(str);
        } catch (ClassNotFoundException e) {
            try {
                return getParent().loadClass(str);
            } catch (ClassNotFoundException e2) {
                if (Build.VERSION.SDK_INT >= 19) {
                    e2.addSuppressed(e);
                }
                throw e2;
            }
        }
    }
}
