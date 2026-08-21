package com.tkay.network.toutiao;

public class TTTYNativeExpressHandler {
    static final java.lang.String a = null;
    final java.util.List<com.bykv.vk.openvk.TTNtExpressObject> b;
    final java.util.List<com.bykv.vk.openvk.TTNtExpressObject> c;


    public interface RenderCallback {
        void onRenderFail(java.lang.String r1, int r2);

        void onRenderSuccess(java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r1);
    }

    static {
            java.lang.Class<com.tkay.network.toutiao.TTTYNativeExpressHandler> r0 = com.tkay.network.toutiao.TTTYNativeExpressHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.toutiao.TTTYNativeExpressHandler.a = r0
            return
    }

    public TTTYNativeExpressHandler(java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.c = r1
            return
    }

    public void startRender(com.tkay.network.toutiao.TTTYNativeExpressHandler.RenderCallback r5) {
            r4 = this;
            r0 = 1
            int[] r0 = new int[r0]
            java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r1 = r4.b
            int r1 = r1.size()
            r2 = 0
            r0[r2] = r1
            java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r1 = r4.b
            java.util.Iterator r1 = r1.iterator()
        L12:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()
            com.bykv.vk.openvk.TTNtExpressObject r2 = (com.bykv.vk.openvk.TTNtExpressObject) r2
            com.tkay.network.toutiao.TTTYNativeExpressHandler$1 r3 = new com.tkay.network.toutiao.TTTYNativeExpressHandler$1
            r3.<init>(r4, r0, r5, r2)
            r2.setExpressInteractionListener(r3)
            r2.render()
            goto L12
        L2a:
            return
    }
}
