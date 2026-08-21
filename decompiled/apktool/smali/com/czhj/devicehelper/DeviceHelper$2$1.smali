.class Lcom/czhj/devicehelper/DeviceHelper$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/DeviceHelper$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/DeviceHelper$2;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/DeviceHelper$2;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/DeviceHelper$2$1;->a:Lcom/czhj/devicehelper/DeviceHelper$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public OnIdsAvalid(Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/czhj/devicehelper/DeviceHelper;->b(Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/devicehelper/DeviceHelper$2$1;->a:Lcom/czhj/devicehelper/DeviceHelper$2;

    iget-object v0, v0, Lcom/czhj/devicehelper/DeviceHelper$2;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/devicehelper/DeviceHelper$2$1;->a:Lcom/czhj/devicehelper/DeviceHelper$2;

    iget-object v0, v0, Lcom/czhj/devicehelper/DeviceHelper$2;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-interface {v0, p1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x0

    invoke-static {p1}, Lcom/czhj/devicehelper/DeviceHelper;->b(Z)Z

    invoke-static {}, Lcom/czhj/devicehelper/DeviceHelper;->b()Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    invoke-static {p1}, Lcom/czhj/devicehelper/DeviceHelper;->a(Landroid/os/Handler;)Landroid/os/Handler;

    :cond_1
    return-void
.end method
