package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.util.Map;
import java.util.Random;

public class HostUtils {
    public static boolean getChance(int i) {
        int iNextInt = new Random().nextInt(HostConstant.MAXBOUND);
        return iNextInt >= 0 && iNextInt < i;
    }

    public static String getSign(String str, String str2, String str3, String str4) throws YmnsdkException {
        return md5("sdk_id=" + str, "app_id=" + str2, "package_id=" + str3, "channel_id=" + str4, YmnAppContext.getSdkAppKey());
    }

    public static boolean judgeHost(Map<String, RequestEntityList> map, String str) {
        RequestEntityList requestEntityList = map.get(str);
        int is_mandatory = requestEntityList.getIs_mandatory();
        int requested_success_times = requestEntityList.getRequested_success_times();
        int request_times = requestEntityList.getRequestEntityList().get(2).getRequest_times();
        boolean zIsFormal_can_useful = requestEntityList.isFormal_can_useful();
        boolean zIsSpare_can_useful = requestEntityList.isSpare_can_useful();
        if (is_mandatory == 1 && zIsSpare_can_useful) {
            return true;
        }
        if (zIsFormal_can_useful || !zIsSpare_can_useful) {
            return false;
        }
        if (requested_success_times <= request_times) {
            return true;
        }
        requestEntityList.getRequestEntityList().get(0).setCan_useful(true);
        requestEntityList.getRequestEntityList().get(1).setCan_useful(true);
        requestEntityList.setFormal_can_useful(true);
        requestEntityList.setRequested_success_times(0);
        return false;
    }

    private static String md5(String str, String str2, String str3, String str4, String str5) throws YmnsdkException {
        return SecurityUtil.getInstance().md5(new StringBuilder(str2 + "&" + str4 + "&" + str3 + "&" + str + "&" + str5).toString());
    }
}
