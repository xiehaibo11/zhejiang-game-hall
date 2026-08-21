package com.mbridge.msdk.playercommon.exoplayer2.text.ssa;

import android.text.TextUtils;
import android.util.Log;
import com.heytap.mcssdk.constant.a;
import com.mbridge.msdk.playercommon.exoplayer2.text.Cue;
import com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;
import com.mbridge.msdk.playercommon.exoplayer2.util.LongArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class SsaDecoder extends SimpleSubtitleDecoder {
    private static final String DIALOGUE_LINE_PREFIX = "Dialogue: ";
    private static final String FORMAT_LINE_PREFIX = "Format: ";
    private static final Pattern SSA_TIMECODE_PATTERN = Pattern.compile("(?:(\\d+):)?(\\d+):(\\d+)(?::|\\.)(\\d+)");
    private static final String TAG = "SsaDecoder";
    private int formatEndIndex;
    private int formatKeyCount;
    private int formatStartIndex;
    private int formatTextIndex;
    private final boolean haveInitializationData;

    public SsaDecoder() {
        this(null);
    }

    public SsaDecoder(List<byte[]> list) {
        super(TAG);
        if (list != null && !list.isEmpty()) {
            this.haveInitializationData = true;
            String strFromUtf8Bytes = Util.fromUtf8Bytes(list.get(0));
            Assertions.checkArgument(strFromUtf8Bytes.startsWith(FORMAT_LINE_PREFIX));
            parseFormatLine(strFromUtf8Bytes);
            parseHeader(new ParsableByteArray(list.get(1)));
            return;
        }
        this.haveInitializationData = false;
    }

    @Override
    protected final SsaSubtitle decode(byte[] bArr, int i, boolean z) {
        ArrayList arrayList = new ArrayList();
        LongArray longArray = new LongArray();
        ParsableByteArray parsableByteArray = new ParsableByteArray(bArr, i);
        if (!this.haveInitializationData) {
            parseHeader(parsableByteArray);
        }
        parseEventBody(parsableByteArray, arrayList, longArray);
        Cue[] cueArr = new Cue[arrayList.size()];
        arrayList.toArray(cueArr);
        return new SsaSubtitle(cueArr, longArray.toArray());
    }

    private void parseHeader(ParsableByteArray parsableByteArray) {
        String line;
        do {
            line = parsableByteArray.readLine();
            if (line == null) {
                return;
            }
        } while (!line.startsWith("[Events]"));
    }

    private void parseEventBody(ParsableByteArray parsableByteArray, List<Cue> list, LongArray longArray) {
        while (true) {
            String line = parsableByteArray.readLine();
            if (line == null) {
                return;
            }
            if (!this.haveInitializationData && line.startsWith(FORMAT_LINE_PREFIX)) {
                parseFormatLine(line);
            } else if (line.startsWith(DIALOGUE_LINE_PREFIX)) {
                parseDialogueLine(line, list, longArray);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x005a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void parseFormatLine(String str) {
        byte b;
        String[] strArrSplit = TextUtils.split(str.substring(8), Constants.ACCEPT_TIME_SEPARATOR_SP);
        this.formatKeyCount = strArrSplit.length;
        this.formatStartIndex = -1;
        this.formatEndIndex = -1;
        this.formatTextIndex = -1;
        for (int i = 0; i < this.formatKeyCount; i++) {
            String lowerInvariant = Util.toLowerInvariant(strArrSplit[i].trim());
            int iHashCode = lowerInvariant.hashCode();
            if (iHashCode != 100571) {
                if (iHashCode != 3556653) {
                    b = (iHashCode == 109757538 && lowerInvariant.equals("start")) ? (byte) 0 : (byte) -1;
                } else if (lowerInvariant.equals("text")) {
                    b = 2;
                }
            } else if (lowerInvariant.equals(TtmlNode.END)) {
                b = 1;
            }
            if (b == 0) {
                this.formatStartIndex = i;
            } else if (b == 1) {
                this.formatEndIndex = i;
            } else if (b == 2) {
                this.formatTextIndex = i;
            }
        }
        if (this.formatStartIndex == -1 || this.formatEndIndex == -1 || this.formatTextIndex == -1) {
            this.formatKeyCount = 0;
        }
    }

    private void parseDialogueLine(String str, List<Cue> list, LongArray longArray) {
        long timecodeUs;
        if (this.formatKeyCount == 0) {
            Log.w(TAG, "Skipping dialogue line before complete format: " + str);
            return;
        }
        String[] strArrSplit = str.substring(10).split(Constants.ACCEPT_TIME_SEPARATOR_SP, this.formatKeyCount);
        if (strArrSplit.length != this.formatKeyCount) {
            Log.w(TAG, "Skipping dialogue line with fewer columns than format: " + str);
            return;
        }
        long timecodeUs2 = parseTimecodeUs(strArrSplit[this.formatStartIndex]);
        if (timecodeUs2 == -9223372036854775807L) {
            Log.w(TAG, "Skipping invalid timing: " + str);
            return;
        }
        String str2 = strArrSplit[this.formatEndIndex];
        if (str2.trim().isEmpty()) {
            timecodeUs = -9223372036854775807L;
        } else {
            timecodeUs = parseTimecodeUs(str2);
            if (timecodeUs == -9223372036854775807L) {
                Log.w(TAG, "Skipping invalid timing: " + str);
                return;
            }
        }
        list.add(new Cue(strArrSplit[this.formatTextIndex].replaceAll("\\{.*?\\}", "").replaceAll("\\\\N", "\n").replaceAll("\\\\n", "\n")));
        longArray.add(timecodeUs2);
        if (timecodeUs != -9223372036854775807L) {
            list.add(null);
            longArray.add(timecodeUs);
        }
    }

    public static long parseTimecodeUs(String str) {
        Matcher matcher = SSA_TIMECODE_PATTERN.matcher(str);
        if (matcher.matches()) {
            return (Long.parseLong(matcher.group(1)) * 60 * 60 * 1000000) + (Long.parseLong(matcher.group(2)) * 60 * 1000000) + (Long.parseLong(matcher.group(3)) * 1000000) + (Long.parseLong(matcher.group(4)) * a.q);
        }
        return -9223372036854775807L;
    }
}
