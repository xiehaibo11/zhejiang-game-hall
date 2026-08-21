package com.bianfeng.ymnsdk.ymnlink;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;

public class YmnLinkActivity extends Activity {
    static final String KEY_GAME_ACTIVITY = "GAME_ACTIVITY";

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            Uri data = getIntent().getData();
            Logger.d("ymnlink received data " + data);
            YmnLinkCache.setLaunchData(data);
            String gameActivityName = getGameActivityName();
            Intent intent = new Intent();
            if (!TextUtils.isEmpty(gameActivityName)) {
                intent.setClassName(this, gameActivityName);
            } else {
                intent = getPackageManager().getLaunchIntentForPackage(getPackageName());
            }
            intent.setData(data);
            startActivity(intent);
            finish();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private String getGameActivityName() {
        String gameActivityNameByManifest = getGameActivityNameByManifest();
        return TextUtils.isEmpty(gameActivityNameByManifest) ? getGameActivityNameByDefault() : gameActivityNameByManifest;
    }

    private String getGameActivityNameByManifest() {
        try {
            return getPackageManager().getApplicationInfo(getPackageName(), 128).metaData.getString(KEY_GAME_ACTIVITY);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    private String getGameActivityNameByDefault() {
        try {
            Class.forName("org.cocos2dx.cpp.AppActivity");
            return "org.cocos2dx.cpp.AppActivity";
        } catch (ClassNotFoundException unused) {
            return null;
        }
    }
}
