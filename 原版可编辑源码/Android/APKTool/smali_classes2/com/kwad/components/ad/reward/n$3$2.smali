.class final Lcom/kwad/components/ad/reward/n$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/n$3;->a(Lcom/kwad/components/core/p/d;ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qw:Lcom/kwad/components/ad/reward/n$3;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/n$3;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/n$3$2;->qw:Lcom/kwad/components/ad/reward/n$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$3$2;->qw:Lcom/kwad/components/ad/reward/n$3;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/n$3;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x2

    iput v1, v0, Lcom/kwad/components/ad/reward/j;->pr:I

    return-void
.end method
