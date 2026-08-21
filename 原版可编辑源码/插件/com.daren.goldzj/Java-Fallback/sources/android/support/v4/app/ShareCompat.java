package android.support.v4.app;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.support.annotation.StringRes;
import android.support.v4.content.IntentCompat;
import android.text.Html;
import android.text.Spanned;
import android.util.Log;
import android.view.ActionProvider;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.ShareActionProvider;
import java.util.ArrayList;

public final class ShareCompat {
    public static final String EXTRA_CALLING_ACTIVITY = "android.support.v4.app.EXTRA_CALLING_ACTIVITY";
    public static final String EXTRA_CALLING_PACKAGE = "android.support.v4.app.EXTRA_CALLING_PACKAGE";
    private static final String HISTORY_FILENAME_PREFIX = ".sharecompat_";

    public static class IntentBuilder {
        private Activity mActivity;
        private ArrayList<String> mBccAddresses;
        private ArrayList<String> mCcAddresses;
        private CharSequence mChooserTitle;
        private Intent mIntent;
        private ArrayList<Uri> mStreams;
        private ArrayList<String> mToAddresses;

        public static IntentBuilder from(Activity r1) {
            return new IntentBuilder(r1);
        }

        private IntentBuilder(Activity r4) {
            this.mActivity = r4;
            this.mIntent = new Intent().setAction("android.intent.action.SEND");
            this.mIntent.putExtra(ShareCompat.EXTRA_CALLING_PACKAGE, r4.getPackageName());
            this.mIntent.putExtra(ShareCompat.EXTRA_CALLING_ACTIVITY, r4.getComponentName());
            this.mIntent.addFlags(524288);
        }

        public Intent getIntent() {
            ArrayList<String> r0 = this.mToAddresses;
            if (r0 == null) goto L5;
            combineArrayExtra("android.intent.extra.EMAIL", r0);
            this.mToAddresses = null;
        L5:
            ArrayList<String> r02 = this.mCcAddresses;
            if (r02 == null) goto L8;
            combineArrayExtra("android.intent.extra.CC", r02);
            this.mCcAddresses = null;
        L8:
            ArrayList<String> r03 = this.mBccAddresses;
            if (r03 == null) goto L11;
            combineArrayExtra("android.intent.extra.BCC", r03);
            this.mBccAddresses = null;
        L11:
            ArrayList<Uri> r04 = this.mStreams;
            boolean r2 = true;
            if (r04 != null) goto L14;
        L16:
            r2 = false;
        L17:
            boolean r05 = this.mIntent.getAction().equals("android.intent.action.SEND_MULTIPLE");
            if (r2 == true) goto L27;
            if (r05 == false) goto L27;
            this.mIntent.setAction("android.intent.action.SEND");
            ArrayList<Uri> r6 = this.mStreams;
            if (r6 != null) goto L23;
        L25:
            this.mIntent.removeExtra("android.intent.extra.STREAM");
        L26:
            this.mStreams = null;
            goto L27
        L23:
            if (r6.isEmpty() == true) goto L25;
            this.mIntent.putExtra("android.intent.extra.STREAM", this.mStreams.get(0));
        L27:
            if (r2 == false) goto L36;
            if (r05 == true) goto L36;
            this.mIntent.setAction("android.intent.action.SEND_MULTIPLE");
            ArrayList<Uri> r06 = this.mStreams;
            if (r06 != null) goto L32;
        L34:
            this.mIntent.removeExtra("android.intent.extra.STREAM");
            goto L36
        L32:
            if (r06.isEmpty() == true) goto L34;
            this.mIntent.putParcelableArrayListExtra("android.intent.extra.STREAM", this.mStreams);
        L36:
            return this.mIntent;
        L14:
            if (r04.size() <= 1) goto L16;
            goto L16
        }

        Activity getActivity() {
            return this.mActivity;
        }

