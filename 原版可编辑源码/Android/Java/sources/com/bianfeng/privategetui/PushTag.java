package com.bianfeng.privategetui;

import com.bianfeng.platform.executor.AppConfig;
import com.igexin.sdk.Tag;

public class PushTag extends Tag {
    private static final long serialVersionUID = 1;

    public PushTag() {
    }

    public PushTag(String str) {
        setName(str);
    }

    public static Tag[] createPushTags() {
        return new Tag[]{new PushTag("AID" + AppConfig.getSdkAppId()), new PushTag("CID" + AppConfig.getChannelId()), new PushTag(AppConfig.getPkgName()), new PushTag(AppConfig.getSdkAppId() + "&" + AppConfig.getChannelId())};
    }
}
