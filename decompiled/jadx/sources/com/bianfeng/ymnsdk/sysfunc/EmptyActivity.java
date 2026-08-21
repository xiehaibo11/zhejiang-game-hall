package com.bianfeng.ymnsdk.sysfunc;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

/* JADX INFO: loaded from: classes.dex */
public class EmptyActivity extends Activity {
    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (!isTaskRoot() && getIntent().hasCategory("android.intent.category.LAUNCHER") && getIntent().getAction() != null && getIntent().getAction().equals("android.intent.action.MAIN")) {
            finish();
            return;
        }
        startGameActivity();
        SharedPreferencesUtils.init(this);
        Logger.i("EmptyActivity onCreate");
    }

    private void startGameActivity() {
        String string = SharedPreferencesUtils.getString("sysfunc_open_activity");
        String str = "";
        if (string.isEmpty() && (string = getMetaData("sysfunc_open_activity")) == null) {
            string = "";
        }
        String str2 = "org.cocos2dx.cpp.AppActivity";
        if (string.isEmpty()) {
            string = "org.cocos2dx.cpp.AppActivity";
        }
        try {
            if (string != null) {
                try {
                    Intent intent = new Intent(this, Class.forName(string));
                    Logger.i("startActivity1 is " + string);
                    if (getIntent().getData() != null) {
                        intent.setData(getIntent().getData());
                    }
                    if (getIntent().getExtras() != null) {
                        intent.putExtras(getIntent().getExtras());
                    }
                    startActivity(intent);
                    finish();
                } catch (ClassNotFoundException e) {
                    e.printStackTrace();
                    String metaData = getMetaData("sysfunc_open_activity");
                    if (metaData != null) {
                        str = metaData;
                    }
                    if (!str.isEmpty()) {
                        str2 = str;
                    }
                    Intent intent2 = new Intent(this, Class.forName(str2));
                    Logger.i("startActivity2 is " + str2);
                    if (getIntent().getData() != null) {
                        intent2.setData(getIntent().getData());
                    }
                    if (getIntent().getExtras() != null) {
                        intent2.putExtras(getIntent().getExtras());
                    }
                    startActivity(intent2);
                    finish();
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        finish();
    }

    public String getMetaData(String str) {
        Object obj;
        if (str == null) {
            return null;
        }
        try {
            ApplicationInfo applicationInfo = getPackageManager().getApplicationInfo(getPackageName(), 128);
            Bundle bundle = applicationInfo != null ? applicationInfo.metaData : null;
            if (bundle == null || (obj = bundle.get(str)) == null) {
                return null;
            }
            return String.valueOf(obj);
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }
}
