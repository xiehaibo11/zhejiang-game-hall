.class final Lcom/kwad/components/ad/splashscreen/e/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/e/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic EH:Lcom/kwad/components/ad/splashscreen/e/a;

.field final synthetic EI:Lcom/kwad/components/core/video/DetailVideoView;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/e/a;Lcom/kwad/components/core/video/DetailVideoView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a$2;->EH:Lcom/kwad/components/ad/splashscreen/e/a;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/e/a$2;->EI:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a$2;->EI:Lcom/kwad/components/core/video/DetailVideoView;

    const/16 v0, 0x32

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/bm;->a(Landroid/view/View;IZ)Z

    move-result p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, " onPrepared"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplashPlayModule"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a$2;->EH:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/e/a;->b(Lcom/kwad/components/ad/splashscreen/e/a;)Lcom/kwad/components/core/video/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/video/b;->start()V

    :cond_0
    return-void
.end method
