package com.bianfeng.privategetui;

import android.app.NotificationManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class ToMainActivityBroadcastReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        ((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).cancel(intent.getIntExtra("notificationId", -1));
        try {
            Intent intentAddFlags = new Intent(context, Class.forName(YmnAppContext.getMetaDataValueString("PUSH_APP_MAIN_ACTIVITY"))).addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (intent.hasExtra("click")) {
                YmnGetuiSharedPreferencesUtils.put("click", intent.getStringExtra("click"));
            }
            context.startActivity(intentAddFlags);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
