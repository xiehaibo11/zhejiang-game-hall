package com.kwad.sdk.api.core.fragment;

import android.support.v4.app.Fragment;

public class KsSavedState {
    final Fragment.SavedState mSaveState;

    public KsSavedState(Fragment.SavedState savedState) {
        this.mSaveState = savedState;
    }

    public Fragment.SavedState getBase() {
        return this.mSaveState;
    }
}
