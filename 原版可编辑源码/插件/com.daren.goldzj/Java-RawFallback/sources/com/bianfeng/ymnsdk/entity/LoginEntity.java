package com.bianfeng.ymnsdk.entity;

public class LoginEntity {
    private int app_id;
    private int channel;
    private int package_id;
    private int platform_id;
    private java.lang.String third_data;

    public static class ThirdDataBean {
        private java.lang.String session;
        private java.lang.String uid;
        private java.lang.String uname;

        public ThirdDataBean(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.uid = r1
                r0.uname = r2
                r0.session = r3
                return
        }

        public java.lang.String getSession() {
                r1 = this;
                java.lang.String r0 = r1.session
                return r0
        }

        public java.lang.String getUid() {
                r1 = this;
                java.lang.String r0 = r1.uid
                return r0
        }

        public java.lang.String getUname() {
                r1 = this;
                java.lang.String r0 = r1.uname
                return r0
        }

        public void setSession(java.lang.String r1) {
                r0 = this;
                r0.session = r1
                return
        }

        public void setUid(java.lang.String r1) {
                r0 = this;
                r0.uid = r1
                return
        }

        public void setUname(java.lang.String r1) {
                r0 = this;
                r0.uname = r1
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
                return r0
        }
    }

    public LoginEntity(int r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.app_id = r1
            r0.package_id = r2
            r0.platform_id = r3
            r0.getChannelToInt()
            r0.third_data = r4
            return
    }

    private void getChannelToInt() {
            r2 = this;
            r0 = 0
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.getChannelId()     // Catch: java.lang.Exception -> L19
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L19
            if (r1 == 0) goto Le
            r2.channel = r0     // Catch: java.lang.Exception -> L19
            goto L1f
        Le:
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.getChannelId()     // Catch: java.lang.Exception -> L19
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L19
            r2.channel = r1     // Catch: java.lang.Exception -> L19
            goto L1f
        L19:
            r1 = move-exception
            r1.printStackTrace()
            r2.channel = r0
        L1f:
            return
    }

    public int getApp_id() {
            r1 = this;
            int r0 = r1.app_id
            return r0
    }

    public int getChannel() {
            r1 = this;
            int r0 = r1.channel
            return r0
    }

    public int getPackage_id() {
            r1 = this;
            int r0 = r1.package_id
            return r0
    }

    public int getPlatform_id() {
            r1 = this;
            int r0 = r1.platform_id
            return r0
    }

    public java.lang.String getThird_data() {
            r1 = this;
            java.lang.String r0 = r1.third_data
            return r0
    }

    public void setApp_id(int r1) {
            r0 = this;
            r0.app_id = r1
            return
    }

    public void setChannel(int r1) {
            r0 = this;
            r0.channel = r1
            return
    }

    public void setPackage_id(int r1) {
            r0 = this;
            r0.package_id = r1
            return
    }

    public void setPlatform_id(int r1) {
            r0 = this;
            r0.platform_id = r1
            return
    }

    public void setThird_data(java.lang.String r1) {
            r0 = this;
            r0.third_data = r1
            return
    }

    public java.lang.String toString() {
            r6 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getLoginTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "V2&"
            r2.append(r3)
            int r3 = r6.app_id
            r2.append(r3)
            java.lang.String r3 = "&"
            r2.append(r3)
            int r4 = r6.package_id
            r2.append(r4)
            r2.append(r3)
            int r4 = r6.platform_id
            r2.append(r4)
            r2.append(r3)
            int r4 = r6.channel
            r2.append(r4)
            r2.append(r3)
            java.lang.String r4 = r6.third_data
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r2 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            r4.<init>()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            r4.append(r1)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            java.lang.String r5 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppKey()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            r4.append(r5)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            java.lang.String r4 = r4.toString()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            java.lang.String r2 = r2.md5(r4)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5e
            goto L60
        L5e:
            java.lang.String r2 = ""
        L60:
            r1.append(r3)
            r1.append(r2)
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
