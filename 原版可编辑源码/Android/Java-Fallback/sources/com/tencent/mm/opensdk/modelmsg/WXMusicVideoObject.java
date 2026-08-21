package com.tencent.mm.opensdk.modelmsg;

public class WXMusicVideoObject implements com.tencent.mm.opensdk.modelmsg.WXMediaMessage.IMediaObject {
    private static final int HD_ALBUM_FILE_LENGTH = 10485760;
    private static final int LYRIC_LENGTH_LIMIT = 32768;
    private static final int STRING_LIMIT = 1024;
    private static final java.lang.String TAG = "MicroMsg.SDK.WXMusicVideoObject";
    private static final int URL_LENGTH_LIMIT = 10240;
    public java.lang.String albumName;
    public int duration;
    public java.lang.String hdAlbumThumbFilePath;
    public java.lang.String identification;
    public long issueDate;
    public java.lang.String musicDataUrl;
    public java.lang.String musicGenre;
    public java.lang.String musicOperationUrl;
    public java.lang.String musicUrl;
    public java.lang.String singerName;
    public java.lang.String songLyric;

    public WXMusicVideoObject() {
            r0 = this;
            r0.<init>()
            return
    }

    private int getFileSize(java.lang.String r1) {
            r0 = this;
            int r1 = com.tencent.mm.opensdk.utils.b.a(r1)
            return r1
    }

    @Override
    public boolean checkArgs() {
            r6 = this;
            java.lang.String r0 = r6.musicUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            r1 = 0
            java.lang.String r2 = "MicroMsg.SDK.WXMusicVideoObject"
            if (r0 != 0) goto Lbf
            java.lang.String r0 = r6.musicUrl
            int r0 = r0.length()
            r3 = 10240(0x2800, float:1.4349E-41)
            if (r0 <= r3) goto L17
            goto Lbf
        L17:
            java.lang.String r0 = r6.musicDataUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto Lbc
            java.lang.String r0 = r6.musicDataUrl
            int r0 = r0.length()
            if (r0 <= r3) goto L29
            goto Lbc
        L29:
            java.lang.String r0 = r6.singerName
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto Lb9
            java.lang.String r0 = r6.singerName
            int r0 = r0.length()
            r4 = 1024(0x400, float:1.435E-42)
            if (r0 <= r4) goto L3d
            goto Lb9
        L3d:
            java.lang.String r0 = r6.songLyric
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto L56
            java.lang.String r0 = r6.songLyric
            int r0 = r0.length()
            r5 = 32768(0x8000, float:4.5918E-41)
            if (r0 <= r5) goto L56
            java.lang.String r0 = "songLyric.length exceeds the limit"
        L52:
            com.tencent.mm.opensdk.utils.Log.e(r2, r0)
            return r1
        L56:
            java.lang.String r0 = r6.hdAlbumThumbFilePath
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto L69
            java.lang.String r0 = r6.hdAlbumThumbFilePath
            int r0 = r0.length()
            if (r0 <= r4) goto L69
            java.lang.String r0 = "hdAlbumThumbFilePath.length exceeds the limit"
            goto L52
        L69:
            java.lang.String r0 = r6.hdAlbumThumbFilePath
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto L7e
            java.lang.String r0 = r6.hdAlbumThumbFilePath
            int r0 = r6.getFileSize(r0)
            r5 = 10485760(0xa00000, float:1.469368E-38)
            if (r0 <= r5) goto L7e
            java.lang.String r0 = "hdAlbumThumbFilePath file length exceeds the limit"
            goto L52
        L7e:
            java.lang.String r0 = r6.musicGenre
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto L91
            java.lang.String r0 = r6.musicGenre
            int r0 = r0.length()
            if (r0 <= r4) goto L91
            java.lang.String r0 = "musicGenre.length exceeds the limit"
            goto L52
        L91:
            java.lang.String r0 = r6.identification
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto La4
            java.lang.String r0 = r6.identification
            int r0 = r0.length()
            if (r0 <= r4) goto La4
            java.lang.String r0 = "identification.length exceeds the limit"
            goto L52
        La4:
            java.lang.String r0 = r6.musicOperationUrl
            boolean r0 = com.tencent.mm.opensdk.utils.b.b(r0)
            if (r0 != 0) goto Lb7
            java.lang.String r0 = r6.musicOperationUrl
            int r0 = r0.length()
            if (r0 <= r3) goto Lb7
            java.lang.String r0 = "musicOperationUrl.length exceeds the limit"
            goto L52
        Lb7:
            r0 = 1
            return r0
        Lb9:
            java.lang.String r0 = "singerName.length exceeds the limit"
            goto L52
        Lbc:
            java.lang.String r0 = "musicDataUrl.length exceeds the limit"
            goto L52
        Lbf:
            java.lang.String r0 = "musicUrl.length exceeds the limit"
            goto L52
    }

