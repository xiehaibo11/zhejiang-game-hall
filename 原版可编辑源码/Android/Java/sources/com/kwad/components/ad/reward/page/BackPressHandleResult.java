package com.kwad.components.ad.reward.page;

public enum BackPressHandleResult {
    NOT_HANDLED(1),
    HANDLED(2),
    HANDLED_CLOSE(3);

    private int value;

    BackPressHandleResult(int i) {
        this.value = i;
    }
}
