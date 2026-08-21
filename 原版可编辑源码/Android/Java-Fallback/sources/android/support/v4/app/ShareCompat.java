package android.support.v4.app;

public final class ShareCompat {
    public static final java.lang.String EXTRA_CALLING_ACTIVITY = "android.support.v4.app.EXTRA_CALLING_ACTIVITY";
    public static final java.lang.String EXTRA_CALLING_PACKAGE = "android.support.v4.app.EXTRA_CALLING_PACKAGE";
    private static final java.lang.String HISTORY_FILENAME_PREFIX = ".sharecompat_";

    public static class IntentBuilder {
        private android.app.Activity mActivity;
        private java.util.ArrayList<java.lang.String> mBccAddresses;
        private java.util.ArrayList<java.lang.String> mCcAddresses;
        private java.lang.CharSequence mChooserTitle;
        private android.content.Intent mIntent;
        private java.util.ArrayList<android.net.Uri> mStreams;
        private java.util.ArrayList<java.lang.String> mToAddresses;

        private IntentBuilder(android.app.Activity r4) {
                r3 = this;
                r3.<init>()
                r3.mActivity = r4
                android.content.Intent r0 = new android.content.Intent
                r0.<init>()
                java.lang.String r1 = "android.intent.action.SEND"
                android.content.Intent r0 = r0.setAction(r1)
                r3.mIntent = r0
                java.lang.String r1 = r4.getPackageName()
                java.lang.String r2 = "android.support.v4.app.EXTRA_CALLING_PACKAGE"
                r0.putExtra(r2, r1)
                android.content.Intent r0 = r3.mIntent
                android.content.ComponentName r4 = r4.getComponentName()
                java.lang.String r1 = "android.support.v4.app.EXTRA_CALLING_ACTIVITY"
                r0.putExtra(r1, r4)
                android.content.Intent r4 = r3.mIntent
                r0 = 524288(0x80000, float:7.34684E-40)
                r4.addFlags(r0)
                return
        }

        private void combineArrayExtra(java.lang.String r5, java.util.ArrayList<java.lang.String> r6) {
                r4 = this;
                android.content.Intent r0 = r4.mIntent
                java.lang.String[] r0 = r0.getStringArrayExtra(r5)
                r1 = 0
                if (r0 == 0) goto Lb
                int r2 = r0.length
                goto Lc
            Lb:
                r2 = r1
            Lc:
                int r3 = r6.size()
                int r3 = r3 + r2
                java.lang.String[] r3 = new java.lang.String[r3]
                r6.toArray(r3)
                if (r0 == 0) goto L1f
                int r6 = r6.size()
                java.lang.System.arraycopy(r0, r1, r3, r6, r2)
            L1f:
                android.content.Intent r6 = r4.mIntent
                r6.putExtra(r5, r3)
                return
        }

        private void combineArrayExtra(java.lang.String r6, java.lang.String[] r7) {
                r5 = this;
                android.content.Intent r0 = r5.getIntent()
                java.lang.String[] r1 = r0.getStringArrayExtra(r6)
                r2 = 0
                if (r1 == 0) goto Ld
                int r3 = r1.length
                goto Le
            Ld:
                r3 = r2
            Le:
                int r4 = r7.length
                int r4 = r4 + r3
                java.lang.String[] r4 = new java.lang.String[r4]
                if (r1 == 0) goto L17
                java.lang.System.arraycopy(r1, r2, r4, r2, r3)
            L17:
                int r1 = r7.length
                java.lang.System.arraycopy(r7, r2, r4, r3, r1)
                r0.putExtra(r6, r4)
                return
        }

