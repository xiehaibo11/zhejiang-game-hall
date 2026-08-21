package android.support.v4.app;

public final class RemoteInput {
    private static final java.lang.String EXTRA_DATA_TYPE_RESULTS_DATA = "android.remoteinput.dataTypeResultsData";
    public static final java.lang.String EXTRA_RESULTS_DATA = "android.remoteinput.resultsData";
    public static final java.lang.String RESULTS_CLIP_LABEL = "android.remoteinput.results";
    private static final java.lang.String TAG = "RemoteInput";
    private final boolean mAllowFreeFormTextInput;
    private final java.util.Set<java.lang.String> mAllowedDataTypes;
    private final java.lang.CharSequence[] mChoices;
    private final android.os.Bundle mExtras;
    private final java.lang.CharSequence mLabel;
    private final java.lang.String mResultKey;

    public static final class Builder {
        private boolean mAllowFreeFormTextInput;
        private final java.util.Set<java.lang.String> mAllowedDataTypes;
        private java.lang.CharSequence[] mChoices;
        private final android.os.Bundle mExtras;
        private java.lang.CharSequence mLabel;
        private final java.lang.String mResultKey;

        public Builder(@android.support.annotation.NonNull java.lang.String r2) {
                r1 = this;
                r1.<init>()
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                r1.mAllowedDataTypes = r0
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                r1.mExtras = r0
                r0 = 1
                r1.mAllowFreeFormTextInput = r0
                if (r2 == 0) goto L19
                r1.mResultKey = r2
                return
            L19:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Result key can't be null"
                r2.<init>(r0)
                throw r2
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput.Builder addExtras(@android.support.annotation.NonNull android.os.Bundle r2) {
                r1 = this;
                if (r2 == 0) goto L7
                android.os.Bundle r0 = r1.mExtras
                r0.putAll(r2)
            L7:
                return r1
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput build() {
                r8 = this;
                android.support.v4.app.RemoteInput r7 = new android.support.v4.app.RemoteInput
                java.lang.String r1 = r8.mResultKey
                java.lang.CharSequence r2 = r8.mLabel
                java.lang.CharSequence[] r3 = r8.mChoices
                boolean r4 = r8.mAllowFreeFormTextInput
                android.os.Bundle r5 = r8.mExtras
                java.util.Set<java.lang.String> r6 = r8.mAllowedDataTypes
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }

        @android.support.annotation.NonNull
        public android.os.Bundle getExtras() {
                r1 = this;
                android.os.Bundle r0 = r1.mExtras
                return r0
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput.Builder setAllowDataType(@android.support.annotation.NonNull java.lang.String r1, boolean r2) {
                r0 = this;
                if (r2 == 0) goto L8
                java.util.Set<java.lang.String> r2 = r0.mAllowedDataTypes
                r2.add(r1)
                goto Ld
            L8:
                java.util.Set<java.lang.String> r2 = r0.mAllowedDataTypes
                r2.remove(r1)
            Ld:
                return r0
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput.Builder setAllowFreeFormInput(boolean r1) {
                r0 = this;
                r0.mAllowFreeFormTextInput = r1
                return r0
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput.Builder setChoices(@android.support.annotation.Nullable java.lang.CharSequence[] r1) {
                r0 = this;
                r0.mChoices = r1
                return r0
        }

        @android.support.annotation.NonNull
        public android.support.v4.app.RemoteInput.Builder setLabel(@android.support.annotation.Nullable java.lang.CharSequence r1) {
                r0 = this;
                r0.mLabel = r1
                return r0
        }
    }

    RemoteInput(java.lang.String r1, java.lang.CharSequence r2, java.lang.CharSequence[] r3, boolean r4, android.os.Bundle r5, java.util.Set<java.lang.String> r6) {
            r0 = this;
            r0.<init>()
            r0.mResultKey = r1
            r0.mLabel = r2
            r0.mChoices = r3
            r0.mAllowFreeFormTextInput = r4
            r0.mExtras = r5
            r0.mAllowedDataTypes = r6
            return
    }

    public static void addDataResultToIntent(android.support.v4.app.RemoteInput r5, android.content.Intent r6, java.util.Map<java.lang.String, android.net.Uri> r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Le
            android.app.RemoteInput r5 = fromCompat(r5)
            android.app.RemoteInput.addDataResultToIntent(r5, r6, r7)
            goto L75
        Le:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L6e
            android.content.Intent r0 = getClipDataIntentFromIntent(r6)
            if (r0 != 0) goto L1f
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
        L1f:
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L27:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L64
            java.lang.Object r1 = r7.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            android.net.Uri r1 = (android.net.Uri) r1
            if (r2 != 0) goto L42
            goto L27
        L42:
            java.lang.String r3 = getExtraResultsKeyForData(r2)
            android.os.Bundle r3 = r0.getBundleExtra(r3)
            if (r3 != 0) goto L51
            android.os.Bundle r3 = new android.os.Bundle
            r3.<init>()
        L51:
            java.lang.String r4 = r5.getResultKey()
            java.lang.String r1 = r1.toString()
            r3.putString(r4, r1)
            java.lang.String r1 = getExtraResultsKeyForData(r2)
            r0.putExtra(r1, r3)
            goto L27
        L64:
            java.lang.String r5 = "android.remoteinput.results"
            android.content.ClipData r5 = android.content.ClipData.newIntent(r5, r0)
            r6.setClipData(r5)
            goto L75
        L6e:
            java.lang.String r5 = "RemoteInput"
            java.lang.String r6 = "RemoteInput is only supported from API Level 16"
            android.util.Log.w(r5, r6)
        L75:
            return
    }

    public static void addResultsToIntent(android.support.v4.app.RemoteInput[] r8, android.content.Intent r9, android.os.Bundle r10) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lf
            android.app.RemoteInput[] r8 = fromCompat(r8)
            android.app.RemoteInput.addResultsToIntent(r8, r9, r10)
            goto L92
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            r2 = 0
            if (r0 < r1) goto L43
            android.os.Bundle r0 = getResultsFromIntent(r9)
            if (r0 != 0) goto L1d
            goto L21
        L1d:
            r0.putAll(r10)
            r10 = r0
        L21:
            int r0 = r8.length
            r1 = 0
        L23:
            if (r1 >= r0) goto L92
            r3 = r8[r1]
            java.lang.String r4 = r3.getResultKey()
            java.util.Map r4 = getDataResultsFromIntent(r9, r4)
            r5 = 1
            android.support.v4.app.RemoteInput[] r5 = new android.support.v4.app.RemoteInput[r5]
            r5[r2] = r3
            android.app.RemoteInput[] r5 = fromCompat(r5)
            android.app.RemoteInput.addResultsToIntent(r5, r9, r10)
            if (r4 == 0) goto L40
            addDataResultToIntent(r3, r9, r4)
        L40:
            int r1 = r1 + 1
            goto L23
        L43:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L8b
            android.content.Intent r0 = getClipDataIntentFromIntent(r9)
            if (r0 != 0) goto L54
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
        L54:
            java.lang.String r1 = "android.remoteinput.resultsData"
            android.os.Bundle r3 = r0.getBundleExtra(r1)
            if (r3 != 0) goto L61
            android.os.Bundle r3 = new android.os.Bundle
            r3.<init>()
        L61:
            int r4 = r8.length
        L62:
            if (r2 >= r4) goto L7e
            r5 = r8[r2]
            java.lang.String r6 = r5.getResultKey()
            java.lang.Object r6 = r10.get(r6)
            boolean r7 = r6 instanceof java.lang.CharSequence
            if (r7 == 0) goto L7b
            java.lang.String r5 = r5.getResultKey()
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            r3.putCharSequence(r5, r6)
        L7b:
            int r2 = r2 + 1
            goto L62
        L7e:
            r0.putExtra(r1, r3)
            java.lang.String r8 = "android.remoteinput.results"
            android.content.ClipData r8 = android.content.ClipData.newIntent(r8, r0)
            r9.setClipData(r8)
            goto L92
        L8b:
            java.lang.String r8 = "RemoteInput"
            java.lang.String r9 = "RemoteInput is only supported from API Level 16"
            android.util.Log.w(r8, r9)
        L92:
            return
    }

    @android.support.annotation.RequiresApi(20)
    static android.app.RemoteInput fromCompat(android.support.v4.app.RemoteInput r2) {
            android.app.RemoteInput$Builder r0 = new android.app.RemoteInput$Builder
            java.lang.String r1 = r2.getResultKey()
            r0.<init>(r1)
            java.lang.CharSequence r1 = r2.getLabel()
            android.app.RemoteInput$Builder r0 = r0.setLabel(r1)
            java.lang.CharSequence[] r1 = r2.getChoices()
            android.app.RemoteInput$Builder r0 = r0.setChoices(r1)
            boolean r1 = r2.getAllowFreeFormInput()
            android.app.RemoteInput$Builder r0 = r0.setAllowFreeFormInput(r1)
            android.os.Bundle r2 = r2.getExtras()
            android.app.RemoteInput$Builder r2 = r0.addExtras(r2)
            android.app.RemoteInput r2 = r2.build()
            return r2
    }

    @android.support.annotation.RequiresApi(20)
    static android.app.RemoteInput[] fromCompat(android.support.v4.app.RemoteInput[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            android.app.RemoteInput[] r0 = new android.app.RemoteInput[r0]
            r1 = 0
        L8:
            int r2 = r3.length
            if (r1 >= r2) goto L16
            r2 = r3[r1]
            android.app.RemoteInput r2 = fromCompat(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L16:
            return r0
    }

    @android.support.annotation.RequiresApi(16)
    private static android.content.Intent getClipDataIntentFromIntent(android.content.Intent r3) {
            android.content.ClipData r3 = r3.getClipData()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            android.content.ClipDescription r1 = r3.getDescription()
            java.lang.String r2 = "text/vnd.android.intent"
            boolean r2 = r1.hasMimeType(r2)
            if (r2 != 0) goto L15
            return r0
        L15:
            java.lang.CharSequence r1 = r1.getLabel()
            java.lang.String r2 = "android.remoteinput.results"
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L22
            return r0
        L22:
            r0 = 0
            android.content.ClipData$Item r3 = r3.getItemAt(r0)
            android.content.Intent r3 = r3.getIntent()
            return r3
    }

    public static java.util.Map<java.lang.String, android.net.Uri> getDataResultsFromIntent(android.content.Intent r6, java.lang.String r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            java.util.Map r6 = android.app.RemoteInput.getDataResultsFromIntent(r6, r7)
            return r6
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            r2 = 0
            if (r0 < r1) goto L6c
            android.content.Intent r6 = getClipDataIntentFromIntent(r6)
            if (r6 != 0) goto L19
            return r2
        L19:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.os.Bundle r1 = r6.getExtras()
            java.util.Set r1 = r1.keySet()
            java.util.Iterator r1 = r1.iterator()
        L2a:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L64
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r4 = "android.remoteinput.dataTypeResultsData"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L2a
            r4 = 39
            java.lang.String r4 = r3.substring(r4)
            boolean r5 = r4.isEmpty()
            if (r5 == 0) goto L4b
            goto L2a
        L4b:
            android.os.Bundle r3 = r6.getBundleExtra(r3)
            java.lang.String r3 = r3.getString(r7)
            if (r3 == 0) goto L2a
            boolean r5 = r3.isEmpty()
            if (r5 == 0) goto L5c
            goto L2a
        L5c:
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.put(r4, r3)
            goto L2a
        L64:
            boolean r6 = r0.isEmpty()
            if (r6 == 0) goto L6b
            r0 = r2
        L6b:
            return r0
        L6c:
            java.lang.String r6 = "RemoteInput"
            java.lang.String r7 = "RemoteInput is only supported from API Level 16"
            android.util.Log.w(r6, r7)
            return r2
    }

    private static java.lang.String getExtraResultsKeyForData(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "android.remoteinput.dataTypeResultsData"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static android.os.Bundle getResultsFromIntent(android.content.Intent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lb
            android.os.Bundle r3 = android.app.RemoteInput.getResultsFromIntent(r3)
            return r3
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            r2 = 0
            if (r0 < r1) goto L26
            android.content.Intent r3 = getClipDataIntentFromIntent(r3)
            if (r3 != 0) goto L19
            return r2
        L19:
            android.os.Bundle r3 = r3.getExtras()
            java.lang.String r0 = "android.remoteinput.resultsData"
            android.os.Parcelable r3 = r3.getParcelable(r0)
            android.os.Bundle r3 = (android.os.Bundle) r3
            return r3
        L26:
            java.lang.String r3 = "RemoteInput"
            java.lang.String r0 = "RemoteInput is only supported from API Level 16"
            android.util.Log.w(r3, r0)
            return r2
    }

    public boolean getAllowFreeFormInput() {
            r1 = this;
            boolean r0 = r1.mAllowFreeFormTextInput
            return r0
    }

    public java.util.Set<java.lang.String> getAllowedDataTypes() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.mAllowedDataTypes
            return r0
    }

    public java.lang.CharSequence[] getChoices() {
            r1 = this;
            java.lang.CharSequence[] r0 = r1.mChoices
            return r0
    }

    public android.os.Bundle getExtras() {
            r1 = this;
            android.os.Bundle r0 = r1.mExtras
            return r0
    }

    public java.lang.CharSequence getLabel() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mLabel
            return r0
    }

    public java.lang.String getResultKey() {
            r1 = this;
            java.lang.String r0 = r1.mResultKey
            return r0
    }

    public boolean isDataOnly() {
            r1 = this;
            boolean r0 = r1.getAllowFreeFormInput()
            if (r0 != 0) goto L25
            java.lang.CharSequence[] r0 = r1.getChoices()
            if (r0 == 0) goto L13
            java.lang.CharSequence[] r0 = r1.getChoices()
            int r0 = r0.length
            if (r0 != 0) goto L25
        L13:
            java.util.Set r0 = r1.getAllowedDataTypes()
            if (r0 == 0) goto L25
            java.util.Set r0 = r1.getAllowedDataTypes()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L25
            r0 = 1
            goto L26
        L25:
            r0 = 0
        L26:
            return r0
    }
}
