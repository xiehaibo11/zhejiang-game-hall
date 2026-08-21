.class final Lcom/kwad/components/core/offline/init/c/d$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;)Lcom/kwad/sdk/core/video/a/c$g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

.field final synthetic Mn:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;Lcom/kwad/components/offline/api/core/video/IMediaPlayer;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/d$10;->Mn:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/c/d$10;->Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/media/TimedText;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/d$10;->Mn:Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;

    iget-object v1, p0, Lcom/kwad/components/core/offline/init/c/d$10;->Me:Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    invoke-interface {v0, v1, p1}, Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;->onTimedText(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Landroid/media/TimedText;)V

    return-void
.end method
