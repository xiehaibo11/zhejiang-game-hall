package com.huawei.updatesdk.support.pm;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.huawei.updatesdk.a.a.c.a.a.a;
import com.huawei.updatesdk.a.a.d.h.c;
import com.huawei.updatesdk.a.b.b.b;
import com.huawei.updatesdk.b.d.e;
import com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;

public class PackageInstallerActivity extends Activity {
    private Intent a(Context context, String str) {
        Uri uriFromFile;
        if (TextUtils.isEmpty(str) || str.contains("../") || str.contains("..") || str.contains("%00") || str.contains(".\\.\\") || str.contains("./")) {
            throw new IllegalArgumentException("getNomalInstallIntent: Not a standard path");
        }
        Intent intent = new Intent();
        intent.setAction("android.intent.action.INSTALL_PACKAGE");
        if (Build.VERSION.SDK_INT >= 24) {
            intent.addFlags(1);
            uriFromFile = UpdateSdkFileProvider.getUriForFile(context, context.getApplicationContext().getPackageName() + UpdateSdkFileProvider.AUTHORITIES_SUFFIX, new File(str));
        } else {
            uriFromFile = Uri.fromFile(new File(str));
        }
        intent.setData(uriFromFile);
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        }
        return intent;
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (1000 == i) {
            if (i2 == 0) {
                e.a(7, 0);
            } else {
                int iA = intent != null ? b.a(intent).a("android.intent.extra.INSTALL_RESULT", -10004) : -10004;
                if (iA != 0 && iA != 1) {
                    e.a(4, iA);
                }
            }
        }
        finish();
    }

    @Override
    protected void onCreate(Bundle bundle) {
        String str;
        requestWindowFeature(1);
        c.d().a(getWindow());
        super.onCreate(bundle);
        Intent intent = getIntent();
        if (intent == null) {
            finish();
            str = "PackageInstallerActivity error intent";
        } else {
            b bVarA = b.a(intent);
            String strA = bVarA.a("install_path");
            String strA2 = bVarA.a("install_packagename");
            if (!TextUtils.isEmpty(strA)) {
                try {
                    Intent intentA = a(this, strA);
                    intentA.putExtra("android.intent.extra.NOT_UNKNOWN_SOURCE", true);
                    intentA.putExtra("android.intent.extra.RETURN_RESULT", true);
                    a.c("PackageInstallerActivity", " onCreate filePath:" + strA + ",packageName:" + strA2 + ",taskId:" + getTaskId());
                    startActivityForResult(intentA, 1000);
                    return;
                } catch (Exception unused) {
                    a.b("PackageInstallerActivity", "can not start install action");
                    e.a(4, -2);
                    finish();
                    return;
                }
            }
            e.a(4, -3);
            finish();
            str = "PackageInstallerActivity can not find filePath.";
        }
        a.b("PackageInstallerActivity", str);
    }

    @Override
    protected void onDestroy() {
        finishActivity(1000);
        super.onDestroy();
    }
}
