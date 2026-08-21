.class Lcom/czhj/devicehelper/DeviceHelper$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/DeviceHelper$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/DeviceHelper$1;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/DeviceHelper$1;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/DeviceHelper$1$1;->a:Lcom/czhj/devicehelper/DeviceHelper$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public OnIdsAvalid(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/czhj/devicehelper/DeviceHelper;->a(Z)Z

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/czhj/devicehelper/DeviceHelper;->a(Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/devicehelper/DeviceHelper$1$1;->a:Lcom/czhj/devicehelper/DeviceHelper$1;

    iget-object v0, v0, Lcom/czhj/devicehelper/DeviceHelper$1;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/devicehelper/DeviceHelper$1$1;->a:Lcom/czhj/devicehelper/DeviceHelper$1;

    iget-object v0, v0, Lcom/czhj/devicehelper/DeviceHelper$1;->b:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-static {}, Lcom/czhj/devicehelper/DeviceHelper;->a()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "oaid_src: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "oaid"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    invoke-static {p1}, Lcom/czhj/devicehelper/DeviceHelper;->a(Ljava/lang/Thread;)Ljava/lang/Thread;

    return-void
.end method
