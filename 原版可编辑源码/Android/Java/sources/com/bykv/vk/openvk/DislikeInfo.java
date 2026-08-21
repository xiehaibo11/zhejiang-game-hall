package com.bykv.vk.openvk;

import java.util.List;

public interface DislikeInfo {
    List<FilterWord> getFilterWords();

    @Deprecated
    PersonalizationPrompt getPersonalizationPrompt();
}
