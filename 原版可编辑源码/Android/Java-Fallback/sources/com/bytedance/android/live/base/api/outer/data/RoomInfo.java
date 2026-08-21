package com.bytedance.android.live.base.api.outer.data;

public class RoomInfo {
    com.bytedance.android.live.base.api.outer.data.City city;
    java.lang.String count;
    java.lang.String cover;
    java.lang.String openRoomId;
    long orientation;
    com.bytedance.android.live.base.api.outer.data.AnchorInfo owner;
    java.lang.String requestId;
    long status;
    java.lang.String title;

    public RoomInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5, com.bytedance.android.live.base.api.outer.data.City r7, long r8, com.bytedance.android.live.base.api.outer.data.AnchorInfo r10, java.lang.String r11) {
            r0 = this;
            r0.<init>()
            r0.openRoomId = r1
            r0.title = r2
            r0.cover = r3
            r0.count = r4
            r0.orientation = r5
            r0.city = r7
            r0.status = r8
            r0.owner = r10
            r0.requestId = r11
            return
    }

    public com.bytedance.android.live.base.api.outer.data.City getCity() {
            r1 = this;
            com.bytedance.android.live.base.api.outer.data.City r0 = r1.city
            return r0
    }

    public java.lang.String getCount() {
            r1 = this;
            java.lang.String r0 = r1.count
            return r0
    }

    public java.lang.String getCover() {
            r1 = this;
            java.lang.String r0 = r1.cover
            return r0
    }

    public java.lang.String getOpenRoomId() {
            r1 = this;
            java.lang.String r0 = r1.openRoomId
            return r0
    }

    public long getOrientation() {
            r2 = this;
            long r0 = r2.orientation
            return r0
    }

    public com.bytedance.android.live.base.api.outer.data.AnchorInfo getOwner() {
            r1 = this;
            com.bytedance.android.live.base.api.outer.data.AnchorInfo r0 = r1.owner
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.requestId
            return r0
    }

    public long getStatus() {
            r2 = this;
            long r0 = r2.status
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.title
            return r0
    }

    public void setCity(com.bytedance.android.live.base.api.outer.data.City r1) {
            r0 = this;
            r0.city = r1
            return
    }

    public void setCount(java.lang.String r1) {
            r0 = this;
            r0.count = r1
            return
    }

    public void setCover(java.lang.String r1) {
            r0 = this;
            r0.cover = r1
            return
    }

    public void setOpenRoomId(java.lang.String r1) {
            r0 = this;
            r0.openRoomId = r1
            return
    }

    public void setOrientation(long r1) {
            r0 = this;
            r0.orientation = r1
            return
    }

    public void setOwner(com.bytedance.android.live.base.api.outer.data.AnchorInfo r1) {
            r0 = this;
            r0.owner = r1
            return
    }

    public void setRequestId(java.lang.String r1) {
            r0 = this;
            r0.requestId = r1
            return
    }

    public void setStatus(long r1) {
            r0 = this;
            r0.status = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return
    }
}
