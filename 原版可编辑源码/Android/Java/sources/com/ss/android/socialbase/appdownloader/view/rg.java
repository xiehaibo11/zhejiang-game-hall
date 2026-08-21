package com.ss.android.socialbase.appdownloader.view;

import android.app.Fragment;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.ss.android.socialbase.appdownloader.pp.pt;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;

public class rg extends Fragment {
    public void rg() {
        try {
            try {
                try {
                    startActivityForResult(c(), 1000);
                } catch (Throwable unused) {
                    startActivityForResult(q(), 1000);
                }
            } catch (Throwable unused2) {
                startActivityForResult(pt(), 1000);
            }
        } catch (Throwable unused3) {
            startActivityForResult(df(), 1000);
        }
    }

    public Intent df() {
        Context contextPp = pp();
        if (contextPp == null) {
            return null;
        }
        String packageName = contextPp.getPackageName();
        if (!TextUtils.isEmpty(Build.MANUFACTURER)) {
            String lowerCase = Build.MANUFACTURER.toLowerCase();
            if (lowerCase.contains(DownloadConstants.LOWER_OPPO)) {
                Intent intent = new Intent();
                intent.putExtra(DBDefinition.PACKAGE_NAME, packageName);
                intent.setComponent(new ComponentName("com.color.safecenter", "com.color.safecenter.permission.PermissionManagerActivity"));
                return intent;
            }
            if (lowerCase.contains("vivo")) {
                Intent intent2 = new Intent();
                intent2.putExtra("packagename", packageName);
                if (Build.VERSION.SDK_INT >= 25) {
                    intent2.setComponent(new ComponentName("com.vivo.permissionmanager", "com.vivo.permissionmanager.activity.SoftPermissionDetailActivity"));
                } else {
                    intent2.setComponent(new ComponentName("com.iqoo.secure", "com.iqoo.secure.safeguard.SoftPermissionDetailActivity"));
                }
                return intent2;
            }
            if (lowerCase.contains("meizu") && Build.VERSION.SDK_INT < 25) {
                Intent intent3 = new Intent("com.meizu.safe.security.SHOW_APPSEC");
                intent3.putExtra(DBDefinition.PACKAGE_NAME, packageName);
                intent3.setComponent(new ComponentName("com.meizu.safe", "com.meizu.safe.security.AppSecActivity"));
                return intent3;
            }
        }
        return new Intent("android.settings.APPLICATION_DETAILS_SETTINGS", Uri.parse("package:" + contextPp.getPackageName()));
    }

    private Context pp() {
        Context appContext = DownloadComponentManager.getAppContext();
        return (appContext != null || getActivity() == null || getActivity().isFinishing()) ? appContext : getActivity().getApplicationContext();
    }

    public Intent q() {
        Context contextPp = pp();
        if (contextPp == null) {
            return null;
        }
        return new Intent("android.settings.APPLICATION_DETAILS_SETTINGS", Uri.parse("package:" + contextPp.getPackageName()));
    }

    private Intent c() {
        Context contextPp = pp();
        if (contextPp == null) {
            return null;
        }
        Intent intent = new Intent("android.settings.APP_NOTIFICATION_SETTINGS");
        String packageName = contextPp.getPackageName();
        intent.putExtra("package", packageName);
        intent.putExtra("android.provider.extra.APP_PACKAGE", packageName);
        intent.putExtra("app_package", packageName);
        int i = contextPp.getApplicationInfo().uid;
        intent.putExtra(IUserFeature.LOGIN_SUC_RS_UID, i);
        intent.putExtra("app_uid", i);
        return intent;
    }

    public static Intent pt() {
        return new Intent("android.settings.APPLICATION_SETTINGS");
    }

    @Override
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (pt.rg()) {
            pt.rg(true);
        } else {
            pt.rg(false);
        }
    }
}
