package com.bianfeng.utilslib;

import android.app.Activity;
import android.os.Build;
import com.heytap.mcssdk.constant.MessageConstant;
import com.xiaomi.mipush.sdk.Constants;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class SystemUtil {
    private static SystemUtil util;

    private SystemUtil() {
    }

    public static SystemUtil getInstance() {
        if (util == null) {
            util = new SystemUtil();
        }
        return util;
    }

    public String getSystemCurrentTime() {
        return System.currentTimeMillis() + "";
    }

    public void hideVirtualKey(Activity activity) {
        if (Build.VERSION.SDK_INT > 11 && Build.VERSION.SDK_INT < 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(8);
        } else if (Build.VERSION.SDK_INT >= 19) {
            activity.getWindow().getDecorView().setSystemUiVisibility(MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM);
        }
    }

    public static String createTransactionId() {
        return SignMd5Utils.getInstance().md5(getUuid() + System.currentTimeMillis() + getRandom(3));
    }

    private static String getUuid() {
        return UUID.randomUUID().toString().replaceAll(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
    }

    public static String getRandom(int i) {
        String str = "";
        for (int i2 = 0; i2 < i; i2++) {
            str = str + String.valueOf((int) (Math.random() * 10.0d));
        }
        return str;
    }
}
