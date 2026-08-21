.class final Lcom/kwad/components/core/page/c/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic OI:Lcom/kwad/components/core/page/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/c/a$3;->OI:Lcom/kwad/components/core/page/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/page/c/a$3;->OI:Lcom/kwad/components/core/page/c/a;

    invoke-static {p1}, Lcom/kwad/components/core/page/c/a;->a(Lcom/kwad/components/core/page/c/a;)Lcom/kwad/components/core/video/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/video/b;->start()V

    return-void
.end method
