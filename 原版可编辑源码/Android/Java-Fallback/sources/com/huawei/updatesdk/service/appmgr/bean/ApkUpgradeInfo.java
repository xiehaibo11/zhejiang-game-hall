package com.huawei.updatesdk.service.appmgr.bean;

public class ApkUpgradeInfo extends com.huawei.updatesdk.a.b.c.c.b implements java.io.Serializable, android.os.Parcelable {
    public static final int APP_MUST_UPDATE = 1;
    public static final android.os.Parcelable.Creator<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> CREATOR = null;
    public static final int HUAWEI_OFFICIAL_APP = 1;
    public static final int NOT_AUTOUPDATE = 0;
    private static final java.lang.String TAG = "ApkUpgradeInfo";
    public static final int UPGRADE_SAME_SIGNATURE = 0;
    private static final long serialVersionUID = 136275377334431721L;
    private long bundleSize_;
    private java.lang.String detailId_;
    private int devType_;
    private java.lang.String diffDownUrl;
    private java.lang.String diffSha2_;
    private int diffSize_;
    private java.lang.String downurl_;
    private java.lang.String fullDownUrl_;
    private java.lang.String icon_;
    private java.lang.String id_;
    private int isAutoUpdate_;
    private int isCompulsoryUpdate_;
    private int maple_;
    private java.lang.String name_;
    private java.lang.String newFeatures_;
    private java.lang.String notRcmReason_;
    private long obbSize_;
    private int oldVersionCode_;
    private java.lang.String oldVersionName_;
    private java.lang.String package_;
    private int packingType_;
    private java.lang.String releaseDateDesc_;
    private java.lang.String releaseDate_;
    private int sameS_;
    private java.lang.String sha256_;
    private long size_;
    private int state_;
    private int versionCode_;
    private java.lang.String version_;

    static class a implements android.os.Parcelable.Creator<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo createFromParcel(android.os.Parcel r2) {
                r1 = this;
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r0 = new com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo
                r0.<init>(r2)
                return r0
        }

        @Override
        public com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo[] newArray(int r1) {
                r0 = this;
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo[] r1 = new com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo[r1]
                return r1
        }

        @Override
        public com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo[] newArray(int r1) {
                r0 = this;
                com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo$a r0 = new com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo$a
            r0.<init>()
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo.CREATOR = r0
            return
    }

