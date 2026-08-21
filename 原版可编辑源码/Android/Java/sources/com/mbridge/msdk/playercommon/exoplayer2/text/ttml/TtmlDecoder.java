package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

import android.text.Layout;
import android.util.Log;
import com.loc.at;
import com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder;
import com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException;
import com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil;
import com.tkay.expressad.d.a.b;
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

    @Override
    protected final TtmlSubtitle decode(byte[] bArr, int i, boolean z) throws SubtitleDecoderException {
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
    */
    private TtmlRegion parseRegionAttributes(XmlPullParser xmlPullParser, CellResolution cellResolution) {
        String attributeValue = XmlPullParserUtil.getAttributeValue(xmlPullParser, "id");
        if (attributeValue == null) {
            return null;
        }
        String attributeValue2 = XmlPullParserUtil.getAttributeValue(xmlPullParser, "origin");
        if (attributeValue2 != null) {
            Matcher matcher = PERCENTAGE_COORDINATES.matcher(attributeValue2);
            if (matcher.matches()) {
                try {
                    float f = Float.parseFloat(matcher.group(1)) / 100.0f;
                    int i = 2;
                    float f2 = Float.parseFloat(matcher.group(2)) / 100.0f;
                    String attributeValue3 = XmlPullParserUtil.getAttributeValue(xmlPullParser, TtmlNode.ATTR_TTS_EXTENT);
                    if (attributeValue3 != null) {
                        Matcher matcher2 = PERCENTAGE_COORDINATES.matcher(attributeValue3);
                        if (matcher2.matches()) {
                            try {
                                float f3 = Float.parseFloat(matcher2.group(1)) / 100.0f;
                                float f4 = Float.parseFloat(matcher2.group(2)) / 100.0f;
                                String attributeValue4 = XmlPullParserUtil.getAttributeValue(xmlPullParser, TtmlNode.ATTR_TTS_DISPLAY_ALIGN);
                                if (attributeValue4 != null) {
                                    String lowerInvariant = Util.toLowerInvariant(attributeValue4);
                                    byte b = -1;
                                    int iHashCode = lowerInvariant.hashCode();
                                    if (iHashCode != -1364013995) {
                                        if (iHashCode == 92734940 && lowerInvariant.equals("after")) {
                                            b = 1;
                                        }
                                    } else if (lowerInvariant.equals("center")) {
                                        b = 0;
                                    }
                                    if (b == 0) {
                                        f2 += f4 / 2.0f;
                                        i = 1;
                                    } else if (b != 1) {
                                        i = 0;
                                    } else {
                                        f2 += f4;
                                    }
                                }
                                return new TtmlRegion(attributeValue, f, f2, 0, i, f3, 1, 1.0f / cellResolution.rows);
                            } catch (NumberFormatException unused) {
                                Log.w(TAG, "Ignoring region with malformed extent: " + attributeValue2);
                                return null;
                            }
                        }
                        Log.w(TAG, "Ignoring region with unsupported extent: " + attributeValue2);
                        return null;
                    }
                    Log.w(TAG, "Ignoring region without an extent");
                    return null;
                } catch (NumberFormatException unused2) {
                    Log.w(TAG, "Ignoring region with malformed origin: " + attributeValue2);
                    return null;
                }
            }
            Log.w(TAG, "Ignoring region with unsupported origin: " + attributeValue2);
            return null;
        }
        Log.w(TAG, "Ignoring region without an origin");
        return null;
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
    */
    private TtmlNode parseNode(XmlPullParser xmlPullParser, TtmlNode ttmlNode, Map<String, TtmlRegion> map, FrameAndTickRate frameAndTickRate) throws SubtitleDecoderException {
        long j;
        long j2;
        byte b;
        int attributeCount = xmlPullParser.getAttributeCount();
        TtmlStyle styleAttributes = parseStyleAttributes(xmlPullParser, null);
        String[] strArr = null;
        String str = "";
        long timeExpression = -9223372036854775807L;
        long timeExpression2 = -9223372036854775807L;
        long timeExpression3 = -9223372036854775807L;
        for (int i = 0; i < attributeCount; i++) {
            String attributeName = xmlPullParser.getAttributeName(i);
            String attributeValue = xmlPullParser.getAttributeValue(i);
            switch (attributeName.hashCode()) {
                case -934795532:
                    b = attributeName.equals("region") ? (byte) 4 : (byte) -1;
                    break;
                case 99841:
                    if (attributeName.equals(ATTR_DURATION)) {
                        b = 2;
                        break;
                    }
                    break;
                case 100571:
                    if (attributeName.equals("end")) {
                        b = 1;
                        break;
                    }
                    break;
                case 93616297:
                    if (attributeName.equals(ATTR_BEGIN)) {
                        b = 0;
                        break;
                    }
                    break;
                case 109780401:
                    if (attributeName.equals("style")) {
                        b = 3;
                        break;
                    }
                    break;
            }
            if (b == 0) {
                timeExpression = parseTimeExpression(attributeValue, frameAndTickRate);
            } else if (b == 1) {
                timeExpression2 = parseTimeExpression(attributeValue, frameAndTickRate);
            } else if (b == 2) {
                timeExpression3 = parseTimeExpression(attributeValue, frameAndTickRate);
            } else if (b == 3) {
                String[] styleIds = parseStyleIds(attributeValue);
                if (styleIds.length > 0) {
                    strArr = styleIds;
                }
            } else if (b == 4 && map.containsKey(attributeValue)) {
                str = attributeValue;
            }
        }
        if (ttmlNode != null) {
            j = -9223372036854775807L;
            if (ttmlNode.startTimeUs != -9223372036854775807L) {
                if (timeExpression != -9223372036854775807L) {
                    timeExpression += ttmlNode.startTimeUs;
                }
                if (timeExpression2 != -9223372036854775807L) {
                    timeExpression2 += ttmlNode.startTimeUs;
                }
            }
        } else {
            j = -9223372036854775807L;
        }
        long j3 = timeExpression;
        if (timeExpression2 != j) {
            j2 = timeExpression2;
        } else if (timeExpression3 != j) {
            j2 = j3 + timeExpression3;
        } else if (ttmlNode != null && ttmlNode.endTimeUs != j) {
            j2 = ttmlNode.endTimeUs;
        }
        return TtmlNode.buildNode(xmlPullParser.getName(), j3, j2, styleAttributes, strArr, str);
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
    */
    private static long parseTimeExpression(String str, FrameAndTickRate frameAndTickRate) throws SubtitleDecoderException {
        double d;
        double d2;
        Matcher matcher = CLOCK_TIME.matcher(str);
        byte b = 2;
        if (matcher.matches()) {
            double d3 = (Long.parseLong(matcher.group(1)) * b.P) + (Long.parseLong(matcher.group(2)) * 60) + Long.parseLong(matcher.group(3));
            String strGroup = matcher.group(4);
            return (long) ((d3 + (strGroup != null ? Double.parseDouble(strGroup) : 0.0d) + (matcher.group(5) != null ? Long.parseLong(r14) / frameAndTickRate.effectiveFrameRate : 0.0d) + (matcher.group(6) != null ? (Long.parseLong(r14) / ((double) frameAndTickRate.subFrameRate)) / ((double) frameAndTickRate.effectiveFrameRate) : 0.0d)) * 1000000.0d);
        }
        Matcher matcher2 = OFFSET_TIME.matcher(str);
        if (matcher2.matches()) {
            double d4 = Double.parseDouble(matcher2.group(1));
            String strGroup2 = matcher2.group(2);
            int iHashCode = strGroup2.hashCode();
            if (iHashCode != 102) {
                if (iHashCode != 104) {
                    if (iHashCode != 109) {
                        if (iHashCode != 3494) {
                            if (iHashCode != 115) {
                                b = (iHashCode == 116 && strGroup2.equals("t")) ? (byte) 5 : (byte) -1;
                            } else if (!strGroup2.equals("s")) {
                            }
                        } else if (strGroup2.equals("ms")) {
                            b = 3;
                        }
                    } else if (strGroup2.equals("m")) {
                        b = 1;
                    }
                } else if (strGroup2.equals(at.g)) {
                    b = 0;
                }
            } else if (strGroup2.equals("f")) {
                b = 4;
            }
            if (b == 0) {
                d = 3600.0d;
            } else {
                if (b != 1) {
                    if (b == 3) {
                        d2 = 1000.0d;
                    } else {
                        if (b != 4) {
                            if (b == 5) {
                                d2 = frameAndTickRate.tickRate;
                            }
                            return (long) (d4 * 1000000.0d);
                        }
                        d2 = frameAndTickRate.effectiveFrameRate;
                    }
                    d4 /= d2;
                    return (long) (d4 * 1000000.0d);
                }
                d = 60.0d;
            }
            d4 *= d;
            return (long) (d4 * 1000000.0d);
        }
        throw new SubtitleDecoderException("Malformed time expression: " + str);
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
