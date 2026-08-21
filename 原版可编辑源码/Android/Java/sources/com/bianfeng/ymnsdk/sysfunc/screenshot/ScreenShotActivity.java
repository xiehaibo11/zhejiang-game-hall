package com.bianfeng.ymnsdk.sysfunc.screenshot;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class ScreenShotActivity extends Activity {
    public static void start(Context context) {
        Intent intent = new Intent(context, (Class<?>) ScreenShotActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        finish();
    }
}
