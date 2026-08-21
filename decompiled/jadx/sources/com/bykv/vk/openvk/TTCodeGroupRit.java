package com.bykv.vk.openvk;

/* JADX INFO: loaded from: classes.dex */
public interface TTCodeGroupRit {

    public interface TTCodeGroupRitListener {
        void onFail(int i, String str);

        void onSuccess(TTCodeGroupRit tTCodeGroupRit);
    }

    String getRit();

    int getSlotType();
}
