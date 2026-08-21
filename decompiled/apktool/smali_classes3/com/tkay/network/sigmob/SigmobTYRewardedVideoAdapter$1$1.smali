.class final Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    const-string v1, ""

    invoke-static {v0, v1, p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)V

    return-void
.end method
