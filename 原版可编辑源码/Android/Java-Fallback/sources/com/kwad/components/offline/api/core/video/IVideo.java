package com.kwad.components.offline.api.core.video;

public interface IVideo {
    com.kwad.components.offline.api.core.video.IKsMediaPlayer createMediaPlayer(com.kwad.components.offline.api.core.video.IKsMediaPlayerView r1);

    com.kwad.components.offline.api.core.video.BaseKsMediaPlayerView createMediaPlayerView(android.content.Context r1);
}
