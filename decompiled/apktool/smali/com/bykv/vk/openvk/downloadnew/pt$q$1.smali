.class Lcom/bykv/vk/openvk/downloadnew/pt$q$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/downloadnew/core/ITTPermissionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt$q;->rg(Landroid/app/Activity;[Ljava/lang/String;Lcom/ss/android/download/api/config/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/downloadnew/pt$q;

.field final synthetic rg:Lcom/ss/android/download/api/config/n;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/downloadnew/pt$q;Lcom/ss/android/download/api/config/n;)V
    .locals 0

    .line 407
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;->df:Lcom/bykv/vk/openvk/downloadnew/pt$q;

    iput-object p2, p0, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;->rg:Lcom/ss/android/download/api/config/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDenied(Ljava/lang/String;)V
    .locals 1

    .line 417
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;->rg:Lcom/ss/android/download/api/config/n;

    if-eqz v0, :cond_0

    .line 418
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/n;->rg(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onGranted()V
    .locals 1

    .line 410
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;->rg:Lcom/ss/android/download/api/config/n;

    if-eqz v0, :cond_0

    .line 411
    invoke-interface {v0}, Lcom/ss/android/download/api/config/n;->rg()V

    :cond_0
    return-void
.end method
