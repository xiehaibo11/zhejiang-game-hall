package com.bianfeng.ymnsdk.hostaction;

import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class RequestEntityList {
    private int formal_index;
    private int is_mandatory;
    private int spare_index;
    private int requested_success_times = 0;
    private int requested_fail_times = 0;
    private List<RequestEntity> requestEntityList = new ArrayList();
    private boolean formal_can_useful = true;
    private boolean spare_can_useful = true;

    public int getRequested_success_times() {
        return this.requested_success_times;
    }

    public void setRequested_success_times(int requested_success_times) {
        this.requested_success_times = requested_success_times;
    }

    public int getRequested_fail_times() {
        return this.requested_fail_times;
    }

    public void setRequested_fail_times(int requested_fail_times) {
        this.requested_fail_times = requested_fail_times;
    }

    public int getIs_mandatory() {
        return this.is_mandatory;
    }

    public void setIs_mandatory(int is_mandatory) {
        this.is_mandatory = is_mandatory;
    }

    public int getFormal_index() {
        return this.formal_index;
    }

    public void setFormal_index(int formal_index) {
        this.formal_index = formal_index;
    }

    public int getSpare_index() {
        return this.spare_index;
    }

    public void setSpare_index(int spare_index) {
        this.spare_index = spare_index;
    }

    public List<RequestEntity> getRequestEntityList() {
        return this.requestEntityList;
    }

    public void setRequestEntityList(List<RequestEntity> requestEntityList) {
        this.requestEntityList = requestEntityList;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }

    public boolean isFormal_can_useful() {
        return this.formal_can_useful;
    }

    public void setFormal_can_useful(boolean formal_can_useful) {
        this.formal_can_useful = formal_can_useful;
    }

    public boolean isSpare_can_useful() {
        return this.spare_can_useful;
    }

    public void setSpare_can_useful(boolean spare_can_useful) {
        this.spare_can_useful = spare_can_useful;
    }

    public void resetUseable() {
        for (int i = 0; i < this.requestEntityList.size(); i++) {
            RequestEntity entity = this.requestEntityList.get(i);
            entity.setCan_useful(true);
        }
        this.formal_can_useful = true;
        this.spare_can_useful = true;
        this.requested_success_times = 0;
        this.requested_fail_times = 0;
    }
}
