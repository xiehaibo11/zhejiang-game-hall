.class Lcom/sigmob/sdk/nativead/t$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/t;->a(Ljava/util/List;ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/util/List;

.field final synthetic d:Lcom/sigmob/sdk/nativead/t;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/t;ILjava/lang/String;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/t$2;->d:Lcom/sigmob/sdk/nativead/t;

    iput p2, p0, Lcom/sigmob/sdk/nativead/t$2;->a:I

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/t$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/sigmob/sdk/nativead/t$2;->c:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t$2;->d:Lcom/sigmob/sdk/nativead/t;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/t;->c(Lcom/sigmob/sdk/nativead/t;)Lcom/sigmob/sdk/nativead/v;

    move-result-object v0

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/nativead/t$2;->a:I

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t$2;->d:Lcom/sigmob/sdk/nativead/t;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/t;->c(Lcom/sigmob/sdk/nativead/t;)Lcom/sigmob/sdk/nativead/v;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/nativead/t$2;->a:I

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/t$2;->b:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/nativead/v;->onNativeAdLoadFail(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/t$2;->d:Lcom/sigmob/sdk/nativead/t;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/t;->c(Lcom/sigmob/sdk/nativead/t;)Lcom/sigmob/sdk/nativead/v;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/t$2;->c:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/nativead/v;->onNativeAdLoaded(Ljava/util/List;)V

    :cond_1
    :goto_0
    return-void
.end method
