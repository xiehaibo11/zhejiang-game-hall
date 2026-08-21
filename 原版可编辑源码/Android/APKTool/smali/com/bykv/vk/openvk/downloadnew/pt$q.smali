.class Lcom/bykv/vk/openvk/downloadnew/pt$q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/rz;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "q"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 400
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Landroid/app/Activity;I[Ljava/lang/String;[I)V
    .locals 0

    return-void
.end method

.method public rg(Landroid/app/Activity;[Ljava/lang/String;Lcom/ss/android/download/api/config/n;)V
    .locals 2

    .line 406
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 407
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;

    invoke-direct {v1, p0, p3}, Lcom/bykv/vk/openvk/downloadnew/pt$q$1;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$q;Lcom/ss/android/download/api/config/n;)V

    invoke-interface {v0, p1, p2, v1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->requestPermission(Landroid/app/Activity;[Ljava/lang/String;Lcom/bykv/vk/openvk/downloadnew/core/ITTPermissionCallback;)V

    :cond_0
    return-void
.end method

.method public rg(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 1

    .line 428
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 429
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->hasPermission(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
