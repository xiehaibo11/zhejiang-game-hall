package com.bykv.vk.openvk;

public interface DislikeInfo {
    java.util.List<com.bykv.vk.openvk.FilterWord> getFilterWords();

    @java.lang.Deprecated
    com.bykv.vk.openvk.PersonalizationPrompt getPersonalizationPrompt();
}