        private void combineArrayExtra(String r5, ArrayList<String> r6) {
            String[] r0 = this.mIntent.getStringArrayExtra(r5);
            if (r0 == null) goto L5;
            int r2 = r0.length;
        L6:
            String[] r3 = new String[r6.size() + r2];
            r6.toArray(r3);
            if (r0 == null) goto L9;
            System.arraycopy(r0, 0, r3, r6.size(), r2);
        L9:
            this.mIntent.putExtra(r5, r3);
            return;
        L5:
            r2 = 0;
            goto L6
        }

        private void combineArrayExtra(String r6, String[] r7) {
            Intent r0 = getIntent();
            String[] r1 = r0.getStringArrayExtra(r6);
            if (r1 == null) goto L5;
            int r3 = r1.length;
        L6:
            String[] r4 = new String[r7.length + r3];
            if (r1 == null) goto L9;
            System.arraycopy(r1, 0, r4, 0, r3);
        L9:
            System.arraycopy(r7, 0, r4, r3, r7.length);
            r0.putExtra(r6, r4);
            return;
        L5:
            r3 = 0;
            goto L6
        }

        public Intent createChooserIntent() {
            return Intent.createChooser(getIntent(), this.mChooserTitle);
        }

        public void startChooser() {
            this.mActivity.startActivity(createChooserIntent());
        }

        public IntentBuilder setChooserTitle(CharSequence r1) {
            this.mChooserTitle = r1;
            return this;
        }

        public IntentBuilder setChooserTitle(@StringRes int r2) {
            return setChooserTitle(this.mActivity.getText(r2));
        }

        public IntentBuilder setType(String r2) {
            this.mIntent.setType(r2);
            return this;
        }

        public IntentBuilder setText(CharSequence r3) {
            this.mIntent.putExtra("android.intent.extra.TEXT", r3);
            return this;
        }

        public IntentBuilder setHtmlText(String r3) {
            this.mIntent.putExtra(IntentCompat.EXTRA_HTML_TEXT, r3);
            if (this.mIntent.hasExtra("android.intent.extra.TEXT") == true) goto L5;
            setText(Html.fromHtml(r3));
        L5:
            return this;
        }

        public IntentBuilder setStream(Uri r3) {
            if (this.mIntent.getAction().equals("android.intent.action.SEND") == true) goto L5;
            this.mIntent.setAction("android.intent.action.SEND");
        L5:
            this.mStreams = null;
            this.mIntent.putExtra("android.intent.extra.STREAM", r3);
            return this;
        }

        public IntentBuilder addStream(Uri r4) {
            Uri r0 = (Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
            if (this.mStreams != null) goto L8;
            if (r0 != null) goto L8;
            return setStream(r4);
        L8:
            if (this.mStreams != null) goto L10;
            this.mStreams = new ArrayList();
        L10:
            if (r0 == null) goto L12;
            this.mIntent.removeExtra("android.intent.extra.STREAM");
            this.mStreams.add(r0);
        L12:
            this.mStreams.add(r4);
            return this;
        }

        public IntentBuilder setEmailTo(String[] r3) {
            if (this.mToAddresses == null) goto L5;
            this.mToAddresses = null;
        L5:
            this.mIntent.putExtra("android.intent.extra.EMAIL", r3);
            return this;
        }

        public IntentBuilder addEmailTo(String r2) {
            if (this.mToAddresses != null) goto L5;
            this.mToAddresses = new ArrayList();
        L5:
            this.mToAddresses.add(r2);
            return this;
        }

        public IntentBuilder addEmailTo(String[] r2) {
            combineArrayExtra("android.intent.extra.EMAIL", r2);
            return this;
        }

        public IntentBuilder setEmailCc(String[] r3) {
            this.mIntent.putExtra("android.intent.extra.CC", r3);
            return this;
        }

        public IntentBuilder addEmailCc(String r2) {
            if (this.mCcAddresses != null) goto L5;
            this.mCcAddresses = new ArrayList();
        L5:
            this.mCcAddresses.add(r2);
            return this;
        }

        public IntentBuilder addEmailCc(String[] r2) {
            combineArrayExtra("android.intent.extra.CC", r2);
            return this;
        }

        public IntentBuilder setEmailBcc(String[] r3) {
            this.mIntent.putExtra("android.intent.extra.BCC", r3);
            return this;
        }

        public IntentBuilder addEmailBcc(String r2) {
            if (this.mBccAddresses != null) goto L5;
            this.mBccAddresses = new ArrayList();
        L5:
            this.mBccAddresses.add(r2);
            return this;
        }

        public IntentBuilder addEmailBcc(String[] r2) {
            combineArrayExtra("android.intent.extra.BCC", r2);
            return this;
        }

        public IntentBuilder setSubject(String r3) {
            this.mIntent.putExtra("android.intent.extra.SUBJECT", r3);
            return this;
        }
    }

