.class final Lcom/kwad/sdk/api/loader/u$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/loader/v;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/api/loader/u$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ajq:Lcom/kwad/sdk/api/loader/u$1;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/loader/u$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/u$1$1;->ajq:Lcom/kwad/sdk/api/loader/u$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/u$1$1;->ajq:Lcom/kwad/sdk/api/loader/u$1;

    iget-object v0, v0, Lcom/kwad/sdk/api/loader/u$1;->jz:Landroid/content/Context;

    return-object v0
.end method

.method public final yA()Lcom/kwad/sdk/api/core/IKsAdSDK;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/u$1$1;->ajq:Lcom/kwad/sdk/api/loader/u$1;

    iget-object v0, v0, Lcom/kwad/sdk/api/loader/u$1;->ajp:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-object v0
.end method

.method public final yz()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/api/loader/u;->access$000()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
