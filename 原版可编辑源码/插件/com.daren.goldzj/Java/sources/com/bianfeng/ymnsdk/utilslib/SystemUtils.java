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

    public static String getRandom(int i) {
        String str = "";
        for (int i2 = 0; i2 < i; i2++) {
            str = str + String.valueOf((int) (Math.random() * 10.0d));
        }
        return str;
    }

    public static String getRFC3339(Long l) throws YmnException {
        try {
            return new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ").format(l);
        } catch (Exception e) {
            UtilsLogger.i("RFC3339:" + e.getMessage());
            throw new YmnException(e);
        }
    }

    public static String createTransactionId() {
        String uuid = DeviceInfo.getInstance().getUuid();
        String strMd5 = Md5Utils.md5(DeviceInfo.getInstance().getDeviceId() + uuid + System.currentTimeMillis() + getRandom(3));
        return TextUtils.isEmpty(strMd5) ? uuid : strMd5;
    }
}
