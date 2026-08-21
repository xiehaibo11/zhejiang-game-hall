package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import com.xiaomi.push.eq;
import com.xiaomi.push.if;
import java.util.Map;

public abstract class as {
    abstract eq a(Context context, int i, String str, Map<String, String> map);

    abstract void a(if ifVar, Map<String, String> map, int i, Notification notification);

    abstract void a(String str);

    abstract boolean a(Context context, int i, String str, Map<String, String> map);

    abstract boolean a(Map<String, String> map, int i, Notification notification);
}
