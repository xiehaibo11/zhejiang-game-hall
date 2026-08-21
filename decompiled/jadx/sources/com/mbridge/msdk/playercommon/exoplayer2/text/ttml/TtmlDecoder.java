package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

import android.text.Layout;
import android.util.Log;
import com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder;
import com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException;
import com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

/* JADX INFO: loaded from: classes2.dex */
public final class TtmlDecoder extends SimpleSubtitleDecoder {
    private static final String ATTR_BEGIN = "begin";
    private static final String ATTR_DURATION = "dur";
    private static final String ATTR_END = "end";
    private static final String ATTR_REGION = "region";
    private static final String ATTR_STYLE = "style";
    private static final int DEFAULT_FRAME_RATE = 30;
    private static final String TAG = "TtmlDecoder";
    private static final String TTP = "http://www.w3.org/ns/ttml#parameter";
    private final XmlPullParserFactory xmlParserFactory;
    private static final Pattern CLOCK_TIME = Pattern.compile("^([0-9][0-9]+):([0-9][0-9]):([0-9][0-9])(?:(\\.[0-9]+)|:([0-9][0-9])(?:\\.([0-9]+))?)?$");
    private static final Pattern OFFSET_TIME = Pattern.compile("^([0-9]+(?:\\.[0-9]+)?)(h|m|s|ms|f|t)$");
    private static final Pattern FONT_SIZE = Pattern.compile("^(([0-9]*.)?[0-9]+)(px|em|%)$");
    private static final Pattern PERCENTAGE_COORDINATES = Pattern.compile("^(\\d+\\.?\\d*?)% (\\d+\\.?\\d*?)%$");
    private static final Pattern CELL_RESOLUTION = Pattern.compile("^(\\d+) (\\d+)$");
    private static final FrameAndTickRate DEFAULT_FRAME_AND_TICK_RATE = new FrameAndTickRate(30.0f, 1, 1);
    private static final CellResolution DEFAULT_CELL_RESOLUTION = new CellResolution(32, 15);

