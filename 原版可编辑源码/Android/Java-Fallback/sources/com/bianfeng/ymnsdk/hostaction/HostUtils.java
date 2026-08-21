package com.bianfeng.ymnsdk.hostaction;

public class HostUtils {
    public HostUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getChance(int r3) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 9999(0x270f, float:1.4012E-41)
            int r1 = r0.nextInt(r1)
            if (r1 < 0) goto L11
            if (r1 >= r3) goto L11
            r2 = 1
            return r2
        L11:
            r2 = 0
            return r2
    }

    public static java.lang.String getSign(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sdk_id="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "app_id="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "package_id="
            r2.append(r3)
            r2.append(r7)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "channel_id="
            r3.append(r4)
            r3.append(r8)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()
            java.lang.String r0 = md5(r0, r1, r2, r3, r4)
            return r0
    }

    public static boolean judgeHost(java.util.Map<java.lang.String, com.bianfeng.ymnsdk.hostaction.RequestEntityList> r9, java.lang.String r10) {
            java.lang.Object r0 = r9.get(r10)
            com.bianfeng.ymnsdk.hostaction.RequestEntityList r0 = (com.bianfeng.ymnsdk.hostaction.RequestEntityList) r0
            int r1 = r0.getIs_mandatory()
            int r2 = r0.getRequested_success_times()
            java.util.List r3 = r0.getRequestEntityList()
            r4 = 2
            java.lang.Object r3 = r3.get(r4)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r3 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r3
            int r3 = r3.getRequest_times()
            boolean r4 = r0.isFormal_can_useful()
            boolean r5 = r0.isSpare_can_useful()
            r6 = 1
            if (r1 != r6) goto L2b
            if (r5 == 0) goto L2b
            return r6
        L2b:
            r7 = 0
            if (r4 == 0) goto L2f
            return r7
        L2f:
            if (r5 == 0) goto L55
            if (r2 <= r3) goto L54
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r7)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            r8.setCan_useful(r6)
            java.util.List r8 = r0.getRequestEntityList()
            java.lang.Object r8 = r8.get(r6)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r8 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r8
            r8.setCan_useful(r6)
            r0.setFormal_can_useful(r6)
            r0.setRequested_success_times(r7)
            return r7
        L54:
            return r6
        L55:
            return r7
    }

    private static java.lang.String md5(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "&"
            r1.append(r2)
            r1.append(r6)
            r1.append(r2)
            r1.append(r5)
            r1.append(r2)
            r1.append(r3)
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.lang.String r2 = r0.toString()
            java.lang.String r1 = r1.md5(r2)
            return r1
    }
}
