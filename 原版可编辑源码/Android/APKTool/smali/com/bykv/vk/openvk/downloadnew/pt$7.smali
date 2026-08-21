.class final Lcom/bykv/vk/openvk/downloadnew/pt$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/rg/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)V
    .locals 0

    .line 763
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pt$7;->rg:Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 766
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$7;->rg:Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;

    if-eqz v0, :cond_0

    .line 767
    invoke-interface {v0}, Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;->onExitInstall()V

    :cond_0
    return-void
.end method
