package com.bianfeng.ymnsdk.hostaction;

public class RequestEntityList {
    private boolean formal_can_useful;
    private int formal_index;
    private int is_mandatory;
    private java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> requestEntityList;
    private int requested_fail_times;
    private int requested_success_times;
    private boolean spare_can_useful;
    private int spare_index;

    public RequestEntityList() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.requested_success_times = r0
            r1.requested_fail_times = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.requestEntityList = r0
            r0 = 1
            r1.formal_can_useful = r0
            r1.spare_can_useful = r0
            return
    }

    public int getFormal_index() {
            r1 = this;
            int r0 = r1.formal_index
            return r0
    }

    public int getIs_mandatory() {
            r1 = this;
            int r0 = r1.is_mandatory
            return r0
    }

    public java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> getRequestEntityList() {
            r1 = this;
            java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> r0 = r1.requestEntityList
            return r0
    }

    public int getRequested_fail_times() {
            r1 = this;
            int r0 = r1.requested_fail_times
            return r0
    }

    public int getRequested_success_times() {
            r1 = this;
            int r0 = r1.requested_success_times
            return r0
    }

    public int getSpare_index() {
            r1 = this;
            int r0 = r1.spare_index
            return r0
    }

    public boolean isFormal_can_useful() {
            r1 = this;
            boolean r0 = r1.formal_can_useful
            return r0
    }

    public boolean isSpare_can_useful() {
            r1 = this;
            boolean r0 = r1.spare_can_useful
            return r0
    }

    public void resetUseable() {
            r3 = this;
            r0 = 0
        L1:
            java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> r1 = r3.requestEntityList
            int r1 = r1.size()
            r2 = 1
            if (r0 >= r1) goto L18
            java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> r1 = r3.requestEntityList
            java.lang.Object r1 = r1.get(r0)
            com.bianfeng.ymnsdk.hostaction.RequestEntity r1 = (com.bianfeng.ymnsdk.hostaction.RequestEntity) r1
            r1.setCan_useful(r2)
            int r0 = r0 + 1
            goto L1
        L18:
            r3.formal_can_useful = r2
            r3.spare_can_useful = r2
            r0 = 0
            r3.requested_success_times = r0
            r3.requested_fail_times = r0
            return
    }

    public void setFormal_can_useful(boolean r1) {
            r0 = this;
            r0.formal_can_useful = r1
            return
    }

    public void setFormal_index(int r1) {
            r0 = this;
            r0.formal_index = r1
            return
    }

    public void setIs_mandatory(int r1) {
            r0 = this;
            r0.is_mandatory = r1
            return
    }

    public void setRequestEntityList(java.util.List<com.bianfeng.ymnsdk.hostaction.RequestEntity> r1) {
            r0 = this;
            r0.requestEntityList = r1
            return
    }

    public void setRequested_fail_times(int r1) {
            r0 = this;
            r0.requested_fail_times = r1
            return
    }

    public void setRequested_success_times(int r1) {
            r0 = this;
            r0.requested_success_times = r1
            return
    }

    public void setSpare_can_useful(boolean r1) {
            r0 = this;
            r0.spare_can_useful = r1
            return
    }

    public void setSpare_index(int r1) {
            r0 = this;
            r0.spare_index = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
