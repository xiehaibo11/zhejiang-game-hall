package com.bykv.vk.openvk.downloadnew.core;

public interface ITTDownloadAdapter {

    public interface OnEventLogHandler {
        boolean onEventLog(int i, String str, String str2, String str3, Object obj);
    }
}
