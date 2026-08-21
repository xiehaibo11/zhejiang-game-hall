package com.vivo.push.util;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Color;

/* JADX INFO: loaded from: classes4.dex */
public final class i implements BaseNotifyLayoutAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Resources f7947a;
    private String b;

    @Override // com.vivo.push.util.BaseNotifyLayoutAdapter
    public final int getNotificationLayout() {
        return this.f7947a.getIdentifier("push_notify", "layout", this.b);
    }

    @Override // com.vivo.push.util.BaseNotifyLayoutAdapter
    public final int getSuitIconId() {
        Resources resources;
        String str;
        String str2;
        if (j.c) {
            resources = this.f7947a;
            str = this.b;
            str2 = "notify_icon_rom30";
        } else if (j.b) {
            resources = this.f7947a;
            str = this.b;
            str2 = "notify_icon_rom20";
        } else {
            resources = this.f7947a;
            str = this.b;
            str2 = "notify_icon";
        }
        return resources.getIdentifier(str2, "id", str);
    }

    @Override // com.vivo.push.util.BaseNotifyLayoutAdapter
    public final int getTitleColor() {
        int iIntValue;
        try {
            iIntValue = ((Integer) z.a("com.android.internal.R$color", "vivo_notification_title_text_color")).intValue();
        } catch (Exception e) {
            e.printStackTrace();
            iIntValue = 0;
        }
        if (iIntValue > 0) {
            return this.f7947a.getColor(iIntValue);
        }
        if (j.c) {
            return -1;
        }
        if (!j.b) {
            return -16777216;
        }
        if (j.c) {
            return Color.parseColor("#ff999999");
        }
        return -1;
    }

    @Override // com.vivo.push.util.BaseNotifyLayoutAdapter
    public final void init(Context context) {
        this.b = context.getPackageName();
        this.f7947a = context.getResources();
    }
}
