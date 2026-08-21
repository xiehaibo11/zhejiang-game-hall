package android.support.v4.util;

public class Pair<F, S> {

    @android.support.annotation.Nullable
    public final F first;

    @android.support.annotation.Nullable
    public final S second;

    public Pair(@android.support.annotation.Nullable F r1, @android.support.annotation.Nullable S r2) {
            r0 = this;
            r0.<init>()
            r0.first = r1
            r0.second = r2
            return
    }

    @android.support.annotation.NonNull
    public static <A, B> android.support.v4.util.Pair<A, B> create(@android.support.annotation.Nullable A r1, @android.support.annotation.Nullable B r2) {
            android.support.v4.util.Pair r0 = new android.support.v4.util.Pair
            r0.<init>(r1, r2)
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof android.support.v4.util.Pair
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.support.v4.util.Pair r4 = (android.support.v4.util.Pair) r4
            F r0 = r4.first
            F r2 = r3.first
            boolean r0 = android.support.v4.util.ObjectsCompat.equals(r0, r2)
            if (r0 == 0) goto L1d
            S r4 = r4.second
            S r0 = r3.second
            boolean r4 = android.support.v4.util.ObjectsCompat.equals(r4, r0)
            if (r4 == 0) goto L1d
            r1 = 1
        L1d:
            return r1
    }

    public int hashCode() {
            r3 = this;
            F r0 = r3.first
            r1 = 0
            if (r0 != 0) goto L7
            r0 = 0
            goto Lb
        L7:
            int r0 = r0.hashCode()
        Lb:
            S r2 = r3.second
            if (r2 != 0) goto L10
            goto L14
        L10:
            int r1 = r2.hashCode()
        L14:
            r0 = r0 ^ r1
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Pair{"
            r0.append(r1)
            F r1 = r2.first
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            S r1 = r2.second
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
