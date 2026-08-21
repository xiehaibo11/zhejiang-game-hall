package com.vivo.push.util;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Color;

public final class i implements BaseNotifyLayoutAdapter {
    private Resources a;
    private String b;

    @Override
    public final int getNotificationLayout() {
        return this.a.getIdentifier("push_notify", "layout", this.b);
    }

    @Override
    public final int getSuitIconId() {
        Resources resources;
        String str;
        String str2;
        if (j.c) {
            resources = this.a;
            str = this.b;
            str2 = "notify_icon_rom30";
        } else if (j.b) {
            resources = this.a;
            str = this.b;
            str2 = "notify_icon_rom20";
        } else {
            resources = this.a;
            str = this.b;
            str2 = "notify_icon";
        }
        return resources.getIdentifier(str2, "id", str);
    }

    @Override
    public final int getTitleColor() {
        int iIntValue;
        try {
            iIntValue = ((Integer) z.a("com.android.internal.R$color", "vivo_notification_title_text_color")).intValue();
        } catch (Exception e) {
            e.printStackTrace();
            iIntValue = 0;
        }
        if (iIntValue > 0) {
            return this.a.getColor(iIntValue);
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

    @Override
    public final void init(Context context) {
        this.b = context.getPackageName();
        this.a = context.getResources();
    }
}
