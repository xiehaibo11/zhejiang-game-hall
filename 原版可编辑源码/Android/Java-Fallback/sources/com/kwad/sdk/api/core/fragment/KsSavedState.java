package com.kwad.sdk.api.core.fragment;

public class KsSavedState {
    final android.support.v4.app.Fragment.SavedState mSaveState;

    public KsSavedState(android.support.v4.app.Fragment.SavedState r1) {
            r0 = this;
            r0.<init>()
            r0.mSaveState = r1
            return
    }

    public android.support.v4.app.Fragment.SavedState getBase() {
            r1 = this;
            android.support.v4.app.Fragment$SavedState r0 = r1.mSaveState
            return r0
    }
}
