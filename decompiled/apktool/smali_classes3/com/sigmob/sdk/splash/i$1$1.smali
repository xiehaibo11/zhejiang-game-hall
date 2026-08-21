.class Lcom/sigmob/sdk/splash/i$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i$1;->onSensorChanged(Landroid/hardware/SensorEvent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/i$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i$1;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$1$1;->a:Lcom/sigmob/sdk/splash/i$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$1$1;->a:Lcom/sigmob/sdk/splash/i$1;

    iget-object v0, v0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->b(Lcom/sigmob/sdk/splash/i;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$1$1;->a:Lcom/sigmob/sdk/splash/i$1;

    iget-object v0, v0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v1, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v1, :cond_1

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_AUTOCLICK_"

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$1$1;->a:Lcom/sigmob/sdk/splash/i$1;

    iget-object v0, v0, Lcom/sigmob/sdk/splash/i$1;->a:Lcom/sigmob/sdk/splash/i;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;Ljava/lang/String;)V

    return-void
.end method
