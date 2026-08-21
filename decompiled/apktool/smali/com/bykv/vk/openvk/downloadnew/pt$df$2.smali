.class Lcom/bykv/vk/openvk/downloadnew/pt$df$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt$df;->rg(Ljava/lang/String;[BLjava/lang/String;ILcom/ss/android/download/api/config/r;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/downloadnew/pt$df;

.field final synthetic rg:Lcom/ss/android/download/api/config/r;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/downloadnew/pt$df;Lcom/ss/android/download/api/config/r;)V
    .locals 0

    .line 481
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;->df:Lcom/bykv/vk/openvk/downloadnew/pt$df;

    iput-object p2, p0, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;->rg:Lcom/ss/android/download/api/config/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onError(Ljava/lang/Throwable;)V
    .locals 1

    .line 491
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;->rg:Lcom/ss/android/download/api/config/r;

    if-eqz v0, :cond_0

    .line 492
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/r;->rg(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public onResponse(Ljava/lang/String;)V
    .locals 1

    .line 484
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$df$2;->rg:Lcom/ss/android/download/api/config/r;

    if-eqz v0, :cond_0

    .line 485
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/r;->rg(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
