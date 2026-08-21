package com.mbridge.msdk.click.a;

import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;

public final class c implements com.mbridge.msdk.foundation.same.a.c<String, b> {
    private final LinkedHashMap<String, b> a;
    private final int b;
    private int c;

    public c(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.b = i;
        this.a = new LinkedHashMap<>(0, 0.75f, true);
    }

    @Override
    public final b b(String str) {
        if (str == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            b bVar = this.a.get(str);
            if (bVar != null) {
                return bVar;
            }
            return null;
        }
    }

    @Override
    public final boolean a(String str, b bVar) {
        if (str == null || bVar == null) {
            throw new NullPointerException("key == null || value == null");
        }
        synchronized (this) {
            this.c++;
            if (this.a.put(str, bVar) != null) {
                this.c--;
            }
        }
        a(this.b);
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x004c, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x006b, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results!");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(int i) {
        while (true) {
            synchronized (this) {
                if (this.c >= 0 && (!this.a.isEmpty() || this.c == 0)) {
                    if (this.c <= i || this.a.isEmpty()) {
                        break;
                    }
                    Map.Entry<String, b> next = this.a.entrySet().iterator().next();
                    if (next == null) {
                        return;
                    }
                    String key = next.getKey();
                    next.getValue();
                    try {
                        this.a.remove(key);
                        this.c--;
                    } catch (Throwable unused) {
                    }
                } else {
                    break;
                }
            }
        }
    }

    @Override
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            if (this.a.remove(str) != null) {
                this.c--;
            }
        }
    }

    @Override
    public final Collection<String> a() {
        HashSet hashSet;
        synchronized (this) {
            hashSet = new HashSet(this.a.keySet());
        }
        return hashSet;
    }

    @Override
    public final void b() {
        a(-1);
    }

    public final synchronized String toString() {
        return String.format("LruCache[maxSize=%d]", Integer.valueOf(this.b));
    }
}
