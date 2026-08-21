package com.sigmob.sdk.base.services;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.wifi.ScanResult;
import android.net.wifi.WifiManager;
import android.util.Base64;
import com.czhj.sdk.common.utils.DeviceUtils;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntityAntiSpan;
import com.sigmob.sdk.base.mta.PointType;
import com.xiaomi.mipush.sdk.Constants;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class WifiScanReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private List<ScanResult> f4925a;
    private long b = 0;

    private void a(String str, String str2) {
        PointEntityAntiSpan pointEntityAntiSpan = new PointEntityAntiSpan();
        pointEntityAntiSpan.setCategory(PointCategory.WIFI_LIST);
        pointEntityAntiSpan.setAc_type(PointType.ANTI_SPAM);
        pointEntityAntiSpan.setWifi_id_list(str);
        pointEntityAntiSpan.setWifi_mac_list(str2);
        pointEntityAntiSpan.commit();
    }

    public void a(Context context) {
        try {
            WifiManager wifiManager = DeviceUtils.getWifiManager(context);
            if (wifiManager != null && wifiManager.getWifiState() == 3 && com.sigmob.sdk.base.i.a().j().up_wifi_list_interval.intValue() >= 60) {
                SigmobLog.d("private :use_wifi ");
                SigmobLog.i("scanResult " + wifiManager.startScan());
            }
        } catch (Throwable unused) {
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        try {
            WifiManager wifiManager = DeviceUtils.getWifiManager(context);
            if (wifiManager == null) {
                return;
            }
            SigmobLog.d("private :use_wifi");
            String action = intent.getAction();
            byte b = -1;
            int iHashCode = action.hashCode();
            if (iHashCode != -1875733435) {
                if (iHashCode == 1878357501 && action.equals("android.net.wifi.SCAN_RESULTS")) {
                    b = 0;
                }
            } else if (action.equals("android.net.wifi.WIFI_STATE_CHANGED")) {
                b = 1;
            }
            if (b != 0) {
                if (b != 1) {
                    return;
                }
                a(context);
                return;
            }
            List<ScanResult> scanResults = wifiManager.getScanResults();
            int iIntValue = com.sigmob.sdk.base.i.a().j().up_wifi_list_interval.intValue();
            if (iIntValue < 60 || this.b + ((long) (iIntValue * 1000)) >= System.currentTimeMillis() || scanResults.isEmpty()) {
                return;
            }
            this.b = System.currentTimeMillis();
            this.f4925a = scanResults;
            String str = "";
            String str2 = "";
            for (int i = 0; i < this.f4925a.size(); i++) {
                ScanResult scanResult = this.f4925a.get(i);
                str = str + Base64.encodeToString(scanResult.SSID.getBytes(), 2);
                str2 = str2 + scanResult.BSSID;
                if (i != this.f4925a.size() - 1) {
                    str = str + Constants.ACCEPT_TIME_SEPARATOR_SP;
                    str2 = str2 + Constants.ACCEPT_TIME_SEPARATOR_SP;
                }
            }
            SigmobLog.d("name List " + str);
            SigmobLog.d("mac List " + str2);
            a(str, str2);
        } catch (Throwable th) {
            SigmobLog.e("WifiScanReceiver error", th);
        }
    }
}
