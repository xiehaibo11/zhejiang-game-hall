package com.tencent.mm.opensdk.modelmsg;

public class WXGameLiveObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final java.lang.String TAG = "MicroMsg.SDK.WXGameObject";
    public java.util.HashMap<java.lang.String, java.lang.String> extraInfoMap;

    public WXGameLiveObject() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extraInfoMap = r0
            return
    }

    @Override
    public boolean checkArgs() {
            r1 = this;
            r0 = 1
            return r0
    }

    public java.lang.String getExtra(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            if (r0 == 0) goto Le
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto Ld
            r3 = r2
        Ld:
            return r3
        Le:
            r2 = 0
            return r2
    }

    public void putExtra(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.extraInfoMap = r0
        Lb:
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r0 != 0) goto L16
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.extraInfoMap
            r0.put(r2, r3)
        L16:
            return
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.extraInfoMap
            if (r0 == 0) goto L9
            java.lang.String r1 = "_wxgame_extrainfo"
            r3.putSerializable(r1, r0)
        L9:
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 70
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxgame_extrainfo"
            java.io.Serializable r2 = r2.getSerializable(r0)
            java.util.HashMap r2 = (java.util.HashMap) r2
            r1.extraInfoMap = r2
            return
    }
}
