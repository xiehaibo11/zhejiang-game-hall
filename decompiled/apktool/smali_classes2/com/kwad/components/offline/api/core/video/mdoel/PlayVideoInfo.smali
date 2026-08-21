.class public Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;
    }
.end annotation


# instance fields
.field public final isNoCache:Z

.field public final ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

.field public final manifest:Ljava/lang/String;

.field public final videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

.field public final videoUrl:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-direct {v0}, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$000(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->videoUrl:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$100(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->manifest:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$200(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$300(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$300(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    move-result-object v1

    iget-wide v1, v1, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->photoId:J

    iput-wide v1, v0, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->photoId:J

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$300(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    move-result-object v1

    iget-wide v1, v1, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->clickTime:J

    iput-wide v1, v0, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->clickTime:J

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$300(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    move-result-object v1

    iget-wide v1, v1, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->adStyle:J

    iput-wide v1, v0, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->adStyle:J

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->ksplayerLogParams:Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$300(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;

    move-result-object v1

    iget v1, v1, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->contentType:I

    iput v1, v0, Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;->contentType:I

    :cond_0
    invoke-static {p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;->access$400(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;->isNoCache:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$1;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;-><init>(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo$Builder;)V

    return-void
.end method
