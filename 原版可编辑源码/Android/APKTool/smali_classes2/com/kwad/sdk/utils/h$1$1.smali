.class final Lcom/kwad/sdk/utils/h$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/h$1;->onAudioFocusChange(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aIc:I

.field final synthetic aId:Lcom/kwad/sdk/utils/h$1;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/utils/h$1;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/h$1$1;->aId:Lcom/kwad/sdk/utils/h$1;

    iput p2, p0, Lcom/kwad/sdk/utils/h$1$1;->aIc:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/h$1$1;->aIc:I

    if-gez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/utils/h$1$1;->aId:Lcom/kwad/sdk/utils/h$1;

    iget-object v0, v0, Lcom/kwad/sdk/utils/h$1;->aIb:Lcom/kwad/sdk/utils/h;

    invoke-static {v0}, Lcom/kwad/sdk/utils/h;->a(Lcom/kwad/sdk/utils/h;)Lcom/kwad/sdk/utils/h$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/utils/h$a;->onAudioBeOccupied()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/h$1$1;->aId:Lcom/kwad/sdk/utils/h$1;

    iget-object v0, v0, Lcom/kwad/sdk/utils/h$1;->aIb:Lcom/kwad/sdk/utils/h;

    invoke-static {v0}, Lcom/kwad/sdk/utils/h;->a(Lcom/kwad/sdk/utils/h;)Lcom/kwad/sdk/utils/h$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/utils/h$a;->onAudioBeReleased()V

    return-void
.end method
