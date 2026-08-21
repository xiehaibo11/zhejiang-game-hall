package library;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class f implements Parcelable, Cloneable, Iterable<String> {
    public static final Parcelable.Creator<f> CREATOR = null;
    String a;
    int b;
    private final ArrayList<String> c;

    static {
        CREATOR = new 1();
    }

    f() {
        this.b = Integer.MIN_VALUE;
        this.c = new ArrayList();
    }

    private f(Parcel r2) {
        this.b = Integer.MIN_VALUE;
        this.a = r2.readString();
        this.b = r2.readInt();
        this.c = (ArrayList) r2.readSerializable();
    }

    f(Parcel r1, 1 r2) {
        this(r1);
    }

    f(f r2) {
        this.b = Integer.MIN_VALUE;
        this.a = r2.a;
        this.b = r2.b;
        this.c = new ArrayList(r2.a());
    }

    List<String> a() {
        return this.c;
    }

    protected Object clone() {
        return new f(this);
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if (r5 != null) goto L8;
    L24:
        return false;
    L8:
        if (getClass() != r5.getClass()) goto L24;
        f r52 = (f) r5;
        if (this.b == r52.b) goto L14;
        return false;
    L14:
        if (this.c.equals(r52.c) == true) goto L16;
        return false;
    L16:
        String r2 = this.a;
        if (r2 == null) goto L20;
        return r2.equals(r52.a);
    L20:
        if (r52.a == null) goto L26;
        return false;
    L26:
        return true;
    }

    public int hashCode() {
        int r0 = this.c.hashCode() * 31;
        String r1 = this.a;
        if (r1 == null) goto L5;
        int r12 = r1.hashCode();
    L7:
        return ((r0 + r12) * 31) + this.b;
    L5:
        r12 = 0;
        goto L7
    }

    @Override
    public Iterator<String> iterator() {
        return this.c.iterator();
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append("PRunningL{ ");
        if (this.b != Integer.MIN_VALUE) goto L5;
        String r1 = "<UNKNOWN_PID>";
    L6:
        r0.append(r1);
        r0.append(this.c);
        r0.append(" }");
        return r0.toString();
    L5:
        r0.append('<');
        r0.append(this.a);
        r0.append(':');
        r0.append(this.b);
        r1 = "> ";
        goto L6
    }

    @Override
    public void writeToParcel(Parcel r1, int r2) {
        r1.writeString(this.a);
        r1.writeInt(this.b);
        r1.writeSerializable(this.c);
    }
}
