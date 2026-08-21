package library;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class f implements Parcelable, Cloneable, Iterable<String> {
    public static final Parcelable.Creator<f> CREATOR = new Parcelable.Creator<f>() {
        @Override
        public f createFromParcel(Parcel parcel) {
            return new f(parcel);
        }

        @Override
        public f[] newArray(int i) {
            return new f[i];
        }
    };
    String a;
    int b;
    private final ArrayList<String> c;

    f() {
        this.b = Integer.MIN_VALUE;
        this.c = new ArrayList<>();
    }

    private f(Parcel parcel) {
        this.b = Integer.MIN_VALUE;
        this.a = parcel.readString();
        this.b = parcel.readInt();
        this.c = (ArrayList) parcel.readSerializable();
    }

    f(f fVar) {
        this.b = Integer.MIN_VALUE;
        this.a = fVar.a;
        this.b = fVar.b;
        this.c = new ArrayList<>(fVar.a());
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

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        f fVar = (f) obj;
        if (this.b != fVar.b || !this.c.equals(fVar.c)) {
            return false;
        }
        String str = this.a;
        return str != null ? str.equals(fVar.a) : fVar.a == null;
    }

    public int hashCode() {
        int iHashCode = this.c.hashCode() * 31;
        String str = this.a;
        return ((iHashCode + (str != null ? str.hashCode() : 0)) * 31) + this.b;
    }

    @Override
    public Iterator<String> iterator() {
        return this.c.iterator();
    }

    public String toString() {
        String str;
        StringBuilder sb = new StringBuilder();
        sb.append("PRunningL{ ");
        if (this.b == Integer.MIN_VALUE) {
            str = "<UNKNOWN_PID>";
        } else {
            sb.append('<');
            sb.append(this.a);
            sb.append(':');
            sb.append(this.b);
            str = "> ";
        }
        sb.append(str);
        sb.append(this.c);
        sb.append(" }");
        return sb.toString();
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.a);
        parcel.writeInt(this.b);
        parcel.writeSerializable(this.c);
    }
}
