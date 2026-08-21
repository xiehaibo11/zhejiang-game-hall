package com.bianfeng.ymnsdk.utilslib;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;
import java.text.SimpleDateFormat;

public class SystemUtils {
    protected SystemUtils() {
    }

    public static String getRandom(int r7) {
        String r0 = "";
        int r1 = 0;
    L3:
        if (r1 >= r7) goto L5;
        r0 = r0 + String.valueOf((int) (Math.random() * 10.0d));
        r1 = r1 + 1;
        goto L3
    L5:
        return r0;
    }

    public static String getRFC3339(Long r2) throws YmnException {
        return new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ").format(r2);
    L4:
        e = move-exception;
        UtilsLogger.i("RFC3339:" + e.getMessage());
        throw new YmnException(e);
    }

    public static String createTransactionId() {
        String r0 = DeviceInfo.getInstance().getUuid();
        String r1 = Md5Utils.md5(DeviceInfo.getInstance().getDeviceId() + r0 + System.currentTimeMillis() + getRandom(3));
        if (TextUtils.isEmpty(r1) == false) goto L6;
        return r0;
    L6:
        return r1;
    }
}
