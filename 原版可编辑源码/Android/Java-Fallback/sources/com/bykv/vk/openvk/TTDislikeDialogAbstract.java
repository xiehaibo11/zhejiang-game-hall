package com.bykv.vk.openvk;

public abstract class TTDislikeDialogAbstract extends android.app.Dialog {
    private com.bykv.vk.openvk.TTDislikeController df;
    private android.view.View rg;

    public TTDislikeDialogAbstract(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TTDislikeDialogAbstract(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public abstract int getLayoutId();

    public abstract android.view.ViewGroup.LayoutParams getLayoutParams();

    public abstract int[] getTTDislikeListViewIds();

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.content.Context r3 = r2.getContext()
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r3)
            int r0 = r2.getLayoutId()     // Catch: java.lang.Exception -> L2f
            r1 = 0
            android.view.View r3 = r3.inflate(r0, r1)     // Catch: java.lang.Exception -> L2f
            r2.rg = r3     // Catch: java.lang.Exception -> L2f
            if (r3 != 0) goto L19
            return
        L19:
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.view.View r0 = r2.rg
            if (r3 == 0) goto L22
            goto L28
        L22:
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r3.<init>(r1, r1)
        L28:
            r2.setContentView(r0, r3)
            r2.rg()
            return
        L2f:
            java.lang.String r3 = "TTDislikeDialogAbstract"
            java.lang.String r0 = "getLayoutId布局文件id可能异常，请检查"
            android.util.Log.e(r3, r0)
            return
    }

    protected void rg() {
            r5 = this;
            com.bykv.vk.openvk.TTDislikeController r0 = r5.df
            if (r0 != 0) goto L5
            return
        L5:
            android.view.View r0 = r5.rg
            if (r0 != 0) goto La
            return
        La:
            int[] r0 = r5.getTTDislikeListViewIds()
            if (r0 == 0) goto L40
            int r1 = r0.length
            if (r1 <= 0) goto L40
            int r1 = r0.length
            r2 = 0
        L15:
            if (r2 >= r1) goto L3f
            r3 = r0[r2]
            android.view.View r4 = r5.rg
            android.view.View r3 = r4.findViewById(r3)
            if (r3 == 0) goto L37
            boolean r4 = r3 instanceof com.bykv.vk.openvk.dislike.TTDislikeListView
            if (r4 == 0) goto L2f
            com.bykv.vk.openvk.dislike.TTDislikeListView r3 = (com.bykv.vk.openvk.dislike.TTDislikeListView) r3
            com.bykv.vk.openvk.TTDislikeController r4 = r5.df
            r3.setDislikeInfo(r4)
            int r2 = r2 + 1
            goto L15
        L2f:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "getTTDislikeListViewIds找到的view类型异常，请检查"
            r0.<init>(r1)
            throw r0
        L37:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "getTTDislikeListViewIds提供的id找不到view，请检查"
            r0.<init>(r1)
            throw r0
        L3f:
            return
        L40:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "dislike选项列表为空，请设置TTDislikeListView"
            r0.<init>(r1)
            throw r0
    }

    public void setDislikeModel(com.bykv.vk.openvk.TTDislikeController r1) {
            r0 = this;
            r0.df = r1
            r0.rg()
            return
    }

    @Override
    public void show() {
            r0 = this;
            super.show()
            return
    }

    @java.lang.Deprecated
    public void startPersonalizePromptActivity() {
            r0 = this;
            return
    }
}
