package android.support.transition;

class TransitionValuesMaps {
    final android.util.SparseArray<android.view.View> mIdValues;
    final android.support.v4.util.LongSparseArray<android.view.View> mItemIdValues;
    final android.support.v4.util.ArrayMap<java.lang.String, android.view.View> mNameValues;
    final android.support.v4.util.ArrayMap<android.view.View, android.support.transition.TransitionValues> mViewValues;

    TransitionValuesMaps() {
            r1 = this;
            r1.<init>()
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            r1.mViewValues = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.mIdValues = r0
            android.support.v4.util.LongSparseArray r0 = new android.support.v4.util.LongSparseArray
            r0.<init>()
            r1.mItemIdValues = r0
            android.support.v4.util.ArrayMap r0 = new android.support.v4.util.ArrayMap
            r0.<init>()
            r1.mNameValues = r0
            return
    }
}
