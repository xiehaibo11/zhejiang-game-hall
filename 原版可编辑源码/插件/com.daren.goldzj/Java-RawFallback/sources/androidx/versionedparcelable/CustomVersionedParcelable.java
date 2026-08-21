package androidx.versionedparcelable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public abstract class CustomVersionedParcelable implements androidx.versionedparcelable.VersionedParcelable {
    public CustomVersionedParcelable() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void onPostParceling() {
            r0 = this;
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void onPreParceling(boolean r1) {
            r0 = this;
            return
    }
}
