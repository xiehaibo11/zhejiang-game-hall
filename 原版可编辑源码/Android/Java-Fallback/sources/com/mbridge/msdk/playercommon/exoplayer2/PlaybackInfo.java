package com.mbridge.msdk.playercommon.exoplayer2;

final class PlaybackInfo {
    public volatile long bufferedPositionUs;
    public final long contentPositionUs;
    public final boolean isLoading;
    public final java.lang.Object manifest;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId periodId;
    public final int playbackState;
    public volatile long positionUs;
    public final long startPositionUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray trackGroups;
    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult trackSelectorResult;

    public PlaybackInfo(com.mbridge.msdk.playercommon.exoplayer2.Timeline r13, long r14, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r16, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r17) {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r0 = 0
            r3.<init>(r0)
            r2 = 0
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 1
            r9 = 0
            r0 = r12
            r1 = r13
            r4 = r14
            r10 = r16
            r11 = r17
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            return
    }

    public PlaybackInfo(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4, long r6, int r8, boolean r9, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r10, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r11) {
            r0 = this;
            r0.<init>()
            r0.timeline = r1
            r0.manifest = r2
            r0.periodId = r3
            r0.startPositionUs = r4
            r0.contentPositionUs = r6
            r0.positionUs = r4
            r0.bufferedPositionUs = r4
            r0.playbackState = r8
            r0.isLoading = r9
            r0.trackGroups = r10
            r0.trackSelectorResult = r11
            return
    }

    private static void copyMutablePositions(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2, com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3) {
            long r0 = r2.positionUs
            r3.positionUs = r0
            long r0 = r2.bufferedPositionUs
            r3.bufferedPositionUs = r0
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo copyWithIsLoading(boolean r14) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r13.timeline
            java.lang.Object r2 = r13.manifest
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r13.periodId
            long r4 = r13.startPositionUs
            long r6 = r13.contentPositionUs
            int r8 = r13.playbackState
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r10 = r13.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r11 = r13.trackSelectorResult
            r0 = r12
            r9 = r14
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            copyMutablePositions(r13, r12)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo copyWithPeriodIndex(int r14) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r13.timeline
            java.lang.Object r2 = r13.manifest
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r13.periodId
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r0.copyWithPeriodIndex(r14)
            long r4 = r13.startPositionUs
            long r6 = r13.contentPositionUs
            int r8 = r13.playbackState
            boolean r9 = r13.isLoading
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r10 = r13.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r11 = r13.trackSelectorResult
            r0 = r12
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            copyMutablePositions(r13, r12)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo copyWithPlaybackState(int r14) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r13.timeline
            java.lang.Object r2 = r13.manifest
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r13.periodId
            long r4 = r13.startPositionUs
            long r6 = r13.contentPositionUs
            boolean r9 = r13.isLoading
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r10 = r13.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r11 = r13.trackSelectorResult
            r0 = r12
            r8 = r14
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            copyMutablePositions(r13, r12)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo copyWithTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r14, java.lang.Object r15) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r13.periodId
            long r4 = r13.startPositionUs
            long r6 = r13.contentPositionUs
            int r8 = r13.playbackState
            boolean r9 = r13.isLoading
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r10 = r13.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r11 = r13.trackSelectorResult
            r0 = r12
            r1 = r14
            r2 = r15
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            copyMutablePositions(r13, r12)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo copyWithTrackInfo(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r14, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r15) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r13.timeline
            java.lang.Object r2 = r13.manifest
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r13.periodId
            long r4 = r13.startPositionUs
            long r6 = r13.contentPositionUs
            int r8 = r13.playbackState
            boolean r9 = r13.isLoading
            r0 = r12
            r10 = r14
            r11 = r15
            r0.<init>(r1, r2, r3, r4, r6, r8, r9, r10, r11)
            copyMutablePositions(r13, r12)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo fromNewPosition(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r15, long r16, long r18) {
            r14 = this;
            r0 = r14
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r13 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r0.timeline
            java.lang.Object r3 = r0.manifest
            boolean r1 = r15.isAd()
            if (r1 == 0) goto L10
            r7 = r18
            goto L16
        L10:
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = r4
        L16:
            int r9 = r0.playbackState
            boolean r10 = r0.isLoading
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r11 = r0.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r12 = r0.trackSelectorResult
            r1 = r13
            r4 = r15
            r5 = r16
            r1.<init>(r2, r3, r4, r5, r7, r9, r10, r11, r12)
            return r13
    }
}
