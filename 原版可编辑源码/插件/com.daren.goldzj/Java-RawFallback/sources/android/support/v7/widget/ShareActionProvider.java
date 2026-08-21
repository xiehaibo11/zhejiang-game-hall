package android.support.v7.widget;

public class ShareActionProvider extends android.support.v4.view.ActionProvider {
    private static final int DEFAULT_INITIAL_ACTIVITY_COUNT = 4;
    public static final java.lang.String DEFAULT_SHARE_HISTORY_FILE_NAME = "share_history.xml";
    final android.content.Context mContext;
    private int mMaxShownActivityCount;
    private android.support.v7.widget.ActivityChooserModel.OnChooseActivityListener mOnChooseActivityListener;
    private final android.support.v7.widget.ShareActionProvider.ShareMenuItemOnMenuItemClickListener mOnMenuItemClickListener;
    android.support.v7.widget.ShareActionProvider.OnShareTargetSelectedListener mOnShareTargetSelectedListener;
    java.lang.String mShareHistoryFileName;

    public interface OnShareTargetSelectedListener {
        boolean onShareTargetSelected(android.support.v7.widget.ShareActionProvider r1, android.content.Intent r2);
    }

    private class ShareActivityChooserModelPolicy implements android.support.v7.widget.ActivityChooserModel.OnChooseActivityListener {
        final android.support.v7.widget.ShareActionProvider this$0;

        ShareActivityChooserModelPolicy(android.support.v7.widget.ShareActionProvider r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onChooseActivity(android.support.v7.widget.ActivityChooserModel r2, android.content.Intent r3) {
                r1 = this;
                android.support.v7.widget.ShareActionProvider r2 = r1.this$0
                android.support.v7.widget.ShareActionProvider$OnShareTargetSelectedListener r2 = r2.mOnShareTargetSelectedListener
                if (r2 == 0) goto Lf
                android.support.v7.widget.ShareActionProvider r2 = r1.this$0
                android.support.v7.widget.ShareActionProvider$OnShareTargetSelectedListener r2 = r2.mOnShareTargetSelectedListener
                android.support.v7.widget.ShareActionProvider r0 = r1.this$0
                r2.onShareTargetSelected(r0, r3)
            Lf:
                r2 = 0
                return r2
        }
    }

    private class ShareMenuItemOnMenuItemClickListener implements android.view.MenuItem.OnMenuItemClickListener {
        final android.support.v7.widget.ShareActionProvider this$0;

        ShareMenuItemOnMenuItemClickListener(android.support.v7.widget.ShareActionProvider r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean onMenuItemClick(android.view.MenuItem r3) {
                r2 = this;
                android.support.v7.widget.ShareActionProvider r0 = r2.this$0
                android.content.Context r0 = r0.mContext
                android.support.v7.widget.ShareActionProvider r1 = r2.this$0
                java.lang.String r1 = r1.mShareHistoryFileName
                android.support.v7.widget.ActivityChooserModel r0 = android.support.v7.widget.ActivityChooserModel.get(r0, r1)
                int r3 = r3.getItemId()
                android.content.Intent r3 = r0.chooseActivity(r3)
                if (r3 == 0) goto L36
                java.lang.String r0 = r3.getAction()
                java.lang.String r1 = "android.intent.action.SEND"
                boolean r1 = r1.equals(r0)
                if (r1 != 0) goto L2a
                java.lang.String r1 = "android.intent.action.SEND_MULTIPLE"
                boolean r0 = r1.equals(r0)
                if (r0 == 0) goto L2f
            L2a:
                android.support.v7.widget.ShareActionProvider r0 = r2.this$0
                r0.updateIntent(r3)
            L2f:
                android.support.v7.widget.ShareActionProvider r0 = r2.this$0
                android.content.Context r0 = r0.mContext
                r0.startActivity(r3)
            L36:
                r3 = 1
                return r3
        }
    }

    public ShareActionProvider(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 4
            r1.mMaxShownActivityCount = r0
            android.support.v7.widget.ShareActionProvider$ShareMenuItemOnMenuItemClickListener r0 = new android.support.v7.widget.ShareActionProvider$ShareMenuItemOnMenuItemClickListener
            r0.<init>(r1)
            r1.mOnMenuItemClickListener = r0
            java.lang.String r0 = "share_history.xml"
            r1.mShareHistoryFileName = r0
            r1.mContext = r2
            return
    }

    private void setActivityChooserPolicyIfNeeded() {
            r2 = this;
            android.support.v7.widget.ShareActionProvider$OnShareTargetSelectedListener r0 = r2.mOnShareTargetSelectedListener
            if (r0 != 0) goto L5
            return
        L5:
            android.support.v7.widget.ActivityChooserModel$OnChooseActivityListener r0 = r2.mOnChooseActivityListener
            if (r0 != 0) goto L10
            android.support.v7.widget.ShareActionProvider$ShareActivityChooserModelPolicy r0 = new android.support.v7.widget.ShareActionProvider$ShareActivityChooserModelPolicy
            r0.<init>(r2)
            r2.mOnChooseActivityListener = r0
        L10:
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = r2.mShareHistoryFileName
            android.support.v7.widget.ActivityChooserModel r0 = android.support.v7.widget.ActivityChooserModel.get(r0, r1)
            android.support.v7.widget.ActivityChooserModel$OnChooseActivityListener r1 = r2.mOnChooseActivityListener
            r0.setOnChooseActivityListener(r1)
            return
    }

