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

    public static String getRandom(int digit) {
        String strRand = "";
        for (int i = 0; i < digit; i++) {
            strRand = strRand + String.valueOf((int) (Math.random() * 10.0d));
        }
        return strRand;
    }

    public static String getRFC3339(Long time) throws YmnException {
        try {
            return new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ").format(time);
        } catch (Exception e) {
            UtilsLogger.i("RFC3339:" + e.getMessage());
            throw new YmnException(e);
        }
    }

    public static String createTransactionId() {
        String uuid = DeviceInfo.getInstance().getUuid();
        String id = Md5Utils.md5(DeviceInfo.getInstance().getDeviceId() + uuid + System.currentTimeMillis() + getRandom(3));
        if (TextUtils.isEmpty(id)) {
            return uuid;
        }
        return id;
    }
}
