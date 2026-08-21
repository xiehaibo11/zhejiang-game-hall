.class final Lcom/kwad/components/ad/splashscreen/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c;->a(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/core/h/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic BT:Lcom/kwad/components/ad/splashscreen/h;

.field final synthetic BU:Lcom/kwad/components/ad/splashscreen/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c;Lcom/kwad/components/ad/splashscreen/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BU:Lcom/kwad/components/ad/splashscreen/c;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BT:Lcom/kwad/components/ad/splashscreen/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BT:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BT:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kb()V

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BT:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$1;->BT:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->Kc()V

    :cond_0
    return-void
.end method
