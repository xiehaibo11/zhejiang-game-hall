package com.bykv.vk.openvk;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface DislikeInfo {
    List<FilterWord> getFilterWords();

    @Deprecated
    PersonalizationPrompt getPersonalizationPrompt();
}
