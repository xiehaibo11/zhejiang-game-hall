package com.kwad.sdk.collector.model.jni;

import com.kwad.sdk.collector.AppStatusNative;
import com.kwad.sdk.collector.model.b;
import com.kwad.sdk.collector.model.c;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.text.SimpleDateFormat;
import java.util.Date;
import org.json.JSONObject;

public class AppRunningInfoNative extends NativeObject implements b<AppRunningInfoNative> {
    private static SimpleDateFormat ajN = new SimpleDateFormat("yyyy-MM-dd:HH:mm:ss");

    public AppRunningInfoNative(long j) {
        this.mPtr = j;
    }

    public AppRunningInfoNative(long j, String str, String str2) {
        this.mPtr = AppStatusNative.nativeCreateAppRunningInfo(j, str, str2);
    }

    private static String V(long j) {
        return ajN.format(new Date(j));
    }

    @Override
    private int compareTo(AppRunningInfoNative appRunningInfoNative) {
        if (appRunningInfoNative == null) {
            return 1;
        }
        long jAppRunningInfoGetLastRunningTime = AppStatusNative.appRunningInfoGetLastRunningTime(this) - c.c(appRunningInfoNative);
        if (jAppRunningInfoGetLastRunningTime == 0) {
            return 0;
        }
        return jAppRunningInfoGetLastRunningTime > 0 ? 1 : -1;
    }

    private AppRunningInfoNative clone() {
        AppRunningInfoNative appRunningInfoNative = new AppRunningInfoNative(AppStatusNative.appRunningInfoGetGranularity(this), AppStatusNative.appRunningInfoGetName(this), AppStatusNative.appRunningInfoGetPackageName(this));
        c.a(appRunningInfoNative, AppStatusNative.appRunningInfoGetLastRunningTime(this));
        return appRunningInfoNative;
    }

    @Override
    public void destroy() {
        if (this.mPtr != 0) {
            AppStatusNative.nativeDeleteAppRunningInfo(this.mPtr);
            this.mPtr = 0L;
        }
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        AppRunningInfoNative appRunningInfoNative = (AppRunningInfoNative) obj;
        long jAppRunningInfoGetGranularity = AppStatusNative.appRunningInfoGetGranularity(this);
        if (jAppRunningInfoGetGranularity != AppStatusNative.appRunningInfoGetGranularity(appRunningInfoNative)) {
            return false;
        }
        long jAppRunningInfoGetLastRunningTime = AppStatusNative.appRunningInfoGetLastRunningTime(this);
        String strAppRunningInfoGetName = AppStatusNative.appRunningInfoGetName(this);
        String strAppRunningInfoGetPackageName = AppStatusNative.appRunningInfoGetPackageName(this);
        if (jAppRunningInfoGetGranularity == 0) {
            jAppRunningInfoGetGranularity = 1;
        }
        if (jAppRunningInfoGetLastRunningTime / jAppRunningInfoGetGranularity == AppStatusNative.appRunningInfoGetLastRunningTime(appRunningInfoNative) / jAppRunningInfoGetGranularity && strAppRunningInfoGetName.equals(AppStatusNative.appRunningInfoGetName(appRunningInfoNative))) {
            return strAppRunningInfoGetPackageName.equals(AppStatusNative.appRunningInfoGetPackageName(appRunningInfoNative));
        }
        return false;
    }

    public int hashCode() {
        long jAppRunningInfoGetGranularity = AppStatusNative.appRunningInfoGetGranularity(this);
        if (jAppRunningInfoGetGranularity == 0) {
            jAppRunningInfoGetGranularity = 1;
        }
        long jAppRunningInfoGetLastRunningTime = AppStatusNative.appRunningInfoGetLastRunningTime(this) / jAppRunningInfoGetGranularity;
        return (((AppStatusNative.appRunningInfoGetName(this).hashCode() * 31) + AppStatusNative.appRunningInfoGetPackageName(this).hashCode()) * 31) + ((int) (jAppRunningInfoGetLastRunningTime ^ (jAppRunningInfoGetLastRunningTime >>> 32)));
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
    }

    @Override
    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "name", AppStatusNative.appRunningInfoGetName(this));
        t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, AppStatusNative.appRunningInfoGetPackageName(this));
        t.putValue(jSONObject, "lastRunningTime", AppStatusNative.appRunningInfoGetLastRunningTime(this));
        return jSONObject;
    }

    public String toString() {
        return "AppRunningInfo{packageName='" + c.b(this) + "', lastRunningTime=" + V(c.c(this)) + '}';
    }
}