        public static android.support.v4.app.ShareCompat.IntentBuilder from(android.app.Activity r1) {
                android.support.v4.app.ShareCompat$IntentBuilder r0 = new android.support.v4.app.ShareCompat$IntentBuilder
                r0.<init>(r1)
                return r0
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailBcc(java.lang.String r2) {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.mBccAddresses
                if (r0 != 0) goto Lb
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mBccAddresses = r0
            Lb:
                java.util.ArrayList<java.lang.String> r0 = r1.mBccAddresses
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailBcc(java.lang.String[] r2) {
                r1 = this;
                java.lang.String r0 = "android.intent.extra.BCC"
                r1.combineArrayExtra(r0, r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailCc(java.lang.String r2) {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.mCcAddresses
                if (r0 != 0) goto Lb
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mCcAddresses = r0
            Lb:
                java.util.ArrayList<java.lang.String> r0 = r1.mCcAddresses
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailCc(java.lang.String[] r2) {
                r1 = this;
                java.lang.String r0 = "android.intent.extra.CC"
                r1.combineArrayExtra(r0, r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailTo(java.lang.String r2) {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.mToAddresses
                if (r0 != 0) goto Lb
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mToAddresses = r0
            Lb:
                java.util.ArrayList<java.lang.String> r0 = r1.mToAddresses
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailTo(java.lang.String[] r2) {
                r1 = this;
                java.lang.String r0 = "android.intent.extra.EMAIL"
                r1.combineArrayExtra(r0, r2)
                return r1
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addStream(android.net.Uri r4) {
                r3 = this;
                android.content.Intent r0 = r3.mIntent
                java.lang.String r1 = "android.intent.extra.STREAM"
                android.os.Parcelable r0 = r0.getParcelableExtra(r1)
                android.net.Uri r0 = (android.net.Uri) r0
                java.util.ArrayList<android.net.Uri> r2 = r3.mStreams
                if (r2 != 0) goto L15
                if (r0 != 0) goto L15
                android.support.v4.app.ShareCompat$IntentBuilder r4 = r3.setStream(r4)
                return r4
            L15:
                java.util.ArrayList<android.net.Uri> r2 = r3.mStreams
                if (r2 != 0) goto L20
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                r3.mStreams = r2
            L20:
                if (r0 == 0) goto L2c
                android.content.Intent r2 = r3.mIntent
                r2.removeExtra(r1)
                java.util.ArrayList<android.net.Uri> r1 = r3.mStreams
                r1.add(r0)
            L2c:
                java.util.ArrayList<android.net.Uri> r0 = r3.mStreams
                r0.add(r4)
                return r3
        }

        public android.content.Intent createChooserIntent() {
                r2 = this;
                android.content.Intent r0 = r2.getIntent()
                java.lang.CharSequence r1 = r2.mChooserTitle
                android.content.Intent r0 = android.content.Intent.createChooser(r0, r1)
                return r0
        }

        android.app.Activity getActivity() {
                r1 = this;
                android.app.Activity r0 = r1.mActivity
                return r0
        }

        public android.content.Intent getIntent() {
                r8 = this;
                java.util.ArrayList<java.lang.String> r0 = r8.mToAddresses
                r1 = 0
                if (r0 == 0) goto Lc
                java.lang.String r2 = "android.intent.extra.EMAIL"
                r8.combineArrayExtra(r2, r0)
                r8.mToAddresses = r1
            Lc:
                java.util.ArrayList<java.lang.String> r0 = r8.mCcAddresses
                if (r0 == 0) goto L17
                java.lang.String r2 = "android.intent.extra.CC"
                r8.combineArrayExtra(r2, r0)
                r8.mCcAddresses = r1
            L17:
                java.util.ArrayList<java.lang.String> r0 = r8.mBccAddresses
                if (r0 == 0) goto L22
                java.lang.String r2 = "android.intent.extra.BCC"
                r8.combineArrayExtra(r2, r0)
                r8.mBccAddresses = r1
            L22:
                java.util.ArrayList<android.net.Uri> r0 = r8.mStreams
                r2 = 1
                r3 = 0
                if (r0 == 0) goto L2f
                int r0 = r0.size()
                if (r0 <= r2) goto L2f
                goto L30
            L2f:
                r2 = r3
            L30:
                android.content.Intent r0 = r8.mIntent
                java.lang.String r0 = r0.getAction()
                java.lang.String r4 = "android.intent.action.SEND_MULTIPLE"
                boolean r0 = r0.equals(r4)
                java.lang.String r5 = "android.intent.extra.STREAM"
                if (r2 != 0) goto L68
                if (r0 == 0) goto L68
                android.content.Intent r6 = r8.mIntent
                java.lang.String r7 = "android.intent.action.SEND"
                r6.setAction(r7)
                java.util.ArrayList<android.net.Uri> r6 = r8.mStreams
                if (r6 == 0) goto L61
                boolean r6 = r6.isEmpty()
                if (r6 != 0) goto L61
                android.content.Intent r6 = r8.mIntent
                java.util.ArrayList<android.net.Uri> r7 = r8.mStreams
                java.lang.Object r3 = r7.get(r3)
                android.os.Parcelable r3 = (android.os.Parcelable) r3
                r6.putExtra(r5, r3)
                goto L66
            L61:
                android.content.Intent r3 = r8.mIntent
                r3.removeExtra(r5)
            L66:
                r8.mStreams = r1
            L68:
                if (r2 == 0) goto L88
                if (r0 != 0) goto L88
                android.content.Intent r0 = r8.mIntent
                r0.setAction(r4)
                java.util.ArrayList<android.net.Uri> r0 = r8.mStreams
                if (r0 == 0) goto L83
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L83
                android.content.Intent r0 = r8.mIntent
                java.util.ArrayList<android.net.Uri> r1 = r8.mStreams
                r0.putParcelableArrayListExtra(r5, r1)
                goto L88
            L83:
                android.content.Intent r0 = r8.mIntent
                r0.removeExtra(r5)
            L88:
                android.content.Intent r0 = r8.mIntent
                return r0
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setChooserTitle(int r2) {
                r1 = this;
                android.app.Activity r0 = r1.mActivity
                java.lang.CharSequence r2 = r0.getText(r2)
                android.support.v4.app.ShareCompat$IntentBuilder r2 = r1.setChooserTitle(r2)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setChooserTitle(java.lang.CharSequence r1) {
                r0 = this;
                r0.mChooserTitle = r1
                return r0
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailBcc(java.lang.String[] r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.BCC"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailCc(java.lang.String[] r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.CC"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailTo(java.lang.String[] r3) {
                r2 = this;
                java.util.ArrayList<java.lang.String> r0 = r2.mToAddresses
                if (r0 == 0) goto L7
                r0 = 0
                r2.mToAddresses = r0
            L7:
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.EMAIL"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setHtmlText(java.lang.String r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.HTML_TEXT"
                r0.putExtra(r1, r3)
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.TEXT"
                boolean r0 = r0.hasExtra(r1)
                if (r0 != 0) goto L18
                android.text.Spanned r3 = android.text.Html.fromHtml(r3)
                r2.setText(r3)
            L18:
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setStream(android.net.Uri r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r0 = r0.getAction()
                java.lang.String r1 = "android.intent.action.SEND"
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L13
                android.content.Intent r0 = r2.mIntent
                r0.setAction(r1)
            L13:
                r0 = 0
                r2.mStreams = r0
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.STREAM"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setSubject(java.lang.String r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.SUBJECT"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setText(java.lang.CharSequence r3) {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.TEXT"
                r0.putExtra(r1, r3)
                return r2
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setType(java.lang.String r2) {
                r1 = this;
                android.content.Intent r0 = r1.mIntent
                r0.setType(r2)
                return r1
        }

        public void startChooser() {
                r2 = this;
                android.app.Activity r0 = r2.mActivity
                android.content.Intent r1 = r2.createChooserIntent()
                r0.startActivity(r1)
                return
        }
    }

    public static class IntentReader {
        private static final java.lang.String TAG = "IntentReader";
        private android.app.Activity mActivity;
        private android.content.ComponentName mCallingActivity;
        private java.lang.String mCallingPackage;
        private android.content.Intent mIntent;
        private java.util.ArrayList<android.net.Uri> mStreams;

        private IntentReader(android.app.Activity r2) {
                r1 = this;
                r1.<init>()
                r1.mActivity = r2
                android.content.Intent r0 = r2.getIntent()
                r1.mIntent = r0
                java.lang.String r0 = android.support.v4.app.ShareCompat.getCallingPackage(r2)
                r1.mCallingPackage = r0
                android.content.ComponentName r2 = android.support.v4.app.ShareCompat.getCallingActivity(r2)
                r1.mCallingActivity = r2
                return
        }

        public static android.support.v4.app.ShareCompat.IntentReader from(android.app.Activity r1) {
                android.support.v4.app.ShareCompat$IntentReader r0 = new android.support.v4.app.ShareCompat$IntentReader
                r0.<init>(r1)
                return r0
        }

        private static void withinStyle(java.lang.StringBuilder r3, java.lang.CharSequence r4, int r5, int r6) {
            L0:
                if (r5 >= r6) goto L64
                char r0 = r4.charAt(r5)
                r1 = 60
                if (r0 != r1) goto L10
                java.lang.String r0 = "&lt;"
                r3.append(r0)
                goto L61
            L10:
                r1 = 62
                if (r0 != r1) goto L1a
                java.lang.String r0 = "&gt;"
                r3.append(r0)
                goto L61
            L1a:
                r1 = 38
                if (r0 != r1) goto L24
                java.lang.String r0 = "&amp;"
                r3.append(r0)
                goto L61
            L24:
                r1 = 126(0x7e, float:1.77E-43)
                if (r0 > r1) goto L48
                r1 = 32
                if (r0 >= r1) goto L2d
                goto L48
            L2d:
                if (r0 != r1) goto L44
            L2f:
                int r0 = r5 + 1
                if (r0 >= r6) goto L40
                char r2 = r4.charAt(r0)
                if (r2 != r1) goto L40
                java.lang.String r5 = "&nbsp;"
                r3.append(r5)
                r5 = r0
                goto L2f
            L40:
                r3.append(r1)
                goto L61
            L44:
                r3.append(r0)
                goto L61
            L48:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "&#"
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = ";"
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r3.append(r0)
            L61:
                int r5 = r5 + 1
                goto L0
            L64:
                return
        }

        public android.content.ComponentName getCallingActivity() {
                r1 = this;
                android.content.ComponentName r0 = r1.mCallingActivity
                return r0
        }

        public android.graphics.drawable.Drawable getCallingActivityIcon() {
                r4 = this;
                android.content.ComponentName r0 = r4.mCallingActivity
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.app.Activity r0 = r4.mActivity
                android.content.pm.PackageManager r0 = r0.getPackageManager()
                android.content.ComponentName r2 = r4.mCallingActivity     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
                android.graphics.drawable.Drawable r0 = r0.getActivityIcon(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
                return r0
            L13:
                r0 = move-exception
                java.lang.String r2 = "IntentReader"
                java.lang.String r3 = "Could not retrieve icon for calling activity"
                android.util.Log.e(r2, r3, r0)
                return r1
        }

        public android.graphics.drawable.Drawable getCallingApplicationIcon() {
                r4 = this;
                java.lang.String r0 = r4.mCallingPackage
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.app.Activity r0 = r4.mActivity
                android.content.pm.PackageManager r0 = r0.getPackageManager()
                java.lang.String r2 = r4.mCallingPackage     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
                android.graphics.drawable.Drawable r0 = r0.getApplicationIcon(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
                return r0
            L13:
                r0 = move-exception
                java.lang.String r2 = "IntentReader"
                java.lang.String r3 = "Could not retrieve icon for calling application"
                android.util.Log.e(r2, r3, r0)
                return r1
        }

        public java.lang.CharSequence getCallingApplicationLabel() {
                r4 = this;
                java.lang.String r0 = r4.mCallingPackage
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.app.Activity r0 = r4.mActivity
                android.content.pm.PackageManager r0 = r0.getPackageManager()
                java.lang.String r2 = r4.mCallingPackage     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
                r3 = 0
                android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
                java.lang.CharSequence r0 = r0.getApplicationLabel(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
                return r0
            L18:
                r0 = move-exception
                java.lang.String r2 = "IntentReader"
                java.lang.String r3 = "Could not retrieve label for calling application"
                android.util.Log.e(r2, r3, r0)
                return r1
        }

        public java.lang.String getCallingPackage() {
                r1 = this;
                java.lang.String r0 = r1.mCallingPackage
                return r0
        }

        public java.lang.String[] getEmailBcc() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.BCC"
                java.lang.String[] r0 = r0.getStringArrayExtra(r1)
                return r0
        }

        public java.lang.String[] getEmailCc() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.CC"
                java.lang.String[] r0 = r0.getStringArrayExtra(r1)
                return r0
        }

        public java.lang.String[] getEmailTo() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.EMAIL"
                java.lang.String[] r0 = r0.getStringArrayExtra(r1)
                return r0
        }

        public java.lang.String getHtmlText() {
                r4 = this;
                android.content.Intent r0 = r4.mIntent
                java.lang.String r1 = "android.intent.extra.HTML_TEXT"
                java.lang.String r0 = r0.getStringExtra(r1)
                if (r0 != 0) goto L37
                java.lang.CharSequence r1 = r4.getText()
                boolean r2 = r1 instanceof android.text.Spanned
                if (r2 == 0) goto L19
                android.text.Spanned r1 = (android.text.Spanned) r1
                java.lang.String r0 = android.text.Html.toHtml(r1)
                goto L37
            L19:
                if (r1 == 0) goto L37
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 16
                if (r0 < r2) goto L26
                java.lang.String r0 = android.text.Html.escapeHtml(r1)
                goto L37
            L26:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r2 = 0
                int r3 = r1.length()
                withinStyle(r0, r1, r2, r3)
                java.lang.String r0 = r0.toString()
            L37:
                return r0
        }

        public android.net.Uri getStream() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.STREAM"
                android.os.Parcelable r0 = r0.getParcelableExtra(r1)
                android.net.Uri r0 = (android.net.Uri) r0
                return r0
        }

        public android.net.Uri getStream(int r4) {
                r3 = this;
                java.util.ArrayList<android.net.Uri> r0 = r3.mStreams
                java.lang.String r1 = "android.intent.extra.STREAM"
                if (r0 != 0) goto L14
                boolean r0 = r3.isMultipleShare()
                if (r0 == 0) goto L14
                android.content.Intent r0 = r3.mIntent
                java.util.ArrayList r0 = r0.getParcelableArrayListExtra(r1)
                r3.mStreams = r0
            L14:
                java.util.ArrayList<android.net.Uri> r0 = r3.mStreams
                if (r0 == 0) goto L1f
                java.lang.Object r4 = r0.get(r4)
                android.net.Uri r4 = (android.net.Uri) r4
                return r4
            L1f:
                if (r4 != 0) goto L2a
                android.content.Intent r4 = r3.mIntent
                android.os.Parcelable r4 = r4.getParcelableExtra(r1)
                android.net.Uri r4 = (android.net.Uri) r4
                return r4
            L2a:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Stream items available: "
                r1.append(r2)
                int r2 = r3.getStreamCount()
                r1.append(r2)
                java.lang.String r2 = " index requested: "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        public int getStreamCount() {
                r2 = this;
                java.util.ArrayList<android.net.Uri> r0 = r2.mStreams
                java.lang.String r1 = "android.intent.extra.STREAM"
                if (r0 != 0) goto L14
                boolean r0 = r2.isMultipleShare()
                if (r0 == 0) goto L14
                android.content.Intent r0 = r2.mIntent
                java.util.ArrayList r0 = r0.getParcelableArrayListExtra(r1)
                r2.mStreams = r0
            L14:
                java.util.ArrayList<android.net.Uri> r0 = r2.mStreams
                if (r0 == 0) goto L1d
                int r0 = r0.size()
                return r0
            L1d:
                android.content.Intent r0 = r2.mIntent
                boolean r0 = r0.hasExtra(r1)
                return r0
        }

        public java.lang.String getSubject() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.SUBJECT"
                java.lang.String r0 = r0.getStringExtra(r1)
                return r0
        }

        public java.lang.CharSequence getText() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r1 = "android.intent.extra.TEXT"
                java.lang.CharSequence r0 = r0.getCharSequenceExtra(r1)
                return r0
        }

        public java.lang.String getType() {
                r1 = this;
                android.content.Intent r0 = r1.mIntent
                java.lang.String r0 = r0.getType()
                return r0
        }

        public boolean isMultipleShare() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r0 = r0.getAction()
                java.lang.String r1 = "android.intent.action.SEND_MULTIPLE"
                boolean r0 = r1.equals(r0)
                return r0
        }

        public boolean isShareIntent() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r0 = r0.getAction()
                java.lang.String r1 = "android.intent.action.SEND"
                boolean r1 = r1.equals(r0)
                if (r1 != 0) goto L19
                java.lang.String r1 = "android.intent.action.SEND_MULTIPLE"
                boolean r0 = r1.equals(r0)
                if (r0 == 0) goto L17
                goto L19
            L17:
                r0 = 0
                goto L1a
            L19:
                r0 = 1
            L1a:
                return r0
        }

        public boolean isSingleShare() {
                r2 = this;
                android.content.Intent r0 = r2.mIntent
                java.lang.String r0 = r0.getAction()
                java.lang.String r1 = "android.intent.action.SEND"
                boolean r0 = r1.equals(r0)
                return r0
        }
    }

    private ShareCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void configureMenuItem(android.view.Menu r1, int r2, android.support.v4.app.ShareCompat.IntentBuilder r3) {
            android.view.MenuItem r1 = r1.findItem(r2)
            if (r1 == 0) goto La
            configureMenuItem(r1, r3)
            return
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Could not find menu item with id "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = " in the supplied menu"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.<init>(r2)
            throw r1
    }

    public static void configureMenuItem(android.view.MenuItem r3, android.support.v4.app.ShareCompat.IntentBuilder r4) {
            android.view.ActionProvider r0 = r3.getActionProvider()
            boolean r1 = r0 instanceof android.widget.ShareActionProvider
            if (r1 != 0) goto L12
            android.widget.ShareActionProvider r0 = new android.widget.ShareActionProvider
            android.app.Activity r1 = r4.getActivity()
            r0.<init>(r1)
            goto L14
        L12:
            android.widget.ShareActionProvider r0 = (android.widget.ShareActionProvider) r0
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ".sharecompat_"
            r1.append(r2)
            android.app.Activity r2 = r4.getActivity()
            java.lang.Class r2 = r2.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.setShareHistoryFileName(r1)
            android.content.Intent r1 = r4.getIntent()
            r0.setShareIntent(r1)
            r3.setActionProvider(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 >= r1) goto L51
            boolean r0 = r3.hasSubMenu()
            if (r0 != 0) goto L51
            android.content.Intent r4 = r4.createChooserIntent()
            r3.setIntent(r4)
        L51:
            return
    }

    public static android.content.ComponentName getCallingActivity(android.app.Activity r1) {
            android.content.ComponentName r0 = r1.getCallingActivity()
            if (r0 != 0) goto L13
            android.content.Intent r1 = r1.getIntent()
            java.lang.String r0 = "android.support.v4.app.EXTRA_CALLING_ACTIVITY"
            android.os.Parcelable r1 = r1.getParcelableExtra(r0)
            r0 = r1
            android.content.ComponentName r0 = (android.content.ComponentName) r0
        L13:
            return r0
    }

    public static java.lang.String getCallingPackage(android.app.Activity r1) {
            java.lang.String r0 = r1.getCallingPackage()
            if (r0 != 0) goto L10
            android.content.Intent r1 = r1.getIntent()
            java.lang.String r0 = "android.support.v4.app.EXTRA_CALLING_PACKAGE"
            java.lang.String r0 = r1.getStringExtra(r0)
        L10:
            return r0
    }
}
