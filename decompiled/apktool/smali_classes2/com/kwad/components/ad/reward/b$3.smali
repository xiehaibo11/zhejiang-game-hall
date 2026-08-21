.class final Lcom/kwad/components/ad/reward/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/core/playable/PlayableSource;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic op:Lcom/kwad/components/core/playable/PlayableSource;

.field final synthetic or:Lcom/kwad/components/ad/reward/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/b$3;->or:Lcom/kwad/components/ad/reward/b;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/b$3;->op:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b$3;->or:Lcom/kwad/components/ad/reward/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/b$3;->op:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/b;Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void
.end method