    @Override
    public void serialize(android.os.Bundle r4) {
            r3 = this;
            java.lang.String r0 = r3.musicUrl
            java.lang.String r1 = "_wxmusicvideoobject_musicUrl"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.musicDataUrl
            java.lang.String r1 = "_wxmusicvideoobject_musicDataUrl"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.singerName
            java.lang.String r1 = "_wxmusicvideoobject_singerName"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.songLyric
            java.lang.String r1 = "_wxmusicvideoobject_songLyric"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.hdAlbumThumbFilePath
            java.lang.String r1 = "_wxmusicvideoobject_hdAlbumThumbFilePath"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.albumName
            java.lang.String r1 = "_wxmusicvideoobject_albumName"
            r4.putString(r1, r0)
            java.lang.String r0 = r3.musicGenre
            java.lang.String r1 = "_wxmusicvideoobject_musicGenre"
            r4.putString(r1, r0)
            long r0 = r3.issueDate
            java.lang.String r2 = "_wxmusicvideoobject_issueDate"
            r4.putLong(r2, r0)
            java.lang.String r0 = r3.identification
            java.lang.String r1 = "_wxmusicvideoobject_identification"
            r4.putString(r1, r0)
            int r0 = r3.duration
            java.lang.String r1 = "_wxmusicvideoobject_duration"
            r4.putInt(r1, r0)
            java.lang.String r0 = r3.musicOperationUrl
            java.lang.String r1 = "_wxmusicvideoobject_musicOperationUrl"
            r4.putString(r1, r0)
            return
    }

    @Override
    public int type() {
            r1 = this;
            r0 = 76
            return r0
    }

    @Override
    public void unserialize(android.os.Bundle r4) {
            r3 = this;
            java.lang.String r0 = "_wxmusicvideoobject_musicUrl"
            java.lang.String r0 = r4.getString(r0)
            r3.musicUrl = r0
            java.lang.String r0 = "_wxmusicvideoobject_musicDataUrl"
            java.lang.String r0 = r4.getString(r0)
            r3.musicDataUrl = r0
            java.lang.String r0 = "_wxmusicvideoobject_singerName"
            java.lang.String r0 = r4.getString(r0)
            r3.singerName = r0
            java.lang.String r0 = "_wxmusicvideoobject_songLyric"
            java.lang.String r0 = r4.getString(r0)
            r3.songLyric = r0
            java.lang.String r0 = "_wxmusicvideoobject_hdAlbumThumbFilePath"
            java.lang.String r0 = r4.getString(r0)
            r3.hdAlbumThumbFilePath = r0
            java.lang.String r0 = "_wxmusicvideoobject_albumName"
            java.lang.String r0 = r4.getString(r0)
            r3.albumName = r0
            java.lang.String r0 = "_wxmusicvideoobject_musicGenre"
            java.lang.String r0 = r4.getString(r0)
            r3.musicGenre = r0
            java.lang.String r0 = "_wxmusicvideoobject_issueDate"
            r1 = 0
            long r0 = r4.getLong(r0, r1)
            r3.issueDate = r0
            java.lang.String r0 = "_wxmusicvideoobject_identification"
            java.lang.String r0 = r4.getString(r0)
            r3.identification = r0
            java.lang.String r0 = "_wxmusicvideoobject_duration"
            r1 = 0
            int r0 = r4.getInt(r0, r1)
            r3.duration = r0
            java.lang.String r0 = "_wxmusicvideoobject_musicOperationUrl"
            java.lang.String r4 = r4.getString(r0)
            r3.musicOperationUrl = r4
            return
    }
}
