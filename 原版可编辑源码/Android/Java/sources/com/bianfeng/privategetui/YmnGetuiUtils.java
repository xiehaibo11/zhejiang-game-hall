package com.bianfeng.privategetui;

import com.igexin.sdk.Tag;

class YmnGetuiUtils {
    YmnGetuiUtils() {
    }

    public static Tag[] getTags(String str) {
        String[] strArrSplit = str.split("&");
        Tag[] tagArr = new Tag[strArrSplit.length];
        for (int i = 0; i < strArrSplit.length; i++) {
            Tag tag = new Tag();
            tag.setName(strArrSplit[i]);
            tagArr[i] = tag;
        }
        return tagArr;
    }
}
