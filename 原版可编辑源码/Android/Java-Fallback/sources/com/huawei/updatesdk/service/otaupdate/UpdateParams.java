package com.huawei.updatesdk.service.otaupdate;

public class UpdateParams {
    private boolean isShowImmediate;
    private int minIntervalDay;
    private boolean mustBtnOne;
    private java.util.List<java.lang.String> packageList;
    private java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> paramList;
    private java.lang.String serviceZone;
    private java.lang.String targetPkgName;

    public static final class Builder {
        private boolean isShowImmediate;
        private int minIntervalDay;
        private boolean mustBtnOne;
        private java.util.List<java.lang.String> packageList;
        private java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> paramList;
        private java.lang.String serviceZone;
        private java.lang.String targetPkgName;

        public Builder() {
                r1 = this;
                r1.<init>()
                com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
                java.lang.String r0 = r0.b()
                r1.serviceZone = r0
                return
        }

        static java.lang.String access$000(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                java.lang.String r0 = r0.serviceZone
                return r0
        }

        static java.lang.String access$100(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                java.lang.String r0 = r0.targetPkgName
                return r0
        }

        static boolean access$200(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                boolean r0 = r0.isShowImmediate
                return r0
        }

        static int access$300(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                int r0 = r0.minIntervalDay
                return r0
        }

        static boolean access$400(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                boolean r0 = r0.mustBtnOne
                return r0
        }

        static java.util.List access$500(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                java.util.List<java.lang.String> r0 = r0.packageList
                return r0
        }

        static java.util.List access$600(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r0) {
                java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> r0 = r0.paramList
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams build() {
                r2 = this;
                com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = new com.huawei.updatesdk.service.otaupdate.UpdateParams
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setIsShowImmediate(boolean r1) {
                r0 = this;
                r0.isShowImmediate = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setMinIntervalDay(int r1) {
                r0 = this;
                r0.minIntervalDay = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setMustBtnOne(boolean r1) {
                r0 = this;
                r0.mustBtnOne = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setPackageList(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.packageList = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setParamList(java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> r1) {
                r0 = this;
                r0.paramList = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setServiceZone(java.lang.String r1) {
                r0 = this;
                r0.serviceZone = r1
                return r0
        }

        public com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder setTargetPkgName(java.lang.String r1) {
                r0 = this;
                r0.targetPkgName = r1
                return r0
        }
    }

    static class a {
    }

    private UpdateParams(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isShowImmediate = r0
            r1.minIntervalDay = r0
            r1.mustBtnOne = r0
            java.lang.String r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$000(r2)
            r1.serviceZone = r0
            java.lang.String r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$100(r2)
            r1.targetPkgName = r0
            boolean r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$200(r2)
            r1.isShowImmediate = r0
            int r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$300(r2)
            r1.minIntervalDay = r0
            boolean r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$400(r2)
            r1.mustBtnOne = r0
            java.util.List r0 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$500(r2)
            r1.packageList = r0
            java.util.List r2 = com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder.access$600(r2)
            r1.paramList = r2
            return
    }

    UpdateParams(com.huawei.updatesdk.service.otaupdate.UpdateParams.Builder r1, com.huawei.updatesdk.service.otaupdate.UpdateParams.a r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public int getMinIntervalDay() {
            r1 = this;
            int r0 = r1.minIntervalDay
            return r0
    }

    public java.util.List<java.lang.String> getPackageList() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.packageList
            return r0
    }

    public java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> getParamList() {
            r1 = this;
            java.util.List<com.huawei.updatesdk.service.appmgr.bean.Param> r0 = r1.paramList
            return r0
    }

    public java.lang.String getServiceZone() {
            r1 = this;
            java.lang.String r0 = r1.serviceZone
            return r0
    }

    public java.lang.String getTargetPkgName() {
            r1 = this;
            java.lang.String r0 = r1.targetPkgName
            return r0
    }

    public boolean isMustBtnOne() {
            r1 = this;
            boolean r0 = r1.mustBtnOne
            return r0
    }

    public boolean isShowImmediate() {
            r1 = this;
            boolean r0 = r1.isShowImmediate
            return r0
    }

    public void resetParamList() {
            r1 = this;
            r0 = 0
            r1.paramList = r0
            return
    }
}
