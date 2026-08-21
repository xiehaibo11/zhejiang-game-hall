package android.support.v4.app;

import android.app.RemoteInput;
import android.content.ClipData;
import android.content.ClipDescription;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.util.Log;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public final class RemoteInput {
    private static final String EXTRA_DATA_TYPE_RESULTS_DATA = "android.remoteinput.dataTypeResultsData";
    public static final String EXTRA_RESULTS_DATA = "android.remoteinput.resultsData";
    public static final String RESULTS_CLIP_LABEL = "android.remoteinput.results";
    private static final String TAG = "RemoteInput";
    private final boolean mAllowFreeFormTextInput;
    private final Set<String> mAllowedDataTypes;
    private final CharSequence[] mChoices;
    private final Bundle mExtras;
    private final CharSequence mLabel;
    private final String mResultKey;

    public static final class Builder {
        private boolean mAllowFreeFormTextInput;
        private final Set<String> mAllowedDataTypes;
        private CharSequence[] mChoices;
        private final Bundle mExtras;
        private CharSequence mLabel;
        private final String mResultKey;

        public Builder(@NonNull String r2) {
            this.mAllowedDataTypes = new HashSet();
            this.mExtras = new Bundle();
            this.mAllowFreeFormTextInput = true;
            if (r2 == null) goto L7;
            this.mResultKey = r2;
            return;
        L7:
            throw new IllegalArgumentException("Result key can't be null");
        }

        @NonNull
        public Builder setLabel(@Nullable CharSequence r1) {
            this.mLabel = r1;
            return this;
        }

        @NonNull
        public Builder setChoices(@Nullable CharSequence[] r1) {
            this.mChoices = r1;
            return this;
        }

        @NonNull
        public Builder setAllowDataType(@NonNull String r1, boolean r2) {
            if (r2 == false) goto L4;
            this.mAllowedDataTypes.add(r1);
        L5:
            return this;
        L4:
            this.mAllowedDataTypes.remove(r1);
            goto L5
        }

        @NonNull
        public Builder setAllowFreeFormInput(boolean r1) {
            this.mAllowFreeFormTextInput = r1;
            return this;
        }

        @NonNull
        public Builder addExtras(@NonNull Bundle r2) {
            if (r2 == null) goto L4;
            this.mExtras.putAll(r2);
        L4:
            return this;
        }

        @NonNull
        public Bundle getExtras() {
            return this.mExtras;
        }

        @NonNull
        public RemoteInput build() {
            return new RemoteInput(this.mResultKey, this.mLabel, this.mChoices, this.mAllowFreeFormTextInput, this.mExtras, this.mAllowedDataTypes);
        }
    }

    RemoteInput(String r1, CharSequence r2, CharSequence[] r3, boolean r4, Bundle r5, Set<String> r6) {
        this.mResultKey = r1;
        this.mLabel = r2;
        this.mChoices = r3;
        this.mAllowFreeFormTextInput = r4;
        this.mExtras = r5;
        this.mAllowedDataTypes = r6;
    }

    public String getResultKey() {
        return this.mResultKey;
    }

    public CharSequence getLabel() {
        return this.mLabel;
    }

    public CharSequence[] getChoices() {
        return this.mChoices;
    }

    public Set<String> getAllowedDataTypes() {
        return this.mAllowedDataTypes;
    }

    public boolean isDataOnly() {
        if (getAllowFreeFormInput() == false) goto L5;
    L13:
        return false;
    L5:
        if (getChoices() == null) goto L9;
        if (getChoices().length != 0) goto L13;
    L9:
        if (getAllowedDataTypes() == null) goto L13;
        if (getAllowedDataTypes().isEmpty() == true) goto L13;
        return true;
    }

    public boolean getAllowFreeFormInput() {
        return this.mAllowFreeFormTextInput;
    }

    public Bundle getExtras() {
        return this.mExtras;
    }

    public static Map<String, Uri> getDataResultsFromIntent(Intent r6, String r7) {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return android.app.RemoteInput.getDataResultsFromIntent(r6, r7);
    L7:
        if (Build.VERSION.SDK_INT < 16) goto L29;
        Intent r62 = getClipDataIntentFromIntent(r6);
        if (r62 != null) goto L11;
        return null;
    L11:
        HashMap r0 = new HashMap();
        Iterator<String> r1 = r62.getExtras().keySet().iterator();
    L13:
        if (r1.hasNext() == false) goto L26;
        String r3 = r1.next();
        if (r3.startsWith(EXTRA_DATA_TYPE_RESULTS_DATA) == false) goto L13;
        String r4 = r3.substring(39);
        if (r4.isEmpty() == true) goto L13;
        String r32 = r62.getBundleExtra(r3).getString(r7);
        if (r32 == null) goto L13;
        if (r32.isEmpty() == true) goto L13;
        r0.put(r4, Uri.parse(r32));
        goto L13
    L26:
        if (r0.isEmpty() == true) goto L28;
        return r0;
    L28:
        return null;
    L29:
        Log.w(TAG, "RemoteInput is only supported from API Level 16");
        return null;
    }

    public static Bundle getResultsFromIntent(Intent r3) {
        if (Build.VERSION.SDK_INT < 20) goto L7;
        return android.app.RemoteInput.getResultsFromIntent(r3);
    L7:
        if (Build.VERSION.SDK_INT < 16) goto L13;
        Intent r32 = getClipDataIntentFromIntent(r3);
        if (r32 != null) goto L12;
        return null;
    L12:
        return (Bundle) r32.getExtras().getParcelable(EXTRA_RESULTS_DATA);
    L13:
        Log.w(TAG, "RemoteInput is only supported from API Level 16");
        return null;
    }

    public static void addResultsToIntent(RemoteInput[] r8, Intent r9, Bundle r10) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        android.app.RemoteInput.addResultsToIntent(fromCompat(r8), r9, r10);
        return;
    L5:
        int r2 = 0;
        if (Build.VERSION.SDK_INT < 20) goto L18;
        Bundle r0 = getResultsFromIntent(r9);
        if (r0 == null) goto L11;
        r0.putAll(r10);
        r10 = r0;
    L11:
        int r02 = r8.length;
        int r1 = 0;
    L12:
        if (r1 >= r02) goto L42;
        RemoteInput r3 = r8[r1];
        Map<String, Uri> r4 = getDataResultsFromIntent(r9, r3.getResultKey());
        android.app.RemoteInput.addResultsToIntent(fromCompat(new RemoteInput[]{r3}), r9, r10);
        if (r4 == null) goto L16;
        addDataResultToIntent(r3, r9, r4);
    L16:
        r1 = r1 + 1;
        goto L12
    L42:
        return;
    L18:
        if (Build.VERSION.SDK_INT < 16) goto L32;
        Intent r03 = getClipDataIntentFromIntent(r9);
        if (r03 != null) goto L22;
        r03 = new Intent();
    L22:
        Bundle r32 = r03.getBundleExtra(EXTRA_RESULTS_DATA);
        if (r32 != null) goto L25;
        r32 = new Bundle();
    L25:
        int r42 = r8.length;
    L26:
        if (r2 >= r42) goto L31;
        RemoteInput r5 = r8[r2];
        Object r6 = r10.get(r5.getResultKey());
        if ((r6 instanceof CharSequence) == false) goto L30;
        r32.putCharSequence(r5.getResultKey(), (CharSequence) r6);
    L30:
        r2 = r2 + 1;
        goto L26
    L31:
        r03.putExtra(EXTRA_RESULTS_DATA, r32);
        r9.setClipData(ClipData.newIntent(RESULTS_CLIP_LABEL, r03));
        return;
    L32:
        Log.w(TAG, "RemoteInput is only supported from API Level 16");
    }

    public static void addDataResultToIntent(RemoteInput r5, Intent r6, Map<String, Uri> r7) {
        if (Build.VERSION.SDK_INT < 26) goto L6;
        android.app.RemoteInput.addDataResultToIntent(fromCompat(r5), r6, r7);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L21;
        Intent r0 = getClipDataIntentFromIntent(r6);
        if (r0 != null) goto L10;
        r0 = new Intent();
    L10:
        Iterator<Map.Entry<String, Uri>> r72 = r7.entrySet().iterator();
    L12:
        if (r72.hasNext() == false) goto L20;
        Map.Entry<String, Uri> r1 = r72.next();
        String r2 = r1.getKey();
        Uri r12 = r1.getValue();
        if (r2 == null) goto L12;
        Bundle r3 = r0.getBundleExtra(getExtraResultsKeyForData(r2));
        if (r3 != null) goto L19;
        r3 = new Bundle();
    L19:
        r3.putString(r5.getResultKey(), r12.toString());
        r0.putExtra(getExtraResultsKeyForData(r2), r3);
        goto L12
    L20:
        r6.setClipData(ClipData.newIntent(RESULTS_CLIP_LABEL, r0));
        return;
    L21:
        Log.w(TAG, "RemoteInput is only supported from API Level 16");
    }

    private static String getExtraResultsKeyForData(String r2) {
        return EXTRA_DATA_TYPE_RESULTS_DATA + r2;
    }

    @RequiresApi(20)
    static android.app.RemoteInput[] fromCompat(RemoteInput[] r3) {
        if (r3 != null) goto L5;
        return null;
    L5:
        android.app.RemoteInput[] r0 = new android.app.RemoteInput[r3.length];
        int r1 = 0;
    L7:
        if (r1 >= r3.length) goto L9;
        r0[r1] = fromCompat(r3[r1]);
        r1 = r1 + 1;
        goto L7
    L9:
        return r0;
    }

    @RequiresApi(20)
    static android.app.RemoteInput fromCompat(RemoteInput r2) {
        return new RemoteInput.Builder(r2.getResultKey()).setLabel(r2.getLabel()).setChoices(r2.getChoices()).setAllowFreeFormInput(r2.getAllowFreeFormInput()).addExtras(r2.getExtras()).build();
    }

    @RequiresApi(16)
    private static Intent getClipDataIntentFromIntent(Intent r3) {
        ClipData r32 = r3.getClipData();
        if (r32 != null) goto L5;
        return null;
    L5:
        ClipDescription r1 = r32.getDescription();
        if (r1.hasMimeType("text/vnd.android.intent") == true) goto L9;
        return null;
    L9:
        if (r1.getLabel().equals(RESULTS_CLIP_LABEL) == true) goto L12;
        return null;
    L12:
        return r32.getItemAt(0).getIntent();
    }
}
