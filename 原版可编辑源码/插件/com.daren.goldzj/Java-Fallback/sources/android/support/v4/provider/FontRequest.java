package android.support.v4.provider;

import android.support.annotation.ArrayRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.util.Preconditions;
import android.util.Base64;
import java.util.List;

public final class FontRequest {
    private final List<List<byte[]>> mCertificates;
    private final int mCertificatesArray;
    private final String mIdentifier;
    private final String mProviderAuthority;
    private final String mProviderPackage;
    private final String mQuery;

    public FontRequest(@NonNull String r1, @NonNull String r2, @NonNull String r3, @NonNull List<List<byte[]>> r4) {
        this.mProviderAuthority = (String) Preconditions.checkNotNull(r1);
        this.mProviderPackage = (String) Preconditions.checkNotNull(r2);
        this.mQuery = (String) Preconditions.checkNotNull(r3);
        this.mCertificates = (List) Preconditions.checkNotNull(r4);
        this.mCertificatesArray = 0;
        this.mIdentifier = this.mProviderAuthority + "-" + this.mProviderPackage + "-" + this.mQuery;
    }

    public FontRequest(@NonNull String r1, @NonNull String r2, @NonNull String r3, @ArrayRes int r4) {
        this.mProviderAuthority = (String) Preconditions.checkNotNull(r1);
        this.mProviderPackage = (String) Preconditions.checkNotNull(r2);
        this.mQuery = (String) Preconditions.checkNotNull(r3);
        this.mCertificates = null;
        if (r4 == 0) goto L5;
        boolean r12 = true;
    L6:
        Preconditions.checkArgument(r12);
        this.mCertificatesArray = r4;
        this.mIdentifier = this.mProviderAuthority + "-" + this.mProviderPackage + "-" + this.mQuery;
        return;
    L5:
        r12 = false;
        goto L6
    }

    @NonNull
    public String getProviderAuthority() {
        return this.mProviderAuthority;
    }

    @NonNull
    public String getProviderPackage() {
        return this.mProviderPackage;
    }

    @NonNull
    public String getQuery() {
        return this.mQuery;
    }

    @Nullable
    public List<List<byte[]>> getCertificates() {
        return this.mCertificates;
    }

    @ArrayRes
    public int getCertificatesArrayResId() {
        return this.mCertificatesArray;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public String getIdentifier() {
        return this.mIdentifier;
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append("FontRequest {mProviderAuthority: " + this.mProviderAuthority + ", mProviderPackage: " + this.mProviderPackage + ", mQuery: " + this.mQuery + ", mCertificates:");
        int r2 = 0;
    L4:
        if (r2 >= this.mCertificates.size()) goto L10;
        r0.append(" [");
        List<byte[]> r3 = this.mCertificates.get(r2);
        int r4 = 0;
    L7:
        if (r4 >= r3.size()) goto L9;
        r0.append(" \"");
        r0.append(Base64.encodeToString(r3.get(r4), 0));
        r0.append("\"");
        r4 = r4 + 1;
        goto L7
    L9:
        r0.append(" ]");
        r2 = r2 + 1;
        goto L4
    L10:
        r0.append("}");
        r0.append("mCertificatesArray: " + this.mCertificatesArray);
        return r0.toString();
    }
}
