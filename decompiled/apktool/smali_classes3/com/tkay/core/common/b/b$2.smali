.class final Lcom/tkay/core/common/b/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/b;->b(Lcom/tkay/core/common/f/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic b:Lcom/tkay/core/common/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/b;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/core/common/b/b$2;->b:Lcom/tkay/core/common/b/b;

    iput-object p2, p0, Lcom/tkay/core/common/b/b$2;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/tkay/core/common/b/b$2;->b:Lcom/tkay/core/common/b/b;

    invoke-static {v0}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/common/b/b;)Lcom/tkay/core/api/TYAdSourceStatusListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 61
    iget-object v1, p0, Lcom/tkay/core/common/b/b$2;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYAdSourceStatusListener;->onAdSourceBiddingFilled(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
