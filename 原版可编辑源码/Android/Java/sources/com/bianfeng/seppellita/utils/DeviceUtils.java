package com.bianfeng.seppellita.utils;

import java.util.UUID;

public class DeviceUtils {
    public static String createYmnDeviceId() {
        return UUID.randomUUID().toString();
    }
}
