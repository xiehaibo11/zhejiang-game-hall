package com.bianfeng.seppellita.utils;

import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class DeviceUtils {
    public static String createYmnDeviceId() {
        return UUID.randomUUID().toString();
    }
}
