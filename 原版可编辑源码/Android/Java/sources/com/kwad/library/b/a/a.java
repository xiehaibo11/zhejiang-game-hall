package com.kwad.library.b.a;

import android.app.Activity;
import dalvik.system.BaseDexClassLoader;
import dalvik.system.PathClassLoader;
import java.io.InputStream;
import java.net.URL;
import java.util.Enumeration;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class a extends PathClassLoader {
    private static final List<ClassLoader> afa = new CopyOnWriteArrayList();
    private final BaseDexClassLoader aeZ;

    public a(BaseDexClassLoader baseDexClassLoader) {
        super("", baseDexClassLoader);
        this.aeZ = baseDexClassLoader;
    }

    @Override
    protected final Class<?> findClass(String str) throws ClassNotFoundException {
        Class<?> clsLoadClass;
        Class<?> clsLoadClass2;
        Class<?> cls = null;
        try {
            clsLoadClass2 = this.aeZ.loadClass(str);
        } catch (Throwable th) {
            th = th;
        }
        if (Activity.class.isAssignableFrom(clsLoadClass2)) {
            return clsLoadClass2;
        }
        th = null;
        cls = clsLoadClass2;
        if (cls != null) {
            return cls;
        }
        Iterator<ClassLoader> it = afa.iterator();
        while (it.hasNext()) {
            try {
                clsLoadClass = it.next().loadClass(str);
            } catch (Throwable unused) {
            }
            if (clsLoadClass != null) {
                return clsLoadClass;
            }
        }
        if (th instanceof ClassNotFoundException) {
            throw th;
        }
        throw new ClassNotFoundException(str, th);
    }

    @Override
    public final String findLibrary(String str) {
        return this.aeZ.findLibrary(str);
    }

    @Override
    public final URL getResource(String str) {
        return this.aeZ.getResource(str);
    }

    @Override
    public final InputStream getResourceAsStream(String str) {
        return this.aeZ.getResourceAsStream(str);
    }

    @Override
    public final Enumeration<URL> getResources(String str) {
        return this.aeZ.getResources(str);
    }

    @Override
    public final Class<?> loadClass(String str) {
        return findClass(str);
    }

    @Override
    public final String toString() {
        return this.aeZ.toString();
    }
}
