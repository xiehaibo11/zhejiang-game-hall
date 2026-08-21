package com.mbridge.msdk.foundation.same.a;

import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONObject;

public final class b implements c<String, JSONObject> {
    private final LinkedHashMap<String, JSONObject> a;
    private final int b;
    private int c;

    @Override
    public final void a(String str) {
        String str2 = str;
        if (str2 == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            if (this.a.remove(str2) != null) {
                this.c--;
            }
        }
    }

    public b(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.b = i;
        this.a = new LinkedHashMap<>(0, 0.75f, true);
    }

    @Override
    public final JSONObject b(String str) {
        JSONObject jSONObject;
        if (str == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            jSONObject = this.a.get(str);
        }
        return jSONObject;
    }

    @Override
    public final boolean a(String str, JSONObject jSONObject) {
        if (str == null || jSONObject == null) {
            throw new NullPointerException("key == null || value == null");
        }
        synchronized (this) {
            this.c++;
            if (this.a.put(str, jSONObject) != null) {
                this.c--;
            }
        }
        a(this.b);
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x004f, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x006e, code lost:
    
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
                    Map.Entry<String, JSONObject> next = this.a.entrySet().iterator().next();
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
