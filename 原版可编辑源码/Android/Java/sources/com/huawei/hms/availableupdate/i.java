package com.huawei.hms.availableupdate;

import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.meizu.cloud.pushsdk.constants.PushConstants;

public final class i {
    public static String a(int i) {
        if (i == 1000) {
            return "CHECK_OK";
        }
        if (i == 2000) {
            return "DOWNLOAD_SUCCESS";
        }
        if (i == 2100) {
            return "DOWNLOADING";
        }
        if (i == 2101) {
            return "DOWNLOAD_CANCELED";
        }
        switch (i) {
            case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE:
                return "CHECK_FAILURE";
            case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEUTRAL:
                return "CHECK_NO_UPDATE";
            case SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEGATIVE:
                return "CHECK_NO_SUPPORTED";
            default:
                switch (i) {
                    case PushConstants.ON_TIME_NOTIFICATION:
                        return "DOWNLOAD_FAILURE";
                    case 2202:
                        return "DOWNLOAD_HASH_ERROR";
                    case YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL:
                        return "DOWNLOAD_NO_SPACE";
                    case YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS:
                        return "DOWNLOAD_NO_STORAGE";
                    default:
                        return "UNKNOWN - " + i;
                }
        }
    }
}
