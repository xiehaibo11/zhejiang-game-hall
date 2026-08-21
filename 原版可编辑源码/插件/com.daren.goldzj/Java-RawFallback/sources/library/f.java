package library;

public class f implements android.os.Parcelable, java.lang.Cloneable, java.lang.Iterable<java.lang.String> {
    public static final android.os.Parcelable.Creator<library.f> CREATOR = null;
    java.lang.String a;
    int b;
    private final java.util.ArrayList<java.lang.String> c;


    static {
            library.f$1 r0 = new library.f$1
            r0.<init>()
            library.f.CREATOR = r0
            return
    }

    f() {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.c = r0
            return
    }

    private f(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.b = r0
            java.lang.String r0 = r2.readString()
            r1.a = r0
            int r0 = r2.readInt()
            r1.b = r0
            java.io.Serializable r2 = r2.readSerializable()
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            r1.c = r2
            return
    }

    f(android.os.Parcel r1, library.f.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    f(library.f r2) {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.b = r0
            java.lang.String r0 = r2.a
            r1.a = r0
            int r0 = r2.b
            r1.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r2 = r2.a()
            r0.<init>(r2)
            r1.c = r0
            return
    }

    java.util.List<java.lang.String> a() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.c
            return r0
    }

    protected java.lang.Object clone() {
            r1 = this;
            library.f r0 = new library.f
            r0.<init>(r1)
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L38
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L38
        L12:
            library.f r5 = (library.f) r5
            int r2 = r4.b
            int r3 = r5.b
            if (r2 == r3) goto L1b
            return r1
        L1b:
            java.util.ArrayList<java.lang.String> r2 = r4.c
            java.util.ArrayList<java.lang.String> r3 = r5.c
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L26
            return r1
        L26:
            java.lang.String r2 = r4.a
            if (r2 == 0) goto L31
            java.lang.String r5 = r5.a
            boolean r0 = r2.equals(r5)
            goto L37
        L31:
            java.lang.String r5 = r5.a
            if (r5 != 0) goto L36
            goto L37
        L36:
            r0 = 0
        L37:
            return r0
        L38:
            return r1
    }

    public int hashCode() {
            r2 = this;
            java.util.ArrayList<java.lang.String> r0 = r2.c
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = r2.a
            if (r1 == 0) goto L11
            int r1 = r1.hashCode()
            goto L12
        L11:
            r1 = 0
        L12:
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.b
            int r0 = r0 + r1
            return r0
    }

    @Override
    public java.util.Iterator<java.lang.String> iterator() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.c
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PRunningL{ "
            r0.append(r1)
            int r1 = r3.b
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r2) goto L13
            java.lang.String r1 = "<UNKNOWN_PID>"
            goto L29
        L13:
            r1 = 60
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            int r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = "> "
        L29:
            r0.append(r1)
            java.util.ArrayList<java.lang.String> r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = " }"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.a
            r1.writeString(r2)
            int r2 = r0.b
            r1.writeInt(r2)
            java.util.ArrayList<java.lang.String> r2 = r0.c
            r1.writeSerializable(r2)
            return
    }
}
