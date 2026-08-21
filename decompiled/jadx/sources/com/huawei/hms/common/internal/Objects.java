package com.huawei.hms.common.internal;

import com.huawei.hms.framework.common.ContainerUtils;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class Objects {

    public static final class ToStringHelper {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final List<String> f2045a;
        public final Object b;

        public final ToStringHelper add(String str, Object obj) {
            String str2 = (String) Preconditions.checkNotNull(str);
            String strValueOf = String.valueOf(obj);
            StringBuilder sb = new StringBuilder(str2.length() + strValueOf.length() + 1);
            sb.append(str2);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(strValueOf);
            this.f2045a.add(sb.toString());
            return this;
        }

        public final String toString() {
            String simpleName = this.b.getClass().getSimpleName();
            StringBuilder sb = new StringBuilder(100);
            sb.append(simpleName);
            sb.append('{');
            int size = this.f2045a.size();
            for (int i = 0; i < size; i++) {
                sb.append(this.f2045a.get(i));
                if (i < size - 1) {
                    sb.append(", ");
                }
            }
            sb.append('}');
            return sb.toString();
        }

        public ToStringHelper(Object obj) {
            this.b = Preconditions.checkNotNull(obj);
            this.f2045a = new ArrayList();
        }
    }

    public Objects() {
        throw new AssertionError("Uninstantiable");
    }

    public static boolean equal(Object obj, Object obj2) {
        if (obj == obj2) {
            return true;
        }
        return obj != null && obj.equals(obj2);
    }

    public static int hashCode(Object... objArr) {
        return Arrays.hashCode(objArr);
    }

    public static ToStringHelper toStringHelper(Object obj) {
        return new ToStringHelper(obj);
    }
}
