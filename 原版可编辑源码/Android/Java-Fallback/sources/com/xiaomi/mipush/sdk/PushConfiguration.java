package com.xiaomi.mipush.sdk;

public class PushConfiguration {
    private boolean mGeoEnable;
    private boolean mOpenCOSPush;
    private boolean mOpenFCMPush;
    private boolean mOpenFTOSPush;
    private boolean mOpenHmsPush;
    private com.xiaomi.push.service.module.PushChannelRegion mRegion;

    public class PushConfigurationBuilder {
        private boolean mGeoEnable;
        private boolean mOpenCOSPush;
        private boolean mOpenFCMPush;
        private boolean mOpenFTOSPush;
        private boolean mOpenHmsPush;
        private com.xiaomi.push.service.module.PushChannelRegion mRegion;

        public PushConfigurationBuilder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.xiaomi.push.service.module.PushChannelRegion access$000(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r0) {
                com.xiaomi.push.service.module.PushChannelRegion r0 = r0.mRegion
                return r0
        }

        static boolean access$100(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r0) {
                boolean r0 = r0.mOpenHmsPush
                return r0
        }

        static boolean access$200(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r0) {
                boolean r0 = r0.mOpenFCMPush
                return r0
        }

        static boolean access$300(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r0) {
                boolean r0 = r0.mOpenCOSPush
                return r0
        }

        static boolean access$400(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r0) {
                boolean r0 = r0.mOpenFTOSPush
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration build() {
                r2 = this;
                com.xiaomi.mipush.sdk.PushConfiguration r0 = new com.xiaomi.mipush.sdk.PushConfiguration
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder openCOSPush(boolean r1) {
                r0 = this;
                r0.mOpenCOSPush = r1
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder openFCMPush(boolean r1) {
                r0 = this;
                r0.mOpenFCMPush = r1
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder openFTOSPush(boolean r1) {
                r0 = this;
                r0.mOpenFTOSPush = r1
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder openHmsPush(boolean r1) {
                r0 = this;
                r0.mOpenHmsPush = r1
                return r0
        }

        public com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder region(com.xiaomi.push.service.module.PushChannelRegion r1) {
                r0 = this;
                r0.mRegion = r1
                return r0
        }
    }

    public PushConfiguration() {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.service.module.PushChannelRegion r0 = com.xiaomi.push.service.module.PushChannelRegion.China
            r1.mRegion = r0
            r0 = 0
            r1.mOpenHmsPush = r0
            r1.mOpenFCMPush = r0
            r1.mOpenCOSPush = r0
            r1.mOpenFTOSPush = r0
            return
    }

    private PushConfiguration(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r2) {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.service.module.PushChannelRegion r0 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$000(r2)
            if (r0 != 0) goto Lc
            com.xiaomi.push.service.module.PushChannelRegion r0 = com.xiaomi.push.service.module.PushChannelRegion.China
            goto L10
        Lc:
            com.xiaomi.push.service.module.PushChannelRegion r0 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$000(r2)
        L10:
            r1.mRegion = r0
            boolean r0 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$100(r2)
            r1.mOpenHmsPush = r0
            boolean r0 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$200(r2)
            r1.mOpenFCMPush = r0
            boolean r0 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$300(r2)
            r1.mOpenCOSPush = r0
            boolean r2 = com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder.access$400(r2)
            r1.mOpenFTOSPush = r2
            return
    }

    PushConfiguration(com.xiaomi.mipush.sdk.PushConfiguration.PushConfigurationBuilder r1, com.xiaomi.mipush.sdk.ah r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public boolean getOpenCOSPush() {
            r1 = this;
            boolean r0 = r1.mOpenCOSPush
            return r0
    }

    public boolean getOpenFCMPush() {
            r1 = this;
            boolean r0 = r1.mOpenFCMPush
            return r0
    }

    public boolean getOpenFTOSPush() {
            r1 = this;
            boolean r0 = r1.mOpenFTOSPush
            return r0
    }

    public boolean getOpenHmsPush() {
            r1 = this;
            boolean r0 = r1.mOpenHmsPush
            return r0
    }

    public com.xiaomi.push.service.module.PushChannelRegion getRegion() {
            r1 = this;
            com.xiaomi.push.service.module.PushChannelRegion r0 = r1.mRegion
            return r0
    }

    public void setOpenCOSPush(boolean r1) {
            r0 = this;
            r0.mOpenCOSPush = r1
            return
    }

    public void setOpenFCMPush(boolean r1) {
            r0 = this;
            r0.mOpenFCMPush = r1
            return
    }

    public void setOpenFTOSPush(boolean r1) {
            r0 = this;
            r0.mOpenFTOSPush = r1
            return
    }

    public void setOpenHmsPush(boolean r1) {
            r0 = this;
            r0.mOpenHmsPush = r1
            return
    }

    public void setRegion(com.xiaomi.push.service.module.PushChannelRegion r1) {
            r0 = this;
            r0.mRegion = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = "PushConfiguration{"
            r0.<init>(r1)
            java.lang.String r1 = "Region:"
            r0.append(r1)
            com.xiaomi.push.service.module.PushChannelRegion r1 = r3.mRegion
            if (r1 != 0) goto L13
            java.lang.String r1 = "null"
            goto L17
        L13:
            java.lang.String r1 = r1.name()
        L17:
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ",mOpenHmsPush:"
            r1.append(r2)
            boolean r2 = r3.mOpenHmsPush
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ",mOpenFCMPush:"
            r1.append(r2)
            boolean r2 = r3.mOpenFCMPush
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ",mOpenCOSPush:"
            r1.append(r2)
            boolean r2 = r3.mOpenCOSPush
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ",mOpenFTOSPush:"
            r1.append(r2)
            boolean r2 = r3.mOpenFTOSPush
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
