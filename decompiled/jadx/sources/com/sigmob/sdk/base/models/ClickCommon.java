package com.sigmob.sdk.base.models;

import com.czhj.sdk.common.utils.TouchLocation;
import com.sigmob.sdk.base.a;
import java.io.Serializable;

/* JADX INFO: loaded from: classes3.dex */
public class ClickCommon implements Serializable {
    public static final String CLICK_AREA_APPINFO = "appinfo";
    public static final String CLICK_AREA_BTN = "btn";
    public static final String CLICK_AREA_MATERIAL = "material";
    public static final String CLICK_SCENE_APPINFO = "appinfo";
    public static final String CLICK_SCENE_PREVIEW = "preview";
    public static final String CLICK_SCENE_TEMPLATE = "template";
    public int auto_click;
    public String clickCoordinate;
    public a clickUIType;
    public String clickUrl;
    public String click_area;
    public String click_scene;
    public TouchLocation down;
    public String isDeeplink;
    public boolean is_final_click;
    public TouchLocation up;

    public String getClickCoordinate() {
        TouchLocation touchLocation = this.down;
        if (touchLocation != null && this.up != null) {
            this.clickCoordinate = String.format("%s,%s,%s,%s", Integer.valueOf(touchLocation.getX()), Integer.valueOf(this.down.getY()), Integer.valueOf(this.up.getX()), Integer.valueOf(this.up.getY()));
        }
        return this.clickCoordinate;
    }
}
