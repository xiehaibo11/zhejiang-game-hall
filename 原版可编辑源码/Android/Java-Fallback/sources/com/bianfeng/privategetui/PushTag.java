package com.bianfeng.privategetui;

public class PushTag extends com.igexin.sdk.Tag {
    private static final long serialVersionUID = 1;

    public PushTag() {
            r0 = this;
            r0.<init>()
            return
    }

    public PushTag(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.setName(r1)
            return
    }

    public static com.igexin.sdk.Tag[] createPushTags() {
            r0 = 4
            com.igexin.sdk.Tag[] r0 = new com.igexin.sdk.Tag[r0]
            com.bianfeng.privategetui.PushTag r1 = new com.bianfeng.privategetui.PushTag
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "AID"
            r2.append(r3)
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.getSdkAppId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            r2 = 0
            r0[r2] = r1
            com.bianfeng.privategetui.PushTag r1 = new com.bianfeng.privategetui.PushTag
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CID"
            r2.append(r3)
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.getChannelId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            r2 = 1
            r0[r2] = r1
            com.bianfeng.privategetui.PushTag r1 = new com.bianfeng.privategetui.PushTag
            java.lang.String r2 = com.bianfeng.platform.executor.AppConfig.getPkgName()
            r1.<init>(r2)
            r2 = 2
            r0[r2] = r1
            com.bianfeng.privategetui.PushTag r1 = new com.bianfeng.privategetui.PushTag
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.getSdkAppId()
            r2.append(r3)
            java.lang.String r3 = "&"
            r2.append(r3)
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.getChannelId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            r2 = 3
            r0[r2] = r1
            return r0
    }
}
