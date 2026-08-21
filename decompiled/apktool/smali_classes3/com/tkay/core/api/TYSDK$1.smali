.class final Lcom/tkay/core/api/TYSDK$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/api/TYSDK;->init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYNetworkConfig;Lcom/tkay/core/api/TYSDKInitListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 95
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 98
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/u;->b()V

    return-void
.end method
