package com.bykv.vk.openvk;

public interface FilterWord {
    void addOption(com.bykv.vk.openvk.FilterWord r1);

    java.lang.String getId();

    boolean getIsSelected();

    java.lang.String getName();

    java.util.List<com.bykv.vk.openvk.FilterWord> getOptions();

    boolean hasSecondOptions();

    boolean isValid();

    void setIsSelected(boolean r1);
}
