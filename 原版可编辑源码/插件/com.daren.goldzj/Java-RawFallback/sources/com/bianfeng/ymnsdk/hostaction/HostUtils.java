package com.bianfeng.ymnsdk.hostaction;

public class HostUtils {
    public HostUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getChance(int r2) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 9999(0x270f, float:1.4012E-41)
            int r0 = r0.nextInt(r1)
            if (r0 < 0) goto L11
            if (r0 >= r2) goto L11
            r2 = 1
            return r2
        L11:
            r2 = 0
            return r2
    }

    public static java.lang.String getSign(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sdk_id="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app_id="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "package_id="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "channel_id="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()
            java.lang.String r2 = md5(r2, r3, r4, r5, r0)
            return r2
    }

    public static boolean judgeHost(java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r5, java.lang.String r6) {
            java.lang.Object r5 = r5.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r5 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r5
            int r6 = r5.getIs_mandatory()
            int r0 = r5.getRequested_success_times()
            java.util.List r1 = r5.getRequestEntityList()
            r2 = 2
            java.lang.Object r1 = r1.get(r2)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r1
            int r1 = r1.getRequest_times()
            boolean r2 = r5.isFormal_can_useful()
            boolean r3 = r5.isSpare_can_useful()
            r4 = 1
            if (r6 != r4) goto L2b
            if (r3 == 0) goto L2b
            return r4
        L2b:
            r6 = 0
            if (r2 == 0) goto L2f
            return r6
        L2f:
            if (r3 == 0) goto L55
            if (r0 <= r1) goto L54
            java.util.List r0 = r5.getRequestEntityList()
            java.lang.Object r0 = r0.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.setCan_useful(r4)
            java.util.List r0 = r5.getRequestEntityList()
            java.lang.Object r0 = r0.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r0
            r0.setCan_useful(r4)
            r5.setFormal_can_useful(r4)
            r5.setRequested_success_times(r6)
            return r6
        L54:
            return r4
        L55:
            return r6
    }

    private static java.lang.String md5(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "&"
            r1.append(r3)
            r1.append(r5)
            r1.append(r3)
            r1.append(r4)
            r1.append(r3)
            r1.append(r2)
            r1.append(r3)
            r1.append(r6)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r2 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.lang.String r3 = r0.toString()
            java.lang.String r2 = r2.md5(r3)
            return r2
    }
}
