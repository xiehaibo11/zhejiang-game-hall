package com.tkay.core.common.res;

import com.huawei.hms.framework.common.ContainerUtils;
import java.util.LinkedHashMap;
import java.util.Map;

public class c<K, V> {
    private final LinkedHashMap<K, V> a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;

    private static V b() {
        return null;
    }

    protected int a(K k, V v) {
        return 1;
    }

    protected void a(boolean z, K k, V v, V v2) {
    }

    public c(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.c = i;
        this.a = new LinkedHashMap<>(0, 0.75f, true);
    }

    private void a(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        synchronized (this) {
            this.c = i;
        }
        b(i);
    }

    public final V a(K k) {
        if (k == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            V v = this.a.get(k);
            if (v != null) {
                this.g++;
                return v;
            }
            this.h++;
            return null;
        }
    }

    public final V b(K k, V v) {
        V vPut;
        if (k == null) {
            throw new NullPointerException("key == null || value == null");
        }
        synchronized (this) {
            this.d++;
            this.b += c(k, v);
            vPut = this.a.put(k, v);
            if (vPut != null) {
                this.b -= c(k, vPut);
            }
        }
        if (vPut != null) {
            a(false, k, vPut, v);
        }
        b(this.c);
        return vPut;
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x005c, code lost:
    
        r5.b = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x008f, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results! --> size: " + r5.b + ", map.isEmpty(): " + r5.a.isEmpty());
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(int i) {
        K key;
        V value;
        while (true) {
            synchronized (this) {
                try {
                    if (this.b < 0 || (this.a.isEmpty() && this.b != 0)) {
                        break;
                    }
                    if (this.b <= i) {
                        return;
                    }
                    Map.Entry<K, V> next = this.a.entrySet().size() > 0 ? this.a.entrySet().iterator().next() : null;
                    if (next == null) {
                        return;
                    }
                    key = next.getKey();
                    value = next.getValue();
                    this.a.remove(key);
                    this.b -= c(key, value);
                    this.f++;
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            }
            a(true, key, value, null);
        }
    }

    private V b(K k) {
        V vRemove;
        if (k == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            vRemove = this.a.remove(k);
            if (vRemove != null) {
                this.b -= c(k, vRemove);
            }
        }
        if (vRemove != null) {
            a(false, k, vRemove, null);
        }
        return vRemove;
    }

    private int c(K k, V v) {
        int iA = a(k, v);
        if (iA >= 0) {
            return iA;
        }
        throw new IllegalStateException("Negative size: " + k + ContainerUtils.KEY_VALUE_DELIMITER + v);
    }

    public final void a() {
        b(-1);
    }

    private synchronized int c() {
        return this.b;
    }

    private synchronized int d() {
        return this.c;
    }

    private synchronized int e() {
        return this.g;
    }

    private synchronized int f() {
        return this.h;
    }

    private synchronized int g() {
        return this.e;
    }

    private synchronized int h() {
        return this.d;
    }

    private synchronized int i() {
        return this.f;
    }

    private synchronized Map<K, V> j() {
        return new LinkedHashMap(this.a);
    }

    public final synchronized String toString() {
        int i;
        i = this.g + this.h;
        return String.format("LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]", Integer.valueOf(this.c), Integer.valueOf(this.g), Integer.valueOf(this.h), Integer.valueOf(i != 0 ? (this.g * 100) / i : 0));
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x0082, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results!");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void k() {
        K key;
        V value;
        synchronized (this.a) {
            while (true) {
                synchronized (this) {
                    if (this.b < 0 || (this.a.isEmpty() && this.b != 0)) {
                        break;
                    }
                    if (this.b != 0) {
                        Map.Entry<K, V> next = this.a.entrySet().size() > 0 ? this.a.entrySet().iterator().next() : null;
                        if (next != null) {
                            key = next.getKey();
                            value = next.getValue();
                            this.a.remove(key);
                            this.b -= c(key, value);
                            this.f++;
                        }
                    }
                }
                a(true, key, value, null);
            }
            this.a.clear();
        }
    }
}
