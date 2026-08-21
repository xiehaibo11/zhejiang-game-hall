package com.bykv.vk.openvk;

public interface TTClientBidding {
    void loss(Double d, String str, String str2);

    void setPrice(Double d);

    void win(Double d);
}
