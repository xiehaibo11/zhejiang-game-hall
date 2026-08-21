package com.kwad.sdk.utils;

import android.content.Context;
import android.net.wifi.ScanResult;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.kwad.sdk.service.ServiceProvider;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public final class bq {
    private static boolean aKy;
    private static final List<a> aKz = new ArrayList();

    public static class a implements com.kwad.sdk.core.b {
        public String aKA;
        public String aKB;
        public int level;

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, "level", this.level);
            t.putValue(jSONObject, "ssid", this.aKA);
            t.putValue(jSONObject, "bssid", this.aKB);
            return jSONObject;
        }
    }

    public static boolean dm(Context context) {
        return (context.getApplicationInfo().targetSdkVersion < 29 || Build.VERSION.SDK_INT < 29) ? Build.VERSION.SDK_INT >= 23 && ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) == -1 && ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.h) == -1 : ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) == -1;
    }

    public static List<a> m(Context context, int i) {
        WifiManager wifiManager;
        if (at.Jg()) {
            return new ArrayList();
        }
        if (aKy || !ServiceProvider.HE().canReadNearbyWifiList() || !aKz.isEmpty() || context == null) {
            return aKz;
        }
        if (((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(32L)) {
            return aKz;
        }
        try {
        } catch (Exception e) {
            aKy = true;
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        if (!dm(context) && (wifiManager = (WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)) != null) {
            WifiInfo connectionInfo = wifiManager.getConnectionInfo();
            List<ScanResult> scanResults = wifiManager.getScanResults();
            if (scanResults != null) {
                for (ScanResult scanResult : scanResults) {
                    a aVar = new a();
                    aVar.aKA = scanResult.SSID;
                    aVar.aKB = scanResult.BSSID;
                    aVar.level = scanResult.level;
                    if (connectionInfo.getBSSID() == null || scanResult.BSSID == null || !TextUtils.equals(connectionInfo.getBSSID().replace("\"", ""), scanResult.BSSID.replace("\"", "")) || connectionInfo.getSSID() == null || scanResult.SSID == null || !TextUtils.equals(connectionInfo.getSSID().replace("\"", ""), scanResult.SSID.replace("\"", ""))) {
                        aKz.add(aVar);
                    } else {
                        aKz.add(0, aVar);
                    }
                    if (aKz.size() >= i) {
                        return aKz;
                    }
                }
            }
            return aKz;
        }
        return aKz;
    }
}
