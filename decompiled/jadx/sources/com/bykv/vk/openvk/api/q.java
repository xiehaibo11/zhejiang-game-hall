package com.bykv.vk.openvk.api;

import android.util.SparseArray;
import com.bykv.vk.openvk.api.proto.ValueSet;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public final class q {
    private final SparseArray<Object> rg;

    private q(SparseArray<Object> sparseArray) {
        this.rg = sparseArray;
    }

    public static final q rg() {
        return new q(new SparseArray());
    }

    public q rg(int i, Object obj) {
        this.rg.put(i, obj);
        return this;
    }

    public q rg(int i, String str) {
        this.rg.put(i, str);
        return this;
    }

    public q rg(int i, boolean z) {
        this.rg.put(i, Boolean.valueOf(z));
        return this;
    }

    public ValueSet df() {
        return new rg(this.rg);
    }

    private static final class rg implements ValueSet {
        private final SparseArray<Object> rg;

        private rg(SparseArray<Object> sparseArray) {
            this.rg = sparseArray;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public <T> T[] arrayValue(int i, Class<T> cls) {
            Object obj = this.rg.get(i);
            if (obj == null) {
                return null;
            }
            Class<?> cls2 = obj.getClass();
            if (cls2.isArray() && cls.isAssignableFrom(cls2.getComponentType())) {
                return (T[]) ((Object[]) obj);
            }
            return null;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public <T> T objectValue(int i, Class<T> cls) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            if (cls.isInstance(obj)) {
                return (T) this.rg.get(i);
            }
            return null;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public String stringValue(int i) {
            return stringValue(i, null);
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public int intValue(int i) {
            return intValue(i, 0);
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public boolean booleanValue(int i) {
            return booleanValue(i, false);
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public long longValue(int i) {
            return longValue(i, 0L);
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public float floatValue(int i) {
            return floatValue(i, 0.0f);
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public double doubleValue(int i) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            if (obj instanceof Double) {
                return ((Double) obj).doubleValue();
            }
            return 0.0d;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public String stringValue(int i, String str) {
            Object obj = this.rg.get(i);
            return (obj instanceof ValueSet.ValueGetter ? ((ValueSet.ValueGetter) obj).get() : obj) instanceof String ? obj.toString() : str;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public int intValue(int i, int i2) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            return obj instanceof Integer ? ((Integer) obj).intValue() : i2;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public boolean booleanValue(int i, boolean z) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            return obj instanceof Boolean ? ((Boolean) obj).booleanValue() : z;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public long longValue(int i, long j) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            return obj instanceof Long ? ((Long) obj).longValue() : j;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public float floatValue(int i, float f) {
            Object obj = this.rg.get(i);
            if (obj instanceof ValueSet.ValueGetter) {
                obj = ((ValueSet.ValueGetter) obj).get();
            }
            return obj instanceof Float ? ((Float) obj).floatValue() : f;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public boolean containsKey(int i) {
            return this.rg.indexOfKey(i) >= 0;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public Set<Integer> keys() {
            int size = this.rg.size();
            HashSet hashSet = new HashSet();
            for (int i = 0; i < size; i++) {
                hashSet.add(Integer.valueOf(i));
            }
            return hashSet;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public boolean isEmpty() {
            return size() <= 0;
        }

        @Override // com.bykv.vk.openvk.api.proto.ValueSet
        public int size() {
            SparseArray<Object> sparseArray = this.rg;
            if (sparseArray == null) {
                return 0;
            }
            return sparseArray.size();
        }
    }
}
