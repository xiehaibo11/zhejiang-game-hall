package com.mbridge.msdk.dycreator.e;

import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.GridView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.RelativeLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import com.bianfeng.libuniverse.Device;
import com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.PlayerView;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.tkay.expressad.foundation.h.i;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;

public final class a {
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:102:0x01f8  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x01fd A[Catch: Exception -> 0x06e3, TRY_LEAVE, TryCatch #14 {Exception -> 0x06e3, blocks: (B:6:0x000c, B:8:0x0016, B:11:0x001e, B:13:0x0029, B:16:0x003d, B:20:0x0051, B:21:0x0061, B:22:0x0071, B:23:0x0081, B:24:0x0091, B:25:0x00a1, B:28:0x00b6, B:29:0x00c6, B:100:0x01f4, B:104:0x01fd, B:107:0x020a, B:133:0x02f6, B:134:0x02ff, B:136:0x0303, B:190:0x0482, B:191:0x048b, B:193:0x048f, B:213:0x04e9, B:214:0x04f2, B:217:0x04f8, B:245:0x0582, B:246:0x058b, B:248:0x058f, B:263:0x061f, B:264:0x0628, B:266:0x062c, B:267:0x0631, B:270:0x0639, B:280:0x065e, B:281:0x0667, B:283:0x066b, B:284:0x0670, B:286:0x0674, B:300:0x069b, B:301:0x06a3, B:303:0x06a8, B:310:0x06c9, B:311:0x06d1, B:313:0x06d5, B:42:0x00ef, B:43:0x00f7, B:54:0x011f, B:55:0x0127, B:85:0x01b2, B:86:0x01ba, B:99:0x01ed, B:87:0x01c2, B:89:0x01c8, B:94:0x01de, B:96:0x01e4, B:90:0x01ce, B:92:0x01d6, B:108:0x020d, B:109:0x0215, B:111:0x0219, B:112:0x021d, B:114:0x0227, B:116:0x023b, B:117:0x023f, B:118:0x026f, B:120:0x0279, B:121:0x0282, B:123:0x028c, B:124:0x029a, B:125:0x02ab, B:126:0x02b5, B:127:0x02bf, B:129:0x02c6, B:130:0x02e4, B:44:0x00fd, B:46:0x0103, B:48:0x010b, B:49:0x0110, B:51:0x0118, B:249:0x0592, B:251:0x059c, B:253:0x05a1, B:254:0x05bf, B:255:0x05d0, B:256:0x05de, B:257:0x05e8, B:258:0x0606, B:260:0x0610, B:271:0x063c, B:274:0x0648, B:276:0x0652, B:277:0x0658, B:304:0x06ab, B:307:0x06b8, B:194:0x0492, B:199:0x04a4, B:201:0x04ae, B:203:0x04b6, B:204:0x04bd, B:206:0x04c5, B:207:0x04cc, B:209:0x04d4, B:210:0x04db, B:218:0x04fb, B:222:0x050b, B:224:0x0510, B:226:0x051a, B:227:0x0527, B:229:0x0531, B:231:0x0539, B:233:0x053f, B:235:0x0545, B:236:0x054a, B:238:0x0554, B:240:0x055c, B:241:0x0562, B:242:0x0573, B:137:0x0306, B:138:0x030e, B:139:0x0311, B:141:0x0316, B:142:0x0327, B:144:0x0331, B:145:0x0337, B:147:0x033f, B:148:0x0359, B:149:0x0362, B:150:0x036c, B:151:0x037d, B:154:0x0389, B:157:0x039f, B:158:0x03a4, B:159:0x03c9, B:161:0x03d3, B:162:0x03dc, B:164:0x03e6, B:165:0x03f4, B:166:0x0405, B:167:0x040f, B:168:0x0419, B:170:0x0423, B:172:0x042b, B:173:0x0430, B:175:0x0438, B:176:0x043d, B:178:0x0445, B:179:0x044a, B:181:0x0452, B:182:0x0459, B:184:0x0463, B:186:0x046b, B:187:0x047c), top: B:348:0x000c, inners: #2, #6, #7, #8, #9, #12, #13, #15, #16 }] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00b0 A[PHI: r8 r9 r10 r11
      0x00b0: PHI (r8v2 int) = (r8v1 int), (r8v1 int), (r8v1 int), (r8v1 int), (r8v1 int), (r8v9 int), (r8v1 int), (r8v1 int), (r8v1 int) binds: [B:18:0x004d, B:31:0x00ce, B:28:0x00b6, B:25:0x00a1, B:24:0x0091, B:23:0x0081, B:22:0x0071, B:21:0x0061, B:20:0x0051] A[DONT_GENERATE, DONT_INLINE]
      0x00b0: PHI (r9v2 int) = (r9v1 int), (r9v1 int), (r9v1 int), (r9v1 int), (r9v1 int), (r9v1 int), (r9v6 int), (r9v1 int), (r9v1 int) binds: [B:18:0x004d, B:31:0x00ce, B:28:0x00b6, B:25:0x00a1, B:24:0x0091, B:23:0x0081, B:22:0x0071, B:21:0x0061, B:20:0x0051] A[DONT_GENERATE, DONT_INLINE]
      0x00b0: PHI (r10v2 int) = (r10v1 int), (r10v1 int), (r10v1 int), (r10v1 int), (r10v6 int), (r10v1 int), (r10v1 int), (r10v1 int), (r10v1 int) binds: [B:18:0x004d, B:31:0x00ce, B:28:0x00b6, B:25:0x00a1, B:24:0x0091, B:23:0x0081, B:22:0x0071, B:21:0x0061, B:20:0x0051] A[DONT_GENERATE, DONT_INLINE]
      0x00b0: PHI (r11v2 int) = (r11v1 int), (r11v1 int), (r11v1 int), (r11v6 int), (r11v1 int), (r11v1 int), (r11v1 int), (r11v1 int), (r11v1 int) binds: [B:18:0x004d, B:31:0x00ce, B:28:0x00b6, B:25:0x00a1, B:24:0x0091, B:23:0x0081, B:22:0x0071, B:21:0x0061, B:20:0x0051] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x015d A[Catch: Exception -> 0x01ad, PHI: r19
      0x015d: PHI (r19v4 int) = (r19v5 int), (r19v6 int) binds: [B:71:0x0156, B:64:0x0143] A[DONT_GENERATE, DONT_INLINE], TryCatch #1 {Exception -> 0x01ad, blocks: (B:68:0x014a, B:70:0x014e, B:72:0x0158, B:73:0x015d, B:74:0x016a, B:76:0x0174, B:77:0x0181, B:79:0x0187), top: B:322:0x014a }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(View view, AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.dycreator.a.c> map;
        int i;
        String strSubstring;
        String[] strArrSplit;
        int i2;
        boolean z;
        if (view == null || attributeSet == null) {
            return;
        }
        try {
            HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = com.mbridge.msdk.dycreator.a.b.a().c();
            if (mapC != null && !mapC.isEmpty()) {
                int i3 = 0;
                int iB = 0;
                int iB2 = 0;
                int iB3 = 0;
                int iB4 = 0;
                for (int attributeCount = attributeSet.getAttributeCount(); i3 < attributeCount; attributeCount = i) {
                    com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i3));
                    if (cVar != null) {
                        switch (1.a[cVar.ordinal()]) {
                            case 1:
                                map = mapC;
                                i = attributeCount;
                                String attributeValue = attributeSet.getAttributeValue(i3);
                                try {
                                    if (attributeValue.startsWith("@+id/")) {
                                        strSubstring = attributeValue.substring(5);
                                    } else {
                                        strSubstring = attributeValue.startsWith("@id/") ? attributeValue.substring(4) : "";
                                    }
                                    if (!TextUtils.isEmpty(strSubstring)) {
                                        view.setId(strSubstring.hashCode());
                                    }
                                } catch (Exception e) {
                                    z.d("AttributeUtil", e.getMessage());
                                }
                                if (!(view instanceof EditText)) {
                                    i2 = iB;
                                    if (view instanceof Button) {
                                        Button button = (Button) view;
                                        try {
                                            switch (cVar) {
                                                case G:
                                                    button.setText(com.mbridge.msdk.dycreator.a.b.a().e(attributeSet.getAttributeValue(i3)));
                                                    break;
                                                case H:
                                                    if (attributeSet.getAttributeBooleanValue(i3, false)) {
                                                        button.setFocusable(true);
                                                        button.setFocusableInTouchMode(true);
                                                        button.setSingleLine(true);
                                                        button.setEllipsize(TextUtils.TruncateAt.MARQUEE);
                                                        button.setMarqueeRepeatLimit(1000);
                                                        button.setSingleLine();
                                                        button.setHorizontallyScrolling(true);
                                                        button.requestFocus();
                                                    }
                                                    break;
                                                case L:
                                                    button.setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i3, false));
                                                    break;
                                                case M:
                                                    button.setHorizontallyScrolling(attributeSet.getAttributeBooleanValue(i3, false));
                                                    break;
                                                case N:
                                                    button.setTextColor(com.mbridge.msdk.dycreator.a.b.a().a(attributeSet.getAttributeValue(i3)));
                                                    break;
                                                case O:
                                                    if (!TextUtils.isEmpty(attributeSet.getAttributeValue(i3))) {
                                                        button.setTextSize(com.mbridge.msdk.dycreator.a.b.a().b(r4));
                                                    }
                                                    break;
                                                case R:
                                                    if (TtmlNode.BOLD.equalsIgnoreCase(attributeSet.getAttributeValue(i3))) {
                                                        button.setTypeface(Typeface.defaultFromStyle(1));
                                                    }
                                                    break;
                                                case S:
                                                    String attributeValue2 = attributeSet.getAttributeValue(i3);
                                                    button.setTextAppearance(com.mbridge.msdk.foundation.controller.a.f().j(), com.mbridge.msdk.dycreator.a.b.a().d("R.style." + attributeValue2.substring(attributeValue2.indexOf("/") + 1)));
                                                    break;
                                                case Y:
                                                    String attributeValue3 = attributeSet.getAttributeValue(i3);
                                                    if (!TextUtils.isEmpty(attributeValue3)) {
                                                        String str = b.a.get(attributeValue3.substring(8));
                                                        if (!TextUtils.isEmpty(str)) {
                                                            button.setTag(str);
                                                        }
                                                    }
                                                    break;
                                                case U:
                                                    button.setGravity(1);
                                                    break;
                                            }
                                        } catch (Exception e2) {
                                            z.d("AttributeUtil", e2.getMessage());
                                        }
                                    } else if (view instanceof TextView) {
                                        TextView textView = (TextView) view;
                                        try {
                                            int i4 = 1.a[cVar.ordinal()];
                                            switch (i4) {
                                                case 13:
                                                    String attributeValue4 = attributeSet.getAttributeValue(i3);
                                                    if (!TextUtils.isEmpty(attributeValue4)) {
                                                        if (attributeValue4.startsWith("@string/")) {
                                                            textView.setText(com.mbridge.msdk.dycreator.a.b.a().e(attributeSet.getAttributeValue(i3)));
                                                        } else {
                                                            textView.setText(attributeValue4);
                                                        }
                                                    }
                                                    break;
                                                case 14:
                                                    String attributeValue5 = attributeSet.getAttributeValue(i3);
                                                    if (!TextUtils.isEmpty(attributeValue5)) {
                                                        if (attributeValue5.equals(TtmlNode.END)) {
                                                            textView.setEllipsize(TextUtils.TruncateAt.END);
                                                        }
                                                        if (attributeValue5.equals("start")) {
                                                            textView.setEllipsize(TextUtils.TruncateAt.START);
                                                        }
                                                        if (attributeValue5.equals("middle")) {
                                                            textView.setEllipsize(TextUtils.TruncateAt.MIDDLE);
                                                        }
                                                        if (attributeValue5.equals("marquee")) {
                                                            textView.setEllipsize(TextUtils.TruncateAt.MARQUEE);
                                                        }
                                                    }
                                                    break;
                                                case 15:
                                                    textView.setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i3, false));
                                                    break;
                                                case 16:
                                                    textView.setHorizontallyScrolling(attributeSet.getAttributeBooleanValue(i3, false));
                                                    break;
                                                case 17:
                                                    textView.setTextColor(com.mbridge.msdk.dycreator.a.b.a().a(attributeSet.getAttributeValue(i3)));
                                                    break;
                                                case 18:
                                                    if (!TextUtils.isEmpty(attributeSet.getAttributeValue(i3))) {
                                                        textView.setTextSize(com.mbridge.msdk.dycreator.a.b.a().b(r4));
                                                    }
                                                    break;
                                                case 19:
                                                    if (TtmlNode.BOLD.equalsIgnoreCase(attributeSet.getAttributeValue(i3))) {
                                                        textView.setTypeface(Typeface.defaultFromStyle(1));
                                                    }
                                                    break;
                                                case 20:
                                                    String attributeValue6 = attributeSet.getAttributeValue(i3);
                                                    com.mbridge.msdk.dycreator.a.b.a().d("R.style." + attributeValue6.substring(attributeValue6.indexOf("/") + 1));
                                                    break;
                                                case 21:
                                                    String attributeValue7 = attributeSet.getAttributeValue(i3);
                                                    if (!TextUtils.isEmpty(attributeValue7)) {
                                                        String str2 = b.a.get(attributeValue7.substring(8));
                                                        if (!TextUtils.isEmpty(str2)) {
                                                            textView.setTag(str2);
                                                        }
                                                    }
                                                    break;
                                                case 22:
                                                    textView.setGravity(com.mbridge.msdk.dycreator.a.b.a().c(attributeSet.getAttributeValue(i3)));
                                                    break;
                                                default:
                                                    switch (i4) {
                                                        case 28:
                                                            textView.setSingleLine(attributeSet.getAttributeBooleanValue(i3, false));
                                                            break;
                                                        case 29:
                                                            textView.setLines(attributeSet.getAttributeIntValue(i3, 1));
                                                            break;
                                                        case 30:
                                                            String attributeValue8 = attributeSet.getAttributeValue(i3);
                                                            String strSubstring2 = attributeValue8.startsWith("@drawable/") ? attributeValue8.substring(10) : "";
                                                            if (!TextUtils.isEmpty(strSubstring2)) {
                                                                textView.setCompoundDrawables(textView.getResources().getDrawable(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), strSubstring2, i.c)), null, null, null);
                                                            }
                                                            break;
                                                        case 31:
                                                            textView.setCompoundDrawablePadding(com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3)));
                                                            break;
                                                    }
                                                    break;
                                            }
                                        } catch (Exception e3) {
                                            z.d("AttributeUtil", e3.getMessage());
                                        }
                                    } else if (view instanceof ImageView) {
                                        ImageView imageView = (ImageView) view;
                                        try {
                                            int i5 = 1.a[cVar.ordinal()];
                                            if (i5 == 32) {
                                                com.mbridge.msdk.dycreator.a.b.a().a(attributeSet.getAttributeValue(i3), imageView);
                                            } else if (i5 == 33) {
                                                String attributeValue9 = attributeSet.getAttributeValue(i3);
                                                if (!TextUtils.isEmpty(attributeValue9)) {
                                                    if (attributeValue9.equals("fitXY")) {
                                                        imageView.setScaleType(ImageView.ScaleType.FIT_XY);
                                                    } else if (attributeValue9.equals("centerInside")) {
                                                        imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
                                                    } else if (attributeValue9.equals("centerCrop")) {
                                                        imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
                                                    }
                                                }
                                            }
                                        } catch (Exception e4) {
                                            z.d("AttributeUtil", e4.getMessage());
                                        }
                                    } else if (view instanceof ListView) {
                                        ListView listView = (ListView) view;
                                        try {
                                            int i6 = 1.a[cVar.ordinal()];
                                            if (i6 == 25) {
                                                listView.setMotionEventSplittingEnabled(!attributeSet.getAttributeValue(i3).equals("false"));
                                            } else if (i6 == 26) {
                                                listView.setCacheColorHint(com.mbridge.msdk.dycreator.a.b.a().a(attributeSet.getAttributeValue(i3)));
                                            } else {
                                                switch (i6) {
                                                    case 34:
                                                        String attributeValue10 = attributeSet.getAttributeValue(i3);
                                                        if (!TextUtils.isEmpty(attributeValue10) && attributeValue10.startsWith("@null")) {
                                                            listView.setDivider(null);
                                                        }
                                                        break;
                                                    case 35:
                                                        String attributeValue11 = attributeSet.getAttributeValue(i3);
                                                        if (!TextUtils.isEmpty(attributeValue11)) {
                                                            if (attributeValue11.equals(Device.NETWORN_NONE)) {
                                                                z = false;
                                                                listView.setVerticalScrollBarEnabled(false);
                                                            } else {
                                                                z = false;
                                                            }
                                                            if (attributeValue11.equals("false")) {
                                                                listView.setScrollbarFadingEnabled(z);
                                                            }
                                                        }
                                                        break;
                                                    case 36:
                                                        String attributeValue12 = attributeSet.getAttributeValue(i3);
                                                        if (!TextUtils.isEmpty(attributeValue12)) {
                                                            listView.setSelector(com.mbridge.msdk.dycreator.a.b.a().a(attributeValue12));
                                                        }
                                                        break;
                                                }
                                            }
                                        } catch (Exception e5) {
                                            z.d("AttributeUtil", e5.getMessage());
                                        }
                                    } else if (view instanceof GridView) {
                                        GridView gridView = (GridView) view;
                                        try {
                                            int i7 = 1.a[cVar.ordinal()];
                                            if (i7 == 1) {
                                                String attributeValue13 = attributeSet.getAttributeValue(i3);
                                                if (attributeValue13.startsWith("@+id/")) {
                                                    gridView.setId(attributeValue13.substring(5).hashCode());
                                                }
                                            } else {
                                                switch (i7) {
                                                    case 23:
                                                        gridView.setVerticalSpacing(e.a(com.mbridge.msdk.foundation.controller.a.f().j(), com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3))));
                                                        break;
                                                    case 24:
                                                        gridView.setNumColumns(attributeSet.getAttributeIntValue(i3, 2));
                                                        break;
                                                    case 25:
                                                        gridView.setMotionEventSplittingEnabled(!attributeSet.getAttributeValue(i3).equals("false"));
                                                        break;
                                                    case 26:
                                                        gridView.setCacheColorHint(com.mbridge.msdk.dycreator.a.b.a().a(attributeSet.getAttributeValue(i3)));
                                                        break;
                                                    case 27:
                                                        gridView.setHorizontalSpacing(e.a(com.mbridge.msdk.foundation.controller.a.f().j(), com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3))));
                                                        break;
                                                }
                                            }
                                        } catch (Exception e6) {
                                            z.d("AttributeUtil", e6.getMessage());
                                        }
                                    } else if (view instanceof ScrollView) {
                                    } else if (view instanceof PlayerView) {
                                        PlayerView playerView = (PlayerView) view;
                                        try {
                                            if (1.a[cVar.ordinal()] == 12) {
                                                if ("horizontal".equalsIgnoreCase(attributeSet.getAttributeValue(i3))) {
                                                    playerView.setOrientation(0);
                                                } else {
                                                    playerView.setOrientation(1);
                                                }
                                            }
                                        } catch (Exception e7) {
                                            z.d("AttributeUtil", e7.getMessage());
                                        }
                                    } else {
                                        if (view instanceof MBHorizontalScrollView) {
                                        } else {
                                            if (view instanceof LinearLayout) {
                                                LinearLayout linearLayout = (LinearLayout) view;
                                                try {
                                                    if (1.a[cVar.ordinal()] == 12) {
                                                        if ("horizontal".equalsIgnoreCase(attributeSet.getAttributeValue(i3))) {
                                                            try {
                                                                linearLayout.setOrientation(0);
                                                            } catch (Exception e8) {
                                                                e = e8;
                                                                z.d("AttributeUtil", e.getMessage());
                                                            }
                                                        } else {
                                                            linearLayout.setOrientation(1);
                                                        }
                                                        break;
                                                    }
                                                } catch (Exception e9) {
                                                    e = e9;
                                                }
                                            } else if (view instanceof RelativeLayout) {
                                                RelativeLayout relativeLayout = (RelativeLayout) view;
                                                try {
                                                    if (1.a[cVar.ordinal()] == 22) {
                                                        relativeLayout.setGravity(com.mbridge.msdk.dycreator.a.b.a().c(attributeSet.getAttributeValue(i3)));
                                                    }
                                                } catch (Exception e10) {
                                                    z.d("AttributeUtil", e10.getMessage());
                                                }
                                            } else if (view instanceof FrameLayout) {
                                            }
                                            iB = i2;
                                        }
                                        break;
                                    }
                                } else {
                                    i2 = iB;
                                }
                                iB = i2;
                                break;
                            case 2:
                                map = mapC;
                                String attributeValue14 = attributeSet.getAttributeValue(i3);
                                try {
                                    if (attributeValue14.startsWith("#")) {
                                        try {
                                            strArrSplit = attributeValue14.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                                        } catch (Exception unused) {
                                            strArrSplit = null;
                                        }
                                        if (strArrSplit != null) {
                                            i = attributeCount;
                                            if (strArrSplit.length <= 2) {
                                                view.setBackgroundColor(com.mbridge.msdk.dycreator.a.b.a().a(attributeValue14));
                                            }
                                        } else {
                                            i = attributeCount;
                                        }
                                        if (strArrSplit != null) {
                                            try {
                                                if (strArrSplit.length == 3) {
                                                    GradientDrawable gradientDrawableA = com.mbridge.msdk.dycreator.a.b.a().a(strArrSplit);
                                                    if (gradientDrawableA != null) {
                                                        view.setBackground(gradientDrawableA);
                                                    }
                                                }
                                            } catch (Exception e11) {
                                                e = e11;
                                                z.d("AttributeUtil", e.getMessage());
                                            }
                                        }
                                        break;
                                    } else {
                                        i = attributeCount;
                                        if (attributeValue14.startsWith("@color/")) {
                                            view.setBackgroundColor(com.mbridge.msdk.dycreator.a.b.a().a(attributeValue14));
                                        } else if (attributeValue14.startsWith("@drawable/")) {
                                            view.setBackgroundResource(com.mbridge.msdk.foundation.controller.a.f().j().getResources().getIdentifier(attributeValue14.substring(10), i.c, com.mbridge.msdk.foundation.controller.a.f().j().getPackageName()));
                                        }
                                    }
                                } catch (Exception e12) {
                                    e = e12;
                                    i = attributeCount;
                                }
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 3:
                                map = mapC;
                                String attributeValue15 = attributeSet.getAttributeValue(i3);
                                try {
                                    if (!TextUtils.isEmpty(attributeValue15)) {
                                        if (attributeValue15.equals("invisible")) {
                                            view.setVisibility(4);
                                        } else if (attributeValue15.equalsIgnoreCase("gone")) {
                                            view.setVisibility(8);
                                        }
                                    }
                                } catch (Exception e13) {
                                    z.d("AttributeUtil", e13.getMessage());
                                }
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 4:
                                String attributeValue16 = attributeSet.getAttributeValue(i3);
                                try {
                                    if (TextUtils.isEmpty(attributeValue16)) {
                                        map = mapC;
                                    } else {
                                        map = mapC;
                                        try {
                                            String str3 = b.a.get(attributeValue16.substring(8));
                                            if (!TextUtils.isEmpty(str3)) {
                                                view.setContentDescription(str3);
                                            }
                                        } catch (Exception e14) {
                                            e = e14;
                                            z.d("AttributeUtil", e.getMessage());
                                        }
                                    }
                                } catch (Exception e15) {
                                    e = e15;
                                    map = mapC;
                                }
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 5:
                                int iB5 = com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3));
                                view.setPadding(iB5, iB5, iB5, iB5);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 6:
                                iB4 = com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3));
                                view.setPadding(iB, iB4, iB2, iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 7:
                                iB3 = com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3));
                                view.setPadding(iB, iB4, iB2, iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 8:
                                iB = com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3));
                                view.setPadding(iB, iB4, iB2, iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 9:
                                iB2 = com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3));
                                view.setPadding(iB, iB4, iB2, iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 10:
                                view.setPadding(com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3)), iB4, iB2, iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                            case 11:
                                view.setPadding(iB, iB4, com.mbridge.msdk.dycreator.a.b.a().b(attributeSet.getAttributeValue(i3)), iB3);
                                map = mapC;
                                i = attributeCount;
                                if (!(view instanceof EditText)) {
                                }
                                iB = i2;
                                break;
                        }
                        return;
                    }
                    map = mapC;
                    i = attributeCount;
                    i3++;
                    mapC = map;
                }
            }
        } catch (Exception e16) {
            z.d("AttributeUtil", e16.getMessage());
        }
    }
}
