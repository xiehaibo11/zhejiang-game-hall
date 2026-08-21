package com.meizu.cloud.pushsdk.notification.model;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.handler.MessageV3;
import org.json.JSONException;
import org.json.JSONObject;

public class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() {
        @Override
        public a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }

        @Override
        public a[] newArray(int i) {
            return new a[i];
        }
    };
    private int a;
    private String b;

    public a() {
        this.a = 0;
    }

    protected a(Parcel parcel) {
        this.a = 0;
        this.a = parcel.readInt();
        this.b = parcel.readString();
    }

    public static a a(MessageV3 messageV3) {
        a aVarC;
        try {
            aVarC = !TextUtils.isEmpty(messageV3.getNotificationMessage()) ? a(new JSONObject(messageV3.getNotificationMessage()).getJSONObject("data").getJSONObject("extra").getJSONObject("no")) : null;
        } catch (Exception e) {
            DebugLogger.e("NotifyOption", "parse flyme NotifyOption setting error " + e.getMessage() + " so get from notificationMessage");
            aVarC = c(messageV3.getNotificationMessage());
        }
        DebugLogger.i("NotifyOption", "current notify option is " + aVarC);
        return aVarC;
    }

    public static a a(JSONObject jSONObject) {
        String str;
        a aVar = new a();
        if (jSONObject != null) {
            try {
                if (!jSONObject.isNull("ni")) {
                    aVar.a(jSONObject.getInt("ni"));
                }
                if (!jSONObject.isNull("nk")) {
                    aVar.a(jSONObject.getString("nk"));
                }
            } catch (JSONException e) {
                str = "parse json obj error " + e.getMessage();
                DebugLogger.e("NotifyOption", str);
            }
            return aVar;
        }
        str = "no such tag NotifyOption";
        DebugLogger.e("NotifyOption", str);
        return aVar;
    }

    public static int b(MessageV3 messageV3) {
        a aVarA = a(messageV3);
        if (aVarA != null) {
            return aVarA.a();
        }
        return 0;
    }

    public static a b(String str) {
        JSONObject jSONObject;
        if (TextUtils.isEmpty(str)) {
            jSONObject = null;
        } else {
            try {
                jSONObject = new JSONObject(str);
            } catch (JSONException e) {
                DebugLogger.e("NotifyOption", "parse json string error " + e.getMessage());
                jSONObject = null;
            }
        }
        return a(jSONObject);
    }

    private static a c(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return b(new JSONObject(str).getString("no"));
        } catch (JSONException e) {
            DebugLogger.e("NotifyOption", "parse notificationMessage error " + e.getMessage());
            return null;
        }
    }

    public int a() {
        return this.a;
    }

    public void a(int i) {
        this.a = i;
    }

    public void a(String str) {
        this.b = str;
    }

    public String b() {
        return this.b;
    }

    @Override
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "NotifyOption{notifyId=" + this.a + ", notifyKey='" + this.b + "'}";
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.a);
        parcel.writeString(this.b);
    }
}
