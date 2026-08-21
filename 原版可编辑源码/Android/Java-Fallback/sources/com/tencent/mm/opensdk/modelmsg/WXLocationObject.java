package com.tencent.mm.opensdk.modelmsg;

public class WXLocationObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXLocationObject";
    public double lat;
    public double lng;

    public WXLocationObject() {
            r2 = this;
            r0 = 0
            r2.<init>(r0, r0)
            return
    }

    public WXLocationObject(double r1, double r3) {
            r0 = this;
            r0.<init>()
            r0.lat = r1
            r0.lng = r3
            return
    }

    @Override
    public boolean checkArgs() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void serialize(android.os.Bundle r4) {
            r3 = this;
            double r0 = r3.lat
            java.lang.String r2 = "_wxlocationobject_lat"
            r4.putDouble(r2, r0)
            double r0 = r3.lng
            java.lang.String r2 = "_wxlocationobject_lng"
            r4.putDouble(r2, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 30
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = "_wxlocationobject_lat"
            double r0 = r3.getDouble(r0)
            r2.lat = r0
            java.lang.String r0 = "_wxlocationobject_lng"
            double r0 = r3.getDouble(r0)
            r2.lng = r0
            return
    }
}
