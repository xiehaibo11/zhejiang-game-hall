package com.meizu.cloud.pushsdk.handler.a.c;

import android.os.Parcel;
import android.os.Parcelable;
import com.meizu.cloud.pushinternal.DebugLogger;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() { // from class: com.meizu.cloud.pushsdk.handler.a.c.a.1
        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }

        @Override // android.os.Parcelable.Creator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public a[] newArray(int i) {
            return new a[i];
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4602a;
    private int b;
    private int c;

    public a() {
    }

    protected a(Parcel parcel) {
        this.f4602a = parcel.readInt();
        this.b = parcel.readInt();
        this.c = parcel.readInt();
    }

    public static a a(JSONObject jSONObject) {
        String str;
        a aVar = new a();
        if (jSONObject != null) {
            try {
                if (!jSONObject.isNull("pushType")) {
                    aVar.a(jSONObject.getInt("pushType"));
                }
                if (!jSONObject.isNull("cached")) {
                    aVar.b(jSONObject.getInt("cached"));
                }
                if (!jSONObject.isNull("cacheNum")) {
                    aVar.c(jSONObject.getInt("cacheNum"));
                }
            } catch (JSONException e) {
                str = " parse control message error " + e.getMessage();
                DebugLogger.e("ctl", str);
            }
            return aVar;
        }
        str = "no control message can parse ";
        DebugLogger.e("ctl", str);
        return aVar;
    }

    public int a() {
        return this.f4602a;
    }

    public void a(int i) {
        this.f4602a = i;
    }

    public void b(int i) {
        this.b = i;
    }

    public void c(int i) {
        this.c = i;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "Control{pushType=" + this.f4602a + ", cached=" + this.b + ", cacheNum=" + this.c + '}';
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f4602a);
        parcel.writeInt(this.b);
        parcel.writeInt(this.c);
    }
}