    public ApkUpgradeInfo() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.sameS_ = r0
            r1 = 2
            r2.state_ = r1
            r2.isAutoUpdate_ = r0
            r2.isCompulsoryUpdate_ = r0
            r2.devType_ = r0
            return
    }

    protected ApkUpgradeInfo(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.sameS_ = r0
            r1 = 2
            r2.state_ = r1
            r2.isAutoUpdate_ = r0
            r2.isCompulsoryUpdate_ = r0
            r2.devType_ = r0
            java.lang.String r0 = r3.readString()
            r2.id_ = r0
            java.lang.String r0 = r3.readString()
            r2.name_ = r0
            java.lang.String r0 = r3.readString()
            r2.package_ = r0
            java.lang.String r0 = r3.readString()
            r2.oldVersionName_ = r0
            java.lang.String r0 = r3.readString()
            r2.version_ = r0
            int r0 = r3.readInt()
            r2.diffSize_ = r0
            java.lang.String r0 = r3.readString()
            r2.diffDownUrl = r0
            java.lang.String r0 = r3.readString()
            r2.diffSha2_ = r0
            int r0 = r3.readInt()
            r2.sameS_ = r0
            long r0 = r3.readLong()
            r2.size_ = r0
            long r0 = r3.readLong()
            r2.obbSize_ = r0
            java.lang.String r0 = r3.readString()
            r2.releaseDate_ = r0
            java.lang.String r0 = r3.readString()
            r2.icon_ = r0
            int r0 = r3.readInt()
            r2.oldVersionCode_ = r0
            int r0 = r3.readInt()
            r2.versionCode_ = r0
            java.lang.String r0 = r3.readString()
            r2.downurl_ = r0
            java.lang.String r0 = r3.readString()
            r2.sha256_ = r0
            java.lang.String r0 = r3.readString()
            r2.newFeatures_ = r0
            java.lang.String r0 = r3.readString()
            r2.releaseDateDesc_ = r0
            int r0 = r3.readInt()
            r2.state_ = r0
            java.lang.String r0 = r3.readString()
            r2.detailId_ = r0
            int r0 = r3.readInt()
            r2.isAutoUpdate_ = r0
            int r0 = r3.readInt()
            r2.isCompulsoryUpdate_ = r0
            java.lang.String r0 = r3.readString()
            r2.notRcmReason_ = r0
            int r0 = r3.readInt()
            r2.devType_ = r0
            java.lang.String r0 = r3.readString()
            r2.fullDownUrl_ = r0
            int r0 = r3.readInt()
            r2.maple_ = r0
            int r0 = r3.readInt()
            r2.packingType_ = r0
            long r0 = r3.readLong()
            r2.bundleSize_ = r0
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public long getBundleSize_() {
            r2 = this;
            long r0 = r2.bundleSize_
            return r0
    }

    public java.lang.String getDetailId_() {
            r1 = this;
            java.lang.String r0 = r1.detailId_
            return r0
    }

    public int getDevType_() {
            r1 = this;
            int r0 = r1.devType_
            return r0
    }

    public java.lang.String getDiffDownUrl_() {
            r1 = this;
            java.lang.String r0 = r1.diffDownUrl
            return r0
    }

    public java.lang.String getDiffSha2_() {
            r1 = this;
            java.lang.String r0 = r1.diffSha2_
            return r0
    }

    public int getDiffSize_() {
            r1 = this;
            int r0 = r1.diffSize_
            return r0
    }

    public java.lang.String getDownurl_() {
            r1 = this;
            java.lang.String r0 = r1.downurl_
            return r0
    }

    public java.lang.String getFullDownUrl_() {
            r1 = this;
            java.lang.String r0 = r1.fullDownUrl_
            return r0
    }

    public java.lang.String getIcon_() {
            r1 = this;
            java.lang.String r0 = r1.icon_
            return r0
    }

    public java.lang.String getId_() {
            r1 = this;
            java.lang.String r0 = r1.id_
            return r0
    }

    public int getIsAutoUpdate_() {
            r1 = this;
            int r0 = r1.isAutoUpdate_
            return r0
    }

    public int getIsCompulsoryUpdate_() {
            r1 = this;
            int r0 = r1.isCompulsoryUpdate_
            return r0
    }

    public long getLongSize_() {
            r2 = this;
            long r0 = r2.size_
            return r0
    }

    public int getMaple_() {
            r1 = this;
            int r0 = r1.maple_
            return r0
    }

    public java.lang.String getName_() {
            r1 = this;
            java.lang.String r0 = r1.name_
            return r0
    }

    public java.lang.String getNewFeatures_() {
            r1 = this;
            java.lang.String r0 = r1.newFeatures_
            return r0
    }

    public java.lang.String getNotRcmReason_() {
            r1 = this;
            java.lang.String r0 = r1.notRcmReason_
            return r0
    }

    public long getObbSize_() {
            r2 = this;
            long r0 = r2.obbSize_
            return r0
    }

    public int getOldVersionCode_() {
            r1 = this;
            int r0 = r1.oldVersionCode_
            return r0
    }

    public java.lang.String getOldVersionName_() {
            r1 = this;
            java.lang.String r0 = r1.oldVersionName_
            return r0
    }

    public java.lang.String getPackage_() {
            r1 = this;
            java.lang.String r0 = r1.package_
            return r0
    }

    public int getPackingType_() {
            r1 = this;
            int r0 = r1.packingType_
            return r0
    }

    public java.lang.String getReleaseDateDesc_() {
            r1 = this;
            java.lang.String r0 = r1.releaseDateDesc_
            return r0
    }

    public java.lang.String getReleaseDate_() {
            r1 = this;
            java.lang.String r0 = r1.releaseDate_
            return r0
    }

    public int getSameS_() {
            r1 = this;
            int r0 = r1.sameS_
            return r0
    }

    public java.lang.String getSha256_() {
            r1 = this;
            java.lang.String r0 = r1.sha256_
            return r0
    }

    @java.lang.Deprecated
    public int getSize_() {
            r2 = this;
            long r0 = r2.size_
            int r0 = (int) r0
            return r0
    }

    public int getState_() {
            r1 = this;
            int r0 = r1.state_
            return r0
    }

    public int getVersionCode_() {
            r1 = this;
            int r0 = r1.versionCode_
            return r0
    }

    public java.lang.String getVersion_() {
            r1 = this;
            java.lang.String r0 = r1.version_
            return r0
    }

    public void setBundleSize_(long r1) {
            r0 = this;
            r0.bundleSize_ = r1
            return
    }

    public void setDetailId_(java.lang.String r1) {
            r0 = this;
            r0.detailId_ = r1
            return
    }

    public void setDevType_(int r1) {
            r0 = this;
            r0.devType_ = r1
            return
    }

    public void setDiffDownUrl_(java.lang.String r1) {
            r0 = this;
            r0.diffDownUrl = r1
            return
    }

    public void setDiffSha2_(java.lang.String r1) {
            r0 = this;
            r0.diffSha2_ = r1
            return
    }

    public void setDiffSize_(int r1) {
            r0 = this;
            r0.diffSize_ = r1
            return
    }

    public void setDownurl_(java.lang.String r1) {
            r0 = this;
            r0.downurl_ = r1
            return
    }

    public void setFullDownUrl_(java.lang.String r1) {
            r0 = this;
            r0.fullDownUrl_ = r1
            return
    }

    public void setIcon_(java.lang.String r1) {
            r0 = this;
            r0.icon_ = r1
            return
    }

    public void setId_(java.lang.String r1) {
            r0 = this;
            r0.id_ = r1
            return
    }

    public void setIsAutoUpdate_(int r1) {
            r0 = this;
            r0.isAutoUpdate_ = r1
            return
    }

    public void setIsCompulsoryUpdate_(int r1) {
            r0 = this;
            r0.isCompulsoryUpdate_ = r1
            return
    }

    public void setMaple_(int r1) {
            r0 = this;
            r0.maple_ = r1
            return
    }

    public void setName_(java.lang.String r1) {
            r0 = this;
            r0.name_ = r1
            return
    }

    public void setNewFeatures_(java.lang.String r1) {
            r0 = this;
            r0.newFeatures_ = r1
            return
    }

    public void setNotRcmReason_(java.lang.String r1) {
            r0 = this;
            r0.notRcmReason_ = r1
            return
    }

    public void setObbSize_(long r1) {
            r0 = this;
            r0.obbSize_ = r1
            return
    }

    public void setOldVersionCode_(int r1) {
            r0 = this;
            r0.oldVersionCode_ = r1
            return
    }

    public void setOldVersionName_(java.lang.String r1) {
            r0 = this;
            r0.oldVersionName_ = r1
            return
    }

    public void setPackage_(java.lang.String r1) {
            r0 = this;
            r0.package_ = r1
            return
    }

    public void setPackingType_(int r1) {
            r0 = this;
            r0.packingType_ = r1
            return
    }

    public void setReleaseDateDesc_(java.lang.String r1) {
            r0 = this;
            r0.releaseDateDesc_ = r1
            return
    }

    public void setReleaseDate_(java.lang.String r1) {
            r0 = this;
            r0.releaseDate_ = r1
            return
    }

    public void setSameS_(int r1) {
            r0 = this;
            r0.sameS_ = r1
            return
    }

    public void setSha256_(java.lang.String r1) {
            r0 = this;
            r0.sha256_ = r1
            return
    }

    public void setSize_(long r1) {
            r0 = this;
            r0.size_ = r1
            return
    }

    public void setState_(int r1) {
            r0 = this;
            r0.state_ = r1
            return
    }

    public void setVersionCode_(int r1) {
            r0 = this;
            r0.versionCode_ = r1
            return
    }

    public void setVersion_(java.lang.String r1) {
            r0 = this;
            r0.version_ = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " {\n\tid_: "
            r0.append(r1)
            java.lang.String r1 = r3.getId_()
            r0.append(r1)
            java.lang.String r1 = "\n\tname_: "
            r0.append(r1)
            java.lang.String r1 = r3.getName_()
            r0.append(r1)
            java.lang.String r1 = "\n\tpackage_: "
            r0.append(r1)
            java.lang.String r1 = r3.getPackage_()
            r0.append(r1)
            java.lang.String r1 = "\n\tversion_: "
            r0.append(r1)
            java.lang.String r1 = r3.getVersion_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdiffSize_: "
            r0.append(r1)
            int r1 = r3.getDiffSize_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdiffDownUrl_: "
            r0.append(r1)
            java.lang.String r1 = r3.getDiffDownUrl_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdiffSha2_: "
            r0.append(r1)
            java.lang.String r1 = r3.getDiffSha2_()
            r0.append(r1)
            java.lang.String r1 = "\n\tsameS_: "
            r0.append(r1)
            int r1 = r3.getSameS_()
            r0.append(r1)
            java.lang.String r1 = "\n\tsize_: "
            r0.append(r1)
            long r1 = r3.getLongSize_()
            r0.append(r1)
            java.lang.String r1 = "\n\treleaseDate_: "
            r0.append(r1)
            java.lang.String r1 = r3.getReleaseDate_()
            r0.append(r1)
            java.lang.String r1 = "\n\ticon_: "
            r0.append(r1)
            java.lang.String r1 = r3.getIcon_()
            r0.append(r1)
            java.lang.String r1 = "\n\toldVersionCode_: "
            r0.append(r1)
            int r1 = r3.getOldVersionCode_()
            r0.append(r1)
            java.lang.String r1 = "\n\tversionCode_: "
            r0.append(r1)
            int r1 = r3.getVersionCode_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdownurl_: "
            r0.append(r1)
            java.lang.String r1 = r3.getDownurl_()
            r0.append(r1)
            java.lang.String r1 = "\n\tnewFeatures_: "
            r0.append(r1)
            java.lang.String r1 = r3.getNewFeatures_()
            r0.append(r1)
            java.lang.String r1 = "\n\treleaseDateDesc_: "
            r0.append(r1)
            java.lang.String r1 = r3.getReleaseDateDesc_()
            r0.append(r1)
            java.lang.String r1 = "\n\tstate_: "
            r0.append(r1)
            int r1 = r3.getState_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdetailId_: "
            r0.append(r1)
            java.lang.String r1 = r3.getDetailId_()
            r0.append(r1)
            java.lang.String r1 = "\n\tfullDownUrl_: "
            r0.append(r1)
            java.lang.String r1 = r3.getFullDownUrl_()
            r0.append(r1)
            java.lang.String r1 = "\n\tisCompulsoryUpdate_: "
            r0.append(r1)
            int r1 = r3.getIsCompulsoryUpdate_()
            r0.append(r1)
            java.lang.String r1 = "\n\tnotRcmReason_: "
            r0.append(r1)
            java.lang.String r1 = r3.getNotRcmReason_()
            r0.append(r1)
            java.lang.String r1 = "\n\tdevType_: "
            r0.append(r1)
            int r1 = r3.getDevType_()
            r0.append(r1)
            java.lang.String r1 = "\n}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.id_
            r3.writeString(r4)
            java.lang.String r4 = r2.name_
            r3.writeString(r4)
            java.lang.String r4 = r2.package_
            r3.writeString(r4)
            java.lang.String r4 = r2.oldVersionName_
            r3.writeString(r4)
            java.lang.String r4 = r2.version_
            r3.writeString(r4)
            int r4 = r2.diffSize_
            r3.writeInt(r4)
            java.lang.String r4 = r2.diffDownUrl
            r3.writeString(r4)
            java.lang.String r4 = r2.diffSha2_
            r3.writeString(r4)
            int r4 = r2.sameS_
            r3.writeInt(r4)
            long r0 = r2.size_
            r3.writeLong(r0)
            long r0 = r2.obbSize_
            r3.writeLong(r0)
            java.lang.String r4 = r2.releaseDate_
            r3.writeString(r4)
            java.lang.String r4 = r2.icon_
            r3.writeString(r4)
            int r4 = r2.oldVersionCode_
            r3.writeInt(r4)
            int r4 = r2.versionCode_
            r3.writeInt(r4)
            java.lang.String r4 = r2.downurl_
            r3.writeString(r4)
            java.lang.String r4 = r2.sha256_
            r3.writeString(r4)
            java.lang.String r4 = r2.newFeatures_
            r3.writeString(r4)
            java.lang.String r4 = r2.releaseDateDesc_
            r3.writeString(r4)
            int r4 = r2.state_
            r3.writeInt(r4)
            java.lang.String r4 = r2.detailId_
            r3.writeString(r4)
            int r4 = r2.isAutoUpdate_
            r3.writeInt(r4)
            int r4 = r2.isCompulsoryUpdate_
            r3.writeInt(r4)
            java.lang.String r4 = r2.notRcmReason_
            r3.writeString(r4)
            int r4 = r2.devType_
            r3.writeInt(r4)
            java.lang.String r4 = r2.fullDownUrl_
            r3.writeString(r4)
            int r4 = r2.maple_
            r3.writeInt(r4)
            int r4 = r2.packingType_
            r3.writeInt(r4)
            long r0 = r2.bundleSize_
            r3.writeLong(r0)
            return
    }
}
