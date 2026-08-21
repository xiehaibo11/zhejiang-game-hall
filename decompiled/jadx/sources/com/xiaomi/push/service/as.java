package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import com.xiaomi.push.Cif;
import com.xiaomi.push.eq;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public abstract class as {
    abstract eq a(Context context, int i, String str, Map<String, String> map);

    abstract void a(Cif cif, Map<String, String> map, int i, Notification notification);

    abstract void a(String str);

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    abstract boolean m630a(Context context, int i, String str, Map<String, String> map);

    abstract boolean a(Map<String, String> map, int i, Notification notification);
}
