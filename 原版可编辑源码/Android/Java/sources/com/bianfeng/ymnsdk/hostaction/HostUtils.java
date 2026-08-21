package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.util.Map;
import java.util.Random;

public class HostUtils {
    public static boolean judgeHost(Map<String, RequestEntityList> hostMap, String type) {
        RequestEntityList requestEntityList = hostMap.get(type);
        int is_mandatory = requestEntityList.getIs_mandatory();
        int requested_times = requestEntityList.getRequested_success_times();
        int request_times = requestEntityList.getRequestEntityList().get(2).getRequest_times();
        boolean formal_can_useful = requestEntityList.isFormal_can_useful();
        boolean spare_can_useful = requestEntityList.isSpare_can_useful();
        if (is_mandatory == 1 && spare_can_useful) {
            return true;
        }
        if (formal_can_useful || !spare_can_useful) {
            return false;
        }
        if (requested_times > request_times) {
            requestEntityList.getRequestEntityList().get(0).setCan_useful(true);
            requestEntityList.getRequestEntityList().get(1).setCan_useful(true);
            requestEntityList.setFormal_can_useful(true);
            requestEntityList.setRequested_success_times(0);
            return false;
        }
        return true;
    }

    public static boolean getChance(int percentage) {
        Random random = new Random();
        int i = random.nextInt(HostConstant.MAXBOUND);
        if (i >= 0 && i < percentage) {
            return true;
        }
        return false;
    }

    public static String getSign(String sdk_id, String app_id, String package_id, String channel_id) throws YmnsdkException {
        String resSign = md5("sdk_id=" + sdk_id, "app_id=" + app_id, "package_id=" + package_id, "channel_id=" + channel_id, YmnAppContext.getSdkAppKey());
        return resSign;
    }

    private static String md5(String sdk_id, String app_id, String package_id, String channel_id, String resSign) throws YmnsdkException {
        StringBuilder sb = new StringBuilder(app_id + "&" + channel_id + "&" + package_id + "&" + sdk_id + "&" + resSign);
        return SecurityUtil.getInstance().md5(sb.toString());
    }
}
