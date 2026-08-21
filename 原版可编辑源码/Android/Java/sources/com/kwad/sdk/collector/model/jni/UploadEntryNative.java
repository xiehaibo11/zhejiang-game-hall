package com.kwad.sdk.collector.model.jni;

import com.kwad.sdk.collector.AppStatusNative;
import com.kwad.sdk.collector.model.e;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

public class UploadEntryNative extends NativeObject implements e {
    public UploadEntryNative() {
        this.mPtr = AppStatusNative.nativeCreateUploadEntry();
    }

    public UploadEntryNative(long j) {
        this.mPtr = j;
    }

    private static String a(UploadEntryNative uploadEntryNative) {
        return AppStatusNative.uploadEntryGetPackageName(uploadEntryNative);
    }

    private String yN() {
        try {
            String strUploadEntryGetPackageName = AppStatusNative.uploadEntryGetPackageName(this);
            String strUploadEntryGetOriginFilePath = AppStatusNative.uploadEntryGetOriginFilePath(this);
            return strUploadEntryGetOriginFilePath.substring(strUploadEntryGetOriginFilePath.indexOf(strUploadEntryGetPackageName)).replaceFirst(strUploadEntryGetPackageName, "");
        } catch (Throwable unused) {
            return null;
        }
    }

    @Override
    public void destroy() {
        if (this.mPtr != 0) {
            AppStatusNative.nativeDeleteUploadEntry(this.mPtr);
            this.mPtr = 0L;
        }
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            UploadEntryNative uploadEntryNative = (UploadEntryNative) obj;
            String strUploadEntryGetPackageName = AppStatusNative.uploadEntryGetPackageName(this);
            String strUploadEntryGetOriginFilePath = AppStatusNative.uploadEntryGetOriginFilePath(this);
            if (strUploadEntryGetPackageName == null ? a(uploadEntryNative) != null : !strUploadEntryGetPackageName.equals(a(uploadEntryNative))) {
                return false;
            }
            String strUploadEntryGetOriginFilePath2 = AppStatusNative.uploadEntryGetOriginFilePath(uploadEntryNative);
            if (strUploadEntryGetOriginFilePath != null) {
                return strUploadEntryGetOriginFilePath.equals(strUploadEntryGetOriginFilePath2);
            }
            if (strUploadEntryGetOriginFilePath2 == null) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        String strUploadEntryGetPackageName = AppStatusNative.uploadEntryGetPackageName(this);
        String strUploadEntryGetOriginFilePath = AppStatusNative.uploadEntryGetOriginFilePath(this);
        return ((strUploadEntryGetPackageName != null ? strUploadEntryGetPackageName.hashCode() : 0) * 31) + (strUploadEntryGetOriginFilePath != null ? strUploadEntryGetOriginFilePath.hashCode() : 0);
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        String strOptString = jSONObject.optString(DBDefinition.PACKAGE_NAME);
        String strOptString2 = jSONObject.optString("originFilePath");
        AppStatusNative.uploadEntrySetPackageName(this, strOptString);
        AppStatusNative.uploadEntrySetOriginFilePath(this, strOptString2);
    }

    @Override
    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, AppStatusNative.uploadEntryGetPackageName(this));
        t.putValue(jSONObject, "originFilePath", AppStatusNative.uploadEntryGetOriginFilePath(this));
        return jSONObject;
    }

    public String toString() {
        return "UploadEntry{packageName='" + AppStatusNative.uploadEntryGetPackageName(this) + "', originFile=" + AppStatusNative.uploadEntryGetOriginFilePath(this) + '}';
    }

    @Override
    public final JSONObject yL() {
        try {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, AppStatusNative.uploadEntryGetPackageName(this));
            t.putValue(jSONObject, "content", com.kwad.sdk.collector.e.cl(AppStatusNative.uploadEntryGetOriginFilePath(this)));
            t.putValue(jSONObject, "fileName", yN());
            return jSONObject;
        } catch (Throwable unused) {
            return null;
        }
    }
}
