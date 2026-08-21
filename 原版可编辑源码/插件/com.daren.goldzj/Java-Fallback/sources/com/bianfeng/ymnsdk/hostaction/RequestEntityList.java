package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.ArrayList;
import java.util.List;

public class RequestEntityList {
    private boolean formal_can_useful;
    private int formal_index;
    private int is_mandatory;
    private List<RequestEntity> requestEntityList;
    private int requested_fail_times;
    private int requested_success_times;
    private boolean spare_can_useful;
    private int spare_index;

    public RequestEntityList() {
        this.requested_success_times = 0;
        this.requested_fail_times = 0;
        this.requestEntityList = new ArrayList();
        this.formal_can_useful = true;
        this.spare_can_useful = true;
    }

    public int getFormal_index() {
        return this.formal_index;
    }

    public int getIs_mandatory() {
        return this.is_mandatory;
    }

    public List<RequestEntity> getRequestEntityList() {
        return this.requestEntityList;
    }

    public int getRequested_fail_times() {
        return this.requested_fail_times;
    }

    public int getRequested_success_times() {
        return this.requested_success_times;
    }

    public int getSpare_index() {
        return this.spare_index;
    }

    public boolean isFormal_can_useful() {
        return this.formal_can_useful;
    }

    public boolean isSpare_can_useful() {
        return this.spare_can_useful;
    }

    public void resetUseable() {
        int r1 = 0;
    L4:
        if (r1 >= this.requestEntityList.size()) goto L6;
        this.requestEntityList.get(r1).setCan_useful(true);
        r1 = r1 + 1;
        goto L4
    L6:
        this.formal_can_useful = true;
        this.spare_can_useful = true;
        this.requested_success_times = 0;
        this.requested_fail_times = 0;
    }

    public void setFormal_can_useful(boolean r1) {
        this.formal_can_useful = r1;
    }

    public void setFormal_index(int r1) {
        this.formal_index = r1;
    }

    public void setIs_mandatory(int r1) {
        this.is_mandatory = r1;
    }

    public void setRequestEntityList(List<RequestEntity> r1) {
        this.requestEntityList = r1;
    }

    public void setRequested_fail_times(int r1) {
        this.requested_fail_times = r1;
    }

    public void setRequested_success_times(int r1) {
        this.requested_success_times = r1;
    }

    public void setSpare_can_useful(boolean r1) {
        this.spare_can_useful = r1;
    }

    public void setSpare_index(int r1) {
        this.spare_index = r1;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
