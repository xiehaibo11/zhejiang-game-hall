.class final Lcom/kwad/components/ad/draw/c/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/draw/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic cW:Lcom/kwad/components/ad/draw/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/draw/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c/a$1;->cW:Lcom/kwad/components/ad/draw/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a$1;->cW:Lcom/kwad/components/ad/draw/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/ad/draw/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/l;->cC(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a$1;->cW:Lcom/kwad/components/ad/draw/c/a;

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/ad/draw/c/a;J)V

    return-void
.end method
