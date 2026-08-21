package com.sigmob.sdk.base.models;

public class ClickCommon implements java.io.Serializable {
    public static final java.lang.String CLICK_AREA_APPINFO = "appinfo";
    public static final java.lang.String CLICK_AREA_BTN = "btn";
    public static final java.lang.String CLICK_AREA_MATERIAL = "material";
    public static final java.lang.String CLICK_SCENE_APPINFO = "appinfo";
    public static final java.lang.String CLICK_SCENE_PREVIEW = "preview";
    public static final java.lang.String CLICK_SCENE_TEMPLATE = "template";
    public int auto_click;
    public java.lang.String clickCoordinate;
    public com.sigmob.sdk.base.a clickUIType;
    public java.lang.String clickUrl;
    public java.lang.String click_area;
    public java.lang.String click_scene;
    public com.czhj.sdk.common.utils.TouchLocation down;
    public java.lang.String isDeeplink;
    public boolean is_final_click;
    public com.czhj.sdk.common.utils.TouchLocation up;

    public ClickCommon() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getClickCoordinate() {
            r3 = this;
            com.czhj.sdk.common.utils.TouchLocation r0 = r3.down
            if (r0 == 0) goto L45
            com.czhj.sdk.common.utils.TouchLocation r1 = r3.up
            if (r1 == 0) goto L45
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r0 = r0.getX()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r2] = r0
            r0 = 1
            com.czhj.sdk.common.utils.TouchLocation r2 = r3.down
            int r2 = r2.getY()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            r0 = 2
            com.czhj.sdk.common.utils.TouchLocation r2 = r3.up
            int r2 = r2.getX()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            r0 = 3
            com.czhj.sdk.common.utils.TouchLocation r2 = r3.up
            int r2 = r2.getY()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            java.lang.String r0 = "%s,%s,%s,%s"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            r3.clickCoordinate = r0
        L45:
            java.lang.String r0 = r3.clickCoordinate
            return r0
    }
}
