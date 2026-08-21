.class final Lcom/kwad/components/core/offline/init/c/d$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;)Lcom/kwad/sdk/core/video/a/c$c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

.field final synthetic Ml:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;Lcom/kwad/components/offline/api/core/video/IMediaPlayer;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/d$8;->Ml:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/c/d$8;->Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final j(II)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/d$8;->Ml:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;

    iget-object v1, p0, Lcom/kwad/components/core/offline/init/c/d$8;->Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    invoke-interface {v0, v1, p1, p2}, Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;->onError(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;II)Z

    move-result p1

    return p1
.end method
