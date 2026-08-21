.class Lcom/czhj/devicehelper/DeviceHelper$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/DeviceHelper;->getOAID(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
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

    iput-object p1, p0, Lcom/czhj/devicehelper/DeviceHelper$2;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/czhj/devicehelper/DeviceHelper$2;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    const-string v0, "private  getOAID"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/czhj/devicehelper/DeviceHelper$2;->a:Landroid/content/Context;

    new-instance v1, Lcom/czhj/devicehelper/DeviceHelper$2$1;

    invoke-direct {v1, p0}, Lcom/czhj/devicehelper/DeviceHelper$2$1;-><init>(Lcom/czhj/devicehelper/DeviceHelper$2;)V

    invoke-static {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    return-void
.end method
