.class final Lcom/kwad/components/ad/reward/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/c;->notifyRewardVerify()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ou:Lcom/kwad/components/ad/reward/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/c$1;->ou:Lcom/kwad/components/ad/reward/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/c$1;->ou:Lcom/kwad/components/ad/reward/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/c;->notifyRewardVerify()V

    return-void
.end method
