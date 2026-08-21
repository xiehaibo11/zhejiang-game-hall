.class Lcom/sigmob/sdk/splash/i$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i;->b(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/i;

.field private b:Landroid/view/MotionEvent;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$4;->a:Lcom/sigmob/sdk/splash/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 5

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x1

    if-nez p1, :cond_0

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    goto/16 :goto_1

    :cond_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-ne p1, v0, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    if-nez p1, :cond_1

    iput-object p2, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    :cond_1
    const/4 p1, 0x4

    new-array p1, p1, [Ljava/lang/Object;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    invoke-virtual {v2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, p1, v1

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    invoke-virtual {v1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, p1, v0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, p1, v2

    const/4 v1, 0x3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, p1, v1

    const-string v1, "%d,%d,%d,%d"

    invoke-static {v1, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$4;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    instance-of v3, v1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v3, :cond_2

    move-object v3, v1

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v4, "_AUTOCLICK_"

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v4, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v1

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v3, "_DOWNX_"

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    invoke-virtual {v4}, Landroid/view/MotionEvent;->getRawX()F

    move-result v4

    float-to-int v4, v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v1

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v3, "_DOWNY_"

    iget-object v4, p0, Lcom/sigmob/sdk/splash/i$4;->b:Landroid/view/MotionEvent;

    invoke-virtual {v4}, Landroid/view/MotionEvent;->getRawY()F

    move-result v4

    float-to-int v4, v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v1

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v3, "_UPX_"

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v4

    float-to-int v4, v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "_UPY_"

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result p2

    float-to-int p2, p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, v2, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash click macro set "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_2
    :goto_0
    iget-object p2, p0, Lcom/sigmob/sdk/splash/i$4;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {p2, p1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;Ljava/lang/String;)V

    :cond_3
    :goto_1
    return v0
.end method
