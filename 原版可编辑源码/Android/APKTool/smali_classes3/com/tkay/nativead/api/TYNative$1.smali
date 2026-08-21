.class Lcom/tkay/nativead/api/TYNative$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/nativead/api/TYNative;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/TYNative;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/TYNative;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative$1;->this$0:Lcom/tkay/nativead/api/TYNative;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 88
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/TYNative$1$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/TYNative$1$2;-><init>(Lcom/tkay/nativead/api/TYNative$1;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onAdLoaded()V
    .locals 2

    .line 76
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/TYNative$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/nativead/api/TYNative$1$1;-><init>(Lcom/tkay/nativead/api/TYNative$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
