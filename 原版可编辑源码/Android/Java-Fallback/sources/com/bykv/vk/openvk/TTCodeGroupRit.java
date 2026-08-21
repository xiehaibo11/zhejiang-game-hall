package com.bykv.vk.openvk;

public interface TTCodeGroupRit {

    public interface TTCodeGroupRitListener {
        void onFail(int r1, java.lang.String r2);

        void onSuccess(com.bykv.vk.openvk.TTCodeGroupRit r1);
    }

    java.lang.String getRit();

    int getSlotType();
}
