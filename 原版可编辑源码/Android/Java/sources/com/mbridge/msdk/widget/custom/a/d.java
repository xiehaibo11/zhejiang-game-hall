package com.mbridge.msdk.widget.custom.a;

import android.graphics.Color;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.CustomViewMessageWrap;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;
import com.mbridge.msdk.widget.custom.a;
import com.mbridge.msdk.widget.custom.b.e;
import com.mbridge.msdk.widget.custom.baseview.MBButton;
import com.mbridge.msdk.widget.custom.baseview.MBImageView;
import com.mbridge.msdk.widget.custom.baseview.MBStarLevelLayoutView;
import com.mbridge.msdk.widget.custom.baseview.MBTextView;
import com.tkay.expressad.foundation.h.i;

public final class d {
    private CustomViewMessageWrap a;
    private com.mbridge.msdk.widget.custom.a b;
    private DownloadMessageDialog c;
    private int d;
    private int e;
    private ImageView f;
    private MBImageView g;
    private MBButton h;
    private MBImageView i;

    public d(CustomViewMessageWrap customViewMessageWrap, com.mbridge.msdk.widget.custom.a aVar, DownloadMessageDialog downloadMessageDialog, int i, int i2) {
        this.a = customViewMessageWrap;
        this.b = aVar;
        this.c = downloadMessageDialog;
        this.d = i;
        this.e = i2;
    }

