package com.tencent.mm.opensdk.modelmsg;

public class WXMusicObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int LENGTH_LIMIT = 10240;
    private static final int LYRIC_LENGTH_LIMIT = 32768;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXMusicObject";
    public java.lang.String musicDataUrl;
    public java.lang.String musicLowBandDataUrl;
    public java.lang.String musicLowBandUrl;
    public java.lang.String musicUrl;
    public java.lang.String songAlbumUrl;
    public java.lang.String songLyric;

    public WXMusicObject() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean checkArgs() {
            r4 = this;
            java.lang.String r0 = r4.musicUrl
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXMusicObject"
            if (r0 == 0) goto Ld
            int r0 = r0.length()
            if (r0 != 0) goto L18
        Ld:
            java.lang.String r0 = r4.musicLowBandUrl
            if (r0 == 0) goto L56
            int r0 = r0.length()
            if (r0 != 0) goto L18
            goto L56
        L18:
            java.lang.String r0 = r4.musicUrl
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 == 0) goto L2a
            int r0 = r0.length()
            if (r0 <= r3) goto L2a
            java.lang.String r0 = "checkArgs fail, musicUrl is too long"
        L26:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L2a:
            java.lang.String r0 = r4.musicLowBandUrl
            if (r0 == 0) goto L37
            int r0 = r0.length()
            if (r0 <= r3) goto L37
            java.lang.String r0 = "checkArgs fail, musicLowBandUrl is too long"
            goto L26
        L37:
            java.lang.String r0 = r4.songAlbumUrl
            if (r0 == 0) goto L44
            int r0 = r0.length()
            if (r0 <= r3) goto L44
            java.lang.String r0 = "checkArgs fail, songAlbumUrl is too long"
            goto L26
        L44:
            java.lang.String r0 = r4.songLyric
            if (r0 == 0) goto L54
            int r0 = r0.length()
            r3 = 32768(0x8000, float:4.5918E-41)
            if (r0 <= r3) goto L54
            java.lang.String r0 = "checkArgs fail, songLyric is too long"
            goto L26
        L54:
            r0 = 1
            return r0
        L56:
            java.lang.String r0 = "both arguments are null"
            goto L26
    }

    @Override
    public void serialize(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = r2.musicUrl
            java.lang.String r1 = "_wxmusicobject_musicUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.musicLowBandUrl
            java.lang.String r1 = "_wxmusicobject_musicLowBandUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.musicDataUrl
            java.lang.String r1 = "_wxmusicobject_musicDataUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.musicLowBandDataUrl
            java.lang.String r1 = "_wxmusicobject_musicLowBandDataUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.songAlbumUrl
            java.lang.String r1 = "_wxmusicobject_musicAlbumUrl"
            r3.putString(r1, r0)
            java.lang.String r0 = r2.songLyric
            java.lang.String r1 = "_wxmusicobject_musicLyric"
            r3.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r0 = "_wxmusicobject_musicUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.musicUrl = r0
            java.lang.String r0 = "_wxmusicobject_musicLowBandUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.musicLowBandUrl = r0
            java.lang.String r0 = "_wxmusicobject_musicDataUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.musicDataUrl = r0
            java.lang.String r0 = "_wxmusicobject_musicLowBandDataUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.musicLowBandDataUrl = r0
            java.lang.String r0 = "_wxmusicobject_musicAlbumUrl"
            java.lang.String r0 = r2.getString(r0)
            r1.songAlbumUrl = r0
            java.lang.String r0 = "_wxmusicobject_musicLyric"
            java.lang.String r2 = r2.getString(r0)
            r1.songLyric = r2
            return
    }
}