    @Override
    public boolean hasSubMenu() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.view.View onCreateActionView() {
            r5 = this;
            android.support.v7.widget.ActivityChooserView r0 = new android.support.v7.widget.ActivityChooserView
            android.content.Context r1 = r5.mContext
            r0.<init>(r1)
            boolean r1 = r0.isInEditMode()
            if (r1 != 0) goto L18
            android.content.Context r1 = r5.mContext
            java.lang.String r2 = r5.mShareHistoryFileName
            android.support.v7.widget.ActivityChooserModel r1 = android.support.v7.widget.ActivityChooserModel.get(r1, r2)
            r0.setActivityChooserModel(r1)
        L18:
            android.util.TypedValue r1 = new android.util.TypedValue
            r1.<init>()
            android.content.Context r2 = r5.mContext
            android.content.res.Resources$Theme r2 = r2.getTheme()
            int r3 = android.support.v7.appcompat.R.attr.actionModeShareDrawable
            r4 = 1
            r2.resolveAttribute(r3, r1, r4)
            android.content.Context r2 = r5.mContext
            int r1 = r1.resourceId
            android.graphics.drawable.Drawable r1 = android.support.v7.content.res.AppCompatResources.getDrawable(r2, r1)
            r0.setExpandActivityOverflowButtonDrawable(r1)
            r0.setProvider(r5)
            int r1 = android.support.v7.appcompat.R.string.abc_shareactionprovider_share_with_application
            r0.setDefaultActionButtonContentDescription(r1)
            int r1 = android.support.v7.appcompat.R.string.abc_shareactionprovider_share_with
            r0.setExpandActivityOverflowButtonContentDescription(r1)
            return r0
    }

    @Override
    public void onPrepareSubMenu(android.view.SubMenu r9) {
            r8 = this;
            r9.clear()
            android.content.Context r0 = r8.mContext
            java.lang.String r1 = r8.mShareHistoryFileName
            android.support.v7.widget.ActivityChooserModel r0 = android.support.v7.widget.ActivityChooserModel.get(r0, r1)
            android.content.Context r1 = r8.mContext
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            int r2 = r0.getActivityCount()
            int r3 = r8.mMaxShownActivityCount
            int r3 = java.lang.Math.min(r2, r3)
            r4 = 0
            r5 = 0
        L1d:
            if (r5 >= r3) goto L3b
            android.content.pm.ResolveInfo r6 = r0.getActivity(r5)
            java.lang.CharSequence r7 = r6.loadLabel(r1)
            android.view.MenuItem r7 = r9.add(r4, r5, r5, r7)
            android.graphics.drawable.Drawable r6 = r6.loadIcon(r1)
            android.view.MenuItem r6 = r7.setIcon(r6)
            android.support.v7.widget.ShareActionProvider$ShareMenuItemOnMenuItemClickListener r7 = r8.mOnMenuItemClickListener
            r6.setOnMenuItemClickListener(r7)
            int r5 = r5 + 1
            goto L1d
        L3b:
            if (r3 >= r2) goto L68
            android.content.Context r5 = r8.mContext
            int r6 = android.support.v7.appcompat.R.string.abc_activity_chooser_view_see_all
            java.lang.String r5 = r5.getString(r6)
            android.view.SubMenu r9 = r9.addSubMenu(r4, r3, r3, r5)
            r3 = 0
        L4a:
            if (r3 >= r2) goto L68
            android.content.pm.ResolveInfo r5 = r0.getActivity(r3)
            java.lang.CharSequence r6 = r5.loadLabel(r1)
            android.view.MenuItem r6 = r9.add(r4, r3, r3, r6)
            android.graphics.drawable.Drawable r5 = r5.loadIcon(r1)
            android.view.MenuItem r5 = r6.setIcon(r5)
            android.support.v7.widget.ShareActionProvider$ShareMenuItemOnMenuItemClickListener r6 = r8.mOnMenuItemClickListener
            r5.setOnMenuItemClickListener(r6)
            int r3 = r3 + 1
            goto L4a
        L68:
            return
    }

    public void setOnShareTargetSelectedListener(android.support.v7.widget.ShareActionProvider.OnShareTargetSelectedListener r1) {
            r0 = this;
            r0.mOnShareTargetSelectedListener = r1
            r0.setActivityChooserPolicyIfNeeded()
            return
    }

    public void setShareHistoryFileName(java.lang.String r1) {
            r0 = this;
            r0.mShareHistoryFileName = r1
            r0.setActivityChooserPolicyIfNeeded()
            return
    }

    public void setShareIntent(android.content.Intent r3) {
            r2 = this;
            if (r3 == 0) goto L19
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "android.intent.action.SEND"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "android.intent.action.SEND_MULTIPLE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L19
        L16:
            r2.updateIntent(r3)
        L19:
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = r2.mShareHistoryFileName
            android.support.v7.widget.ActivityChooserModel r0 = android.support.v7.widget.ActivityChooserModel.get(r0, r1)
            r0.setIntent(r3)
            return
    }

    void updateIntent(android.content.Intent r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            r0 = 134742016(0x8080000, float:4.092601E-34)
            r3.addFlags(r0)
            goto L11
        Lc:
            r0 = 524288(0x80000, float:7.34684E-40)
            r3.addFlags(r0)
        L11:
            return
    }
}
