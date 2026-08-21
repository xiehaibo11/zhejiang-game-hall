package com.qihoo360.replugin.utils.basic;

import com.alipay.sdk.m.n.a;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SimpleArrayMap<K, V> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean DEBUG = false;
    private static final String TAG = "ArrayMap";
    static Object[] mBaseCache;
    static int mBaseCacheSize;
    static Object[] mTwiceBaseCache;
    static int mTwiceBaseCacheSize;
    Object[] mArray;
    int[] mHashes;
    int mSize;

    int indexOf(Object obj, int i) {
        int i2 = this.mSize;
        if (i2 == 0) {
            return -1;
        }
        int iBinarySearch = ContainerHelpers.binarySearch(this.mHashes, i2, i);
        if (iBinarySearch < 0 || obj.equals(this.mArray[iBinarySearch << 1])) {
            return iBinarySearch;
        }
        int i3 = iBinarySearch + 1;
        while (i3 < i2 && this.mHashes[i3] == i) {
            if (obj.equals(this.mArray[i3 << 1])) {
                return i3;
            }
            i3++;
        }
        for (int i4 = iBinarySearch - 1; i4 >= 0 && this.mHashes[i4] == i; i4--) {
            if (obj.equals(this.mArray[i4 << 1])) {
                return i4;
            }
        }
        return ~i3;
    }

    int indexOfNull() {
        int i = this.mSize;
        if (i == 0) {
            return -1;
        }
        int iBinarySearch = ContainerHelpers.binarySearch(this.mHashes, i, 0);
        if (iBinarySearch < 0 || this.mArray[iBinarySearch << 1] == null) {
            return iBinarySearch;
        }
        int i2 = iBinarySearch + 1;
        while (i2 < i && this.mHashes[i2] == 0) {
            if (this.mArray[i2 << 1] == null) {
                return i2;
            }
            i2++;
        }
        for (int i3 = iBinarySearch - 1; i3 >= 0 && this.mHashes[i3] == 0; i3--) {
            if (this.mArray[i3 << 1] == null) {
                return i3;
            }
        }
        return ~i2;
    }

    private void allocArrays(int i) {
        if (i == 8) {
            synchronized (ArrayMap.class) {
                if (mTwiceBaseCache != null) {
                    Object[] objArr = mTwiceBaseCache;
                    this.mArray = objArr;
                    mTwiceBaseCache = (Object[]) objArr[0];
                    this.mHashes = (int[]) objArr[1];
                    objArr[1] = null;
                    objArr[0] = null;
                    mTwiceBaseCacheSize--;
                    return;
                }
            }
        } else if (i == 4) {
            synchronized (ArrayMap.class) {
                if (mBaseCache != null) {
                    Object[] objArr2 = mBaseCache;
                    this.mArray = objArr2;
                    mBaseCache = (Object[]) objArr2[0];
                    this.mHashes = (int[]) objArr2[1];
                    objArr2[1] = null;
                    objArr2[0] = null;
                    mBaseCacheSize--;
                    return;
                }
            }
        }
        this.mHashes = new int[i];
        this.mArray = new Object[i << 1];
    }

    private static void freeArrays(int[] iArr, Object[] objArr, int i) {
        if (iArr.length == 8) {
            synchronized (ArrayMap.class) {
                if (mTwiceBaseCacheSize < 10) {
                    objArr[0] = mTwiceBaseCache;
                    objArr[1] = iArr;
                    for (int i2 = (i << 1) - 1; i2 >= 2; i2--) {
                        objArr[i2] = null;
                    }
                    mTwiceBaseCache = objArr;
                    mTwiceBaseCacheSize++;
                }
            }
            return;
        }
        if (iArr.length == 4) {
            synchronized (ArrayMap.class) {
                if (mBaseCacheSize < 10) {
                    objArr[0] = mBaseCache;
                    objArr[1] = iArr;
                    for (int i3 = (i << 1) - 1; i3 >= 2; i3--) {
                        objArr[i3] = null;
                    }
                    mBaseCache = objArr;
                    mBaseCacheSize++;
                }
            }
        }
    }

    public SimpleArrayMap() {
        this.mHashes = ContainerHelpers.EMPTY_INTS;
        this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        this.mSize = 0;
    }

    public SimpleArrayMap(int i) {
        if (i == 0) {
            this.mHashes = ContainerHelpers.EMPTY_INTS;
            this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        } else {
            allocArrays(i);
        }
        this.mSize = 0;
    }

    public SimpleArrayMap(SimpleArrayMap simpleArrayMap) {
        this();
        if (simpleArrayMap != null) {
            putAll(simpleArrayMap);
        }
    }

    public void clear() {
        int i = this.mSize;
        if (i != 0) {
            freeArrays(this.mHashes, this.mArray, i);
            this.mHashes = ContainerHelpers.EMPTY_INTS;
            this.mArray = ContainerHelpers.EMPTY_OBJECTS;
            this.mSize = 0;
        }
    }

    public void ensureCapacity(int i) {
        int[] iArr = this.mHashes;
        if (iArr.length < i) {
            Object[] objArr = this.mArray;
            allocArrays(i);
            int i2 = this.mSize;
            if (i2 > 0) {
                System.arraycopy(iArr, 0, this.mHashes, 0, i2);
                System.arraycopy(objArr, 0, this.mArray, 0, this.mSize << 1);
            }
            freeArrays(iArr, objArr, this.mSize);
        }
    }

    public boolean containsKey(Object obj) {
        return indexOfKey(obj) >= 0;
    }

    public int indexOfKey(Object obj) {
        return obj == null ? indexOfNull() : indexOf(obj, obj.hashCode());
    }

    int indexOfValue(Object obj) {
        int i = this.mSize * 2;
        Object[] objArr = this.mArray;
        if (obj == null) {
            for (int i2 = 1; i2 < i; i2 += 2) {
                if (objArr[i2] == null) {
                    return i2 >> 1;
                }
            }
            return -1;
        }
        for (int i3 = 1; i3 < i; i3 += 2) {
            if (obj.equals(objArr[i3])) {
                return i3 >> 1;
            }
        }
        return -1;
    }

    public boolean containsValue(Object obj) {
        return indexOfValue(obj) >= 0;
    }

    public V get(Object obj) {
        int iIndexOfKey = indexOfKey(obj);
        if (iIndexOfKey >= 0) {
            return (V) this.mArray[(iIndexOfKey << 1) + 1];
        }
        return null;
    }

    public K keyAt(int i) {
        return (K) this.mArray[i << 1];
    }

    public V valueAt(int i) {
        return (V) this.mArray[(i << 1) + 1];
    }

    public V setValueAt(int i, V v) {
        int i2 = (i << 1) + 1;
        Object[] objArr = this.mArray;
        V v2 = (V) objArr[i2];
        objArr[i2] = v;
        return v2;
    }

    public boolean isEmpty() {
        return this.mSize <= 0;
    }

    public V put(K k, V v) {
        int i;
        int iIndexOf;
        if (k == null) {
            iIndexOf = indexOfNull();
            i = 0;
        } else {
            int iHashCode = k.hashCode();
            i = iHashCode;
            iIndexOf = indexOf(k, iHashCode);
        }
        if (iIndexOf >= 0) {
            int i2 = (iIndexOf << 1) + 1;
            Object[] objArr = this.mArray;
            V v2 = (V) objArr[i2];
            objArr[i2] = v;
            return v2;
        }
        int i3 = ~iIndexOf;
        int i4 = this.mSize;
        if (i4 >= this.mHashes.length) {
            int i5 = 4;
            if (i4 >= 8) {
                i5 = (i4 >> 1) + i4;
            } else if (i4 >= 4) {
                i5 = 8;
            }
            int[] iArr = this.mHashes;
            Object[] objArr2 = this.mArray;
            allocArrays(i5);
            int[] iArr2 = this.mHashes;
            if (iArr2.length > 0) {
                System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
                System.arraycopy(objArr2, 0, this.mArray, 0, objArr2.length);
            }
            freeArrays(iArr, objArr2, this.mSize);
        }
        int i6 = this.mSize;
        if (i3 < i6) {
            int[] iArr3 = this.mHashes;
            int i7 = i3 + 1;
            System.arraycopy(iArr3, i3, iArr3, i7, i6 - i3);
            Object[] objArr3 = this.mArray;
            System.arraycopy(objArr3, i3 << 1, objArr3, i7 << 1, (this.mSize - i3) << 1);
        }
        this.mHashes[i3] = i;
        Object[] objArr4 = this.mArray;
        int i8 = i3 << 1;
        objArr4[i8] = k;
        objArr4[i8 + 1] = v;
        this.mSize++;
        return null;
    }

    public void putAll(SimpleArrayMap<? extends K, ? extends V> simpleArrayMap) {
        int i = simpleArrayMap.mSize;
        ensureCapacity(this.mSize + i);
        if (this.mSize != 0) {
            for (int i2 = 0; i2 < i; i2++) {
                put(simpleArrayMap.keyAt(i2), simpleArrayMap.valueAt(i2));
            }
        } else if (i > 0) {
            System.arraycopy(simpleArrayMap.mHashes, 0, this.mHashes, 0, i);
            System.arraycopy(simpleArrayMap.mArray, 0, this.mArray, 0, i << 1);
            this.mSize = i;
        }
    }

    public V remove(Object obj) {
        int iIndexOfKey = indexOfKey(obj);
        if (iIndexOfKey >= 0) {
            return removeAt(iIndexOfKey);
        }
        return null;
    }

    public V removeAt(int i) {
        Object[] objArr = this.mArray;
        int i2 = i << 1;
        V v = (V) objArr[i2 + 1];
        int i3 = this.mSize;
        if (i3 <= 1) {
            freeArrays(this.mHashes, objArr, i3);
            this.mHashes = ContainerHelpers.EMPTY_INTS;
            this.mArray = ContainerHelpers.EMPTY_OBJECTS;
            this.mSize = 0;
        } else {
            int[] iArr = this.mHashes;
            if (iArr.length > 8 && i3 < iArr.length / 3) {
                int i4 = i3 > 8 ? i3 + (i3 >> 1) : 8;
                int[] iArr2 = this.mHashes;
                Object[] objArr2 = this.mArray;
                allocArrays(i4);
                this.mSize--;
                if (i > 0) {
                    System.arraycopy(iArr2, 0, this.mHashes, 0, i);
                    System.arraycopy(objArr2, 0, this.mArray, 0, i2);
                }
                int i5 = this.mSize;
                if (i < i5) {
                    int i6 = i + 1;
                    System.arraycopy(iArr2, i6, this.mHashes, i, i5 - i);
                    System.arraycopy(objArr2, i6 << 1, this.mArray, i2, (this.mSize - i) << 1);
                }
            } else {
                int i7 = this.mSize - 1;
                this.mSize = i7;
                if (i < i7) {
                    int[] iArr3 = this.mHashes;
                    int i8 = i + 1;
                    System.arraycopy(iArr3, i8, iArr3, i, i7 - i);
                    Object[] objArr3 = this.mArray;
                    System.arraycopy(objArr3, i8 << 1, objArr3, i2, (this.mSize - i) << 1);
                }
                Object[] objArr4 = this.mArray;
                int i9 = this.mSize;
                objArr4[i9 << 1] = null;
                objArr4[(i9 << 1) + 1] = null;
            }
        }
        return v;
    }

    public int size() {
        return this.mSize;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Map) {
            Map map = (Map) obj;
            if (size() != map.size()) {
                return false;
            }
            for (int i = 0; i < this.mSize; i++) {
                try {
                    K kKeyAt = keyAt(i);
                    V vValueAt = valueAt(i);
                    Object obj2 = map.get(kKeyAt);
                    if (vValueAt == null) {
                        if (obj2 != null || !map.containsKey(kKeyAt)) {
                            return false;
                        }
                    } else if (!vValueAt.equals(obj2)) {
                        return false;
                    }
                } catch (ClassCastException | NullPointerException unused) {
                }
            }
            return true;
        }
        return false;
    }

    public int hashCode() {
        int[] iArr = this.mHashes;
        Object[] objArr = this.mArray;
        int i = this.mSize;
        int i2 = 1;
        int i3 = 0;
        int iHashCode = 0;
        while (i3 < i) {
            Object obj = objArr[i2];
            iHashCode += (obj == null ? 0 : obj.hashCode()) ^ iArr[i3];
            i3++;
            i2 += 2;
        }
        return iHashCode;
    }

    public String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb = new StringBuilder(this.mSize * 28);
        sb.append('{');
        for (int i = 0; i < this.mSize; i++) {
            if (i > 0) {
                sb.append(", ");
            }
            K kKeyAt = keyAt(i);
            if (kKeyAt != this) {
                sb.append(kKeyAt);
            } else {
                sb.append("(this Map)");
            }
            sb.append(a.h);
            V vValueAt = valueAt(i);
            if (vValueAt != this) {
                sb.append(vValueAt);
            } else {
                sb.append("(this Map)");
            }
        }
        sb.append('}');
        return sb.toString();
    }
}