    public final void a(ViewGroup viewGroup) {
        if ((viewGroup instanceof MBStarLevelLayoutView) && viewGroup.getContentDescription().equals("getStarCount")) {
            MBStarLevelLayoutView mBStarLevelLayoutView = (MBStarLevelLayoutView) viewGroup;
            CustomViewMessageWrap customViewMessageWrap = this.a;
            mBStarLevelLayoutView.setRating(Math.min(Math.max(customViewMessageWrap != null ? customViewMessageWrap.getStarCount() : 0, 0), 5));
        }
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            final View childAt = viewGroup.getChildAt(i);
            if (!TextUtils.isEmpty(childAt.getContentDescription())) {
                String str = (String) childAt.getContentDescription();
                String[] strArrSplit = str.split("#");
                if (strArrSplit.length > 1) {
                    String str2 = strArrSplit[0];
                    String str3 = strArrSplit[1];
                    if (e.a(str3)) {
                        int i2 = Integer.parseInt(str3);
                        if (i2 == 1) {
                            childAt.setVisibility(TextUtils.isEmpty(CustomViewMessageWrap.getMessage(this.a, str2)) ? 8 : 0);
                        } else if (i2 == 2) {
                            try {
                                final View childAt2 = viewGroup.getChildAt(i + 1);
                                final ImageView imageView = null;
                                ViewGroup viewGroup2 = (ViewGroup) childAt;
                                for (int i3 = 0; i3 < viewGroup2.getChildCount(); i3++) {
                                    if (viewGroup2.getChildAt(i3) instanceof ImageView) {
                                        imageView = (ImageView) viewGroup2.getChildAt(i3);
                                    }
                                }
                                childAt.setOnClickListener(new View.OnClickListener() {
                                    @Override
                                    public final void onClick(View view) {
                                        View view2 = childAt2;
                                        view2.setVisibility(view2.getVisibility() == 0 ? 8 : 0);
                                        imageView.setImageResource(s.a(d.this.f.getContext(), childAt2.getVisibility() == 0 ? "mbridge_download_message_dialog_hide" : "mbridge_download_message_dialog_expand", i.c));
                                    }
                                });
                            } catch (Exception e) {
                                if (MBridgeConstans.DEBUG) {
                                    e.printStackTrace();
                                }
                            }
                        }
                    }
                }
                if (str.equals("close")) {
                    childAt.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            d.this.a.putView("image_close", d.this.i);
                            d.this.b.a(d.this.c, d.this.a, a.a.c);
                        }
                    });
                }
                if (str.startsWith("getApplicationPrivacy")) {
                    childAt.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            try {
                                View childAt3 = ((ViewGroup) childAt).getChildAt(1);
                                if (childAt3 != null) {
                                    childAt3.performClick();
                                }
                            } catch (Exception e2) {
                                z.a("render", e2.getMessage());
                            }
                        }
                    });
                }
            }
            if (childAt instanceof ViewGroup) {
                a((ViewGroup) childAt);
            } else if (childAt instanceof MBTextView) {
                MBTextView mBTextView = (MBTextView) childAt;
                String message = CustomViewMessageWrap.getMessage(this.a, String.valueOf(mBTextView.getContentDescription()));
                if (TextUtils.isEmpty(mBTextView.getText()) && !TextUtils.isEmpty(message)) {
                    mBTextView.setText(message);
                }
            } else if (childAt instanceof MBImageView) {
                final MBImageView mBImageView = (MBImageView) childAt;
                if (!TextUtils.isEmpty(mBImageView.getContentDescription())) {
                    if (mBImageView.getContentDescription().equals("imgbg")) {
                        this.g = mBImageView;
                        if (!TextUtils.isEmpty(CustomViewMessageWrap.getMessage(this.a, "getApplicationImage"))) {
                            int iC = mBImageView.getResources().getDisplayMetrics().widthPixels - b.a().c("20dp");
                            ViewGroup.LayoutParams layoutParams = mBImageView.getLayoutParams();
                            layoutParams.width = iC;
                            layoutParams.height = (int) (iC * 0.5225f);
                            mBImageView.setLayoutParams(layoutParams);
                        }
                    } else if (mBImageView.getContentDescription().equals("getApplicationImage")) {
                        String message2 = CustomViewMessageWrap.getMessage(this.a, String.valueOf(mBImageView.getContentDescription()));
                        if (!TextUtils.isEmpty(mBImageView.getContentDescription()) && TextUtils.isEmpty(message2)) {
                            mBImageView.setVisibility(8);
                            MBImageView mBImageView2 = this.g;
                            if (mBImageView2 != null) {
                                mBImageView2.setVisibility(8);
                            }
                        } else {
                            com.mbridge.msdk.widget.custom.b.b.a(mBImageView, this.g, message2, this.d, this.e, this.c);
                        }
                    } else if (mBImageView.getContentDescription().equals("getApplicationLogo")) {
                        String message3 = CustomViewMessageWrap.getMessage(this.a, String.valueOf(mBImageView.getContentDescription()));
                        if (!TextUtils.isEmpty(message3)) {
                            com.mbridge.msdk.widget.custom.b.b.a(mBImageView, message3);
                        } else {
                            mBImageView.setBackgroundColor(Color.parseColor("#e6e6e6"));
                        }
                    } else if (mBImageView.getContentDescription().equals("close")) {
                        this.i = mBImageView;
                        mBImageView.setImageResource(s.a(mBImageView.getContext(), "mbridge_download_message_dialog_close", i.c));
                    } else if (mBImageView.getContentDescription().equals("permissionexpand")) {
                        mBImageView.setImageResource(s.a(mBImageView.getContext(), "mbridge_download_message_dialog_expand", i.c));
                        this.f = mBImageView;
                    } else if (mBImageView.getContentDescription().equals("getApplicationPrivacy")) {
                        mBImageView.setImageResource(s.a(mBImageView.getContext(), "mbridge_download_message_dialog_expand", i.c));
                        mBImageView.setOnClickListener(new View.OnClickListener() {
                            @Override
                            public final void onClick(View view) {
                                if (d.this.a != null) {
                                    d.this.a.putView("image_privacy", mBImageView);
                                }
                                d.this.b.a(d.this.c, d.this.a, a.a.a);
                            }
                        });
                    }
                }
            } else if (childAt instanceof MBButton) {
                final MBButton mBButton = (MBButton) childAt;
                mBButton.setIndeterminateProgressMode(true);
                mBButton.setBackgroundResource(s.a(mBButton.getContext(), "mbridge_download_message_dialog_button_shape", i.c));
                if (!TextUtils.isEmpty(mBButton.getContentDescription()) && String.valueOf(mBButton.getContentDescription()).startsWith("download")) {
                    this.h = mBButton;
                    mBButton.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            if (d.this.a != null) {
                                d.this.a.putView("button_download", mBButton);
                            }
                            d.this.b.a(d.this.c, d.this.a, a.a.b);
                        }
                    });
                }
            }
        }
    }

    public final MBButton a() {
        return this.h;
    }
}
