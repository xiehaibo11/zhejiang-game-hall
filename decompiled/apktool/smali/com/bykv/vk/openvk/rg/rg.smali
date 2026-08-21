.class Lcom/bykv/vk/openvk/rg/rg;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/rg/rg$rg;
    }
.end annotation


# static fields
.field private static volatile rg:Z


# instance fields
.field private df:I

.field private q:Lcom/bykv/vk/openvk/rg/rg$rg;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>()V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 24
    iput v0, p0, Lcom/bykv/vk/openvk/rg/rg;->df:I

    return-void
.end method


# virtual methods
.method public onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivityPaused(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivityResumed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityStarted(Landroid/app/Activity;)V
    .locals 0

    .line 42
    iget p1, p0, Lcom/bykv/vk/openvk/rg/rg;->df:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/bykv/vk/openvk/rg/rg;->df:I

    const/4 p1, 0x0

    .line 43
    sput-boolean p1, Lcom/bykv/vk/openvk/rg/rg;->rg:Z

    .line 45
    iget-object p1, p0, Lcom/bykv/vk/openvk/rg/rg;->q:Lcom/bykv/vk/openvk/rg/rg$rg;

    if-eqz p1, :cond_0

    .line 46
    invoke-interface {p1}, Lcom/bykv/vk/openvk/rg/rg$rg;->df()V

    :cond_0
    return-void
.end method

.method public onActivityStopped(Landroid/app/Activity;)V
    .locals 1

    .line 62
    iget p1, p0, Lcom/bykv/vk/openvk/rg/rg;->df:I

    const/4 v0, 0x1

    sub-int/2addr p1, v0

    iput p1, p0, Lcom/bykv/vk/openvk/rg/rg;->df:I

    if-nez p1, :cond_0

    .line 65
    sput-boolean v0, Lcom/bykv/vk/openvk/rg/rg;->rg:Z

    .line 67
    iget-object p1, p0, Lcom/bykv/vk/openvk/rg/rg;->q:Lcom/bykv/vk/openvk/rg/rg$rg;

    if-eqz p1, :cond_0

    .line 68
    invoke-interface {p1}, Lcom/bykv/vk/openvk/rg/rg$rg;->rg()V

    :cond_0
    return-void
.end method

.method public rg()Ljava/lang/Boolean;
    .locals 1

    .line 27
    sget-boolean v0, Lcom/bykv/vk/openvk/rg/rg;->rg:Z

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method public rg(Lcom/bykv/vk/openvk/rg/rg$rg;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/bykv/vk/openvk/rg/rg;->q:Lcom/bykv/vk/openvk/rg/rg$rg;

    return-void
.end method
