package com.meizu.cloud.pushsdk.platform.message;

public class SubTagsStatus extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus {
    private java.lang.String pushId;
    private java.util.List<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag> tagList;

    public class Tag implements java.io.Serializable {
        private int tagId;
        private java.lang.String tagName;
        final com.meizu.cloud.pushsdk.platform.message.SubTagsStatus this$0;

        public Tag(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        static int access$002(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag r0, int r1) {
                r0.tagId = r1
                return r1
        }

        static java.lang.String access$102(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag r0, java.lang.String r1) {
                r0.tagName = r1
                return r1
        }

        public int getTagId() {
                r1 = this;
                int r0 = r1.tagId
                return r0
        }

        public java.lang.String getTagName() {
                r1 = this;
                java.lang.String r0 = r1.tagName
                return r0
        }

        public void setTagId(int r1) {
                r0 = this;
                r0.tagId = r1
                return
        }

        public void setTagName(java.lang.String r1) {
                r0 = this;
                r0.tagName = r1
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Tag{tagId="
                r0.append(r1)
                int r1 = r2.tagId
                r0.append(r1)
                java.lang.String r1 = ", tagName='"
                r0.append(r1)
                java.lang.String r1 = r2.tagName
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public SubTagsStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public SubTagsStatus(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String getPushId() {
            r1 = this;
            java.lang.String r0 = r1.pushId
            return r0
    }

    public java.util.List<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag> getTagList() {
            r1 = this;
            java.util.List<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag> r0 = r1.tagList
            return r0
    }

    @Override
    public void parseValueData(org.json.JSONObject r7) {
            r6 = this;
            java.lang.String r0 = "pushId"
            boolean r1 = r7.isNull(r0)
            if (r1 != 0) goto Lf
            java.lang.String r0 = r7.getString(r0)
            r6.setPushId(r0)
        Lf:
            java.lang.String r0 = "tags"
            boolean r1 = r7.isNull(r0)
            if (r1 != 0) goto L6d
            org.json.JSONArray r7 = r7.getJSONArray(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L21:
            int r2 = r7.length()
            if (r1 >= r2) goto L54
            org.json.JSONObject r2 = r7.getJSONObject(r1)
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag r3 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag
            r3.<init>(r6)
            java.lang.String r4 = "tagId"
            boolean r5 = r2.isNull(r4)
            if (r5 != 0) goto L3f
            int r4 = r2.getInt(r4)
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag.access$002(r3, r4)
        L3f:
            java.lang.String r4 = "tagName"
            boolean r5 = r2.isNull(r4)
            if (r5 != 0) goto L4e
            java.lang.String r2 = r2.getString(r4)
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag.access$102(r3, r2)
        L4e:
            r0.add(r3)
            int r1 = r1 + 1
            goto L21
        L54:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "tags "
            r7.append(r1)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "BasicPushStatus"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)
            r6.setTagList(r0)
        L6d:
            return
    }

    public void setPushId(java.lang.String r1) {
            r0 = this;
            r0.pushId = r1
            return
    }

    public void setTagList(java.util.List<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus.Tag> r1) {
            r0 = this;
            r0.tagList = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = " SubTagsStatus{pushId='"
            r0.append(r1)
            java.lang.String r1 = r2.pushId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", tagList="
            r0.append(r1)
            java.util.List<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus$Tag> r1 = r2.tagList
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
