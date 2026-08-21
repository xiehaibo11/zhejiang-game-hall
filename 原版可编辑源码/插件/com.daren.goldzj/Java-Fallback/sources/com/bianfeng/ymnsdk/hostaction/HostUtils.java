package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.util.Map;
import java.util.Random;

public class HostUtils {
    public HostUtils() {
    }

    public static boolean getChance(int r2) {
        int r0 = new Random().nextInt(HostConstant.MAXBOUND);
        if (r0 < 0) goto L7;
        if (r0 >= r2) goto L9;
        return true;
    L9:
        return false;
    L7:
        return false;
    }

    public static String getSign(String r2, String r3, String r4, String r5) throws YmnsdkException {
        return md5("sdk_id=" + r2, "app_id=" + r3, "package_id=" + r4, "channel_id=" + r5, YmnAppContext.getSdkAppKey());
    }

    public static boolean judgeHost(Map<String, RequestEntityList> r5, String r6) {
        RequestEntityList r52 = r5.get(r6);
        int r62 = r52.getIs_mandatory();
        int r0 = r52.getRequested_success_times();
        int r1 = r52.getRequestEntityList().get(2).getRequest_times();
        boolean r2 = r52.isFormal_can_useful();
        boolean r3 = r52.isSpare_can_useful();
        if (r62 != 1) goto L7;
        if (r3 == false) goto L7;
        return true;
    L7:
        if (r2 == false) goto L9;
        return false;
    L9:
        if (r3 == false) goto L14;
        if (r0 <= r1) goto L13;
        r52.getRequestEntityList().get(0).setCan_useful(true);
        r52.getRequestEntityList().get(1).setCan_useful(true);
        r52.setFormal_can_useful(true);
        r52.setRequested_success_times(0);
        return false;
    L13:
        return true;
    L14:
        return false;
    }

    private static String md5(String r2, String r3, String r4, String r5, String r6) throws YmnsdkException {
        return SecurityUtil.getInstance().md5(new StringBuilder(r3 + "&" + r5 + "&" + r4 + "&" + r2 + "&" + r6).toString());
    }
}
