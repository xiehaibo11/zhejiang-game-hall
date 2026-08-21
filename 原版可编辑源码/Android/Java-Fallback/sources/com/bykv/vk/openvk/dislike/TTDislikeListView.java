package com.bykv.vk.openvk.dislike;

public class TTDislikeListView extends android.widget.ListView {
    private com.bykv.vk.openvk.TTDislikeController mDislikeController;
    private com.bykv.vk.openvk.api.proto.EventListener mOnItemClickBridge;
    private android.widget.AdapterView.OnItemClickListener mOnItemClickListener;
    private android.widget.AdapterView.OnItemClickListener mOnItemClickListenerInner;


    public TTDislikeListView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.bykv.vk.openvk.dislike.TTDislikeListView$1 r1 = new com.bykv.vk.openvk.dislike.TTDislikeListView$1
            r1.<init>(r0)
            r0.mOnItemClickListenerInner = r1
            r0.init()
            return
    }

    public TTDislikeListView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.bykv.vk.openvk.dislike.TTDislikeListView$1 r1 = new com.bykv.vk.openvk.dislike.TTDislikeListView$1
            r1.<init>(r0)
            r0.mOnItemClickListenerInner = r1
            r0.init()
            return
    }

    public TTDislikeListView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.bykv.vk.openvk.dislike.TTDislikeListView$1 r1 = new com.bykv.vk.openvk.dislike.TTDislikeListView$1
            r1.<init>(r0)
            r0.mOnItemClickListenerInner = r1
            r0.init()
            return
    }

    static com.bykv.vk.openvk.TTDislikeController access$000(com.bykv.vk.openvk.dislike.TTDislikeListView r0) {
            com.bykv.vk.openvk.TTDislikeController r0 = r0.mDislikeController
            return r0
    }

    static android.widget.AdapterView.OnItemClickListener access$100(com.bykv.vk.openvk.dislike.TTDislikeListView r0) {
            android.widget.AdapterView$OnItemClickListener r0 = r0.mOnItemClickListener
            return r0
    }

    static com.bykv.vk.openvk.api.proto.EventListener access$200(com.bykv.vk.openvk.dislike.TTDislikeListView r0) {
            com.bykv.vk.openvk.api.proto.EventListener r0 = r0.mOnItemClickBridge
            return r0
    }

    private void init() {
            r1 = this;
            android.widget.AdapterView$OnItemClickListener r0 = r1.mOnItemClickListenerInner
            super.setOnItemClickListener(r0)
            return
    }

    public void setDislikeInfo(com.bykv.vk.openvk.TTDislikeController r1) {
            r0 = this;
            r0.mDislikeController = r1
            return
    }

    @Override
    public void setOnItemClickListener(android.widget.AdapterView.OnItemClickListener r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.bykv.vk.openvk.api.proto.EventListener
            if (r0 == 0) goto L9
            com.bykv.vk.openvk.api.proto.EventListener r2 = (com.bykv.vk.openvk.api.proto.EventListener) r2
            r1.mOnItemClickBridge = r2
            goto Lb
        L9:
            r1.mOnItemClickListener = r2
        Lb:
            return
    }
}
