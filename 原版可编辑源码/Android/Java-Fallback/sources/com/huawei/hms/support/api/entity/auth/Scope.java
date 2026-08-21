package com.huawei.hms.support.api.entity.auth;

public class Scope implements com.huawei.hms.core.aidl.IMessageEntity, android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.support.api.entity.auth.Scope> CREATOR = null;
    private java.lang.String mScopeUri;

    static class a implements android.os.Parcelable.Creator<com.huawei.hms.support.api.entity.auth.Scope> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.Scope createFromParcel(android.os.Parcel r2) {
                r1 = this;
                com.huawei.hms.support.api.entity.auth.Scope r0 = new com.huawei.hms.support.api.entity.auth.Scope
                r0.<init>(r2)
                return r0
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.Scope createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.Scope r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.Scope[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.Scope[] r1 = new com.huawei.hms.support.api.entity.auth.Scope[r1]
                return r1
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.Scope[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.Scope[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.hms.support.api.entity.auth.Scope$a r0 = new com.huawei.hms.support.api.entity.auth.Scope$a
            r0.<init>()
            com.huawei.hms.support.api.entity.auth.Scope.CREATOR = r0
            return
    }

    public Scope() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mScopeUri = r0
            return
    }

    protected Scope(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = r1.readString()
            r0.mScopeUri = r1
            return
    }

    public Scope(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.mScopeUri = r1
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof com.huawei.hms.support.api.entity.auth.Scope
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            com.huawei.hms.support.api.entity.auth.Scope r2 = (com.huawei.hms.support.api.entity.auth.Scope) r2
            java.lang.String r0 = r1.mScopeUri
            java.lang.String r2 = r2.mScopeUri
            boolean r2 = com.huawei.hms.common.internal.Objects.equal(r0, r2)
            return r2
    }

    @java.lang.Deprecated
    public boolean equeals(java.lang.Object r1) {
            r0 = this;
            boolean r1 = r0.equals(r1)
            return r1
    }

    public java.lang.String getScopeUri() {
            r1 = this;
            java.lang.String r0 = r1.mScopeUri
            return r0
    }

    public final int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.mScopeUri
            if (r0 != 0) goto L9
            int r0 = super.hashCode()
            goto Ld
        L9:
            int r0 = r0.hashCode()
        Ld:
            return r0
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.mScopeUri
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.mScopeUri
            r1.writeString(r2)
            return
    }
}
