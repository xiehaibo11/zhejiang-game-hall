.class final Lcom/tkay/nativead/api/TYNative$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/TYNative$1;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/nativead/api/TYNative$1;

.field final synthetic val$error:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/TYNative$1;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative$1$2;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    iput-object p2, p0, Lcom/tkay/nativead/api/TYNative$1$2;->val$error:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 91
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative$1$2;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative$1;->this$0:Lcom/tkay/nativead/api/TYNative;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    if-eqz v0, :cond_0

    .line 92
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative$1$2;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative$1;->this$0:Lcom/tkay/nativead/api/TYNative;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    iget-object v1, p0, Lcom/tkay/nativead/api/TYNative$1$2;->val$error:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/nativead/api/TYNativeNetworkListener;->onNativeAdLoadFail(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
