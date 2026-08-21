.class public Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsVideoPlayConfig;


# static fields
.field private static final serialVersionUID:J = -0x63f93bdac132a415L


# instance fields
.field private showLandscape:Z

.field private showScene:Ljava/lang/String;

.field private skipThirtySecond:Z

.field public videoSoundEnable:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->videoSoundEnable:Z

    return-void
.end method

.method public static register()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/api/KsVideoPlayConfig;

    const-class v1, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->b(Ljava/lang/Class;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public getShowScene()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->showScene:Ljava/lang/String;

    return-object v0
.end method

.method public isShowLandscape()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->showLandscape:Z

    return v0
.end method

.method public isSkipThirtySecond()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->skipThirtySecond:Z

    return v0
.end method

.method public isVideoSoundEnable()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->videoSoundEnable:Z

    return v0
.end method

.method public setShowLandscape(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->showLandscape:Z

    return-void
.end method

.method public setShowScene(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->showScene:Ljava/lang/String;

    return-void
.end method

.method public setSkipThirtySecond(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->skipThirtySecond:Z

    return-void
.end method

.method public setVideoSoundEnable(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/internal/api/VideoPlayConfigImpl;->videoSoundEnable:Z

    return-void
.end method
