.class Lcom/czhj/devicehelper/DeviceHelper$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/DeviceHelper;->getOAID_API(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/DeviceHelper$1;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/czhj/devicehelper/DeviceHelper$1;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    :try_start_0
    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-direct {v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;-><init>()V

    const-string v1, "private  getOAID_API"

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/DeviceHelper$1;->a:Landroid/content/Context;

    new-instance v2, Lcom/czhj/devicehelper/DeviceHelper$1$1;

    invoke-direct {v2, p0}, Lcom/czhj/devicehelper/DeviceHelper$1$1;-><init>(Lcom/czhj/devicehelper/DeviceHelper$1;)V

    invoke-virtual {v0, v1, v2}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
