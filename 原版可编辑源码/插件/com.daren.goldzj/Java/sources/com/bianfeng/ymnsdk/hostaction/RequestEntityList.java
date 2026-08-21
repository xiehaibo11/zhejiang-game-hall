package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.ArrayList;
import java.util.List;

public class RequestEntityList {
    private int formal_index;
    private int is_mandatory;
    private int spare_index;
    private int requested_success_times = 0;
    private int requested_fail_times = 0;
    private List<RequestEntity> requestEntityList = new ArrayList();
    private boolean formal_can_useful = true;
    private boolean spare_can_useful = true;

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
        for (int i = 0; i < this.requestEntityList.size(); i++) {
            this.requestEntityList.get(i).setCan_useful(true);
        }
        this.formal_can_useful = true;
        this.spare_can_useful = true;
        this.requested_success_times = 0;
        this.requested_fail_times = 0;
    }

    public void setFormal_can_useful(boolean z) {
        this.formal_can_useful = z;
    }

    public void setFormal_index(int i) {
        this.formal_index = i;
    }

    public void setIs_mandatory(int i) {
        this.is_mandatory = i;
    }

    public void setRequestEntityList(List<RequestEntity> list) {
        this.requestEntityList = list;
    }

    public void setRequested_fail_times(int i) {
        this.requested_fail_times = i;
    }

    public void setRequested_success_times(int i) {
        this.requested_success_times = i;
    }

    public void setSpare_can_useful(boolean z) {
        this.spare_can_useful = z;
    }

    public void setSpare_index(int i) {
        this.spare_index = i;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }
}