    public TtmlDecoder() {
        super(TAG);
        try {
            XmlPullParserFactory xmlPullParserFactoryNewInstance = XmlPullParserFactory.newInstance();
            this.xmlParserFactory = xmlPullParserFactoryNewInstance;
            xmlPullParserFactoryNewInstance.setNamespaceAware(true);
        } catch (XmlPullParserException e) {
            throw new RuntimeException("Couldn't create XmlPullParserFactory instance", e);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder
    public final TtmlSubtitle decode(byte[] bArr, int i, boolean z) throws SubtitleDecoderException {
        try {
            XmlPullParser xmlPullParserNewPullParser = this.xmlParserFactory.newPullParser();
            HashMap map = new HashMap();
            HashMap map2 = new HashMap();
            TtmlSubtitle ttmlSubtitle = null;
            map2.put("", new TtmlRegion(null));
            int i2 = 0;
            xmlPullParserNewPullParser.setInput(new ByteArrayInputStream(bArr, 0, i), null);
            ArrayDeque arrayDeque = new ArrayDeque();
            FrameAndTickRate frameAndTickRates = DEFAULT_FRAME_AND_TICK_RATE;
            CellResolution cellResolution = DEFAULT_CELL_RESOLUTION;
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.getEventType()) {
                TtmlNode ttmlNode = (TtmlNode) arrayDeque.peek();
                if (i2 == 0) {
                    String name = xmlPullParserNewPullParser.getName();
                    if (eventType == 2) {
                        if ("tt".equals(name)) {
                            frameAndTickRates = parseFrameAndTickRates(xmlPullParserNewPullParser);
                            cellResolution = parseCellResolution(xmlPullParserNewPullParser, DEFAULT_CELL_RESOLUTION);
                        }
                        if (!isSupportedTag(name)) {
                            Log.i(TAG, "Ignoring unsupported tag: " + xmlPullParserNewPullParser.getName());
                        } else if ("head".equals(name)) {
                            parseHeader(xmlPullParserNewPullParser, map, map2, cellResolution);
                        } else {
                            try {
                                TtmlNode node = parseNode(xmlPullParserNewPullParser, ttmlNode, map2, frameAndTickRates);
                                arrayDeque.push(node);
                                if (ttmlNode != null) {
                                    ttmlNode.addChild(node);
                                }
                            } catch (SubtitleDecoderException e) {
                                Log.w(TAG, "Suppressing parser error", e);
                                i2++;
                            }
                        }
                        i2++;
                    } else if (eventType == 4) {
                        ttmlNode.addChild(TtmlNode.buildTextNode(xmlPullParserNewPullParser.getText()));
                    } else if (eventType == 3) {
                        if (xmlPullParserNewPullParser.getName().equals("tt")) {
                            ttmlSubtitle = new TtmlSubtitle((TtmlNode) arrayDeque.peek(), map, map2);
                        }
                        arrayDeque.pop();
                    }
                } else if (eventType == 2) {
                    i2++;
                } else if (eventType == 3) {
                    i2--;
                }
                xmlPullParserNewPullParser.next();
            }
            return ttmlSubtitle;
        } catch (IOException e2) {
            throw new IllegalStateException("Unexpected error when reading input.", e2);
        } catch (XmlPullParserException e3) {
            throw new SubtitleDecoderException("Unable to decode source", e3);
        }
    }

    private FrameAndTickRate parseFrameAndTickRates(XmlPullParser xmlPullParser) throws SubtitleDecoderException {
        String attributeValue = xmlPullParser.getAttributeValue(TTP, "frameRate");
        int i = attributeValue != null ? Integer.parseInt(attributeValue) : 30;
        float f = 1.0f;
        String attributeValue2 = xmlPullParser.getAttributeValue(TTP, "frameRateMultiplier");
        if (attributeValue2 != null) {
            if (Util.split(attributeValue2, " ").length != 2) {
                throw new SubtitleDecoderException("frameRateMultiplier doesn't have 2 parts");
            }
            f = Integer.parseInt(r2[0]) / Integer.parseInt(r2[1]);
        }
        int i2 = DEFAULT_FRAME_AND_TICK_RATE.subFrameRate;
        String attributeValue3 = xmlPullParser.getAttributeValue(TTP, "subFrameRate");
        if (attributeValue3 != null) {
            i2 = Integer.parseInt(attributeValue3);
        }
        int i3 = DEFAULT_FRAME_AND_TICK_RATE.tickRate;
        String attributeValue4 = xmlPullParser.getAttributeValue(TTP, "tickRate");
        if (attributeValue4 != null) {
            i3 = Integer.parseInt(attributeValue4);
        }
        return new FrameAndTickRate(i * f, i2, i3);
    }

    private CellResolution parseCellResolution(XmlPullParser xmlPullParser, CellResolution cellResolution) throws SubtitleDecoderException {
        String attributeValue = xmlPullParser.getAttributeValue(TTP, "cellResolution");
        if (attributeValue == null) {
            return cellResolution;
        }
        Matcher matcher = CELL_RESOLUTION.matcher(attributeValue);
        if (!matcher.matches()) {
            Log.w(TAG, "Ignoring malformed cell resolution: " + attributeValue);
            return cellResolution;
        }
        try {
            int i = Integer.parseInt(matcher.group(1));
            int i2 = Integer.parseInt(matcher.group(2));
            if (i == 0 || i2 == 0) {
                throw new SubtitleDecoderException("Invalid cell resolution " + i + " " + i2);
            }
            return new CellResolution(i, i2);
        } catch (NumberFormatException unused) {
            Log.w(TAG, "Ignoring malformed cell resolution: " + attributeValue);
            return cellResolution;
        }
    }

    private Map<String, TtmlStyle> parseHeader(XmlPullParser xmlPullParser, Map<String, TtmlStyle> map, Map<String, TtmlRegion> map2, CellResolution cellResolution) throws XmlPullParserException, IOException {
        TtmlRegion regionAttributes;
        do {
            xmlPullParser.next();
            if (XmlPullParserUtil.isStartTag(xmlPullParser, "style")) {
                String attributeValue = XmlPullParserUtil.getAttributeValue(xmlPullParser, "style");
                TtmlStyle styleAttributes = parseStyleAttributes(xmlPullParser, new TtmlStyle());
                if (attributeValue != null) {
                    for (String str : parseStyleIds(attributeValue)) {
                        styleAttributes.chain(map.get(str));
                    }
                }
                if (styleAttributes.getId() != null) {
                    map.put(styleAttributes.getId(), styleAttributes);
                }
            } else if (XmlPullParserUtil.isStartTag(xmlPullParser, "region") && (regionAttributes = parseRegionAttributes(xmlPullParser, cellResolution)) != null) {
                map2.put(regionAttributes.id, regionAttributes);
            }
        } while (!XmlPullParserUtil.isEndTag(xmlPullParser, "head"));
        return map;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0099  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion parseRegionAttributes(org.xmlpull.v1.XmlPullParser r12, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution r13) {
        /*
            Method dump skipped, instruction units count: 270
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.parseRegionAttributes(org.xmlpull.v1.XmlPullParser, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution):com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion");
    }

    private String[] parseStyleIds(String str) {
        String strTrim = str.trim();
        return strTrim.isEmpty() ? new String[0] : Util.split(strTrim, "\\s+");
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private TtmlStyle parseStyleAttributes(XmlPullParser xmlPullParser, TtmlStyle ttmlStyle) {
        String attributeValue;
        byte b;
        int attributeCount = xmlPullParser.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            attributeValue = xmlPullParser.getAttributeValue(i);
            b = -1;
            switch (xmlPullParser.getAttributeName(i)) {
                case "id":
                    if (!"style".equals(xmlPullParser.getName())) {
                        break;
                    } else {
                        ttmlStyle = createIfNull(ttmlStyle).setId(attributeValue);
                        break;
                    }
                    break;
                case "backgroundColor":
                    ttmlStyle = createIfNull(ttmlStyle);
                    try {
                        ttmlStyle.setBackgroundColor(ColorParser.parseTtmlColor(attributeValue));
                        break;
                    } catch (IllegalArgumentException unused) {
                        Log.w(TAG, "Failed parsing background value: " + attributeValue);
                        break;
                    }
                    break;
                case "color":
                    ttmlStyle = createIfNull(ttmlStyle);
                    try {
                        ttmlStyle.setFontColor(ColorParser.parseTtmlColor(attributeValue));
                        break;
                    } catch (IllegalArgumentException unused2) {
                        Log.w(TAG, "Failed parsing color value: " + attributeValue);
                        break;
                    }
                    break;
                case "fontFamily":
                    ttmlStyle = createIfNull(ttmlStyle).setFontFamily(attributeValue);
                    break;
                case "fontSize":
                    try {
                        ttmlStyle = createIfNull(ttmlStyle);
                        parseFontSize(attributeValue, ttmlStyle);
                        break;
                    } catch (SubtitleDecoderException unused3) {
                        Log.w(TAG, "Failed parsing fontSize value: " + attributeValue);
                        break;
                    }
                    break;
                case "fontWeight":
                    ttmlStyle = createIfNull(ttmlStyle).setBold(TtmlNode.BOLD.equalsIgnoreCase(attributeValue));
                    break;
                case "fontStyle":
                    ttmlStyle = createIfNull(ttmlStyle).setItalic(TtmlNode.ITALIC.equalsIgnoreCase(attributeValue));
                    break;
                case "textAlign":
                    String lowerInvariant = Util.toLowerInvariant(attributeValue);
                    switch (lowerInvariant.hashCode()) {
                        case -1364013995:
                            if (lowerInvariant.equals("center")) {
                                b = 4;
                            }
                            break;
                        case 100571:
                            if (lowerInvariant.equals("end")) {
                                b = 3;
                            }
                            break;
                        case 3317767:
                            if (lowerInvariant.equals(TtmlNode.LEFT)) {
                                b = 0;
                            }
                            break;
                        case 108511772:
                            if (lowerInvariant.equals(TtmlNode.RIGHT)) {
                                b = 2;
                            }
                            break;
                        case 109757538:
                            if (lowerInvariant.equals("start")) {
                                b = 1;
                            }
                            break;
                    }
                    if (b == 0) {
                        ttmlStyle = createIfNull(ttmlStyle).setTextAlign(Layout.Alignment.ALIGN_NORMAL);
                        break;
                    } else {
                        if (b == 1) {
                            ttmlStyle = createIfNull(ttmlStyle).setTextAlign(Layout.Alignment.ALIGN_NORMAL);
                        } else if (b == 2) {
                            ttmlStyle = createIfNull(ttmlStyle).setTextAlign(Layout.Alignment.ALIGN_OPPOSITE);
                        } else if (b == 3) {
                            ttmlStyle = createIfNull(ttmlStyle).setTextAlign(Layout.Alignment.ALIGN_OPPOSITE);
                        } else if (b == 4) {
                            ttmlStyle = createIfNull(ttmlStyle).setTextAlign(Layout.Alignment.ALIGN_CENTER);
                        }
                        break;
                    }
                    break;
                case "textDecoration":
                    String lowerInvariant2 = Util.toLowerInvariant(attributeValue);
                    switch (lowerInvariant2.hashCode()) {
                        case -1461280213:
                            if (lowerInvariant2.equals(TtmlNode.NO_UNDERLINE)) {
                                b = 3;
                            }
                            break;
                        case -1026963764:
                            if (lowerInvariant2.equals(TtmlNode.UNDERLINE)) {
                                b = 2;
                            }
                            break;
                        case 913457136:
                            if (lowerInvariant2.equals(TtmlNode.NO_LINETHROUGH)) {
                                b = 1;
                            }
                            break;
                        case 1679736913:
                            if (lowerInvariant2.equals(TtmlNode.LINETHROUGH)) {
                                b = 0;
                            }
                            break;
                    }
                    if (b == 0) {
                        ttmlStyle = createIfNull(ttmlStyle).setLinethrough(true);
                        break;
                    } else {
                        if (b == 1) {
                            ttmlStyle = createIfNull(ttmlStyle).setLinethrough(false);
                        } else if (b == 2) {
                            ttmlStyle = createIfNull(ttmlStyle).setUnderline(true);
                        } else if (b == 3) {
                            ttmlStyle = createIfNull(ttmlStyle).setUnderline(false);
                        }
                        break;
                    }
                    break;
            }
        }
        return ttmlStyle;
    }

    private TtmlStyle createIfNull(TtmlStyle ttmlStyle) {
        return ttmlStyle == null ? new TtmlStyle() : ttmlStyle;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0069  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x00e3  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode parseNode(org.xmlpull.v1.XmlPullParser r20, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r21, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r22, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate r23) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
        /*
            Method dump skipped, instruction units count: 260
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.parseNode(org.xmlpull.v1.XmlPullParser, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode, java.util.Map, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate):com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode");
    }

    private static boolean isSupportedTag(String str) {
        return str.equals("tt") || str.equals("head") || str.equals(TtmlNode.TAG_BODY) || str.equals(TtmlNode.TAG_DIV) || str.equals("p") || str.equals(TtmlNode.TAG_SPAN) || str.equals("br") || str.equals("style") || str.equals(TtmlNode.TAG_STYLING) || str.equals("layout") || str.equals("region") || str.equals(TtmlNode.TAG_METADATA) || str.equals(TtmlNode.TAG_SMPTE_IMAGE) || str.equals(TtmlNode.TAG_SMPTE_DATA) || str.equals(TtmlNode.TAG_SMPTE_INFORMATION);
    }

    private static void parseFontSize(String str, TtmlStyle ttmlStyle) throws SubtitleDecoderException {
        Matcher matcher;
        String[] strArrSplit = Util.split(str, "\\s+");
        if (strArrSplit.length == 1) {
            matcher = FONT_SIZE.matcher(str);
        } else if (strArrSplit.length == 2) {
            matcher = FONT_SIZE.matcher(strArrSplit[1]);
            Log.w(TAG, "Multiple values in fontSize attribute. Picking the second value for vertical font size and ignoring the first.");
        } else {
            throw new SubtitleDecoderException("Invalid number of entries for fontSize: " + strArrSplit.length + ".");
        }
        if (matcher.matches()) {
            String strGroup = matcher.group(3);
            byte b = -1;
            int iHashCode = strGroup.hashCode();
            if (iHashCode != 37) {
                if (iHashCode != 3240) {
                    if (iHashCode == 3592 && strGroup.equals("px")) {
                        b = 0;
                    }
                } else if (strGroup.equals("em")) {
                    b = 1;
                }
            } else if (strGroup.equals("%")) {
                b = 2;
            }
            if (b == 0) {
                ttmlStyle.setFontSizeUnit(1);
            } else if (b == 1) {
                ttmlStyle.setFontSizeUnit(2);
            } else if (b == 2) {
                ttmlStyle.setFontSizeUnit(3);
            } else {
                throw new SubtitleDecoderException("Invalid unit for fontSize: '" + strGroup + "'.");
            }
            ttmlStyle.setFontSize(Float.valueOf(matcher.group(1)).floatValue());
            return;
        }
        throw new SubtitleDecoderException("Invalid expression for fontSize: '" + str + "'.");
    }

    /* JADX WARN: Removed duplicated region for block: B:50:0x00e4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static long parseTimeExpression(java.lang.String r14, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate r15) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
        /*
            Method dump skipped, instruction units count: 290
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.parseTimeExpression(java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate):long");
    }

    private static final class FrameAndTickRate {
        final float effectiveFrameRate;
        final int subFrameRate;
        final int tickRate;

        FrameAndTickRate(float f, int i, int i2) {
            this.effectiveFrameRate = f;
            this.subFrameRate = i;
            this.tickRate = i2;
        }
    }

    private static final class CellResolution {
        final int columns;
        final int rows;

        CellResolution(int i, int i2) {
            this.columns = i;
            this.rows = i2;
        }
    }
}