    public static class IntentReader {
        private static final String TAG = "IntentReader";
        private Activity mActivity;
        private ComponentName mCallingActivity;
        private String mCallingPackage;
        private Intent mIntent;
        private ArrayList<Uri> mStreams;

        public static IntentReader from(Activity r1) {
            return new IntentReader(r1);
        }

        private IntentReader(Activity r2) {
            this.mActivity = r2;
            this.mIntent = r2.getIntent();
            this.mCallingPackage = ShareCompat.getCallingPackage(r2);
            this.mCallingActivity = ShareCompat.getCallingActivity(r2);
        }

        public boolean isShareIntent() {
            String r0 = this.mIntent.getAction();
            if ("android.intent.action.SEND".equals(r0) == false) goto L5;
        L8:
            return true;
        L5:
            if ("android.intent.action.SEND_MULTIPLE".equals(r0) == true) goto L8;
            return false;
        }

        public boolean isSingleShare() {
            return "android.intent.action.SEND".equals(this.mIntent.getAction());
        }

        public boolean isMultipleShare() {
            return "android.intent.action.SEND_MULTIPLE".equals(this.mIntent.getAction());
        }

        public String getType() {
            return this.mIntent.getType();
        }

        public CharSequence getText() {
            return this.mIntent.getCharSequenceExtra("android.intent.extra.TEXT");
        }

        public String getHtmlText() {
            String r0 = this.mIntent.getStringExtra(IntentCompat.EXTRA_HTML_TEXT);
            if (r0 != null) goto L13;
            CharSequence r1 = getText();
            if ((r1 instanceof Spanned) == true) goto L14;
            if (r1 != null) goto L9;
            return r0;
        L9:
            if (Build.VERSION.SDK_INT >= 16) goto L16;
            StringBuilder r02 = new StringBuilder();
            withinStyle(r02, r1, 0, r1.length());
            return r02.toString();
        L16:
            return Html.escapeHtml(r1);
        L14:
            return Html.toHtml((Spanned) r1);
        L13:
            return r0;
        }

        private static void withinStyle(StringBuilder r3, CharSequence r4, int r5, int r6) {
        L2:
            if (r5 >= r6) goto L27;
            char r0 = r4.charAt(r5);
            if (r0 != '<') goto L7;
            r3.append("&lt;");
        L26:
            r5 = r5 + 1;
            goto L2
        L7:
            if (r0 != '>') goto L10;
            r3.append("&gt;");
            goto L26
        L10:
            if (r0 != '&') goto L13;
            r3.append("&amp;");
            goto L26
        L13:
            if (r0 <= '~') goto L15;
        L25:
            r3.append("&#" + r0 + ";");
            goto L26
        L15:
            if (r0 < ' ') goto L25;
            if (r0 != ' ') goto L24;
        L18:
            int r02 = r5 + 1;
            if (r02 >= r6) goto L23;
            if (r4.charAt(r02) != ' ') goto L23;
            r3.append("&nbsp;");
            r5 = r02;
        L23:
            r3.append(' ');
            goto L26
        L24:
            r3.append(r0);
            goto L26
        }

