.class final Lcom/kwad/sdk/core/f/a$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/f/a;->initAsync(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/f/a$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/f/a$1;->jz:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/f/a;->bc(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/oaid/OADIDSDKHelper;->isSupport()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/f/a$1;->jz:Landroid/content/Context;

    new-instance v1, Lcom/kwad/sdk/core/f/a$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/f/a$1$1;-><init>(Lcom/kwad/sdk/core/f/a$1;)V

    invoke-static {v0, v1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper;->getOAId(Landroid/content/Context;Lcom/kwad/sdk/oaid/OADIDSDKHelper$a;)V

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->isSupport()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/f/a$1;->jz:Landroid/content/Context;

    new-instance v1, Lcom/kwad/sdk/core/f/a$1$2;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/f/a$1$2;-><init>(Lcom/kwad/sdk/core/f/a$1;)V

    invoke-static {v0, v1}, Lcom/kwad/sdk/oaid/OADIDSDKHelper25;->getOAId(Landroid/content/Context;Lcom/kwad/sdk/oaid/OADIDSDKHelper25$a;)V

    :cond_1
    return-void
.end method