        public Uri getStream() {
            return (Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
        }

        public Uri getStream(int r4) {
            if (this.mStreams == null) goto L5;
        L7:
            ArrayList<Uri> r0 = this.mStreams;
            if (r0 != null) goto L10;
            if (r4 != 0) goto L15;
            return (Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
        L15:
            throw new IndexOutOfBoundsException("Stream items available: " + getStreamCount() + " index requested: " + r4);
        L10:
            return r0.get(r4);
        L5:
            if (isMultipleShare() == false) goto L7;
            this.mStreams = this.mIntent.getParcelableArrayListExtra("android.intent.extra.STREAM");
            goto L7
        }

        public int getStreamCount() {
            if (this.mStreams == null) goto L5;
        L7:
            ArrayList<Uri> r0 = this.mStreams;
            if (r0 == null) goto L12;
            return r0.size();
        L12:
            return this.mIntent.hasExtra("android.intent.extra.STREAM") ? 1 : 0;
        L5:
            if (isMultipleShare() == false) goto L7;
            this.mStreams = this.mIntent.getParcelableArrayListExtra("android.intent.extra.STREAM");
            goto L7
        }

        public String[] getEmailTo() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.EMAIL");
        }

        public String[] getEmailCc() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.CC");
        }

        public String[] getEmailBcc() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.BCC");
        }

        public String getSubject() {
            return this.mIntent.getStringExtra("android.intent.extra.SUBJECT");
        }

        public String getCallingPackage() {
            return this.mCallingPackage;
        }

        public ComponentName getCallingActivity() {
            return this.mCallingActivity;
        }

        public Drawable getCallingActivityIcon() {
            if (this.mCallingActivity != null) goto L5;
            return null;
        L5:
            PackageManager r0 = this.mActivity.getPackageManager();
            return r0.getActivityIcon(this.mCallingActivity);
        L8:
            e = move-exception;
            Log.e(TAG, "Could not retrieve icon for calling activity", e);
            return null;
        }

        public Drawable getCallingApplicationIcon() {
            if (this.mCallingPackage != null) goto L5;
            return null;
        L5:
            PackageManager r0 = this.mActivity.getPackageManager();
            return r0.getApplicationIcon(this.mCallingPackage);
        L8:
            e = move-exception;
            Log.e(TAG, "Could not retrieve icon for calling application", e);
            return null;
        }

        public CharSequence getCallingApplicationLabel() {
            if (this.mCallingPackage != null) goto L5;
            return null;
        L5:
            PackageManager r0 = this.mActivity.getPackageManager();
            return r0.getApplicationLabel(r0.getApplicationInfo(this.mCallingPackage, 0));
        L8:
            e = move-exception;
            Log.e(TAG, "Could not retrieve label for calling application", e);
            return null;
        }
    }

    private ShareCompat() {
    }

    public static String getCallingPackage(Activity r1) {
        String r0 = r1.getCallingPackage();
        if (r0 == null) goto L5;
        return r0;
    L5:
        return r1.getIntent().getStringExtra(EXTRA_CALLING_PACKAGE);
    }

    public static ComponentName getCallingActivity(Activity r1) {
        ComponentName r0 = r1.getCallingActivity();
        if (r0 == null) goto L5;
        return r0;
    L5:
        return (ComponentName) r1.getIntent().getParcelableExtra(EXTRA_CALLING_ACTIVITY);
    }

    public static void configureMenuItem(MenuItem r3, IntentBuilder r4) {
        ActionProvider r0 = r3.getActionProvider();
        if ((r0 instanceof ShareActionProvider) == true) goto L5;
        ShareActionProvider r02 = new ShareActionProvider(r4.getActivity());
    L6:
        r02.setShareHistoryFileName(HISTORY_FILENAME_PREFIX + r4.getActivity().getClass().getName());
        r02.setShareIntent(r4.getIntent());
        r3.setActionProvider(r02);
        if (Build.VERSION.SDK_INT < 16) goto L9;
        return;
    L9:
        if (r3.hasSubMenu() == true) goto L13;
        r3.setIntent(r4.createChooserIntent());
        return;
    L13:
        return;
    L5:
        r02 = (ShareActionProvider) r0;
        goto L6
    }

    public static void configureMenuItem(Menu r1, int r2, IntentBuilder r3) {
        MenuItem r12 = r1.findItem(r2);
        if (r12 == null) goto L7;
        configureMenuItem(r12, r3);
        return;
    L7:
        throw new IllegalArgumentException("Could not find menu item with id " + r2 + " in the supplied menu");
    }
}
